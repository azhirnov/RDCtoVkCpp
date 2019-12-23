// auto-generated file

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
	
		virtual void UpdateDescriptorSetWithTemplate (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, ArrayView<VkWriteDescriptorSet> data) {}
	
		virtual void CreateDevice (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDevice * pDevice) {}
		virtual void GetDeviceQueue (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue) {}
		virtual void AllocateMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkMemoryAllocateInfo * pAllocateInfo, const VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory) {}
		virtual void UnmapMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkDeviceMemory memory) {}
		virtual void CreateCommandPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkCommandPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCommandPool * pCommandPool) {}
		virtual void ResetCommandPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) {}
		virtual void AllocateCommandBuffers (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers) {}
		virtual void CreateFramebuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkFramebufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer) {}
		virtual void CreateRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkRenderPassCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) {}
		virtual void CreateDescriptorPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool) {}
		virtual void CreateDescriptorSetLayout (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout) {}
		virtual void CreateBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkBufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer) {}
		virtual void CreateBufferView (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkBufferViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferView * pView) {}
		virtual void CreateImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkImageCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImage * pImage) {}
		virtual void CreateImageView (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkImageViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImageView * pView) {}
		virtual void CreateSampler (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSamplerCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSampler * pSampler) {}
		virtual void CreateShaderModule (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkShaderModule * pShaderModule) {}
		virtual void CreatePipelineLayout (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkPipelineLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout) {}
		virtual void CreatePipelineCache (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkPipelineCacheCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache) {}
		virtual void CreateGraphicsPipelines (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {}
		virtual void CreateComputePipelines (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {}
		virtual void GetSwapchainImagesKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages) {}
		virtual void CreateSemaphore (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSemaphoreCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore) {}
		virtual void CreateFence (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkFenceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) {}
		virtual void GetFenceStatus (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkFence fence) {}
		virtual void ResetFences (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t fenceCount, const VkFence * pFences) {}
		virtual void WaitForFences (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t fenceCount, const VkFence * pFences, VkBool32 waitAll, uint64_t timeout) {}
		virtual void CreateEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkEventCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkEvent * pEvent) {}
		virtual void GetEventStatus (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event) {}
		virtual void SetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event) {}
		virtual void ResetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event) {}
		virtual void CreateQueryPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkQueryPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool) {}
		virtual void AllocateDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets) {}
		virtual void UpdateDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet * pDescriptorCopies) {}
		virtual void BeginCommandBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo * pBeginInfo) {}
		virtual void EndCommandBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) {}
		virtual void QueueWaitIdle (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue) {}
		virtual void DeviceWaitIdle (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device) {}
		virtual void QueueSubmit (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, uint32_t submitCount, const VkSubmitInfo * pSubmits, VkFence fence) {}
		virtual void BindBufferMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) {}
		virtual void BindImageMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) {}
		virtual void QueueBindSparse (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo * pBindInfo, VkFence fence) {}
		virtual void CmdBeginRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents) {}
		virtual void CmdNextSubpass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkSubpassContents contents) {}
		virtual void CmdExecuteCommands (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers) {}
		virtual void CmdEndRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) {}
		virtual void CmdBindPipeline (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {}
		virtual void CmdSetViewport (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport * pViewports) {}
		virtual void CmdSetScissor (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D * pScissors) {}
		virtual void CmdSetLineWidth (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, float lineWidth) {}
		virtual void CmdSetDepthBias (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) {}
		virtual void CmdSetBlendConstants (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const float blendConstants[4]) {}
		virtual void CmdSetDepthBounds (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) {}
		virtual void CmdSetStencilCompareMask (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) {}
		virtual void CmdSetStencilWriteMask (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) {}
		virtual void CmdSetStencilReference (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) {}
		virtual void CmdBindDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t * pDynamicOffsets) {}
		virtual void CmdBindVertexBuffers (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets) {}
		virtual void CmdBindIndexBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) {}
		virtual void CmdCopyBufferToImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy * pRegions) {}
		virtual void CmdCopyImageToBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy * pRegions) {}
		virtual void CmdCopyBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy * pRegions) {}
		virtual void CmdCopyImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy * pRegions) {}
		virtual void CmdBlitImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit * pRegions, VkFilter filter) {}
		virtual void CmdResolveImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve * pRegions) {}
		virtual void CmdUpdateBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void * pData) {}
		virtual void CmdFillBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) {}
		virtual void CmdPushConstants (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void * pValues) {}
		virtual void CmdClearColorImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue * pColor, uint32_t rangeCount, const VkImageSubresourceRange * pRanges) {}
		virtual void CmdClearDepthStencilImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue * pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange * pRanges) {}
		virtual void CmdClearAttachments (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment * pAttachments, uint32_t rectCount, const VkClearRect * pRects) {}
		virtual void CmdPipelineBarrier (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers) {}
		virtual void CmdWriteTimestamp (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) {}
		virtual void CmdCopyQueryPoolResults (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) {}
		virtual void CmdBeginQuery (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) {}
		virtual void CmdEndQuery (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) {}
		virtual void CmdResetQueryPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {}
		virtual void CmdSetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {}
		virtual void CmdResetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {}
		virtual void CmdWaitEvents (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers) {}
		virtual void CmdDraw (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) {}
		virtual void CmdDrawIndirect (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {}
		virtual void CmdDrawIndexed (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) {}
		virtual void CmdDrawIndexedIndirect (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {}
		virtual void CmdDispatch (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {}
		virtual void CmdDispatchIndirect (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) {}
		virtual void CmdDebugMarkerBeginEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo) {}
		virtual void CmdDebugMarkerInsertEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo) {}
		virtual void CmdDebugMarkerEndEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) {}
		virtual void CreateSwapchainKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSwapchainCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain) {}
		virtual void RegisterDeviceEventEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDeviceEventInfoEXT * pDeviceEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) {}
		virtual void RegisterDisplayEventEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT * pDisplayEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) {}
		virtual void CmdPushDescriptorSetKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites) {}
		virtual void CreateDescriptorUpdateTemplate (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate) {}
		virtual void BindBufferMemory2 (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos) {}
		virtual void BindImageMemory2 (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos) {}
		virtual void CmdWriteBufferMarkerAMD (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {}
		virtual void SetDebugUtilsObjectNameEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDebugUtilsObjectNameInfoEXT * pNameInfo) {}
		virtual void QueueBeginDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo) {}
		virtual void QueueEndDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue) {}
		virtual void QueueInsertDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo) {}
		virtual void CmdBeginDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo) {}
		virtual void CmdEndDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) {}
		virtual void CmdInsertDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo) {}
		virtual void CreateSamplerYcbcrConversion (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion) {}
		virtual void CmdSetDeviceMask (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t deviceMask) {}
		virtual void CmdDispatchBase (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {}
		virtual void GetDeviceQueue2 (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue) {}
		virtual void CmdDrawIndirectCountKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {}
		virtual void CmdDrawIndexedIndirectCountKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {}
		virtual void CreateRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkRenderPassCreateInfo2KHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) {}
		virtual void CmdBeginRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfoKHR * pSubpassBeginInfo) {}
		virtual void CmdNextSubpass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkSubpassBeginInfoKHR * pSubpassBeginInfo, const VkSubpassEndInfoKHR * pSubpassEndInfo) {}
		virtual void CmdEndRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkSubpassEndInfoKHR * pSubpassEndInfo) {}
		virtual void CmdBindTransformFeedbackBuffersEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes) {}
		virtual void CmdBeginQueryIndexedEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) {}
		virtual void CmdEndQueryIndexedEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index) {}
		virtual void CmdDrawIndirectByteCountEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) {}
		virtual void CmdBeginConditionalRenderingEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT * pConditionalRenderingBegin) {}
		virtual void CmdEndConditionalRenderingEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) {}
		virtual void CmdSetSampleLocationsEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT * pSampleLocationsInfo) {}
		virtual void CmdSetDiscardRectangleEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D * pDiscardRectangles) {}
		virtual void ResetQueryPoolEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {}
		virtual void CmdSetLineStippleEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) {}

	};

}	// RDE
#pragma warning (pop)
