// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "RdCaptureReader.h"

namespace RDE
{
	
	//
	// Helper Vulkan listener
	//

	class RdCaptureReader::HelperVulkanListener final : public IVulkanListener
	{
	public:
		struct DSLayoutInfo
		{
			Array<VkDescriptorSetLayoutBinding>		bindings;
		};
		using DSLayoutInfoMap_t		= HashMap< VkDescriptorSetLayout, DSLayoutInfo >;
		using DescrSetInfoMap_t		= HashMap< VkDescriptorSet, DSLayoutInfo* >;


	public:
		DSLayoutInfoMap_t		dsLayoutMap;
		DescrSetInfoMap_t		descSetMap;


	public:
		void CreateDescriptorSetLayout (uint, uint64_t, uint64_t, VkDevice, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks *, VkDescriptorSetLayout * pSetLayout)
		{
			auto&	ds_layout = dsLayoutMap[*pSetLayout];
			ds_layout.bindings.assign( pCreateInfo->pBindings, pCreateInfo->pBindings + pCreateInfo->bindingCount );

			std::sort( ds_layout.bindings.begin(), ds_layout.bindings.end(),
					   [](auto& lhs, auto& rhs) { return lhs.binding < rhs.binding; });

			/*for (auto& ds : ds_layout.bindings) {
				CHECK( ds.pImmutableSamplers == null );		// TODO
			}*/
		}

		void AllocateDescriptorSets (uint, uint64_t, uint64_t, VkDevice, const VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets)
		{
			for (uint i = 0; i < pAllocateInfo->descriptorSetCount; ++i)
			{
				auto	iter = dsLayoutMap.find( pAllocateInfo->pSetLayouts[i] );
				CHECK_ERR( iter != dsLayoutMap.end(), void());

				descSetMap[pDescriptorSets[i]] = &iter->second;
			}
		}
	};
//-----------------------------------------------------------------------------



/*
=================================================
	constructor
=================================================
*/
	RdCaptureReader::RdCaptureReader () :
		_helper{ MakeShared<HelperVulkanListener>()}
	{
		AddListener( _helper );
	}
	
/*
=================================================
	_InitParser
----
	tested on versions 13, 16
=================================================
*/
	bool  RdCaptureReader::_InitParser (uint version)
	{
		_fileVersion = version;
		FG_LOGD( "RD capture version: "s << ToString( version ));

#		include "Generated/ParseChunkMap.h"
		
		_chunkParser["vkGetSwapchainImagesKHR"] = &RdCaptureReader::_Parse_GetSwapchainImagesKHR;
		_chunkParser["vkSetDebugUtilsObjectNameEXT"] = &RdCaptureReader::_Parse_SetDebugUtilsObjectName;
		_chunkParser["Driver Initialisation Parameters"] = &RdCaptureReader::_Parse_DriverInitialisationParameters;
		_chunkParser["Initial Contents"] = &RdCaptureReader::_Parse_InitialContents;
		_chunkParser["Beginning of Capture"] = &RdCaptureReader::_Parse_BeginningOfCapture;
		_chunkParser["End of Capture"] = &RdCaptureReader::_Parse_EndOfCapture;
		_chunkParser["List of Initial Contents Resources"] = &RdCaptureReader::_Parse_ListOfInitialContentsResources;
		_chunkParser["vkEnumeratePhysicalDevices"] = &RdCaptureReader::_Parse_vkEnumeratePhysicalDevices;
		_chunkParser["Frame Metadata"] = &RdCaptureReader::_Parse_FrameMetadata;
		_chunkParser["vkFlushMappedMemoryRanges"] = &RdCaptureReader::_Parse_FlushMappedMemoryRanges;
		_chunkParser["vkDebugMarkerSetObjectNameEXT"] = &RdCaptureReader::_Parse_DebugMarkerSetObjectNameEXT;
		_chunkParser["vkUpdateDescriptorSetWithTemplate"] = &RdCaptureReader::_Parse_UpdateDescriptorSetWithTemplate;
		
		switch ( version )
		{
			case 13 :
			case 14 :
				break;

			case 16 :
				_chunkParser["Internal: Device Memory References"] = &RdCaptureReader::_Parse_DeviceMemoryRef;
				_chunkParser["Image References"] = &RdCaptureReader::_Parse_ImageReferences;
				break;

			default :
				FG_LOGE( "Untested version"s << ToString(version) << ", some blocks may be ignored or become invalid" );
				break;
		}

		return true;
	}

/*
=================================================
	OpenCapture
=================================================
*/
	bool RdCaptureReader::OpenCapture (const FS::path &filename)
	{
		FG_LOGI( "Openging capture: "s << filename.string() );

		for (auto& listener : _listeners) {
			listener->OnOpenCapture( filename );
		}

		_chunkCounter = 0;

		CHECK_ERR( _ReadContent( FS::path{filename}.replace_extension("zip") ));


		FileRStream  file{ FS::path{filename}.replace_extension("zip.xml") };
		CHECK_ERR( file.IsOpen() );

		String	text;
		CHECK_ERR( file.Read( size_t(file.RemainingSize()), OUT text ));

		using namespace rapidxml;
		xml_document<>	doc;

		doc.parse<0>( text.data() );

		auto*	root = doc.first_node( "rdc" );
		CHECK_ERR( root );

		auto*	chunks = root->first_node( "chunks" );
		CHECK_ERR( chunks );

		if ( auto* ver_attr = chunks->first_attribute( "version" ); ver_attr )
		{
			uint	ver = std::atoi( ver_attr->value() );
			CHECK_ERR( _InitParser( ver ));
		}
		else
		{
			CHECK_ERR( _InitParser( 0 ));
		}

		FG_LOGI( "Capture processing has been started" );

		for (auto* node = chunks->first_node(); node; node = node->next_sibling())
		{
			auto*	name		= node->first_attribute( "name" );
			auto*	thread_id	= node->first_attribute( "threadID" );
			auto*	timestamp	= node->first_attribute( "timestamp" );
			CHECK_ERR( name and thread_id and timestamp );

			auto	iter = _chunkParser.find( name->value() );
			CHECK_ERR( iter != _chunkParser.end() );

			CHECK_ERR( (this->*iter->second)( *node, std::stoull(thread_id->value()), std::stoull(timestamp->value()) ));

			_allocator.Discard();
			++_chunkCounter;
		}

		CHECK( mz_zip_reader_end( &_contentZip ));

		FG_LOGI( "Capture processing has been finished" );
		return true;
	}
	
/*
=================================================
	AddListener
=================================================
*/
	void  RdCaptureReader::AddListener (const ListenerPtr &ptr)
	{
		CHECK_ERR( ptr, void());

		_listeners.insert( ptr );
	}

/*
=================================================
	_ReadContent
=================================================
*/
	bool  RdCaptureReader::_ReadContent (const FS::path &filename)
	{
		memset( &_contentZip, 0, sizeof(_contentZip) );

		CHECK_ERR( mz_zip_reader_init_file( &_contentZip, filename.string().data(), 0 ));

		uint	fcount = mz_zip_reader_get_num_files( &_contentZip );
		char	fname [1024];

		for (uint i = 0; i < fcount; ++i)
		{
			mz_zip_reader_get_filename( &_contentZip, i, OUT fname, uint(CountOf(fname)) );

			if ( fname[0] >= '0' and fname[0] <= '9' )
			{
				_contentMap.insert_or_assign( ContentID(std::atoi( fname )), i );
			}
		}

		return true;
	}

/*
=================================================
	_FindByAttribName
=================================================
*/
	RdCaptureReader::Node_t*  RdCaptureReader::_FindByAttribName (const Node_t &root, StringView name)
	{
		for (auto* node = root.first_node(); node; node = node->next_sibling())
		{
			auto*	attr = node->first_attribute( "name" );
			if ( attr and attr->value() == name )
				return node;
		}
		return null;
	}
	
/*
=================================================
	_GetAttribName
=================================================
*/
	StringView  RdCaptureReader::_GetAttribName (const Node_t &node)
	{
		auto*	attr = node.first_attribute( "name" );
		return attr ? StringView{attr->value()} : Default;
	}
	
/*
=================================================
	_GetAttribTypename
=================================================
*/
	StringView  RdCaptureReader::_GetAttribTypename (const Node_t &node)
	{
		auto*	attr = node.first_attribute( "typename" );
		return attr ? StringView{attr->value()} : Default;
	}

/*
=================================================
	_ParseValue
=================================================
*/
	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT bool &result)
	{
		CHECK_ERR( node );
		result = (StringView{node->value()} == "true");
		return true;
	}


	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT uint8_t &result)
	{
		CHECK_ERR( node );
		result = uint8_t(std::strtoul( node->value(), null, 0 ));
		return true;
	}
	

	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT uint16_t &result)
	{
		CHECK_ERR( node );
		result = uint16_t(std::strtoul( node->value(), null, 0 ));
		return true;
	}


	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT uint32_t &result)
	{
		CHECK_ERR( node );
		result = std::strtoul( node->value(), null, 0 );
		return true;
	}
	

	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT int &result)
	{
		CHECK_ERR( node );
		result = std::strtol( node->value(), null, 0 );
		return true;
	}
	
	
	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT int64_t &result)
	{
		CHECK_ERR( node );
		result = std::strtoll( node->value(), null, 0 );
		return true;
	}


	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT uint64_t &result)
	{
		CHECK_ERR( node );
		result = std::strtoull( node->value(), null, 0 );
		return true;
	}


	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT float &result)
	{
		CHECK_ERR( node );
		result = std::strtof( node->value(), null );
		return true;
	}


	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT double &result)
	{
		CHECK_ERR( node );
		result = std::strtod( node->value(), null );
		return true;
	}
	

	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT char* &result)
	{
		CHECK_ERR( node );
		const size_t	len = strlen(node->value());

		result = _allocator.Alloc<char>( len+1 );
		strcpy_s( result, len+1, node->value() );

		return true;
	}
	

	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT void* &)
	{
		CHECK_ERR( node );
		CHECK( !"TODO" );
		return true;
	}
	

	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT uint32_t* &result)
	{
		CHECK_ERR( node );
		result = _allocator.Alloc<uint32_t>( 1 );
		return _ParseValue( node, OUT *result );
	}


	template <typename T>
	EnableIf<IsEnum<T>, bool>  RdCaptureReader::_ParseValue (const Node_t *node, OUT T &result)
	{
		CHECK_ERR( node );
		result = T(std::strtoull( node->value(), null, 0 ));
		return true;
	}


	template <typename Ret, typename ...Types>
	bool  RdCaptureReader::_ParseValue (const Node_t *node, Ret (VKAPI_PTR *) (Types...))
	{
		CHECK_ERR( node );
		CHECK( !"TODO" );
		return true;
	}
	
