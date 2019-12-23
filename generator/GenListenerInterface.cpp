// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#include "Generator.h"

namespace RDE
{

/*
=================================================
	GenListenerInterface
=================================================
*/
	bool Generator::GenListenerInterface (const FS::path &output) const
	{
		String	str	= R"#(// auto-generated file

#pragma once

#pragma warning (push)
#pragma warning (disable: 4100)

namespace RDE
{

	class IVulkanListener : public std::enable_shared_from_this<IVulkanListener>
	{
	public:
		virtual void InitialImageContent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkImage imageId,
										  bool isSparse, BytesU contentSize, ContentID contentId) {}

		virtual void InitialMemoryContent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDeviceMemory memId,
										   bool isSparse, BytesU contentSize, ContentID contentId) {}

		virtual void InitialDescriptorSetContent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, ArrayView<VkWriteDescriptorSet> slots) {}

		virtual void OnOpenCapture (const FS::path &filename) {}

		virtual void BeginningOfCapture (uint chunkIndex, uint64_t threadID, uint64_t timestamp, ArrayView<ImageLayouts> imageLayouts) {}

		virtual void EndOfCapture (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkResourceID presentedImage) {}

		virtual void EnumeratePhysicalDevices (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkInstance instance, uint32_t PhysicalDeviceIndex, VkPhysicalDevice PhysicalDevice,
												uint32_t memIdxMap[VK_MAX_MEMORY_TYPES], const VkPhysicalDeviceProperties &physProps,
												const VkPhysicalDeviceMemoryProperties &memProps, const VkPhysicalDeviceFeatures &physFeatures,
												uint32_t queueCount, VkQueueFamilyProperties queueProps[]) {}

		virtual void FlushMappedMemoryRanges (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t memoryRangeCount,
											  const VkMappedMemoryRange * pMemoryRanges, BytesU mappedDataSize, ContentID mappedData) {}
		
		virtual void DebugMarkerSetObjectNameEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkResourceID resId, StringView name) {}
	
		virtual void UpdateDescriptorSetWithTemplate (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData) {}
	
)#";

		for (auto& packet : _packetIDs)
		{
			if ( packet.vkFunc.empty() )
				continue;

			if ( _skipFuncs.count( packet.vkFunc ))
				continue;

			str << "\t\tvirtual void " << packet.vkFunc.substr( 2 ) << " (uint chunkIndex, uint64_t threadID, uint64_t timestamp, ";
			
			auto	fn_iter = _funcs.find( SearchableFunc{packet.vkFunc} );
			CHECK_ERR( fn_iter != _funcs.end() );

			for (auto& arg : fn_iter->data.args)
			{
				str << (&arg == fn_iter->data.args.data() ? "" : ", ");

				for (size_t i = 0; i < arg.type.size(); ++i)
				{
					const auto&	type = arg.type[i];

					if ( type == "[" )
					{
						CHECK_ERR( arg.type.size() == i+3 and arg.type[i+2] == "]" );

						str << arg.name << type << arg.type[i+1] << arg.type[i+2];
						break;
					}

					str << type << ' ';

					if ( i+1 == arg.type.size() )
						str << arg.name;
				}
			}

			str << ") {}\n";
		}

		str << R"#(
	};

}	// RDE
#pragma warning (pop)
)#";

		
		// store to file
		FileWStream		wfile{ output };
		CHECK_ERR( wfile.IsOpen() );
		CHECK_ERR( wfile.Write( str ));

		return true;
	}

}	// RDE
