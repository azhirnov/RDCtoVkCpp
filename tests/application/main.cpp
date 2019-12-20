// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#include "VApp.h"
#include "stl/Math/Color.h"
#include "stl/Algorithms/ArrayUtils.h"


int main ()
{
	VApp  app;

	app.AllocateResources( InstanceID(1) );
	app.AllocateResources( PhysicalDeviceID(1) );
	app.AllocateResources( DeviceID(1) );
	app.AllocateResources( QueueID(1) );
	app.AllocateResources( SwapchainKHRID(1) );
	app.AllocateResources( ImageID(1) );
	app.AllocateResources( SemaphoreID(2) );
	app.AllocateResources( CommandPoolID(1) );
	app.AllocateResources( CommandBufferID(1) );


	CHECK_ERR( app.CreateWindow( 1024, 768, "Player" ));

	std::vector<VApp::QueueInfo>  queues = {
		{ QueueID(0), VK_QUEUE_GRAPHICS_BIT, 0.0f }
	};
	CHECK_ERR( app.CreateDevice( InstanceID(0), PhysicalDeviceID(0), DeviceID(0), "", VK_VERSION_1_1, queues,
								 {"VK_LAYER_LUNARG_standard_validation"},
								 {VK_KHR_SURFACE_EXTENSION_NAME, VK_EXT_DEBUG_UTILS_EXTENSION_NAME},
								 {}
			));
	CHECK_ERR( app.CreateSwapchain( SwapchainKHRID(0) ));


	// create semaphores
	{
		VkSemaphoreCreateInfo	info = {};
		info.sType	= VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;

		VK_CHECK( app.vkCreateSemaphore( app.GetResource(DeviceID(0)), &info, null, OUT &app.EditResource(SemaphoreID(0)) ));
		VK_CHECK( app.vkCreateSemaphore( app.GetResource(DeviceID(0)), &info, null, OUT &app.EditResource(SemaphoreID(1)) ));
	}
	
	// create command buffer
	{
		VkCommandPoolCreateInfo		pool_info = {};
		pool_info.sType				= VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
		pool_info.queueFamilyIndex	= app.GetQueueFamilyIndex( QueueID(0) );
		VK_CHECK( app.vkCreateCommandPool( app.GetResource(DeviceID(0)), &pool_info, null, OUT &app.EditResource(CommandPoolID(0)) ));

		VkCommandBufferAllocateInfo	cmd_info = {};
		cmd_info.sType				= VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
		cmd_info.commandBufferCount	= 1;
		cmd_info.commandPool		= app.GetResource(CommandPoolID(0));
		cmd_info.level				= VK_COMMAND_BUFFER_LEVEL_PRIMARY;
		VK_CHECK( app.vkAllocateCommandBuffers( app.GetResource(DeviceID(0)), &cmd_info, OUT &app.EditResource(CommandBufferID(0)) ));
	}

	CHECK_ERR( app.AcquireImage( ImageID(0), SemaphoreID(0) ));

	// build command buffer
	{
		VkCommandBufferBeginInfo	begin_info = {};
		begin_info.sType	= VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
		begin_info.flags	= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
		VK_CALL( app.vkBeginCommandBuffer( app.GetResource(CommandBufferID(0)), &begin_info ));


		// image layout undefined to transfer optimal
		VkImageMemoryBarrier	barrier = {};
		barrier.sType				= VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
		barrier.image				= app.GetResource(ImageID(0));
		barrier.oldLayout			= VK_IMAGE_LAYOUT_UNDEFINED;
		barrier.newLayout			= VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
		barrier.srcAccessMask		= 0;
		barrier.dstAccessMask		= VK_ACCESS_TRANSFER_WRITE_BIT;
		barrier.srcQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
		barrier.dstQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
		barrier.subresourceRange	= { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };

		app.vkCmdPipelineBarrier( app.GetResource(CommandBufferID(0)), VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0,
								  0, null, 0, null, 1, &barrier );
		

		// clear image
		RGBA32f				color		{ HSVColor{ 0.3f } };
		VkClearColorValue	clear_value {{ color.r, color.g, color.b, color.a }};

		VkImageSubresourceRange	range;
		range.aspectMask		= VK_IMAGE_ASPECT_COLOR_BIT;
		range.baseArrayLayer	= 0;
		range.layerCount		= 1;
		range.baseMipLevel		= 0;
		range.levelCount		= 1;

		app.vkCmdClearColorImage( app.GetResource(CommandBufferID(0)), app.GetResource(ImageID(0)), VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &clear_value, 1, &range );
			

		// image layout transfer optimal to present source
		barrier.oldLayout		= VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
		barrier.newLayout		= VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
		barrier.srcAccessMask	= VK_ACCESS_TRANSFER_WRITE_BIT;
		barrier.dstAccessMask	= 0;

		app.vkCmdPipelineBarrier( app.GetResource(CommandBufferID(0)), VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, 0,
								  0, null, 0, null, 1, &barrier );


		VK_CALL( app.vkEndCommandBuffer( app.GetResource(CommandBufferID(0)) ));
	}


	// submit commands
	{
		VkSemaphore				signal_semaphores[] = { app.GetResource(SemaphoreID(1)) };
		VkSemaphore				wait_semaphores[]	= { app.GetResource(SemaphoreID(0)) };
		VkPipelineStageFlags	wait_dst_mask[]		= { VK_PIPELINE_STAGE_TRANSFER_BIT };
		VkCommandBuffer			commands[]			= { app.GetResource(CommandBufferID(0)) };
		STATIC_ASSERT( CountOf(wait_semaphores) == CountOf(wait_dst_mask) );

		VkSubmitInfo				submit_info = {};
		submit_info.sType					= VK_STRUCTURE_TYPE_SUBMIT_INFO;
		submit_info.commandBufferCount		= uint(CountOf(commands));
		submit_info.pCommandBuffers			= commands;
		submit_info.waitSemaphoreCount		= uint(CountOf(wait_semaphores));
		submit_info.pWaitSemaphores			= wait_semaphores;
		submit_info.pWaitDstStageMask		= wait_dst_mask;
		submit_info.signalSemaphoreCount	= uint(CountOf(signal_semaphores));
		submit_info.pSignalSemaphores		= signal_semaphores;

		VK_CHECK( app.vkQueueSubmit( app.GetResource(QueueID(0)), 1, &submit_info, VK_NULL_HANDLE ));
	}

	CHECK_ERR( app.Present( QueueID(0), ImageID(0), SemaphoreID(1) ));

	VK_CHECK( app.vkDeviceWaitIdle( app.GetResource(DeviceID(0)) ));


	// destroy vulkan resources
	{
		app.vkDestroyCommandPool( app.GetResource(DeviceID(0)), app.GetResource(CommandPoolID(0)), null );
		app.vkDestroySemaphore( app.GetResource(DeviceID(0)), app.GetResource(SemaphoreID(0)), null );
		app.vkDestroySemaphore( app.GetResource(DeviceID(0)), app.GetResource(SemaphoreID(1)), null );
	}

	return 0;
}