/*
=================================================
	_ParseStruct
=================================================
*/
	bool  RdCaptureReader::_ParseStruct (const Node_t *node, OUT void* result)
	{
		CHECK_ERR( node );

		auto*	typename_attr = node->first_attribute( "typename" );
		CHECK_ERR( typename_attr );

		auto	iter = _structParser.find( typename_attr->value() );
		CHECK_ERR( iter != _structParser.end() );

		CHECK_ERR( iter->second.first( *node, OUT result ));
		return true;
	}


	bool  RdCaptureReader::_ParseStruct (const Node_t *node, OUT void** result)
	{
		CHECK_ERR( node );

		if ( StringView{node->name()} == "null" )
		{
			*result = null;
			return true;
		}

		auto*	typename_attr = node->first_attribute( "typename" );
		CHECK_ERR( typename_attr );

		String	name {typename_attr->value()};

		auto	iter = _structParser.find( name );
		CHECK_ERR( iter != _structParser.end() );

		CHECK_ERR( iter->second.second( *node, OUT result ));
		return true;
	}
	

	template <typename T>
	bool  RdCaptureReader::_ParseStruct (const Node_t *node, OUT T* &result)
	{
		return _ParseStruct( node, OUT BitCast<void **>(&result) );
	}


	template <typename T>
	bool  RdCaptureReader::_ParseStruct (const Node_t *node, OUT T &result)
	{
		return _ParseStruct( node, OUT BitCast<void *>(&result) );
	}
	
	
	template <typename T, size_t I>
	bool  RdCaptureReader::_ParseStruct (const Node_t *root, OUT T (&result)[I])
	{
		CHECK_ERR( root );

		size_t i = 0;
		for (auto* node = root->first_node(); node and i < I; node = node->next_sibling())
		{
			CHECK_ERR( _ParseStruct( node, OUT result[i++] ));
		}

		CHECK_ERR( i == I );
		return true;
	}
	
