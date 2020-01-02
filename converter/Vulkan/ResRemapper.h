// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

#include "Common.h"

namespace RDE
{

	//
	// Resource Remapper
	//

	struct ResRemapper
	{
	// types
	private:
		struct ResInfo
		{
			String			name;
			String			dbgName;
			uint			firstChunk	= UMax;
			mutable uint	lastChunk	= 0;
			uint64_t		uniqueIndex	= UMax;
			bool			destroyed	= true;
		};
		using ResourceMap_t	= HashMap< VkResourceID, Deque<ResInfo> >;

		struct ResType
		{
			ResourceMap_t	map;
			uint			counter	= 0;
		};
		using Resources_t	= HashMap< EResourceType, ResType >;

		using UniqueNames_t	= HashSet< String >;


	// variables
	private:
		Resources_t		_resources;
		uint			_currentChunkIndex;
		UniqueNames_t	_uniqueDbgNames;


	// methods
	public:
		ResRemapper ();

		bool CreateResource (EResourceType type, VkResourceID id, uint chunkIndex);
		bool DestroyResource (EResourceType type, VkResourceID id, uint chunkIndex);
		bool SetDebugName (EResourceType type, VkResourceID id, uint chunkIndex, StringView name);
		bool SetDebugName (VkResourceID id, uint chunkIndex, StringView name);

		ND_ uint64_t  GetResourceUID (EResourceType type, VkResourceID id, uint chunkIndex) const;
		ND_ String    GetResource (EResourceType type, VkResourceID id, bool edit = false) const;
		ND_ String    GetResourceName (EResourceType type, VkResourceID id) const;
		
		ND_ bool	  IsResourceAlive (EResourceType type, VkResourceID id, uint chunkIndex) const;
		ND_ uint64_t  GetAliveResourceUID (EResourceType type, VkResourceID id) const;
		ND_ String    GetAliveResource (EResourceType type, VkResourceID id, bool edit = false) const;
		ND_ uint2     GetResourceLiveRange (EResourceType type, VkResourceID id, uint chunkIndex) const;

		void SetCurrentPos (uint chunkIndex)
		{
			_currentChunkIndex = chunkIndex;
		}

		template <typename T>
		ND_ String  operator () (EResourceType type, const T &resourceId, bool edit = false) const
		{
			STATIC_ASSERT( IsPointer<T> or IsSameTypes<T, uint64_t> );

			return GetResource( type, VkResourceID(resourceId), edit );
		}

		void ReplaceNames (INOUT String &str) const;
		void GetResourceIDs (StringView indent, OUT String &str) const;

		ND_ String  GetResourceCount () const;
	};


}	// RDE
