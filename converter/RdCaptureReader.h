// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

#include "Common.h"
#include "rapidxml.hpp"
#include "stl/Memory/LinearAllocator.h"
#include "Generated/IVulkanListener.h"

#pragma warning (push, 0)
#include "miniz_zip.h"
#pragma warning (pop)

namespace RDE
{

	//
	// RenderDoc Capture Reader
	//

	class RdCaptureReader
	{
	// types
	private:
		using Node_t			= rapidxml::xml_node<char>;
		
		using FnParserFunc_t	= bool (RdCaptureReader::*) (const Node_t &, uint64_t threadId, uint64_t timestamp);
		using StParserFunc1_t	= std::function< bool (const Node_t &, OUT void *) >;
		using StParserFunc2_t	= std::function< bool (const Node_t &, OUT void **) >;	// with allocator
		using FnParserMap_t		= HashMap< String, FnParserFunc_t >;
		using StParserMap_t		= HashMap< String, Pair<StParserFunc1_t, StParserFunc2_t> >;
		using StrToResType_t	= HashMap< String, EResourceType >;

		using Allocator_t		= LinearAllocator<>;
		using ListenerPtr		= SharedPtr< IVulkanListener >;
		using Listeners_t		= HashSet< ListenerPtr >;

		using ContentMap_t		= HashMap< ContentID, uint >;	// {content id, file id}
		
		class HelperVulkanListener;


	// variables
	private:
		FnParserMap_t		_chunkParser;
		StParserMap_t		_structParser;
		StrToResType_t		_strToResType;

		Allocator_t			_allocator;
		Listeners_t			_listeners;

		uint				_chunkCounter;

		mz_zip_archive		_contentZip;
		ContentMap_t		_contentMap;

		uint				_fileVersion	= 0;

		SharedPtr<HelperVulkanListener>	_helper;


	// methods
	public:
		RdCaptureReader ();

		bool OpenCapture (const FS::path &);

		void AddListener (const ListenerPtr &);


	private:
		ND_ static Node_t*  _FindByAttribName (const Node_t &node, StringView name);

		ND_ static StringView  _GetAttribName (const Node_t &node);
		ND_ static StringView  _GetAttribTypename (const Node_t &node);
		
		bool  _ParseValue (const Node_t *node, OUT bool &result);
		bool  _ParseValue (const Node_t *node, OUT uint8_t &result);
		bool  _ParseValue (const Node_t *node, OUT uint16_t &result);
		bool  _ParseValue (const Node_t *node, OUT int &result);
		bool  _ParseValue (const Node_t *node, OUT uint32_t &result);
		bool  _ParseValue (const Node_t *node, OUT int64_t &result);
		bool  _ParseValue (const Node_t *node, OUT uint64_t &result);
		bool  _ParseValue (const Node_t *node, OUT float &result);
		bool  _ParseValue (const Node_t *node, OUT double &result);
		bool  _ParseValue (const Node_t *node, OUT char* &result);
		bool  _ParseValue (const Node_t *node, OUT void* &result);
		bool  _ParseValue (const Node_t *node, OUT uint32_t* &result);
		
		template <typename Ret, typename ...Types> bool  _ParseValue (const Node_t *node, Ret (VKAPI_PTR *) (Types...));

		template <typename T, size_t I> bool  _ParseValue (const Node_t *node, OUT T (&result)[I]);
		template <size_t I>				bool  _ParseValue (const Node_t *node, OUT char (&result)[I]);

		template <typename T> EnableIf<IsEnum<T>, bool>  _ParseValue (const Node_t *node, OUT T &result);
		
										bool  _ParseStruct (const Node_t *node, OUT void **result);
										bool  _ParseStruct (const Node_t *node, OUT void *result);
		template <typename T>			bool  _ParseStruct (const Node_t *node, OUT T* &result);
		template <typename T>			bool  _ParseStruct (const Node_t *node, OUT T &result);
		template <typename T, size_t I> bool  _ParseStruct (const Node_t *node, OUT T (&result)[I]);
		template <typename T>			bool  _ParseStructArray (const Node_t *node, OUT T* &result, INOUT uint &count);
		template <typename T, size_t I> bool  _ParseStructArray (const Node_t *node, OUT T (&result)[I], INOUT uint &count);
		template <typename T>			bool  _ParseStructArrayOpt (const Node_t *node, OUT T* &result, uint count);

		template <typename T>			bool  _ParseArray (const Node_t *node, OUT T* &result, INOUT uint &count);
		template <typename T>			bool  _ParseArray (const Node_t *node, OUT T* &result, INOUT size_t &size);
		template <typename T>			bool  _ParseArrayOpt (const Node_t *node, OUT T* &result, uint count);
										bool  _ParseArray (const Node_t *node, OUT void *&result, INOUT uint &size);

		template <typename T>			bool  _ParseResources (const Node_t *node, OUT T* &result, INOUT uint &count);
		template <typename T>			bool  _ParseResourcesOpt (const Node_t *node, OUT T* &result, uint count);
		template <typename T, size_t I> bool  _ParseResources (const Node_t *node, OUT T (&result)[I], INOUT uint &count);
		
		ND_ EResourceType  _AttribToResourceType (const Node_t *node) const;

		bool  _ParseImageState (const Node_t *node, OUT ImageLayouts &state);

		bool  _ReadContent (const FS::path &);
		bool  _LoadByteBuffer (const Node_t &node, OUT void* data, size_t dataSize);

		bool  _Parse_ResImage (const Node_t &, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_ResDeviceMemory (const Node_t &, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_ResDescriptorSet (const Node_t &, uint64_t threadId, uint64_t timestamp);
		
		bool  _Parse_GetSwapchainImagesKHR (const Node_t &root, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_SetDebugUtilsObjectName (const Node_t &root, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_DriverInitialisationParameters (const Node_t &, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_InitialContents (const Node_t &, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_EndOfCapture (const Node_t &, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_vkEnumeratePhysicalDevices (const Node_t &, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_ListOfInitialContentsResources (const Node_t &, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_FrameMetadata (const Node_t &, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_BeginningOfCapture (const Node_t &, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_DeviceMemoryRef (const Node_t &, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_ImageReferences (const Node_t &, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_FlushMappedMemoryRanges (const Node_t &node, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_DebugMarkerSetObjectNameEXT (const Node_t &node, uint64_t threadId, uint64_t timestamp);
		bool  _Parse_UpdateDescriptorSetWithTemplate (const Node_t &node, uint64_t threadId, uint64_t timestamp);

		bool  _InitParser (uint version);

#		include "Generated/ParseValue.h"
#		include "Generated/ParseChunk.h"
	};


}	// RDE