/*
=================================================
	_ParseStructArray
=================================================
*/
	template <typename T>
	bool  RdCaptureReader::_ParseStructArray (const Node_t *root, OUT T* &result, INOUT uint &count)
	{
		if ( count == 0 )
		{
			result = null;
			return true;
		}

		CHECK_ERR( root );
		result = _allocator.Alloc<T>( count );
		
		if ( StringView{root->name()} == "struct" )
		{
			count = 1;
			return _ParseStruct( root, OUT *result );
		}

		const uint	max_count = count;
		count = 0;

		for (auto* node = root->first_node(); node and count < max_count; node = node->next_sibling())
		{
			CHECK_ERR( _ParseStruct( node, OUT result[count++] ));
		}

		CHECK_ERR( count == max_count );
		return true;
	}
	
	
	template <typename T, size_t I>
	bool  RdCaptureReader::_ParseStructArray (const Node_t *root, OUT T (&result)[I], INOUT uint &count)
	{
		CHECK_ERR( root );
		CHECK_ERR( count <= I );
		memset( result, 0, sizeof(result) );
		
		const uint	max_count = count;
		count = 0;

		for (auto* node = root->first_node(); node and count < max_count; node = node->next_sibling())
		{
			CHECK_ERR( _ParseStruct( node, OUT result[count++] ));
		}

		CHECK_ERR( count == max_count );
		return true;
	}


	template <typename T>
	bool  RdCaptureReader::_ParseStructArrayOpt (const Node_t *root, OUT T* &result, const uint count)
	{
		if ( count == 0 )
		{
			result = null;
			return true;
		}

		CHECK_ERR( root );
		result = _allocator.Alloc<T>( count );
		
		if ( StringView{root->name()} == "struct" )
		{
			CHECK( count == 1 );
			return _ParseStruct( root, OUT *result );
		}

		uint	i = 0;
		for (auto* node = root->first_node(); node and i < count; node = node->next_sibling())
		{
			CHECK_ERR( _ParseStruct( node, OUT result[i++] ));
		}
		
		if ( i == 0 )
			result = null;

		return true;
	}

/*
=================================================
	_LoadByteBuffer
=================================================
*/
	bool  RdCaptureReader::_LoadByteBuffer (const Node_t &node, OUT void* data, const size_t dataSize)
	{
		uint	f_idx	= std::atoi( node.value() );
		auto	f_iter	= _contentMap.find( ContentID(f_idx) );
		CHECK_ERR( f_iter != _contentMap.end() );

		mz_zip_archive_file_stat	stat = {};
		CHECK_ERR( mz_zip_reader_file_stat( &_contentZip, f_iter->second, OUT &stat ) == MZ_TRUE );

		CHECK_ERR( dataSize == stat.m_uncomp_size );
		CHECK_ERR( mz_zip_reader_extract_to_mem( &_contentZip, f_iter->second, data, dataSize, 0 ) == MZ_TRUE );

		return true;
	}

/*
=================================================
	_ParseArray
=================================================
*/
	template <typename T>
	bool  RdCaptureReader::_ParseArray (const Node_t *root, OUT T* &result, INOUT uint &count)
	{
		if ( count == 0 )
		{
			result = null;
			return true;
		}

		CHECK_ERR( root );
		result = _allocator.Alloc<T>( count );

		if ( StringView{root->name()} == "struct" )
		{
			count = 1;
			return _ParseValue( root, OUT *result );
		}

		const uint	max_count = count;
		count = 0;

		for (auto* node = root->first_node(); node and count < max_count; node = node->next_sibling())
		{
			CHECK_ERR( _ParseValue( node, OUT result[count++] ));
		}

		CHECK_ERR( count == max_count );
		return true;
	}

	template <typename T>
	bool  RdCaptureReader::_ParseArray (const Node_t *root, OUT T* &result, INOUT size_t &size)
	{
		if ( size == 0 )
		{
			result = null;
			return true;
		}

		STATIC_ASSERT( IsPOD<T> or IsSameTypes<T, void> );
		CHECK_ERR( root );
		result = Cast<T>( _allocator.Alloc( BytesU{size}, 16_b ));

		StringView	type_name = _GetAttribTypename( *root );
		CHECK_ERR( type_name == "Byte Buffer" );

		return _LoadByteBuffer( *root, OUT result, size );
	}


	template <typename T>
	bool  RdCaptureReader::_ParseArrayOpt (const Node_t *root, OUT T* &result, const uint count)
	{
		if ( count == 0 )
		{
			result = null;
			return true;
		}

		CHECK_ERR( root );
		result = _allocator.Alloc<T>( count );
		
		if ( StringView{root->name()} == "struct" )
		{
			CHECK( count == 1 );
			return _ParseValue( root, OUT *result );
		}
		
		uint	i = 0;
		for (auto* node = root->first_node(); node and i < count; node = node->next_sibling())
		{
			CHECK_ERR( _ParseValue( node, OUT result[i++] ));
		}
		
		if ( i == 0 )
			result = null;

		return true;
	}
	
	
	bool  RdCaptureReader::_ParseArray (const Node_t *root, OUT void *&result, INOUT uint &size)
	{
		if ( size == 0 )
		{
			result = null;
			return true;
		}

		CHECK_ERR( root );
		result = _allocator.Alloc( BytesU{size}, 16_b );

		StringView	type_name = _GetAttribTypename( *root );
		CHECK_ERR( type_name == "Byte Buffer" );

		return _LoadByteBuffer( *root, OUT result, size );
	}


	template <size_t I>
	bool  RdCaptureReader::_ParseValue (const Node_t *node, OUT char (&result)[I])
	{
		CHECK_ERR( node );
		strcpy_s( OUT result, node->value() );
		return true;
	}


	template <typename T, size_t I>
	bool  RdCaptureReader::_ParseValue (const Node_t *root, OUT T (&result)[I])
	{
		CHECK_ERR( root );

		size_t i = 0;
		for (auto* node = root->first_node(); node and i < I; node = node->next_sibling())
		{
			CHECK_ERR( _ParseValue( node, OUT result[i++] ));
		}

		CHECK_ERR( i == I );
		return true;
	}
	
