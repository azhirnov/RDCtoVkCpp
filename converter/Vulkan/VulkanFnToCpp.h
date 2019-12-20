// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

#include "Common.h"
#include "Generated/IVulkanListener.h"

namespace RDE
{

	//
	// Convert to Raw Vulkan API
	//

	class VulkanFnToCpp : public IVulkanListener
	{
	// variables
	protected:
		const StringView	indent = "\t\t";
		String				result;
		String				before;
		NameSerializer		nameSer;
		ResRemapper			remapper;


	// methods
	protected:
		VulkanFnToCpp () {}

		virtual void FlushCommandBuffer (VkCommandBuffer) = 0;
		virtual void FlushQueue (VkQueue) = 0;
		virtual void FlushGlobal () = 0;

#		include "Generated/BuildRawVulkanCalls.h"
	};


}	// RDE
