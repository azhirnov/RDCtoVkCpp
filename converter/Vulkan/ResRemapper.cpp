// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#include "Vulkan/ResRemapper.h"
#include "Utils/BasicTypesConverter.h"

namespace RDE
{
	
/*
=================================================
	GetResourceName
=================================================
*/
	static String  GetResourceName (EResourceType type, uint64_t id)
	{
		BEGIN_ENUM_CHECKS();
		switch ( type )
		{
			case VK_OBJECT_TYPE_UNKNOWN :					break;
			case VK_OBJECT_TYPE_INSTANCE :					return "Instance_"s << ToString( id );	// temp
			case VK_OBJECT_TYPE_PHYSICAL_DEVICE :			return "PhysicalDevice_"s << ToString( id );	// temp
			case VK_OBJECT_TYPE_DEVICE :					return "Device_"s << ToString( id );
			case VK_OBJECT_TYPE_QUEUE :						return "Queue_"s << ToString( id );
			case VK_OBJECT_TYPE_SEMAPHORE :					return "Semaphore_"s << ToString( id );
			case VK_OBJECT_TYPE_COMMAND_BUFFER :			return "CommandBuffer_"s << ToString( id );
			case VK_OBJECT_TYPE_FENCE :						return "Fence_"s << ToString( id );
			case VK_OBJECT_TYPE_DEVICE_MEMORY :				return "Memory_"s << ToString( id );
			case VK_OBJECT_TYPE_BUFFER :					return "Buffer_"s << ToString( id );
			case VK_OBJECT_TYPE_IMAGE :						return "Image_"s << ToString( id );
			case VK_OBJECT_TYPE_EVENT :						return "Event_"s << ToString( id );
			case VK_OBJECT_TYPE_QUERY_POOL :				return "QueryPool_"s << ToString( id );
			case VK_OBJECT_TYPE_BUFFER_VIEW :				return "BufferView_"s << ToString( id );
			case VK_OBJECT_TYPE_IMAGE_VIEW :				return "ImageView_"s << ToString( id );
			case VK_OBJECT_TYPE_SHADER_MODULE :				return "Shader_"s << ToString( id );
			case VK_OBJECT_TYPE_PIPELINE_CACHE :			return "PipelineCache_"s << ToString( id );
			case VK_OBJECT_TYPE_PIPELINE_LAYOUT :			return "PipelineLayout_"s << ToString( id );
			case VK_OBJECT_TYPE_RENDER_PASS :				return "RenderPass_"s << ToString( id );
			case VK_OBJECT_TYPE_PIPELINE :					return "Pipeline_"s << ToString( id );
			case VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT :		return "DescriptorSetLayout_"s << ToString( id );
			case VK_OBJECT_TYPE_SAMPLER :					return "Sampler_"s << ToString( id );
			case VK_OBJECT_TYPE_DESCRIPTOR_POOL :			return "DescriptorPool_"s << ToString( id );
			case VK_OBJECT_TYPE_DESCRIPTOR_SET :			return "DescriprtorSet_"s << ToString( id );
			case VK_OBJECT_TYPE_FRAMEBUFFER :				return "Framebuffer_"s << ToString( id );
			case VK_OBJECT_TYPE_COMMAND_POOL :				return "CommandPool_"s << ToString( id );
			case VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION :	return "SamplerYbCr_"s << ToString( id );
			case VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE:	return "DescriptorUpdateTempl_"s << ToString( id );
			case VK_OBJECT_TYPE_SURFACE_KHR :				return "Surface_"s << ToString( id );
			case VK_OBJECT_TYPE_SWAPCHAIN_KHR :				return "Swapchain_"s << ToString( id );
			case VK_OBJECT_TYPE_DISPLAY_KHR :				return "Display_"s << ToString( id );
			case VK_OBJECT_TYPE_DISPLAY_MODE_KHR :			break;
			case VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT :	break;
			case VK_OBJECT_TYPE_OBJECT_TABLE_NVX :			break;
			case VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX:break;
			case VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT :	break;
			case VK_OBJECT_TYPE_VALIDATION_CACHE_EXT :		break;
			case VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV :	break;
			case VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL: break;
			case VK_OBJECT_TYPE_RANGE_SIZE :				break;
			case VK_OBJECT_TYPE_MAX_ENUM :					break;
		}
		END_ENUM_CHECKS();
		RETURN_ERR( "unknown vulkan object type", "<error>" );
	}
	
/*
=================================================
	GetResourceTypeID
=================================================
*/
	static String  GetResourceTypeID (EResourceType type)
	{
		BEGIN_ENUM_CHECKS();
		switch ( type )
		{
			case VK_OBJECT_TYPE_UNKNOWN :					break;
			case VK_OBJECT_TYPE_INSTANCE :					return "InstanceID";
			case VK_OBJECT_TYPE_PHYSICAL_DEVICE :			return "PhysicalDeviceID";
			case VK_OBJECT_TYPE_DEVICE :					return "DeviceID";
			case VK_OBJECT_TYPE_QUEUE :						return "QueueID";
			case VK_OBJECT_TYPE_SEMAPHORE :					return "SemaphoreID";
			case VK_OBJECT_TYPE_COMMAND_BUFFER :			return "CommandBufferID";
			case VK_OBJECT_TYPE_FENCE :						return "FenceID";
			case VK_OBJECT_TYPE_DEVICE_MEMORY :				return "DeviceMemoryID";
			case VK_OBJECT_TYPE_BUFFER :					return "BufferID";
			case VK_OBJECT_TYPE_IMAGE :						return "ImageID";
			case VK_OBJECT_TYPE_EVENT :						return "EventID";
			case VK_OBJECT_TYPE_QUERY_POOL :				return "QueryPoolID";
			case VK_OBJECT_TYPE_BUFFER_VIEW :				return "BufferViewID";
			case VK_OBJECT_TYPE_IMAGE_VIEW :				return "ImageViewID";
			case VK_OBJECT_TYPE_SHADER_MODULE :				return "ShaderModuleID";
			case VK_OBJECT_TYPE_PIPELINE_CACHE :			return "PipelineCacheID";
			case VK_OBJECT_TYPE_PIPELINE_LAYOUT :			return "PipelineLayoutID";
			case VK_OBJECT_TYPE_RENDER_PASS :				return "RenderPassID";
			case VK_OBJECT_TYPE_PIPELINE :					return "PipelineID";
			case VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT :		return "DescriptorSetLayoutID";
			case VK_OBJECT_TYPE_SAMPLER :					return "SamplerID";
			case VK_OBJECT_TYPE_DESCRIPTOR_POOL :			return "DescriptorPoolID";
			case VK_OBJECT_TYPE_DESCRIPTOR_SET :			return "DescriptorSetID";
			case VK_OBJECT_TYPE_FRAMEBUFFER :				return "FramebufferID";
			case VK_OBJECT_TYPE_COMMAND_POOL :				return "CommandPoolID";
			case VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION :	return "SamplerYbCrID";
			case VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE:	return "DescriptorUpdateTemplID";
			case VK_OBJECT_TYPE_SURFACE_KHR :				return "SurfaceID";
			case VK_OBJECT_TYPE_SWAPCHAIN_KHR :				return "SwapchainID";
			case VK_OBJECT_TYPE_DISPLAY_KHR :				return "DisplayID";
			case VK_OBJECT_TYPE_DISPLAY_MODE_KHR :			break;
			case VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT :	break;
			case VK_OBJECT_TYPE_OBJECT_TABLE_NVX :			break;
			case VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX:break;
			case VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT :	break;
			case VK_OBJECT_TYPE_VALIDATION_CACHE_EXT :		break;
			case VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV :	break;
			case VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL: break;
			case VK_OBJECT_TYPE_RANGE_SIZE :				break;
			case VK_OBJECT_TYPE_MAX_ENUM :					break;
		}
		END_ENUM_CHECKS();
		RETURN_ERR( "unknown vulkan object type", "<error>" );
	}
	
/*
=================================================
	ValidateDebugName
=================================================
*/
	ND_ static void  ValidateDebugName (StringView name, OUT String &result, INOUT HashSet<String> &uniqueNames)
	{
		result.reserve( name.size()+5 );

		// validate
		for (auto c : name)
		{
			if ( (c >= '0' and c <= '9') or
				 (c >= 'a' and c <= 'z') or
				 (c >= 'A' and c <= 'Z') or
				 c == '_' )
			{
				result += c;
			}
		}

		if ( result.empty() )
			return;
			//result = "resource";

		// make unique
		const size_t	len = result.length();

		for (uint i = 0; i < 1000; ++i)
		{
			result.resize( len );

			if ( i )
				result << '_' << ToString( i );

			if ( uniqueNames.insert( result ).second )
				break;
		}
	}
//-----------------------------------------------------------------------------

	
/*
=================================================
	constructor
=================================================
*/
	ResRemapper::ResRemapper ()
	{
		// TODO: add restricted names to '_uniqueDbgNames'
	}

/*
=================================================
	CreateResource
=================================================
*/
	bool  ResRemapper::CreateResource (EResourceType type, VkResourceID id, uint chunkIndex)
	{
		auto&	items		= _resources[ type ];
		auto[iter, inserted]= items.map.insert({ id, {} });

		CHECK_ERR( iter->second.empty() or iter->second.back().destroyed );

		auto&	item	= iter->second.emplace_back();

		item.destroyed   = false;
		item.firstChunk  = item.lastChunk = chunkIndex;
		item.uniqueIndex = items.counter++;
		item.name		 = RDE::GetResourceName( type, item.uniqueIndex );

		return true;
	}

/*
=================================================
	DestroyResource
=================================================
*/
	bool  ResRemapper::DestroyResource (EResourceType type, VkResourceID id, uint chunkIndex)
	{
		auto&	items	= _resources[ type ];
		auto	iter	= items.map.find( id );
		CHECK_ERR( iter != items.map.end() );

		CHECK_ERR( iter->second.size() and not iter->second.back().destroyed );

		auto&	item = iter->second.back();

		item.lastChunk = Max( item.lastChunk, chunkIndex );
		item.destroyed = true;
		return true;
	}
	
/*
=================================================
	SetDebugName
=================================================
*/
	bool  ResRemapper::SetDebugName (EResourceType type, VkResourceID id, uint chunkIndex, StringView dbgName)
	{
		auto&	items	= _resources[ type ];
		auto	iter	= items.map.find( id );
		CHECK_ERR( iter != items.map.end() );
		
		CHECK_ERR( iter->second.size() and not iter->second.back().destroyed );

		auto&	item = iter->second.back();
		
		item.lastChunk = Max( item.lastChunk, chunkIndex );

		ValidateDebugName( dbgName, OUT item.dbgName, INOUT _uniqueDbgNames );
		return true;
	}
	