/*
=================================================
	_ParseResources
=================================================
*/
	template <typename T>
	bool  RdCaptureReader::_ParseResources (const Node_t *root, OUT T* &result, INOUT uint &count)
	{
		if ( count == 0 )
		{
			result = null;
			return true;
		}

		CHECK_ERR( root );
		result = _allocator.Alloc<T>( count );
		
		const uint	max_count = count;
		count = 0;

		for (auto* node = root->first_node(); node and count < max_count; node = node->next_sibling())
		{
			CHECK_ERR( _ParseResource( node, OUT result[count++] ));
		}
		
		//CHECK_ERR( count == max_count );
		return true;
	}
	

	template <typename T>
	bool  RdCaptureReader::_ParseResourcesOpt (const Node_t *root, OUT T* &result, const uint count)
	{
		if ( count == 0 )
		{
			result = null;
			return true;
		}

		CHECK_ERR( root );
		result = _allocator.Alloc<T>( count );
		
		uint	i = 0;
		for (auto* node = root->first_node(); node and i < count; node = node->next_sibling())
		{
			CHECK_ERR( _ParseResource( node, OUT result[i++] ));
		}
		
		if ( i == 0 )
			result = null;

		return true;
	}


	template <typename T, size_t I>
	bool  RdCaptureReader::_ParseResources (const Node_t *root, OUT T (&result)[I], INOUT uint &count)
	{
		CHECK_ERR( root );
		CHECK_ERR( count <= I );
		memset( result, 0, sizeof(result) );
		
		const uint	max_count = count;
		count = 0;

		for (auto* node = root->first_node(); node and count < max_count; node = node->next_sibling())
		{
			CHECK_ERR( _ParseResource( node, OUT result[count++] ));
		}

		CHECK_ERR( count == max_count );
		return true;
	}
	
/*
=================================================
	_Parse_vkEnumeratePhysicalDevices
=================================================
*/
	bool  RdCaptureReader::_Parse_vkEnumeratePhysicalDevices (const Node_t &node, uint64_t threadId, uint64_t timestamp)
	{
		VkInstance	instance = {};
		_ParseResource( _FindByAttribName( node, "instance" ), OUT instance );

		uint32_t	PhysicalDeviceIndex = {};
		_ParseValue( _FindByAttribName( node, "PhysicalDeviceIndex" ), OUT PhysicalDeviceIndex );

		VkPhysicalDevice	PhysicalDevice = {};
		_ParseResource( _FindByAttribName( node, "PhysicalDevice" ), OUT PhysicalDevice );

		uint32_t	memIdxMap[VK_MAX_MEMORY_TYPES] = {};
		_ParseValue( _FindByAttribName( node, "memIdxMap" ), OUT memIdxMap );

		VkPhysicalDeviceProperties	physProps = {};
		_ParseStruct( _FindByAttribName( node, "physProps" ), OUT physProps );

		VkPhysicalDeviceMemoryProperties	memProps = {};
		_ParseStruct( _FindByAttribName( node, "memProps" ), OUT memProps );

		VkPhysicalDeviceFeatures	physFeatures = {};
		_ParseStruct( _FindByAttribName( node, "physFeatures" ), OUT physFeatures );

		uint32_t	queueCount = 0;
		_ParseValue( _FindByAttribName( node, "queueCount" ), OUT queueCount );

		VkQueueFamilyProperties	queueProps[32] = {};
		auto*	queueProps_node = _FindByAttribName( node, "queueProps" );
		CHECK_ERR( queueProps_node );

		size_t	i = 0;
		for (auto* n = queueProps_node->first_node(); n and i < queueCount; n = n->next_sibling()) {
			CHECK_ERR( _ParseStruct( n, OUT queueProps[i++] ));
		}
		CHECK_ERR( i == queueCount );


		for (auto& listener : _listeners)
		{
			listener->EnumeratePhysicalDevices( _chunkCounter, threadId, timestamp, instance, PhysicalDeviceIndex, PhysicalDevice,
											    memIdxMap, physProps, memProps, physFeatures, queueCount, queueProps );
		}
		return true;
	}
	
/*
=================================================
	_Parse_GetSwapchainImagesKHR
=================================================
*/
	bool  RdCaptureReader::_Parse_GetSwapchainImagesKHR (const Node_t &root, uint64_t threadId, uint64_t timestamp)
	{
		Node_t*		device_node	= _FindByAttribName( root, "device" );
		VkDevice	device		= VK_NULL_HANDLE;
		_ParseResource( device_node, OUT device );

		Node_t*			swapchain_node	= _FindByAttribName( root, "Swapchain" );
		VkSwapchainKHR	swapchain		= VK_NULL_HANDLE;
		_ParseResource( swapchain_node, OUT swapchain );

		Node_t*		SwapchainImageIndex_node = _FindByAttribName( root, "SwapchainImageIndex" );
		uint32_t	SwapchainImageIndex		 = ~0u;
		_ParseValue( SwapchainImageIndex_node, OUT SwapchainImageIndex );

		Node_t*		SwapchainImage_node	= _FindByAttribName( root, "SwapchainImage" );
		VkImage		SwapchainImage		= VK_NULL_HANDLE;
		_ParseResource( SwapchainImage_node, OUT SwapchainImage );

		for (auto listener : _listeners) {
			listener->GetSwapchainImagesKHR( _chunkCounter, threadId, timestamp, device, swapchain, &SwapchainImageIndex, &SwapchainImage );
		}
		return true;
	}

/*
=================================================
	_Parse_SetDebugUtilsObjectName
=================================================
*/
	bool  RdCaptureReader::_Parse_SetDebugUtilsObjectName (const Node_t &root, uint64_t threadId, uint64_t timestamp)
	{
		Node_t*		Object_node		= _FindByAttribName( root, "Object" );
		Node_t*		ObjectName_node = _FindByAttribName( root, "ObjectName" );
		CHECK_ERR( Object_node and ObjectName_node );
		
		VkDebugUtilsObjectNameInfoEXT	name_info = {};
		name_info.sType			= VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
		name_info.objectType	= VK_OBJECT_TYPE_UNKNOWN;
		name_info.pObjectName	= ObjectName_node->value();
		
		_ParseValue( Object_node, OUT name_info.objectHandle );

		for (auto listener : _listeners) {
			listener->SetDebugUtilsObjectNameEXT( _chunkCounter, threadId, timestamp, VK_NULL_HANDLE, &name_info );
		}
		return true;
	}

/*
=================================================
	_Parse_DriverInitialisationParameters
=================================================
*/
	bool  RdCaptureReader::_Parse_DriverInitialisationParameters (const Node_t &, uint64_t, uint64_t)
	{
		return true;
	}
	
/*
=================================================
	_Parse_ListOfInitialContentsResources
=================================================
*/
	bool  RdCaptureReader::_Parse_ListOfInitialContentsResources (const Node_t &, uint64_t, uint64_t)
	{
		return true;
	}
	
