// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

#include "stl/Common.h"
#include "stl/Stream/FileStream.h"
#include "stl/Algorithms/StringUtils.h"

#define VK_NO_PROTOTYPES
#include "vulkan/vulkan.h"

#include <filesystem>

namespace RDE
{
	using namespace FGC;
	namespace FS = std::filesystem;

	using EResourceType	= VkObjectType;
	using VkResourceID = uint64_t;
	//enum VkResourceID : uint64_t {};	// TODO

	enum class ContentID : uint
	{
		Unknown = ~0u
	};


	struct ImageLayouts
	{
		struct ImageRegionState
		{
			uint					dstQueueFamilyIndex;
			VkImageSubresourceRange	subresourceRange;
			VkImageLayout			oldLayout;
			VkImageLayout			newLayout;
		};

		VkResourceID			imageId;
		uint					queueFamilyIndex;
		Array<ImageRegionState>	subresourceStates;
		uint					layerCount;
		uint					levelCount;
		uint					sampleCount;
		VkExtent3D				extent;
		VkFormat				format;
	};


}	// RDE