	bool  ResRemapper::SetDebugName (VkResourceID id, uint chunkIndex, StringView dbgName)
	{
		for (auto& res_type : _resources)
		{
			auto	iter = res_type.second.map.find( id );
			if ( iter == res_type.second.map.end() )
				continue;
			
			CHECK_ERR( iter->second.size() and not iter->second.back().destroyed );
		
			auto&	item = iter->second.back();

			item.lastChunk = Max( item.lastChunk, chunkIndex );

			ValidateDebugName( dbgName, OUT item.dbgName, INOUT _uniqueDbgNames );
			return true;
		}
		return false;
	}

/*
=================================================
	GetResourceUID
=================================================
*/
	uint64_t  ResRemapper::GetResourceUID (EResourceType type, VkResourceID id, uint chunkIndex) const
	{
		auto	res_iter = _resources.find( type );
		CHECK_ERR( res_iter != _resources.end(), UMax );

		auto	iter = res_iter->second.map.find( id );
		CHECK_ERR( iter != res_iter->second.map.end(), UMax );
		CHECK_ERR( iter->second.size(), UMax );

		for (auto& item : iter->second)
		{
			if ( chunkIndex >= item.firstChunk and chunkIndex <= item.lastChunk )
				return item.uniqueIndex;
		}

		RETURN_ERR( "'chunkIndex' is out of range", UMax );
	}
	
/*
=================================================
	GetAliveResourceUID
=================================================
*/
	uint64_t  ResRemapper::GetAliveResourceUID (EResourceType type, VkResourceID id) const
	{
		auto	res_iter = _resources.find( type );
		CHECK_ERR( res_iter != _resources.end(), UMax );

		auto&	items = res_iter->second.map;
		auto	iter = items.find( id );

		CHECK_ERR( iter != items.end(), UMax );
		CHECK_ERR( iter->second.size(), UMax );

		CHECK( not iter->second.back().destroyed );
		return iter->second.back().uniqueIndex;
	}
	
/*
=================================================
	IsResourceAlive
=================================================
*/
	bool  ResRemapper::IsResourceAlive (EResourceType type, VkResourceID id, uint chunkIndex) const
	{
		auto	res_iter = _resources.find( type );
		if ( res_iter == _resources.end() )
			return false;

		auto	iter = res_iter->second.map.find( id );
		if ( iter == res_iter->second.map.end() )
			return false;

		if ( iter->second.empty() )
			return false;

		for (auto& item : iter->second)
		{
			if ( chunkIndex >= item.firstChunk and chunkIndex <= item.lastChunk )
				return true;
		}

		if ( not iter->second.back().destroyed )
			return true;

		return false;
	}

/*
=================================================
	GetResource
=================================================
*/
	String  ResRemapper::GetResource (EResourceType type, VkResourceID id, bool edit) const
	{
		if ( id == 0 )
		{
			CHECK( not edit );
			return "VK_NULL_HANDLE";
		}
		
		auto	res_iter = _resources.find( type );
		CHECK_ERR( res_iter != _resources.end(), "VK_NULL_HANDLE" );

		auto&	items = res_iter->second.map;
		auto	iter = items.find( id );

		if ( iter == items.end() )
		{
			FG_LOGI( "Can't find resource "s << GetResourceTypeID( type ) << "(" << ToString(id) << ")" );
			return "VK_NULL_HANDLE";
		}

		CHECK_ERR( iter->second.size(), "VK_NULL_HANDLE" );

		auto&	item = iter->second.back();

		CHECK( not item.destroyed );
		CHECK( item.lastChunk <= _currentChunkIndex );

		item.lastChunk = _currentChunkIndex;

		return String(edit ? "app.EditResource" : "app.GetResource") << "(R::" << item.name << ")";
	}
	
/*
=================================================
	GetAliveResource
=================================================
*/
	String  ResRemapper::GetAliveResource (EResourceType type, VkResourceID id, bool edit) const
	{
		if ( id == 0 )
		{
			CHECK( not edit );
			return "VK_NULL_HANDLE";
		}
		
		auto	res_iter = _resources.find( type );
		CHECK_ERR( res_iter != _resources.end(), "<error>" );

		auto&	items = res_iter->second.map;
		auto	iter = items.find( id );

		CHECK_ERR( iter != items.end(), "<error>" );
		CHECK_ERR( iter->second.size(), "<error>" );

		CHECK( not iter->second.back().destroyed );
		return String(edit ? "app.EditResource" : "app.GetResource") << "(R::" << iter->second.back().name << ")";
	}

/*
=================================================
	GetResourceName
=================================================
*/
	String  ResRemapper::GetResourceName (EResourceType type, VkResourceID id) const
	{
		CHECK_ERR( id != 0, "<error>" );
		
		auto	res_iter = _resources.find( type );
		CHECK_ERR( res_iter != _resources.end(), "<error>" );

		auto&	items = res_iter->second.map;
		auto	iter = items.find( id );

		CHECK_ERR( iter != items.end(), "<error>" );
		CHECK_ERR( iter->second.size(), "<error>" );

		CHECK( not iter->second.back().destroyed );
		return "R::"s << iter->second.back().name;
	}
	
/*
=================================================
	GetResourceLiveRange
=================================================
*/
	uint2  ResRemapper::GetResourceLiveRange (EResourceType type, VkResourceID id, uint chunkIndex) const
	{
		auto	res_iter = _resources.find( type );
		CHECK_ERR( res_iter != _resources.end() );

		auto&	items = res_iter->second.map;
		auto	iter = items.find( id );

		CHECK_ERR( iter != items.end() );
		CHECK_ERR( iter->second.size() );

		for (auto& item : iter->second)
		{
			if ( item.firstChunk >= chunkIndex and item.lastChunk <= chunkIndex )
				return uint2{ item.firstChunk, item.lastChunk };
		}

		return uint2{ iter->second.back().firstChunk, iter->second.back().lastChunk };
	}

/*
=================================================
	ReplaceNames
----
	replace default names by user-defined names
=================================================
*/
	void  ResRemapper::ReplaceNames (INOUT String &str) const
	{
		for (auto& res_type : _resources)
		for (auto& res : res_type.second.map)
		for (auto& unique : res.second)
		{
			if ( unique.dbgName.empty() )
				continue;

			for (size_t pos = 0; pos < str.length();)
			{
				pos = str.find( unique.name, pos );

				if ( pos == String::npos )
					break;

				const char	c = str[pos + unique.name.length()];

				if ( (c >= '0' and c <= '9') or (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z') )
				{
					pos += unique.name.length() + 1;
					continue;
				}
				
				str.replace( pos, unique.name.length(), unique.dbgName.data() );
				pos += unique.dbgName.length() + 1;
			}
		}
	}
	
/*
=================================================
	GetResourceIDs
=================================================
*/
	void  ResRemapper::GetResourceIDs (StringView indent, OUT String &str) const
	{
		for (auto& res_type : _resources)
		{
			if ( res_type.first == EResourceType::VK_OBJECT_TYPE_SWAPCHAIN_KHR )
				continue;

			for (auto& res : res_type.second.map)
			for (auto& unique : res.second)
			{
				str << indent << "static constexpr " << GetResourceTypeID( res_type.first ) << "  ";
				str << unique.name;
				str	<< " = " << GetResourceTypeID( res_type.first ) << "(" << ToString( unique.uniqueIndex )
					<< ");  // " << ToString( res.first ) << "\n";
			}

			str << "\n";
		}
	}
	
/*
=================================================
	GetResourceCount
=================================================
*/
	String  ResRemapper::GetResourceCount () const
	{
		String	str;
		
		for (auto& res_type : _resources)
		{
			if ( res_type.first == EResourceType::VK_OBJECT_TYPE_SWAPCHAIN_KHR )
				continue;

			str << "\tapp.AllocateResources( " << GetResourceTypeID( res_type.first ) << "(" << ToString( res_type.second.counter ) << ") );\n";
		}
		return str;
	}


}	// RDE