/*
=================================================
	_AttribToResourceType
=================================================
*/
	EResourceType  RdCaptureReader::_AttribToResourceType (const Node_t *node) const
	{
		CHECK_ERR( node, EResourceType(~0u) );

		auto	iter = _strToResType.find( String{_GetAttribTypename( *node )} );
		CHECK_ERR( iter != _strToResType.end(), EResourceType(~0u) );

		return iter->second;
	}
	
/*
=================================================
	_Parse_ResImage
=================================================
*/
	bool  RdCaptureReader::_Parse_ResImage (const Node_t &root, uint64_t threadId, uint64_t timestamp)
	{
		auto*			id_node				= _FindByAttribName( root, "id" );
		EResourceType	res_type			= _AttribToResourceType( id_node );
		uint64_t		res_id				= ~0ull;
		CHECK_ERR( _ParseValue( id_node, OUT res_id ));
		CHECK_ERR( res_type == VK_OBJECT_TYPE_IMAGE );

		auto*			IsSparse_node		= _FindByAttribName( root, "IsSparse" );
		bool			is_sparse			= false;
		CHECK_ERR( _ParseValue( IsSparse_node, OUT is_sparse ));

		auto*			ContentsSize_node	= _FindByAttribName( root, "ContentsSize" );
		uint64_t		content_size		= 0;
		CHECK_ERR( _ParseValue( ContentsSize_node, OUT content_size ));

		auto*			Contents_node		= _FindByAttribName( root, "Contents" );
		uint			content_id			= ~0u;
		CHECK_ERR( _ParseValue( Contents_node, OUT content_id ));

		for (auto listener : _listeners) {
			listener->InitialImageContent( _chunkCounter, threadId, timestamp, VkImage(res_id),
											is_sparse, BytesU{content_size}, ContentID(content_id) );
		}
		return true;
	}

/*
=================================================
	_ValidateImageLayout
=================================================
*/
	static void _ValidateImageLayout (VkDescriptorType descType, INOUT VkImageLayout &layout)
	{
		BEGIN_ENUM_CHECKS();
		switch ( layout )
		{
			case VK_IMAGE_LAYOUT_UNDEFINED :
			case VK_IMAGE_LAYOUT_GENERAL :
			case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL :
			case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL :
			case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL :
			case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL :
			case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL :
			case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL :
			case VK_IMAGE_LAYOUT_PREINITIALIZED :
			case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL :
			case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL :
			case VK_IMAGE_LAYOUT_PRESENT_SRC_KHR :
			case VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR :
			case VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV :
			case VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT :
			case VK_IMAGE_LAYOUT_RANGE_SIZE :
			case VK_IMAGE_LAYOUT_MAX_ENUM :
				return;
		}
		END_ENUM_CHECKS();

		BEGIN_ENUM_CHECKS();
		switch ( descType )
		{
			case VK_DESCRIPTOR_TYPE_SAMPLER :
				layout = VK_IMAGE_LAYOUT_UNDEFINED;
				break;
			case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER :
			case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE :
			case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE :
			case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT :
				layout = VK_IMAGE_LAYOUT_GENERAL;
				break;

			case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER :
			case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER :
			case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER :
			case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER :
			case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC :
			case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC :
			case VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT :
			case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV :
			case VK_DESCRIPTOR_TYPE_RANGE_SIZE :
			case VK_DESCRIPTOR_TYPE_MAX_ENUM :
				CHECK( !"not supported" );
		}
		END_ENUM_CHECKS();
	}
	
/*
=================================================
	_Parse_ResDescriptorSet
=================================================
*/
	bool  RdCaptureReader::_Parse_ResDescriptorSet (const Node_t &root, uint64_t threadId, uint64_t timestamp)
	{
		auto*			id_node		= _FindByAttribName( root, "id" );
		EResourceType	res_type	= _AttribToResourceType( id_node );
		uint64_t		res_id		= ~0ull;
		CHECK_ERR( _ParseValue( id_node, OUT res_id ));
		CHECK_ERR( res_type == VK_OBJECT_TYPE_DESCRIPTOR_SET );

		ASSERT( res_id != 91090 );
		
		auto	ds_iter = _helper->descSetMap.find( VkDescriptorSet(res_id) );
		CHECK_ERR( ds_iter != _helper->descSetMap.end() );

		auto*	Bindings_node = _FindByAttribName( root, "Bindings" );
		CHECK_ERR( Bindings_node );

		auto&	bindings	= ds_iter->second->bindings;
		auto*	node		= Bindings_node->first_node();

		Array<VkWriteDescriptorSet>	slots;
		slots.reserve( bindings.size() );

		for (size_t i = 0, bind = 0; i < bindings.size(); ++i, ++bind)
		{
			for (; node and bind < bindings[i].binding; ++bind)
			{
				node = node->next_sibling();
			}
			CHECK_ERR( bind == bindings[i].binding );

			VkWriteDescriptorSet	slot = {};
			slot.sType				= VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
			slot.dstSet				= VkDescriptorSet(res_id);
			slot.dstBinding			= bindings[i].binding;
			slot.descriptorType		= bindings[i].descriptorType;
			slot.descriptorCount	= 0;

			BEGIN_ENUM_CHECKS();
			switch ( slot.descriptorType )
			{
				case VK_DESCRIPTOR_TYPE_SAMPLER :
				case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER :
				case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE :
				case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE :
				case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT :
					slot.pImageInfo = _allocator.Alloc<VkDescriptorImageInfo>( bindings[i].descriptorCount );
					break;

				case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER :
				case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER :
					slot.pTexelBufferView = _allocator.Alloc<VkBufferView>( bindings[i].descriptorCount );
					break;

				case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER :
				case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER :
				case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC :
				case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC :
					slot.pBufferInfo = _allocator.Alloc<VkDescriptorBufferInfo>( bindings[i].descriptorCount );
					break;

				case VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT :
				case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV :
				case VK_DESCRIPTOR_TYPE_RANGE_SIZE :
				case VK_DESCRIPTOR_TYPE_MAX_ENUM :
					RETURN_ERR( "not supported" );
			}
			END_ENUM_CHECKS();
			
			bool	is_valid = true;

			for (uint j = 0; j < bindings[i].descriptorCount; ++j)
			{
				if ( not node )
					continue;

				++slot.descriptorCount;

				CHECK_ERR( _GetAttribTypename( *node ) == "DescriptorSetSlot" );

				auto*	bufferInfo_node		 = _FindByAttribName( *node, "bufferInfo" );
				auto*	imageInfo_node		 = _FindByAttribName( *node, "imageInfo" );
				auto*	texelBufferView_node = _FindByAttribName( *node, "texelBufferView" );
				CHECK_ERR( bufferInfo_node and imageInfo_node and texelBufferView_node );

				if ( bufferInfo_node )
				{
					auto*					buffer_node	= _FindByAttribName( *bufferInfo_node, "buffer" );
					auto*					offset_node	= _FindByAttribName( *bufferInfo_node, "offset" );
					auto*					range_node	= _FindByAttribName( *bufferInfo_node, "range" );
					VkDescriptorBufferInfo	buffer_slot	= {};

					CHECK_ERR( _ParseResource( buffer_node, OUT buffer_slot.buffer ));
					CHECK_ERR( _ParseValue( offset_node, OUT buffer_slot.offset ));
					CHECK_ERR( _ParseValue( range_node, OUT buffer_slot.range ));

					if ( buffer_slot.buffer and slot.pBufferInfo )
						const_cast<VkDescriptorBufferInfo*>(slot.pBufferInfo)[j] = buffer_slot;

					if ( not buffer_slot.buffer and slot.pBufferInfo )
						is_valid = false;
				}

				if ( imageInfo_node )
				{
					auto*					sampler_node	= _FindByAttribName( *imageInfo_node, "sampler" );
					auto*					imageView_node	= _FindByAttribName( *imageInfo_node, "imageView" );
					auto*					imageLayout_node= _FindByAttribName( *imageInfo_node, "imageLayout" );
					VkDescriptorImageInfo	image_slot		= {};
				
					CHECK_ERR( _ParseResource( sampler_node, OUT image_slot.sampler ));
					CHECK_ERR( _ParseResource( imageView_node, OUT image_slot.imageView ));
					CHECK_ERR( _ParseValue( imageLayout_node, OUT image_slot.imageLayout ));
					_ValidateImageLayout( slot.descriptorType, INOUT image_slot.imageLayout );

					if ( (image_slot.sampler or image_slot.imageView) and slot.pImageInfo )
						const_cast<VkDescriptorImageInfo*>(slot.pImageInfo)[j] = image_slot;

					if ( not (image_slot.sampler or image_slot.imageView) and slot.pImageInfo )
						is_valid = false;
				}

				if ( texelBufferView_node )
				{
					VkBufferView	bufferView_slot = {};
					CHECK_ERR( _ParseResource( texelBufferView_node, OUT bufferView_slot ));

					if ( bufferView_slot and slot.pTexelBufferView )
						const_cast<VkBufferView*>(slot.pTexelBufferView)[j] = bufferView_slot;

					if ( not bufferView_slot and slot.pTexelBufferView )
						is_valid = false;
				}
					
				node = node->next_sibling();
			}

			if ( not is_valid )
			{
				FG_LOGI( "skip empty descriptor set '"s << ToString(res_id) << "', binding " << ToString(i) );
				continue;
			}

			slots.push_back( slot );
		}

		CHECK( not node );
		
		if ( slots.empty() )
			return true;

		for (auto listener : _listeners) {
			listener->InitialDescriptorSetContent( _chunkCounter, threadId, timestamp, slots );
		}
		return true;
	}
	
/*
=================================================
	_Parse_ResDeviceMemory
=================================================
*/
	bool  RdCaptureReader::_Parse_ResDeviceMemory (const Node_t &root, uint64_t threadId, uint64_t timestamp)
	{
		auto*			id_node				= _FindByAttribName( root, "id" );
		EResourceType	res_type			= _AttribToResourceType( id_node );
		uint64_t		res_id				= ~0ull;
		CHECK_ERR( _ParseValue( id_node, OUT res_id ));
		CHECK_ERR( res_type == VK_OBJECT_TYPE_DEVICE_MEMORY );
		
		auto*			IsSparse_node		= _FindByAttribName( root, "IsSparse" );
		bool			is_sparse			= false;
		CHECK_ERR( _ParseValue( IsSparse_node, OUT is_sparse ));

		auto*			ContentsSize_node	= _FindByAttribName( root, "ContentsSize" );
		uint64_t		content_size		= 0;
		CHECK_ERR( _ParseValue( ContentsSize_node, OUT content_size ));

		auto*			Contents_node		= _FindByAttribName( root, "Contents" );
		uint			content_id			= ~0u;
		CHECK_ERR( _ParseValue( Contents_node, OUT content_id ));

		for (auto listener : _listeners) {
			listener->InitialMemoryContent( _chunkCounter, threadId, timestamp, VkDeviceMemory(res_id),
											is_sparse, BytesU{content_size}, ContentID(content_id) );
		}
		return true;
	}

/*
=================================================
	_Parse_InitialContents
=================================================
*/
	bool  RdCaptureReader::_Parse_InitialContents (const Node_t &root, uint64_t threadId, uint64_t timestamp)
	{
		enum {
			eResDeviceMemory	= 5,
			eResImage			= 8,
			eResDescriptorSet	= 19,
		};

		auto*	type_node	= _FindByAttribName( root, "type" );
		uint	res_type_id	= ~0u;
		CHECK_ERR( _ParseValue( type_node, OUT res_type_id ));

		switch ( res_type_id )
		{
			case eResDeviceMemory :		return _Parse_ResDeviceMemory( root, threadId, timestamp );
			case eResImage :			return _Parse_ResImage( root, threadId, timestamp );
			case eResDescriptorSet :	return _Parse_ResDescriptorSet( root, threadId, timestamp );
		}

		RETURN_ERR( "unknown resource type" );
	}
	
/*
=================================================
	_Parse_FrameMetadata
=================================================
*/
	bool  RdCaptureReader::_Parse_FrameMetadata (const Node_t &, uint64_t, uint64_t)
	{
		return true;
	}
	
/*
=================================================
	_ParseImageState
=================================================
*/
	bool  RdCaptureReader::_ParseImageState (const Node_t *root, OUT ImageLayouts &outState)
	{
		CHECK_ERR( root );

		auto*	name_attr = root->first_attribute( "name" );
		CHECK_ERR( name_attr and name_attr->value() == "ImageState"s );
		
		auto*	queueFamilyIndex_node	= _FindByAttribName( *root, "queueFamilyIndex" );
		CHECK_ERR( _ParseValue( queueFamilyIndex_node, OUT outState.queueFamilyIndex ));

		auto*	subresourceStates_node	= _FindByAttribName( *root, "subresourceStates" );
		CHECK_ERR( subresourceStates_node );

		for (auto* node = subresourceStates_node->first_node(); node; node = node->next_sibling())
		{
			auto*	dstQueueFamilyIndex_node	= _FindByAttribName( *node, "dstQueueFamilyIndex" );
			auto*	subresourceRange_node		= _FindByAttribName( *node, "subresourceRange" );
			auto*	oldLayout_node				= _FindByAttribName( *node, "oldLayout" );
			auto*	newLayout_node				= _FindByAttribName( *node, "newLayout" );
			auto&	region						= outState.subresourceStates.emplace_back();

			CHECK_ERR( _ParseValue( dstQueueFamilyIndex_node, OUT region.dstQueueFamilyIndex ));
			CHECK_ERR( _ParseStruct( subresourceRange_node, OUT region.subresourceRange ));
			CHECK_ERR( _ParseValue( oldLayout_node, OUT region.oldLayout ));
			CHECK_ERR( _ParseValue( newLayout_node, OUT region.newLayout ));
		}
		
		auto*	imageInfo_node	= _FindByAttribName( *root, "imageInfo" );
		
		if ( imageInfo_node )
			root = imageInfo_node;
		
		auto*	layerCount_node		= _FindByAttribName( *root, "layerCount" );
		auto*	levelCount_node		= _FindByAttribName( *root, "levelCount" );
		auto*	sampleCount_node	= _FindByAttribName( *root, "sampleCount" );
		auto*	extent_node			= _FindByAttribName( *root, "extent" );
		auto*	format_node			= _FindByAttribName( *root, "format" );

		CHECK_ERR( _ParseValue( layerCount_node, OUT outState.layerCount ));
		CHECK_ERR( _ParseValue( levelCount_node, OUT outState.levelCount ));
		CHECK_ERR( _ParseValue( sampleCount_node, OUT outState.sampleCount ));
		CHECK_ERR( _ParseValue( format_node, OUT outState.format ));
		CHECK_ERR( _ParseStruct( extent_node, OUT outState.extent ));
		return true;
	}

/*
=================================================
	_Parse_BeginningOfCapture
=================================================
*/
	bool  RdCaptureReader::_Parse_BeginningOfCapture (const Node_t &root, uint64_t threadId, uint64_t timestamp)
	{
		Array<ImageLayouts>	image_layouts;

		for (auto* node = root.first_node(); node; node = node->next_sibling())
		{
			if ( StringView{node->name()} == "ResourceId" )
			{
				uint64_t	res_id = ~0ull;
				CHECK_ERR( _ParseValue( node, OUT res_id ));

				StringView	name = _GetAttribName( *node );
				if ( name == "Image" )
				{
					auto&	state = image_layouts.emplace_back();
					node = node->next_sibling();

					CHECK_ERR( _ParseImageState( node, OUT state ));
					state.imageId = VkResourceID(res_id);
				}
				else
					CHECK( false );
			}
			else
			if ( _GetAttribName( *node ) == "NumImages" )
			{}
			else
				CHECK( false );
		}

		for (auto listener : _listeners) {
			listener->BeginningOfCapture( _chunkCounter, threadId, timestamp, image_layouts );
		}
		return true;
	}
	
/*
=================================================
	_Parse_EndOfCapture
=================================================
*/
	bool  RdCaptureReader::_Parse_EndOfCapture (const Node_t &root, uint64_t threadId, uint64_t timestamp)
	{
		VkResourceID	presented_image = UMax;

		for (auto* node = root.first_node(); node; node = node->next_sibling())
		{
			if ( StringView{node->name()} == "ResourceId" )
			{
				uint64_t	res_id = ~0ull;
				CHECK_ERR( _ParseValue( node, OUT res_id ));

				presented_image = res_id;
			}
		}
		CHECK_ERR( presented_image != UMax );

		for (auto listener : _listeners) {
			listener->EndOfCapture( _chunkCounter, threadId, timestamp, presented_image );
		}
		return true;
	}
	
/*
=================================================
	_Parse_DeviceMemoryRef
=================================================
*/
	bool  RdCaptureReader::_Parse_DeviceMemoryRef (const Node_t &, uint64_t, uint64_t)
	{
		// ignore
		return true;
	}
	
/*
=================================================
	_Parse_ImageReferences
=================================================
*/
	bool  RdCaptureReader::_Parse_ImageReferences (const Node_t &, uint64_t, uint64_t)
	{
		// ignore
		return true;
	}
	
/*
=================================================
	_Parse_FlushMappedMemoryRanges
=================================================
*/
	bool  RdCaptureReader::_Parse_FlushMappedMemoryRanges (const Node_t &root, uint64_t threadId, uint64_t timestamp)
	{
		Node_t*		device_node	= _FindByAttribName( root, "device" );
		VkDevice	device		= {};
		_ParseResource( device_node, OUT device );
		
		Node_t*		memoryRangeCount_node	= _FindByAttribName( root, "memRangeCount" );
		uint32_t	memoryRangeCount		= {};
		_ParseValue( memoryRangeCount_node, OUT memoryRangeCount );

		Node_t*					pMemoryRanges_node	= _FindByAttribName( root, "MemRange" );
		VkMappedMemoryRange *	pMemoryRanges		= {};
		_ParseStructArray( pMemoryRanges_node, OUT const_cast<VkMappedMemoryRange * &>(pMemoryRanges), INOUT memoryRangeCount );

		Node_t*		mappedData_node	= _FindByAttribName( root, "MappedData" );
		uint		content_id		= ~0u;
		CHECK_ERR( _ParseValue( mappedData_node, OUT content_id ));
		
		auto*		byteLength_attr	= mappedData_node->first_attribute( "byteLength" );
		CHECK_ERR( byteLength_attr );
		uint64_t	byteLength		= std::stoull( byteLength_attr->value(), null, 0 );

		for (auto listener : _listeners) {
			listener->FlushMappedMemoryRanges( _chunkCounter, threadId, timestamp, device, memoryRangeCount, pMemoryRanges,
											   BytesU{byteLength}, ContentID(content_id) );
		}
		return true;
	}
	
/*
=================================================
	_Parse_DebugMarkerSetObjectNameEXT
=================================================
*/
	bool  RdCaptureReader::_Parse_DebugMarkerSetObjectNameEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
	{
		Node_t*		Object_node	= _FindByAttribName( root, "Object" );
		Node_t*		ObjectName_node	= _FindByAttribName( root, "ObjectName" );
		
		uint64_t	res_id = ~0ull;
		CHECK_ERR( _ParseValue( Object_node, OUT res_id ));

		for (auto listener : _listeners) {
			listener->DebugMarkerSetObjectNameEXT( _chunkCounter, threadId, timestamp, VkResourceID(res_id), ObjectName_node->value() );
		}
		return true;
	}
	
/*
=================================================
	_Parse_UpdateDescriptorSetWithTemplate
=================================================
*/
	bool  RdCaptureReader::_Parse_UpdateDescriptorSetWithTemplate (const Node_t &root, uint64_t threadId, uint64_t timestamp)
	{
		Node_t*		device_node	= _FindByAttribName( root, "device" );
		VkDevice	device		= {};
		CHECK_ERR( _ParseResource( device_node, OUT device ));
		
		Node_t*			descriptorSet_node	= _FindByAttribName( root, "descriptorSet" );
		VkDescriptorSet	descriptorSet		= {};
		CHECK_ERR( _ParseResource( descriptorSet_node, OUT descriptorSet ));
		
		Node_t*						descriptorUpdateTemplate_node	= _FindByAttribName( root, "descriptorUpdateTemplate" );
		VkDescriptorUpdateTemplate	descriptorUpdateTemplate		= {};
		CHECK_ERR( _ParseResource( descriptorUpdateTemplate_node, OUT descriptorUpdateTemplate ));

		Array<VkWriteDescriptorSet>	write_ds;

		auto*	write_node = _FindByAttribName( root, "Decoded Writes" );
		CHECK_ERR( write_node );

		for (auto* node = write_node->first_node(); node; node = node->next_sibling())
		{
			auto*	type = node->first_attribute( "typename" );
			CHECK_ERR( type and type->value() == "VkWriteDescriptorSet"s );

			VkWriteDescriptorSet&	write = write_ds.emplace_back();

			write			= {};
			write.sType		= VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
			write.dstSet	= descriptorSet;
			
			Node_t*		dstBinding_node = _FindByAttribName( *node, "dstBinding" );
			CHECK_ERR( _ParseValue( dstBinding_node, OUT write.dstBinding ));

			Node_t*		dstArrayElement_node = _FindByAttribName( *node, "dstArrayElement" );
			CHECK_ERR( _ParseValue( dstArrayElement_node, OUT write.dstArrayElement ));

			Node_t*		descriptorCount_node = _FindByAttribName( *node, "descriptorCount" );
			CHECK_ERR( _ParseValue( descriptorCount_node, OUT write.descriptorCount ));

			Node_t*		descriptorType_node = _FindByAttribName( *node, "descriptorType" );
			CHECK_ERR( _ParseValue( descriptorType_node, OUT write.descriptorType ));

			Node_t*		pImageInfo_node			= _FindByAttribName( *node, "pImageInfo" );
			Node_t*		pBufferInfo_node		= _FindByAttribName( *node, "pBufferInfo" );
			Node_t*		pTexelBufferView_node	= _FindByAttribName( *node, "pTexelBufferView" );

			if ( pImageInfo_node and pImageInfo_node->first_node() )
			{
				auto*	dst		 = _allocator.Alloc<VkDescriptorImageInfo>( write.descriptorCount );
				auto*	info	 = pImageInfo_node->first_node();
				uint	i		 = 0;
				write.pImageInfo = dst;

				for (; (i < write.descriptorCount) and info; ++i, info = info->next_sibling())
				{
					Node_t*		sampler_node = _FindByAttribName( *info, "sampler" );
					CHECK_ERR( _ParseResource( sampler_node, OUT dst[i].sampler ));

					Node_t*		imageView_node = _FindByAttribName( *info, "imageView" );
					CHECK_ERR( _ParseResource( imageView_node, OUT dst[i].imageView ));

					Node_t*		imageLayout_node = _FindByAttribName( *info, "imageLayout" );
					CHECK_ERR( _ParseValue( imageLayout_node, OUT dst[i].imageLayout ));
					_ValidateImageLayout( write.descriptorType, INOUT dst[i].imageLayout );
				}
				CHECK_ERR( (i == write.descriptorCount) and (info == null) );
			}

			if ( pBufferInfo_node and pBufferInfo_node->first_node() )
			{
				auto*	dst		  = _allocator.Alloc<VkDescriptorBufferInfo>( write.descriptorCount );
				auto*	info	  = pBufferInfo_node->first_node();
				uint	i		  = 0;
				write.pBufferInfo = dst;

				for (; (i < write.descriptorCount) and info; ++i, info = info->next_sibling())
				{
					Node_t*		buffer_node = _FindByAttribName( *info, "buffer" );
					CHECK_ERR( _ParseResource( buffer_node, OUT dst[i].buffer ));
					CHECK_ERR( dst[i].buffer );

					Node_t*		offset_node = _FindByAttribName( *info, "offset" );
					CHECK_ERR( _ParseValue( offset_node, OUT dst[i].offset ));

					Node_t*		range_node = _FindByAttribName( *info, "range" );
					CHECK_ERR( _ParseValue( range_node, OUT dst[i].range ));
				}
				CHECK_ERR( (i == write.descriptorCount) and (info == null) );
			}

			if ( pTexelBufferView_node and pTexelBufferView_node->first_node() )
			{
				auto*	dst		= _allocator.Alloc<VkBufferView>( write.descriptorCount );
				auto*	info	= pTexelBufferView_node->first_node();
				uint	i		= 0;
				write.pTexelBufferView = dst;

				for (; (i < write.descriptorCount) and info; ++i, info = info->next_sibling())
				{
					CHECK_ERR( info->name() == "ResourceId"s );
					CHECK_ERR( _ParseResource( info, OUT dst[i] ));
					CHECK_ERR( dst[i] );
				}
				CHECK_ERR( (i == write.descriptorCount) and (info == null) );
			}
		}

		CHECK_ERR( write_ds.size() );

		for (auto listener : _listeners) {
			listener->UpdateDescriptorSetWithTemplate( _chunkCounter, threadId, timestamp, device, descriptorSet, descriptorUpdateTemplate, write_ds );
		}
		return true;
	}


#	include "Generated/ParseValueImpl.h"
#	include "Generated/ParseChunkImpl.h"


}	// RDE
