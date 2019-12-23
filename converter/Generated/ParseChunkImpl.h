// auto-generated file

#pragma warning (push)
#pragma warning (disable: 4100)

bool RdCaptureReader::Parse_vkCreateDevice (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* physicalDevice_node = _FindByAttribName( root, "physicalDevice" );
	VkPhysicalDevice  physicalDevice = {};
	_ParseResource( physicalDevice_node, OUT physicalDevice );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkDeviceCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkDeviceCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pDevice_node = _FindByAttribName( root, "Device" );
	VkDevice *  pDevice = {};
	_ParseResource( pDevice_node, OUT const_cast<VkDevice * &>(pDevice) );
	for (auto listener : _listeners) {
		listener->CreateDevice( _chunkCounter, threadId, timestamp, physicalDevice, pCreateInfo, pAllocator, pDevice );
	}
	return true;
}

bool RdCaptureReader::Parse_vkGetDeviceQueue (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* queueFamilyIndex_node = _FindByAttribName( root, "queueFamilyIndex" );
	uint32_t  queueFamilyIndex = {};
	_ParseValue( queueFamilyIndex_node, OUT queueFamilyIndex );
	Node_t* queueIndex_node = _FindByAttribName( root, "queueIndex" );
	uint32_t  queueIndex = {};
	_ParseValue( queueIndex_node, OUT queueIndex );
	Node_t* pQueue_node = _FindByAttribName( root, "Queue" );
	VkQueue *  pQueue = {};
	_ParseResource( pQueue_node, OUT const_cast<VkQueue * &>(pQueue) );
	for (auto listener : _listeners) {
		listener->GetDeviceQueue( _chunkCounter, threadId, timestamp, device, queueFamilyIndex, queueIndex, pQueue );
	}
	return true;
}

bool RdCaptureReader::Parse_vkAllocateMemory (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pAllocateInfo_node = _FindByAttribName( root, "AllocateInfo" );
	VkMemoryAllocateInfo *  pAllocateInfo = {};
	_ParseStruct( pAllocateInfo_node, OUT const_cast<VkMemoryAllocateInfo * &>(pAllocateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pMemory_node = _FindByAttribName( root, "Memory" );
	VkDeviceMemory *  pMemory = {};
	_ParseResource( pMemory_node, OUT const_cast<VkDeviceMemory * &>(pMemory) );
	for (auto listener : _listeners) {
		listener->AllocateMemory( _chunkCounter, threadId, timestamp, device, pAllocateInfo, pAllocator, pMemory );
	}
	return true;
}

bool RdCaptureReader::Parse_vkUnmapMemory (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* memory_node = _FindByAttribName( root, "memory" );
	VkDeviceMemory  memory = {};
	_ParseResource( memory_node, OUT memory );
	for (auto listener : _listeners) {
		listener->UnmapMemory( _chunkCounter, threadId, timestamp, device, memory );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateCommandPool (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkCommandPoolCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkCommandPoolCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pCommandPool_node = _FindByAttribName( root, "CmdPool" );
	VkCommandPool *  pCommandPool = {};
	_ParseResource( pCommandPool_node, OUT const_cast<VkCommandPool * &>(pCommandPool) );
	for (auto listener : _listeners) {
		listener->CreateCommandPool( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pCommandPool );
	}
	return true;
}

bool RdCaptureReader::Parse_vkResetCommandPool (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* commandPool_node = _FindByAttribName( root, "commandPool" );
	VkCommandPool  commandPool = {};
	_ParseResource( commandPool_node, OUT commandPool );
	Node_t* flags_node = _FindByAttribName( root, "flags" );
	VkCommandPoolResetFlags  flags = {};
	_ParseValue( flags_node, OUT flags );
	for (auto listener : _listeners) {
		listener->ResetCommandPool( _chunkCounter, threadId, timestamp, device, commandPool, flags );
	}
	return true;
}

bool RdCaptureReader::Parse_vkAllocateCommandBuffers (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pAllocateInfo_node = _FindByAttribName( root, "AllocateInfo" );
	VkCommandBufferAllocateInfo *  pAllocateInfo = {};
	_ParseStruct( pAllocateInfo_node, OUT const_cast<VkCommandBufferAllocateInfo * &>(pAllocateInfo) );
	Node_t* pCommandBuffers_node = _FindByAttribName( root, "CommandBuffer" );
	VkCommandBuffer *  pCommandBuffers = {};
	_ParseResources( pCommandBuffers_node, OUT const_cast<VkCommandBuffer * &>(pCommandBuffers), INOUT pAllocateInfo->commandBufferCount );
	for (auto listener : _listeners) {
		listener->AllocateCommandBuffers( _chunkCounter, threadId, timestamp, device, pAllocateInfo, pCommandBuffers );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateFramebuffer (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkFramebufferCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkFramebufferCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pFramebuffer_node = _FindByAttribName( root, "Framebuffer" );
	VkFramebuffer *  pFramebuffer = {};
	_ParseResource( pFramebuffer_node, OUT const_cast<VkFramebuffer * &>(pFramebuffer) );
	for (auto listener : _listeners) {
		listener->CreateFramebuffer( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pFramebuffer );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateRenderPass (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkRenderPassCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkRenderPassCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pRenderPass_node = _FindByAttribName( root, "RenderPass" );
	VkRenderPass *  pRenderPass = {};
	_ParseResource( pRenderPass_node, OUT const_cast<VkRenderPass * &>(pRenderPass) );
	for (auto listener : _listeners) {
		listener->CreateRenderPass( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pRenderPass );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateDescriptorPool (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkDescriptorPoolCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkDescriptorPoolCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pDescriptorPool_node = _FindByAttribName( root, "DescriptorPool" );
	VkDescriptorPool *  pDescriptorPool = {};
	_ParseResource( pDescriptorPool_node, OUT const_cast<VkDescriptorPool * &>(pDescriptorPool) );
	for (auto listener : _listeners) {
		listener->CreateDescriptorPool( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pDescriptorPool );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateDescriptorSetLayout (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkDescriptorSetLayoutCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkDescriptorSetLayoutCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pSetLayout_node = _FindByAttribName( root, "SetLayout" );
	VkDescriptorSetLayout *  pSetLayout = {};
	_ParseResource( pSetLayout_node, OUT const_cast<VkDescriptorSetLayout * &>(pSetLayout) );
	for (auto listener : _listeners) {
		listener->CreateDescriptorSetLayout( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pSetLayout );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateBuffer (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkBufferCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkBufferCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pBuffer_node = _FindByAttribName( root, "Buffer" );
	VkBuffer *  pBuffer = {};
	_ParseResource( pBuffer_node, OUT const_cast<VkBuffer * &>(pBuffer) );
	for (auto listener : _listeners) {
		listener->CreateBuffer( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pBuffer );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateBufferView (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkBufferViewCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkBufferViewCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pView_node = _FindByAttribName( root, "View" );
	VkBufferView *  pView = {};
	_ParseResource( pView_node, OUT const_cast<VkBufferView * &>(pView) );
	for (auto listener : _listeners) {
		listener->CreateBufferView( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pView );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateImage (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkImageCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkImageCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pImage_node = _FindByAttribName( root, "Image" );
	VkImage *  pImage = {};
	_ParseResource( pImage_node, OUT const_cast<VkImage * &>(pImage) );
	for (auto listener : _listeners) {
		listener->CreateImage( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pImage );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateImageView (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkImageViewCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkImageViewCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pView_node = _FindByAttribName( root, "View" );
	VkImageView *  pView = {};
	_ParseResource( pView_node, OUT const_cast<VkImageView * &>(pView) );
	for (auto listener : _listeners) {
		listener->CreateImageView( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pView );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateSampler (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkSamplerCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkSamplerCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pSampler_node = _FindByAttribName( root, "Sampler" );
	VkSampler *  pSampler = {};
	_ParseResource( pSampler_node, OUT const_cast<VkSampler * &>(pSampler) );
	for (auto listener : _listeners) {
		listener->CreateSampler( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pSampler );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateShaderModule (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkShaderModuleCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkShaderModuleCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pShaderModule_node = _FindByAttribName( root, "ShaderModule" );
	VkShaderModule *  pShaderModule = {};
	_ParseResource( pShaderModule_node, OUT const_cast<VkShaderModule * &>(pShaderModule) );
	for (auto listener : _listeners) {
		listener->CreateShaderModule( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pShaderModule );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreatePipelineLayout (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkPipelineLayoutCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkPipelineLayoutCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pPipelineLayout_node = _FindByAttribName( root, "PipelineLayout" );
	VkPipelineLayout *  pPipelineLayout = {};
	_ParseResource( pPipelineLayout_node, OUT const_cast<VkPipelineLayout * &>(pPipelineLayout) );
	for (auto listener : _listeners) {
		listener->CreatePipelineLayout( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pPipelineLayout );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreatePipelineCache (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkPipelineCacheCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkPipelineCacheCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pPipelineCache_node = _FindByAttribName( root, "PipelineCache" );
	VkPipelineCache *  pPipelineCache = {};
	_ParseResource( pPipelineCache_node, OUT const_cast<VkPipelineCache * &>(pPipelineCache) );
	for (auto listener : _listeners) {
		listener->CreatePipelineCache( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pPipelineCache );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateGraphicsPipelines (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pipelineCache_node = _FindByAttribName( root, "pipelineCache" );
	VkPipelineCache  pipelineCache = {};
	_ParseResource( pipelineCache_node, OUT pipelineCache );
	Node_t* createInfoCount_node = _FindByAttribName( root, "count" );
	uint32_t  createInfoCount = {};
	_ParseValue( createInfoCount_node, OUT createInfoCount );
	Node_t* pCreateInfos_node = _FindByAttribName( root, "CreateInfo" );
	VkGraphicsPipelineCreateInfo *  pCreateInfos = {};
	_ParseStructArray( pCreateInfos_node, OUT const_cast<VkGraphicsPipelineCreateInfo * &>(pCreateInfos), INOUT createInfoCount );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pPipelines_node = _FindByAttribName( root, "Pipeline" );
	VkPipeline *  pPipelines = {};
	_ParseResources( pPipelines_node, OUT const_cast<VkPipeline * &>(pPipelines), INOUT createInfoCount );
	for (auto listener : _listeners) {
		listener->CreateGraphicsPipelines( _chunkCounter, threadId, timestamp, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateComputePipelines (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pipelineCache_node = _FindByAttribName( root, "pipelineCache" );
	VkPipelineCache  pipelineCache = {};
	_ParseResource( pipelineCache_node, OUT pipelineCache );
	Node_t* createInfoCount_node = _FindByAttribName( root, "count" );
	uint32_t  createInfoCount = {};
	_ParseValue( createInfoCount_node, OUT createInfoCount );
	Node_t* pCreateInfos_node = _FindByAttribName( root, "CreateInfo" );
	VkComputePipelineCreateInfo *  pCreateInfos = {};
	_ParseStructArray( pCreateInfos_node, OUT const_cast<VkComputePipelineCreateInfo * &>(pCreateInfos), INOUT createInfoCount );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pPipelines_node = _FindByAttribName( root, "Pipeline" );
	VkPipeline *  pPipelines = {};
	_ParseResources( pPipelines_node, OUT const_cast<VkPipeline * &>(pPipelines), INOUT createInfoCount );
	for (auto listener : _listeners) {
		listener->CreateComputePipelines( _chunkCounter, threadId, timestamp, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines );
	}
	return true;
}

bool RdCaptureReader::Parse_vkGetSwapchainImagesKHR (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* swapchain_node = _FindByAttribName( root, "Swapchain" );
	VkSwapchainKHR  swapchain = {};
	_ParseResource( swapchain_node, OUT swapchain );
	Node_t* pSwapchainImageCount_node = _FindByAttribName( root, "SwapchainImageIndex" );
	uint32_t *  pSwapchainImageCount = {};
	_ParseValue( pSwapchainImageCount_node, OUT const_cast<uint32_t * &>(pSwapchainImageCount) );
	Node_t* pSwapchainImages_node = _FindByAttribName( root, "SwapchainImage" );
	VkImage *  pSwapchainImages = {};
	_ParseResources( pSwapchainImages_node, OUT const_cast<VkImage * &>(pSwapchainImages), INOUT pSwapchainImageCount[0] );
	for (auto listener : _listeners) {
		listener->GetSwapchainImagesKHR( _chunkCounter, threadId, timestamp, device, swapchain, pSwapchainImageCount, pSwapchainImages );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateSemaphore (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkSemaphoreCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkSemaphoreCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pSemaphore_node = _FindByAttribName( root, "Semaphore" );
	VkSemaphore *  pSemaphore = {};
	_ParseResource( pSemaphore_node, OUT const_cast<VkSemaphore * &>(pSemaphore) );
	for (auto listener : _listeners) {
		listener->CreateSemaphore( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pSemaphore );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateFence (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkFenceCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkFenceCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pFence_node = _FindByAttribName( root, "Fence" );
	VkFence *  pFence = {};
	_ParseResource( pFence_node, OUT const_cast<VkFence * &>(pFence) );
	for (auto listener : _listeners) {
		listener->CreateFence( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pFence );
	}
	return true;
}

bool RdCaptureReader::Parse_vkGetFenceStatus (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* fence_node = _FindByAttribName( root, "fence" );
	VkFence  fence = {};
	_ParseResource( fence_node, OUT fence );
	for (auto listener : _listeners) {
		listener->GetFenceStatus( _chunkCounter, threadId, timestamp, device, fence );
	}
	return true;
}

bool RdCaptureReader::Parse_vkResetFences (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* fenceCount_node = _FindByAttribName( root, "fenceCount" );
	uint32_t  fenceCount = {};
	_ParseValue( fenceCount_node, OUT fenceCount );
	Node_t* pFences_node = _FindByAttribName( root, "pFences" );
	VkFence *  pFences = {};
	_ParseResources( pFences_node, OUT const_cast<VkFence * &>(pFences), INOUT fenceCount );
	for (auto listener : _listeners) {
		listener->ResetFences( _chunkCounter, threadId, timestamp, device, fenceCount, pFences );
	}
	return true;
}

bool RdCaptureReader::Parse_vkWaitForFences (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* fenceCount_node = _FindByAttribName( root, "fenceCount" );
	uint32_t  fenceCount = {};
	_ParseValue( fenceCount_node, OUT fenceCount );
	Node_t* pFences_node = _FindByAttribName( root, "pFences" );
	VkFence *  pFences = {};
	_ParseResources( pFences_node, OUT const_cast<VkFence * &>(pFences), INOUT fenceCount );
	Node_t* waitAll_node = _FindByAttribName( root, "waitAll" );
	VkBool32  waitAll = {};
	_ParseValue( waitAll_node, OUT waitAll );
	Node_t* timeout_node = _FindByAttribName( root, "timeout" );
	uint64_t  timeout = {};
	_ParseValue( timeout_node, OUT timeout );
	for (auto listener : _listeners) {
		listener->WaitForFences( _chunkCounter, threadId, timestamp, device, fenceCount, pFences, waitAll, timeout );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateEvent (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkEventCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkEventCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pEvent_node = _FindByAttribName( root, "Event" );
	VkEvent *  pEvent = {};
	_ParseResource( pEvent_node, OUT const_cast<VkEvent * &>(pEvent) );
	for (auto listener : _listeners) {
		listener->CreateEvent( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pEvent );
	}
	return true;
}

bool RdCaptureReader::Parse_vkGetEventStatus (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* event_node = _FindByAttribName( root, "event" );
	VkEvent  event = {};
	_ParseResource( event_node, OUT event );
	for (auto listener : _listeners) {
		listener->GetEventStatus( _chunkCounter, threadId, timestamp, device, event );
	}
	return true;
}

bool RdCaptureReader::Parse_vkSetEvent (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* event_node = _FindByAttribName( root, "event" );
	VkEvent  event = {};
	_ParseResource( event_node, OUT event );
	for (auto listener : _listeners) {
		listener->SetEvent( _chunkCounter, threadId, timestamp, device, event );
	}
	return true;
}

bool RdCaptureReader::Parse_vkResetEvent (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* event_node = _FindByAttribName( root, "event" );
	VkEvent  event = {};
	_ParseResource( event_node, OUT event );
	for (auto listener : _listeners) {
		listener->ResetEvent( _chunkCounter, threadId, timestamp, device, event );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateQueryPool (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkQueryPoolCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkQueryPoolCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pQueryPool_node = _FindByAttribName( root, "QueryPool" );
	VkQueryPool *  pQueryPool = {};
	_ParseResource( pQueryPool_node, OUT const_cast<VkQueryPool * &>(pQueryPool) );
	for (auto listener : _listeners) {
		listener->CreateQueryPool( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pQueryPool );
	}
	return true;
}

bool RdCaptureReader::Parse_vkAllocateDescriptorSets (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pAllocateInfo_node = _FindByAttribName( root, "AllocateInfo" );
	VkDescriptorSetAllocateInfo *  pAllocateInfo = {};
	_ParseStruct( pAllocateInfo_node, OUT const_cast<VkDescriptorSetAllocateInfo * &>(pAllocateInfo) );
	Node_t* pDescriptorSets_node = _FindByAttribName( root, "DescriptorSet" );
	VkDescriptorSet *  pDescriptorSets = {};
	_ParseResources( pDescriptorSets_node, OUT const_cast<VkDescriptorSet * &>(pDescriptorSets), INOUT pAllocateInfo->descriptorSetCount );
	for (auto listener : _listeners) {
		listener->AllocateDescriptorSets( _chunkCounter, threadId, timestamp, device, pAllocateInfo, pDescriptorSets );
	}
	return true;
}

bool RdCaptureReader::Parse_vkUpdateDescriptorSets (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* descriptorWriteCount_node = _FindByAttribName( root, "writeCount" );
	uint32_t  descriptorWriteCount = {};
	_ParseValue( descriptorWriteCount_node, OUT descriptorWriteCount );
	Node_t* pDescriptorWrites_node = _FindByAttribName( root, "pDescriptorWrites" );
	VkWriteDescriptorSet *  pDescriptorWrites = {};
	_ParseStructArray( pDescriptorWrites_node, OUT const_cast<VkWriteDescriptorSet * &>(pDescriptorWrites), INOUT descriptorWriteCount );
	Node_t* descriptorCopyCount_node = _FindByAttribName( root, "copyCount" );
	uint32_t  descriptorCopyCount = {};
	_ParseValue( descriptorCopyCount_node, OUT descriptorCopyCount );
	Node_t* pDescriptorCopies_node = _FindByAttribName( root, "pDescriptorCopies" );
	VkCopyDescriptorSet *  pDescriptorCopies = {};
	_ParseStructArray( pDescriptorCopies_node, OUT const_cast<VkCopyDescriptorSet * &>(pDescriptorCopies), INOUT descriptorCopyCount );
	for (auto listener : _listeners) {
		listener->UpdateDescriptorSets( _chunkCounter, threadId, timestamp, device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies );
	}
	return true;
}

bool RdCaptureReader::Parse_vkBeginCommandBuffer (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "CommandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pBeginInfo_node = _FindByAttribName( root, "BeginInfo" );
	VkCommandBufferBeginInfo *  pBeginInfo = {};
	_ParseStruct( pBeginInfo_node, OUT const_cast<VkCommandBufferBeginInfo * &>(pBeginInfo) );
	for (auto listener : _listeners) {
		listener->BeginCommandBuffer( _chunkCounter, threadId, timestamp, commandBuffer, pBeginInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkEndCommandBuffer (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "CommandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	for (auto listener : _listeners) {
		listener->EndCommandBuffer( _chunkCounter, threadId, timestamp, commandBuffer );
	}
	return true;
}

bool RdCaptureReader::Parse_vkQueueWaitIdle (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* queue_node = _FindByAttribName( root, "queue" );
	VkQueue  queue = {};
	_ParseResource( queue_node, OUT queue );
	for (auto listener : _listeners) {
		listener->QueueWaitIdle( _chunkCounter, threadId, timestamp, queue );
	}
	return true;
}

bool RdCaptureReader::Parse_vkDeviceWaitIdle (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	for (auto listener : _listeners) {
		listener->DeviceWaitIdle( _chunkCounter, threadId, timestamp, device );
	}
	return true;
}

bool RdCaptureReader::Parse_vkQueueSubmit (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* queue_node = _FindByAttribName( root, "queue" );
	VkQueue  queue = {};
	_ParseResource( queue_node, OUT queue );
	Node_t* submitCount_node = _FindByAttribName( root, "submitCount" );
	uint32_t  submitCount = {};
	_ParseValue( submitCount_node, OUT submitCount );
	Node_t* pSubmits_node = _FindByAttribName( root, "pSubmits" );
	VkSubmitInfo *  pSubmits = {};
	_ParseStructArray( pSubmits_node, OUT const_cast<VkSubmitInfo * &>(pSubmits), INOUT submitCount );
	Node_t* fence_node = _FindByAttribName( root, "fence" );
	VkFence  fence = {};
	_ParseResource( fence_node, OUT fence );
	for (auto listener : _listeners) {
		listener->QueueSubmit( _chunkCounter, threadId, timestamp, queue, submitCount, pSubmits, fence );
	}
	return true;
}

bool RdCaptureReader::Parse_vkBindBufferMemory (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* buffer_node = _FindByAttribName( root, "buffer" );
	VkBuffer  buffer = {};
	_ParseResource( buffer_node, OUT buffer );
	Node_t* memory_node = _FindByAttribName( root, "memory" );
	VkDeviceMemory  memory = {};
	_ParseResource( memory_node, OUT memory );
	Node_t* memoryOffset_node = _FindByAttribName( root, "memoryOffset" );
	VkDeviceSize  memoryOffset = {};
	_ParseValue( memoryOffset_node, OUT memoryOffset );
	for (auto listener : _listeners) {
		listener->BindBufferMemory( _chunkCounter, threadId, timestamp, device, buffer, memory, memoryOffset );
	}
	return true;
}

bool RdCaptureReader::Parse_vkBindImageMemory (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* image_node = _FindByAttribName( root, "image" );
	VkImage  image = {};
	_ParseResource( image_node, OUT image );
	Node_t* memory_node = _FindByAttribName( root, "memory" );
	VkDeviceMemory  memory = {};
	_ParseResource( memory_node, OUT memory );
	Node_t* memoryOffset_node = _FindByAttribName( root, "memoryOffset" );
	VkDeviceSize  memoryOffset = {};
	_ParseValue( memoryOffset_node, OUT memoryOffset );
	for (auto listener : _listeners) {
		listener->BindImageMemory( _chunkCounter, threadId, timestamp, device, image, memory, memoryOffset );
	}
	return true;
}

bool RdCaptureReader::Parse_vkQueueBindSparse (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* queue_node = _FindByAttribName( root, "queue" );
	VkQueue  queue = {};
	_ParseResource( queue_node, OUT queue );
	Node_t* bindInfoCount_node = _FindByAttribName( root, "bindInfoCount" );
	uint32_t  bindInfoCount = {};
	_ParseValue( bindInfoCount_node, OUT bindInfoCount );
	Node_t* pBindInfo_node = _FindByAttribName( root, "pBindInfo" );
	VkBindSparseInfo *  pBindInfo = {};
	_ParseStructArray( pBindInfo_node, OUT const_cast<VkBindSparseInfo * &>(pBindInfo), INOUT bindInfoCount );
	Node_t* fence_node = _FindByAttribName( root, "fence" );
	VkFence  fence = {};
	_ParseResource( fence_node, OUT fence );
	for (auto listener : _listeners) {
		listener->QueueBindSparse( _chunkCounter, threadId, timestamp, queue, bindInfoCount, pBindInfo, fence );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBeginRenderPass (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pRenderPassBegin_node = _FindByAttribName( root, "RenderPassBegin" );
	VkRenderPassBeginInfo *  pRenderPassBegin = {};
	_ParseStruct( pRenderPassBegin_node, OUT const_cast<VkRenderPassBeginInfo * &>(pRenderPassBegin) );
	Node_t* contents_node = _FindByAttribName( root, "contents" );
	VkSubpassContents  contents = {};
	_ParseValue( contents_node, OUT contents );
	for (auto listener : _listeners) {
		listener->CmdBeginRenderPass( _chunkCounter, threadId, timestamp, commandBuffer, pRenderPassBegin, contents );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdNextSubpass (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* contents_node = _FindByAttribName( root, "contents" );
	VkSubpassContents  contents = {};
	_ParseValue( contents_node, OUT contents );
	for (auto listener : _listeners) {
		listener->CmdNextSubpass( _chunkCounter, threadId, timestamp, commandBuffer, contents );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdExecuteCommands (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* commandBufferCount_node = _FindByAttribName( root, "commandBufferCount" );
	uint32_t  commandBufferCount = {};
	_ParseValue( commandBufferCount_node, OUT commandBufferCount );
	Node_t* pCommandBuffers_node = _FindByAttribName( root, "CommandBuffer" );
	VkCommandBuffer *  pCommandBuffers = {};
	_ParseResources( pCommandBuffers_node, OUT const_cast<VkCommandBuffer * &>(pCommandBuffers), INOUT commandBufferCount );
	for (auto listener : _listeners) {
		listener->CmdExecuteCommands( _chunkCounter, threadId, timestamp, commandBuffer, commandBufferCount, pCommandBuffers );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdEndRenderPass (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	for (auto listener : _listeners) {
		listener->CmdEndRenderPass( _chunkCounter, threadId, timestamp, commandBuffer );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBindPipeline (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pipelineBindPoint_node = _FindByAttribName( root, "pipelineBindPoint" );
	VkPipelineBindPoint  pipelineBindPoint = {};
	_ParseValue( pipelineBindPoint_node, OUT pipelineBindPoint );
	Node_t* pipeline_node = _FindByAttribName( root, "pipeline" );
	VkPipeline  pipeline = {};
	_ParseResource( pipeline_node, OUT pipeline );
	for (auto listener : _listeners) {
		listener->CmdBindPipeline( _chunkCounter, threadId, timestamp, commandBuffer, pipelineBindPoint, pipeline );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetViewport (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* firstViewport_node = _FindByAttribName( root, "firstViewport" );
	uint32_t  firstViewport = {};
	_ParseValue( firstViewport_node, OUT firstViewport );
	Node_t* viewportCount_node = _FindByAttribName( root, "viewportCount" );
	uint32_t  viewportCount = {};
	_ParseValue( viewportCount_node, OUT viewportCount );
	Node_t* pViewports_node = _FindByAttribName( root, "pViewports" );
	VkViewport *  pViewports = {};
	_ParseStructArray( pViewports_node, OUT const_cast<VkViewport * &>(pViewports), INOUT viewportCount );
	for (auto listener : _listeners) {
		listener->CmdSetViewport( _chunkCounter, threadId, timestamp, commandBuffer, firstViewport, viewportCount, pViewports );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetScissor (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* firstScissor_node = _FindByAttribName( root, "firstScissor" );
	uint32_t  firstScissor = {};
	_ParseValue( firstScissor_node, OUT firstScissor );
	Node_t* scissorCount_node = _FindByAttribName( root, "scissorCount" );
	uint32_t  scissorCount = {};
	_ParseValue( scissorCount_node, OUT scissorCount );
	Node_t* pScissors_node = _FindByAttribName( root, "pScissors" );
	VkRect2D *  pScissors = {};
	_ParseStructArray( pScissors_node, OUT const_cast<VkRect2D * &>(pScissors), INOUT scissorCount );
	for (auto listener : _listeners) {
		listener->CmdSetScissor( _chunkCounter, threadId, timestamp, commandBuffer, firstScissor, scissorCount, pScissors );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetLineWidth (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* lineWidth_node = _FindByAttribName( root, "lineWidth" );
	float  lineWidth = {};
	_ParseValue( lineWidth_node, OUT lineWidth );
	for (auto listener : _listeners) {
		listener->CmdSetLineWidth( _chunkCounter, threadId, timestamp, commandBuffer, lineWidth );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetDepthBias (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* depthBiasConstantFactor_node = _FindByAttribName( root, "depthBias" );
	float  depthBiasConstantFactor = {};
	_ParseValue( depthBiasConstantFactor_node, OUT depthBiasConstantFactor );
	Node_t* depthBiasClamp_node = _FindByAttribName( root, "depthBiasClamp" );
	float  depthBiasClamp = {};
	_ParseValue( depthBiasClamp_node, OUT depthBiasClamp );
	Node_t* depthBiasSlopeFactor_node = _FindByAttribName( root, "slopeScaledDepthBias" );
	float  depthBiasSlopeFactor = {};
	_ParseValue( depthBiasSlopeFactor_node, OUT depthBiasSlopeFactor );
	for (auto listener : _listeners) {
		listener->CmdSetDepthBias( _chunkCounter, threadId, timestamp, commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetBlendConstants (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* blendConstants_node = _FindByAttribName( root, "blendConst" );
	float  blendConstants[4] = {};
	_ParseValue( blendConstants_node, OUT blendConstants );
	for (auto listener : _listeners) {
		listener->CmdSetBlendConstants( _chunkCounter, threadId, timestamp, commandBuffer, blendConstants );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetDepthBounds (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* minDepthBounds_node = _FindByAttribName( root, "minDepthBounds" );
	float  minDepthBounds = {};
	_ParseValue( minDepthBounds_node, OUT minDepthBounds );
	Node_t* maxDepthBounds_node = _FindByAttribName( root, "maxDepthBounds" );
	float  maxDepthBounds = {};
	_ParseValue( maxDepthBounds_node, OUT maxDepthBounds );
	for (auto listener : _listeners) {
		listener->CmdSetDepthBounds( _chunkCounter, threadId, timestamp, commandBuffer, minDepthBounds, maxDepthBounds );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetStencilCompareMask (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* faceMask_node = _FindByAttribName( root, "faceMask" );
	VkStencilFaceFlags  faceMask = {};
	_ParseValue( faceMask_node, OUT faceMask );
	Node_t* compareMask_node = _FindByAttribName( root, "compareMask" );
	uint32_t  compareMask = {};
	_ParseValue( compareMask_node, OUT compareMask );
	for (auto listener : _listeners) {
		listener->CmdSetStencilCompareMask( _chunkCounter, threadId, timestamp, commandBuffer, faceMask, compareMask );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetStencilWriteMask (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* faceMask_node = _FindByAttribName( root, "faceMask" );
	VkStencilFaceFlags  faceMask = {};
	_ParseValue( faceMask_node, OUT faceMask );
	Node_t* writeMask_node = _FindByAttribName( root, "writeMask" );
	uint32_t  writeMask = {};
	_ParseValue( writeMask_node, OUT writeMask );
	for (auto listener : _listeners) {
		listener->CmdSetStencilWriteMask( _chunkCounter, threadId, timestamp, commandBuffer, faceMask, writeMask );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetStencilReference (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* faceMask_node = _FindByAttribName( root, "faceMask" );
	VkStencilFaceFlags  faceMask = {};
	_ParseValue( faceMask_node, OUT faceMask );
	Node_t* reference_node = _FindByAttribName( root, "reference" );
	uint32_t  reference = {};
	_ParseValue( reference_node, OUT reference );
	for (auto listener : _listeners) {
		listener->CmdSetStencilReference( _chunkCounter, threadId, timestamp, commandBuffer, faceMask, reference );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBindDescriptorSets (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pipelineBindPoint_node = _FindByAttribName( root, "pipelineBindPoint" );
	VkPipelineBindPoint  pipelineBindPoint = {};
	_ParseValue( pipelineBindPoint_node, OUT pipelineBindPoint );
	Node_t* layout_node = _FindByAttribName( root, "layout" );
	VkPipelineLayout  layout = {};
	_ParseResource( layout_node, OUT layout );
	Node_t* firstSet_node = _FindByAttribName( root, "firstSet" );
	uint32_t  firstSet = {};
	_ParseValue( firstSet_node, OUT firstSet );
	Node_t* descriptorSetCount_node = _FindByAttribName( root, "setCount" );
	uint32_t  descriptorSetCount = {};
	_ParseValue( descriptorSetCount_node, OUT descriptorSetCount );
	Node_t* pDescriptorSets_node = _FindByAttribName( root, "pDescriptorSets" );
	VkDescriptorSet *  pDescriptorSets = {};
	_ParseResources( pDescriptorSets_node, OUT const_cast<VkDescriptorSet * &>(pDescriptorSets), INOUT descriptorSetCount );
	Node_t* dynamicOffsetCount_node = _FindByAttribName( root, "dynamicOffsetCount" );
	uint32_t  dynamicOffsetCount = {};
	_ParseValue( dynamicOffsetCount_node, OUT dynamicOffsetCount );
	Node_t* pDynamicOffsets_node = _FindByAttribName( root, "pDynamicOffsets" );
	uint32_t *  pDynamicOffsets = {};
	_ParseArray( pDynamicOffsets_node, OUT const_cast<uint32_t * &>(pDynamicOffsets), INOUT dynamicOffsetCount );
	for (auto listener : _listeners) {
		listener->CmdBindDescriptorSets( _chunkCounter, threadId, timestamp, commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBindVertexBuffers (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* firstBinding_node = _FindByAttribName( root, "firstBinding" );
	uint32_t  firstBinding = {};
	_ParseValue( firstBinding_node, OUT firstBinding );
	Node_t* bindingCount_node = _FindByAttribName( root, "bindingCount" );
	uint32_t  bindingCount = {};
	_ParseValue( bindingCount_node, OUT bindingCount );
	Node_t* pBuffers_node = _FindByAttribName( root, "pBuffers" );
	VkBuffer *  pBuffers = {};
	_ParseResources( pBuffers_node, OUT const_cast<VkBuffer * &>(pBuffers), INOUT bindingCount );
	Node_t* pOffsets_node = _FindByAttribName( root, "pOffsets" );
	VkDeviceSize *  pOffsets = {};
	_ParseArray( pOffsets_node, OUT const_cast<VkDeviceSize * &>(pOffsets), INOUT bindingCount );
	for (auto listener : _listeners) {
		listener->CmdBindVertexBuffers( _chunkCounter, threadId, timestamp, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBindIndexBuffer (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* buffer_node = _FindByAttribName( root, "buffer" );
	VkBuffer  buffer = {};
	_ParseResource( buffer_node, OUT buffer );
	Node_t* offset_node = _FindByAttribName( root, "offset" );
	VkDeviceSize  offset = {};
	_ParseValue( offset_node, OUT offset );
	Node_t* indexType_node = _FindByAttribName( root, "indexType" );
	VkIndexType  indexType = {};
	_ParseValue( indexType_node, OUT indexType );
	for (auto listener : _listeners) {
		listener->CmdBindIndexBuffer( _chunkCounter, threadId, timestamp, commandBuffer, buffer, offset, indexType );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdCopyBufferToImage (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* srcBuffer_node = _FindByAttribName( root, "srcBuffer" );
	VkBuffer  srcBuffer = {};
	_ParseResource( srcBuffer_node, OUT srcBuffer );
	Node_t* dstImage_node = _FindByAttribName( root, "destImage" );
	VkImage  dstImage = {};
	_ParseResource( dstImage_node, OUT dstImage );
	Node_t* dstImageLayout_node = _FindByAttribName( root, "destImageLayout" );
	VkImageLayout  dstImageLayout = {};
	_ParseValue( dstImageLayout_node, OUT dstImageLayout );
	Node_t* regionCount_node = _FindByAttribName( root, "regionCount" );
	uint32_t  regionCount = {};
	_ParseValue( regionCount_node, OUT regionCount );
	Node_t* pRegions_node = _FindByAttribName( root, "pRegions" );
	VkBufferImageCopy *  pRegions = {};
	_ParseStructArray( pRegions_node, OUT const_cast<VkBufferImageCopy * &>(pRegions), INOUT regionCount );
	for (auto listener : _listeners) {
		listener->CmdCopyBufferToImage( _chunkCounter, threadId, timestamp, commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdCopyImageToBuffer (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* srcImage_node = _FindByAttribName( root, "srcImage" );
	VkImage  srcImage = {};
	_ParseResource( srcImage_node, OUT srcImage );
	Node_t* srcImageLayout_node = _FindByAttribName( root, "srcImageLayout" );
	VkImageLayout  srcImageLayout = {};
	_ParseValue( srcImageLayout_node, OUT srcImageLayout );
	Node_t* dstBuffer_node = _FindByAttribName( root, "destBuffer" );
	VkBuffer  dstBuffer = {};
	_ParseResource( dstBuffer_node, OUT dstBuffer );
	Node_t* regionCount_node = _FindByAttribName( root, "regionCount" );
	uint32_t  regionCount = {};
	_ParseValue( regionCount_node, OUT regionCount );
	Node_t* pRegions_node = _FindByAttribName( root, "pRegions" );
	VkBufferImageCopy *  pRegions = {};
	_ParseStructArray( pRegions_node, OUT const_cast<VkBufferImageCopy * &>(pRegions), INOUT regionCount );
	for (auto listener : _listeners) {
		listener->CmdCopyImageToBuffer( _chunkCounter, threadId, timestamp, commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdCopyBuffer (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* srcBuffer_node = _FindByAttribName( root, "srcBuffer" );
	VkBuffer  srcBuffer = {};
	_ParseResource( srcBuffer_node, OUT srcBuffer );
	Node_t* dstBuffer_node = _FindByAttribName( root, "destBuffer" );
	VkBuffer  dstBuffer = {};
	_ParseResource( dstBuffer_node, OUT dstBuffer );
	Node_t* regionCount_node = _FindByAttribName( root, "regionCount" );
	uint32_t  regionCount = {};
	_ParseValue( regionCount_node, OUT regionCount );
	Node_t* pRegions_node = _FindByAttribName( root, "pRegions" );
	VkBufferCopy *  pRegions = {};
	_ParseStructArray( pRegions_node, OUT const_cast<VkBufferCopy * &>(pRegions), INOUT regionCount );
	for (auto listener : _listeners) {
		listener->CmdCopyBuffer( _chunkCounter, threadId, timestamp, commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdCopyImage (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* srcImage_node = _FindByAttribName( root, "srcImage" );
	VkImage  srcImage = {};
	_ParseResource( srcImage_node, OUT srcImage );
	Node_t* srcImageLayout_node = _FindByAttribName( root, "srcImageLayout" );
	VkImageLayout  srcImageLayout = {};
	_ParseValue( srcImageLayout_node, OUT srcImageLayout );
	Node_t* dstImage_node = _FindByAttribName( root, "destImage" );
	VkImage  dstImage = {};
	_ParseResource( dstImage_node, OUT dstImage );
	Node_t* dstImageLayout_node = _FindByAttribName( root, "destImageLayout" );
	VkImageLayout  dstImageLayout = {};
	_ParseValue( dstImageLayout_node, OUT dstImageLayout );
	Node_t* regionCount_node = _FindByAttribName( root, "regionCount" );
	uint32_t  regionCount = {};
	_ParseValue( regionCount_node, OUT regionCount );
	Node_t* pRegions_node = _FindByAttribName( root, "pRegions" );
	VkImageCopy *  pRegions = {};
	_ParseStructArray( pRegions_node, OUT const_cast<VkImageCopy * &>(pRegions), INOUT regionCount );
	for (auto listener : _listeners) {
		listener->CmdCopyImage( _chunkCounter, threadId, timestamp, commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBlitImage (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* srcImage_node = _FindByAttribName( root, "srcImage" );
	VkImage  srcImage = {};
	_ParseResource( srcImage_node, OUT srcImage );
	Node_t* srcImageLayout_node = _FindByAttribName( root, "srcImageLayout" );
	VkImageLayout  srcImageLayout = {};
	_ParseValue( srcImageLayout_node, OUT srcImageLayout );
	Node_t* dstImage_node = _FindByAttribName( root, "destImage" );
	VkImage  dstImage = {};
	_ParseResource( dstImage_node, OUT dstImage );
	Node_t* dstImageLayout_node = _FindByAttribName( root, "destImageLayout" );
	VkImageLayout  dstImageLayout = {};
	_ParseValue( dstImageLayout_node, OUT dstImageLayout );
	Node_t* regionCount_node = _FindByAttribName( root, "regionCount" );
	uint32_t  regionCount = {};
	_ParseValue( regionCount_node, OUT regionCount );
	Node_t* pRegions_node = _FindByAttribName( root, "pRegions" );
	VkImageBlit *  pRegions = {};
	_ParseStructArray( pRegions_node, OUT const_cast<VkImageBlit * &>(pRegions), INOUT regionCount );
	Node_t* filter_node = _FindByAttribName( root, "filter" );
	VkFilter  filter = {};
	_ParseValue( filter_node, OUT filter );
	for (auto listener : _listeners) {
		listener->CmdBlitImage( _chunkCounter, threadId, timestamp, commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdResolveImage (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* srcImage_node = _FindByAttribName( root, "srcImage" );
	VkImage  srcImage = {};
	_ParseResource( srcImage_node, OUT srcImage );
	Node_t* srcImageLayout_node = _FindByAttribName( root, "srcImageLayout" );
	VkImageLayout  srcImageLayout = {};
	_ParseValue( srcImageLayout_node, OUT srcImageLayout );
	Node_t* dstImage_node = _FindByAttribName( root, "destImage" );
	VkImage  dstImage = {};
	_ParseResource( dstImage_node, OUT dstImage );
	Node_t* dstImageLayout_node = _FindByAttribName( root, "destImageLayout" );
	VkImageLayout  dstImageLayout = {};
	_ParseValue( dstImageLayout_node, OUT dstImageLayout );
	Node_t* regionCount_node = _FindByAttribName( root, "regionCount" );
	uint32_t  regionCount = {};
	_ParseValue( regionCount_node, OUT regionCount );
	Node_t* pRegions_node = _FindByAttribName( root, "pRegions" );
	VkImageResolve *  pRegions = {};
	_ParseStructArray( pRegions_node, OUT const_cast<VkImageResolve * &>(pRegions), INOUT regionCount );
	for (auto listener : _listeners) {
		listener->CmdResolveImage( _chunkCounter, threadId, timestamp, commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdUpdateBuffer (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* dstBuffer_node = _FindByAttribName( root, "destBuffer" );
	VkBuffer  dstBuffer = {};
	_ParseResource( dstBuffer_node, OUT dstBuffer );
	Node_t* dstOffset_node = _FindByAttribName( root, "dstOffset" );
	VkDeviceSize  dstOffset = {};
	_ParseValue( dstOffset_node, OUT dstOffset );
	Node_t* dataSize_node = _FindByAttribName( root, "dataSize" );
	VkDeviceSize  dataSize = {};
	_ParseValue( dataSize_node, OUT dataSize );
	Node_t* pData_node = _FindByAttribName( root, "pData" );
	void *  pData = {};
	_ParseArray( pData_node, OUT const_cast<void * &>(pData), INOUT dataSize );
	for (auto listener : _listeners) {
		listener->CmdUpdateBuffer( _chunkCounter, threadId, timestamp, commandBuffer, dstBuffer, dstOffset, dataSize, pData );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdFillBuffer (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* dstBuffer_node = _FindByAttribName( root, "destBuffer" );
	VkBuffer  dstBuffer = {};
	_ParseResource( dstBuffer_node, OUT dstBuffer );
	Node_t* dstOffset_node = _FindByAttribName( root, "dstOffset" );
	VkDeviceSize  dstOffset = {};
	_ParseValue( dstOffset_node, OUT dstOffset );
	Node_t* size_node = _FindByAttribName( root, "size" );
	VkDeviceSize  size = {};
	_ParseValue( size_node, OUT size );
	Node_t* data_node = _FindByAttribName( root, "data" );
	uint32_t  data = {};
	_ParseValue( data_node, OUT data );
	for (auto listener : _listeners) {
		listener->CmdFillBuffer( _chunkCounter, threadId, timestamp, commandBuffer, dstBuffer, dstOffset, size, data );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdPushConstants (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* layout_node = _FindByAttribName( root, "layout" );
	VkPipelineLayout  layout = {};
	_ParseResource( layout_node, OUT layout );
	Node_t* stageFlags_node = _FindByAttribName( root, "stageFlags" );
	VkShaderStageFlags  stageFlags = {};
	_ParseValue( stageFlags_node, OUT stageFlags );
	Node_t* offset_node = _FindByAttribName( root, "start" );
	uint32_t  offset = {};
	_ParseValue( offset_node, OUT offset );
	Node_t* size_node = _FindByAttribName( root, "length" );
	uint32_t  size = {};
	_ParseValue( size_node, OUT size );
	Node_t* pValues_node = _FindByAttribName( root, "values" );
	void *  pValues = {};
	_ParseArray( pValues_node, OUT const_cast<void * &>(pValues), INOUT size );
	for (auto listener : _listeners) {
		listener->CmdPushConstants( _chunkCounter, threadId, timestamp, commandBuffer, layout, stageFlags, offset, size, pValues );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdClearColorImage (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* image_node = _FindByAttribName( root, "image" );
	VkImage  image = {};
	_ParseResource( image_node, OUT image );
	Node_t* imageLayout_node = _FindByAttribName( root, "imageLayout" );
	VkImageLayout  imageLayout = {};
	_ParseValue( imageLayout_node, OUT imageLayout );
	Node_t* pColor_node = _FindByAttribName( root, "pColor" );
	VkClearColorValue *  pColor = {};
	_ParseStruct( pColor_node, OUT const_cast<VkClearColorValue * &>(pColor) );
	Node_t* rangeCount_node = _FindByAttribName( root, "rangeCount" );
	uint32_t  rangeCount = {};
	_ParseValue( rangeCount_node, OUT rangeCount );
	Node_t* pRanges_node = _FindByAttribName( root, "pRanges" );
	VkImageSubresourceRange *  pRanges = {};
	_ParseStructArray( pRanges_node, OUT const_cast<VkImageSubresourceRange * &>(pRanges), INOUT rangeCount );
	for (auto listener : _listeners) {
		listener->CmdClearColorImage( _chunkCounter, threadId, timestamp, commandBuffer, image, imageLayout, pColor, rangeCount, pRanges );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdClearDepthStencilImage (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* image_node = _FindByAttribName( root, "image" );
	VkImage  image = {};
	_ParseResource( image_node, OUT image );
	Node_t* imageLayout_node = _FindByAttribName( root, "imageLayout" );
	VkImageLayout  imageLayout = {};
	_ParseValue( imageLayout_node, OUT imageLayout );
	Node_t* pDepthStencil_node = _FindByAttribName( root, "pDepthStencil" );
	VkClearDepthStencilValue *  pDepthStencil = {};
	_ParseStruct( pDepthStencil_node, OUT const_cast<VkClearDepthStencilValue * &>(pDepthStencil) );
	Node_t* rangeCount_node = _FindByAttribName( root, "rangeCount" );
	uint32_t  rangeCount = {};
	_ParseValue( rangeCount_node, OUT rangeCount );
	Node_t* pRanges_node = _FindByAttribName( root, "pRanges" );
	VkImageSubresourceRange *  pRanges = {};
	_ParseStructArray( pRanges_node, OUT const_cast<VkImageSubresourceRange * &>(pRanges), INOUT rangeCount );
	for (auto listener : _listeners) {
		listener->CmdClearDepthStencilImage( _chunkCounter, threadId, timestamp, commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdClearAttachments (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* attachmentCount_node = _FindByAttribName( root, "attachmentCount" );
	uint32_t  attachmentCount = {};
	_ParseValue( attachmentCount_node, OUT attachmentCount );
	Node_t* pAttachments_node = _FindByAttribName( root, "pAttachments" );
	VkClearAttachment *  pAttachments = {};
	_ParseStructArray( pAttachments_node, OUT const_cast<VkClearAttachment * &>(pAttachments), INOUT attachmentCount );
	Node_t* rectCount_node = _FindByAttribName( root, "rectCount" );
	uint32_t  rectCount = {};
	_ParseValue( rectCount_node, OUT rectCount );
	Node_t* pRects_node = _FindByAttribName( root, "pRects" );
	VkClearRect *  pRects = {};
	_ParseStructArray( pRects_node, OUT const_cast<VkClearRect * &>(pRects), INOUT rectCount );
	for (auto listener : _listeners) {
		listener->CmdClearAttachments( _chunkCounter, threadId, timestamp, commandBuffer, attachmentCount, pAttachments, rectCount, pRects );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdPipelineBarrier (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* srcStageMask_node = _FindByAttribName( root, "srcStageMask" );
	VkPipelineStageFlags  srcStageMask = {};
	_ParseValue( srcStageMask_node, OUT srcStageMask );
	Node_t* dstStageMask_node = _FindByAttribName( root, "destStageMask" );
	VkPipelineStageFlags  dstStageMask = {};
	_ParseValue( dstStageMask_node, OUT dstStageMask );
	Node_t* dependencyFlags_node = _FindByAttribName( root, "dependencyFlags" );
	VkDependencyFlags  dependencyFlags = {};
	_ParseValue( dependencyFlags_node, OUT dependencyFlags );
	Node_t* memoryBarrierCount_node = _FindByAttribName( root, "memoryBarrierCount" );
	uint32_t  memoryBarrierCount = {};
	_ParseValue( memoryBarrierCount_node, OUT memoryBarrierCount );
	Node_t* pMemoryBarriers_node = _FindByAttribName( root, "pMemoryBarriers" );
	VkMemoryBarrier *  pMemoryBarriers = {};
	_ParseStructArray( pMemoryBarriers_node, OUT const_cast<VkMemoryBarrier * &>(pMemoryBarriers), INOUT memoryBarrierCount );
	Node_t* bufferMemoryBarrierCount_node = _FindByAttribName( root, "bufferMemoryBarrierCount" );
	uint32_t  bufferMemoryBarrierCount = {};
	_ParseValue( bufferMemoryBarrierCount_node, OUT bufferMemoryBarrierCount );
	Node_t* pBufferMemoryBarriers_node = _FindByAttribName( root, "pBufferMemoryBarriers" );
	VkBufferMemoryBarrier *  pBufferMemoryBarriers = {};
	_ParseStructArray( pBufferMemoryBarriers_node, OUT const_cast<VkBufferMemoryBarrier * &>(pBufferMemoryBarriers), INOUT bufferMemoryBarrierCount );
	Node_t* imageMemoryBarrierCount_node = _FindByAttribName( root, "imageMemoryBarrierCount" );
	uint32_t  imageMemoryBarrierCount = {};
	_ParseValue( imageMemoryBarrierCount_node, OUT imageMemoryBarrierCount );
	Node_t* pImageMemoryBarriers_node = _FindByAttribName( root, "pImageMemoryBarriers" );
	VkImageMemoryBarrier *  pImageMemoryBarriers = {};
	_ParseStructArray( pImageMemoryBarriers_node, OUT const_cast<VkImageMemoryBarrier * &>(pImageMemoryBarriers), INOUT imageMemoryBarrierCount );
	for (auto listener : _listeners) {
		listener->CmdPipelineBarrier( _chunkCounter, threadId, timestamp, commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdWriteTimestamp (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pipelineStage_node = _FindByAttribName( root, "pipelineStage" );
	VkPipelineStageFlagBits  pipelineStage = {};
	_ParseValue( pipelineStage_node, OUT pipelineStage );
	Node_t* queryPool_node = _FindByAttribName( root, "queryPool" );
	VkQueryPool  queryPool = {};
	_ParseResource( queryPool_node, OUT queryPool );
	Node_t* query_node = _FindByAttribName( root, "query" );
	uint32_t  query = {};
	_ParseValue( query_node, OUT query );
	for (auto listener : _listeners) {
		listener->CmdWriteTimestamp( _chunkCounter, threadId, timestamp, commandBuffer, pipelineStage, queryPool, query );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdCopyQueryPoolResults (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* queryPool_node = _FindByAttribName( root, "queryPool" );
	VkQueryPool  queryPool = {};
	_ParseResource( queryPool_node, OUT queryPool );
	Node_t* firstQuery_node = _FindByAttribName( root, "firstQuery" );
	uint32_t  firstQuery = {};
	_ParseValue( firstQuery_node, OUT firstQuery );
	Node_t* queryCount_node = _FindByAttribName( root, "queryCount" );
	uint32_t  queryCount = {};
	_ParseValue( queryCount_node, OUT queryCount );
	Node_t* dstBuffer_node = _FindByAttribName( root, "destBuffer" );
	VkBuffer  dstBuffer = {};
	_ParseResource( dstBuffer_node, OUT dstBuffer );
	Node_t* dstOffset_node = _FindByAttribName( root, "dstOffset" );
	VkDeviceSize  dstOffset = {};
	_ParseValue( dstOffset_node, OUT dstOffset );
	Node_t* stride_node = _FindByAttribName( root, "stride" );
	VkDeviceSize  stride = {};
	_ParseValue( stride_node, OUT stride );
	Node_t* flags_node = _FindByAttribName( root, "flags" );
	VkQueryResultFlags  flags = {};
	_ParseValue( flags_node, OUT flags );
	for (auto listener : _listeners) {
		listener->CmdCopyQueryPoolResults( _chunkCounter, threadId, timestamp, commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBeginQuery (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* queryPool_node = _FindByAttribName( root, "queryPool" );
	VkQueryPool  queryPool = {};
	_ParseResource( queryPool_node, OUT queryPool );
	Node_t* query_node = _FindByAttribName( root, "query" );
	uint32_t  query = {};
	_ParseValue( query_node, OUT query );
	Node_t* flags_node = _FindByAttribName( root, "flags" );
	VkQueryControlFlags  flags = {};
	_ParseValue( flags_node, OUT flags );
	for (auto listener : _listeners) {
		listener->CmdBeginQuery( _chunkCounter, threadId, timestamp, commandBuffer, queryPool, query, flags );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdEndQuery (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* queryPool_node = _FindByAttribName( root, "queryPool" );
	VkQueryPool  queryPool = {};
	_ParseResource( queryPool_node, OUT queryPool );
	Node_t* query_node = _FindByAttribName( root, "query" );
	uint32_t  query = {};
	_ParseValue( query_node, OUT query );
	for (auto listener : _listeners) {
		listener->CmdEndQuery( _chunkCounter, threadId, timestamp, commandBuffer, queryPool, query );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdResetQueryPool (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* queryPool_node = _FindByAttribName( root, "queryPool" );
	VkQueryPool  queryPool = {};
	_ParseResource( queryPool_node, OUT queryPool );
	Node_t* firstQuery_node = _FindByAttribName( root, "firstQuery" );
	uint32_t  firstQuery = {};
	_ParseValue( firstQuery_node, OUT firstQuery );
	Node_t* queryCount_node = _FindByAttribName( root, "queryCount" );
	uint32_t  queryCount = {};
	_ParseValue( queryCount_node, OUT queryCount );
	for (auto listener : _listeners) {
		listener->CmdResetQueryPool( _chunkCounter, threadId, timestamp, commandBuffer, queryPool, firstQuery, queryCount );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetEvent (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* event_node = _FindByAttribName( root, "event" );
	VkEvent  event = {};
	_ParseResource( event_node, OUT event );
	Node_t* stageMask_node = _FindByAttribName( root, "stageMask" );
	VkPipelineStageFlags  stageMask = {};
	_ParseValue( stageMask_node, OUT stageMask );
	for (auto listener : _listeners) {
		listener->CmdSetEvent( _chunkCounter, threadId, timestamp, commandBuffer, event, stageMask );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdResetEvent (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* event_node = _FindByAttribName( root, "event" );
	VkEvent  event = {};
	_ParseResource( event_node, OUT event );
	Node_t* stageMask_node = _FindByAttribName( root, "stageMask" );
	VkPipelineStageFlags  stageMask = {};
	_ParseValue( stageMask_node, OUT stageMask );
	for (auto listener : _listeners) {
		listener->CmdResetEvent( _chunkCounter, threadId, timestamp, commandBuffer, event, stageMask );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdWaitEvents (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* eventCount_node = _FindByAttribName( root, "eventCount" );
	uint32_t  eventCount = {};
	_ParseValue( eventCount_node, OUT eventCount );
	Node_t* pEvents_node = _FindByAttribName( root, "pEvents" );
	VkEvent *  pEvents = {};
	_ParseResources( pEvents_node, OUT const_cast<VkEvent * &>(pEvents), INOUT eventCount );
	Node_t* srcStageMask_node = _FindByAttribName( root, "srcStageMask" );
	VkPipelineStageFlags  srcStageMask = {};
	_ParseValue( srcStageMask_node, OUT srcStageMask );
	Node_t* dstStageMask_node = _FindByAttribName( root, "destStageMask" );
	VkPipelineStageFlags  dstStageMask = {};
	_ParseValue( dstStageMask_node, OUT dstStageMask );
	Node_t* memoryBarrierCount_node = _FindByAttribName( root, "memoryBarrierCount" );
	uint32_t  memoryBarrierCount = {};
	_ParseValue( memoryBarrierCount_node, OUT memoryBarrierCount );
	Node_t* pMemoryBarriers_node = _FindByAttribName( root, "pMemoryBarriers" );
	VkMemoryBarrier *  pMemoryBarriers = {};
	_ParseStructArray( pMemoryBarriers_node, OUT const_cast<VkMemoryBarrier * &>(pMemoryBarriers), INOUT memoryBarrierCount );
	Node_t* bufferMemoryBarrierCount_node = _FindByAttribName( root, "bufferMemoryBarrierCount" );
	uint32_t  bufferMemoryBarrierCount = {};
	_ParseValue( bufferMemoryBarrierCount_node, OUT bufferMemoryBarrierCount );
	Node_t* pBufferMemoryBarriers_node = _FindByAttribName( root, "pBufferMemoryBarriers" );
	VkBufferMemoryBarrier *  pBufferMemoryBarriers = {};
	_ParseStructArray( pBufferMemoryBarriers_node, OUT const_cast<VkBufferMemoryBarrier * &>(pBufferMemoryBarriers), INOUT bufferMemoryBarrierCount );
	Node_t* imageMemoryBarrierCount_node = _FindByAttribName( root, "imageMemoryBarrierCount" );
	uint32_t  imageMemoryBarrierCount = {};
	_ParseValue( imageMemoryBarrierCount_node, OUT imageMemoryBarrierCount );
	Node_t* pImageMemoryBarriers_node = _FindByAttribName( root, "pImageMemoryBarriers" );
	VkImageMemoryBarrier *  pImageMemoryBarriers = {};
	_ParseStructArray( pImageMemoryBarriers_node, OUT const_cast<VkImageMemoryBarrier * &>(pImageMemoryBarriers), INOUT imageMemoryBarrierCount );
	for (auto listener : _listeners) {
		listener->CmdWaitEvents( _chunkCounter, threadId, timestamp, commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDraw (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* vertexCount_node = _FindByAttribName( root, "vertexCount" );
	uint32_t  vertexCount = {};
	_ParseValue( vertexCount_node, OUT vertexCount );
	Node_t* instanceCount_node = _FindByAttribName( root, "instanceCount" );
	uint32_t  instanceCount = {};
	_ParseValue( instanceCount_node, OUT instanceCount );
	Node_t* firstVertex_node = _FindByAttribName( root, "firstVertex" );
	uint32_t  firstVertex = {};
	_ParseValue( firstVertex_node, OUT firstVertex );
	Node_t* firstInstance_node = _FindByAttribName( root, "firstInstance" );
	uint32_t  firstInstance = {};
	_ParseValue( firstInstance_node, OUT firstInstance );
	for (auto listener : _listeners) {
		listener->CmdDraw( _chunkCounter, threadId, timestamp, commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDrawIndirect (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* buffer_node = _FindByAttribName( root, "buffer" );
	VkBuffer  buffer = {};
	_ParseResource( buffer_node, OUT buffer );
	Node_t* offset_node = _FindByAttribName( root, "offset" );
	VkDeviceSize  offset = {};
	_ParseValue( offset_node, OUT offset );
	Node_t* drawCount_node = _FindByAttribName( root, "drawCount" );
	uint32_t  drawCount = {};
	_ParseValue( drawCount_node, OUT drawCount );
	Node_t* stride_node = _FindByAttribName( root, "stride" );
	uint32_t  stride = {};
	_ParseValue( stride_node, OUT stride );
	for (auto listener : _listeners) {
		listener->CmdDrawIndirect( _chunkCounter, threadId, timestamp, commandBuffer, buffer, offset, drawCount, stride );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDrawIndexed (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* indexCount_node = _FindByAttribName( root, "indexCount" );
	uint32_t  indexCount = {};
	_ParseValue( indexCount_node, OUT indexCount );
	Node_t* instanceCount_node = _FindByAttribName( root, "instanceCount" );
	uint32_t  instanceCount = {};
	_ParseValue( instanceCount_node, OUT instanceCount );
	Node_t* firstIndex_node = _FindByAttribName( root, "firstIndex" );
	uint32_t  firstIndex = {};
	_ParseValue( firstIndex_node, OUT firstIndex );
	Node_t* vertexOffset_node = _FindByAttribName( root, "vertexOffset" );
	int32_t  vertexOffset = {};
	_ParseValue( vertexOffset_node, OUT vertexOffset );
	Node_t* firstInstance_node = _FindByAttribName( root, "firstInstance" );
	uint32_t  firstInstance = {};
	_ParseValue( firstInstance_node, OUT firstInstance );
	for (auto listener : _listeners) {
		listener->CmdDrawIndexed( _chunkCounter, threadId, timestamp, commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDrawIndexedIndirect (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* buffer_node = _FindByAttribName( root, "buffer" );
	VkBuffer  buffer = {};
	_ParseResource( buffer_node, OUT buffer );
	Node_t* offset_node = _FindByAttribName( root, "offset" );
	VkDeviceSize  offset = {};
	_ParseValue( offset_node, OUT offset );
	Node_t* drawCount_node = _FindByAttribName( root, "count" );
	uint32_t  drawCount = {};
	_ParseValue( drawCount_node, OUT drawCount );
	Node_t* stride_node = _FindByAttribName( root, "stride" );
	uint32_t  stride = {};
	_ParseValue( stride_node, OUT stride );
	for (auto listener : _listeners) {
		listener->CmdDrawIndexedIndirect( _chunkCounter, threadId, timestamp, commandBuffer, buffer, offset, drawCount, stride );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDispatch (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* groupCountX_node = _FindByAttribName( root, "x" );
	uint32_t  groupCountX = {};
	_ParseValue( groupCountX_node, OUT groupCountX );
	Node_t* groupCountY_node = _FindByAttribName( root, "y" );
	uint32_t  groupCountY = {};
	_ParseValue( groupCountY_node, OUT groupCountY );
	Node_t* groupCountZ_node = _FindByAttribName( root, "z" );
	uint32_t  groupCountZ = {};
	_ParseValue( groupCountZ_node, OUT groupCountZ );
	for (auto listener : _listeners) {
		listener->CmdDispatch( _chunkCounter, threadId, timestamp, commandBuffer, groupCountX, groupCountY, groupCountZ );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDispatchIndirect (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* buffer_node = _FindByAttribName( root, "buffer" );
	VkBuffer  buffer = {};
	_ParseResource( buffer_node, OUT buffer );
	Node_t* offset_node = _FindByAttribName( root, "offset" );
	VkDeviceSize  offset = {};
	_ParseValue( offset_node, OUT offset );
	for (auto listener : _listeners) {
		listener->CmdDispatchIndirect( _chunkCounter, threadId, timestamp, commandBuffer, buffer, offset );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDebugMarkerBeginEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pMarkerInfo_node = _FindByAttribName( root, "pMarker" );
	VkDebugMarkerMarkerInfoEXT *  pMarkerInfo = {};
	_ParseStruct( pMarkerInfo_node, OUT const_cast<VkDebugMarkerMarkerInfoEXT * &>(pMarkerInfo) );
	for (auto listener : _listeners) {
		listener->CmdDebugMarkerBeginEXT( _chunkCounter, threadId, timestamp, commandBuffer, pMarkerInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDebugMarkerInsertEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pMarkerInfo_node = _FindByAttribName( root, "pMarkerInfo" );
	VkDebugMarkerMarkerInfoEXT *  pMarkerInfo = {};
	_ParseStruct( pMarkerInfo_node, OUT const_cast<VkDebugMarkerMarkerInfoEXT * &>(pMarkerInfo) );
	for (auto listener : _listeners) {
		listener->CmdDebugMarkerInsertEXT( _chunkCounter, threadId, timestamp, commandBuffer, pMarkerInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDebugMarkerEndEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	for (auto listener : _listeners) {
		listener->CmdDebugMarkerEndEXT( _chunkCounter, threadId, timestamp, commandBuffer );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateSwapchainKHR (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkSwapchainCreateInfoKHR *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkSwapchainCreateInfoKHR * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pSwapchain_node = _FindByAttribName( root, "SwapChain" );
	VkSwapchainKHR *  pSwapchain = {};
	_ParseResource( pSwapchain_node, OUT const_cast<VkSwapchainKHR * &>(pSwapchain) );
	for (auto listener : _listeners) {
		listener->CreateSwapchainKHR( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pSwapchain );
	}
	return true;
}

bool RdCaptureReader::Parse_vkRegisterDeviceEventEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pDeviceEventInfo_node = _FindByAttribName( root, "pDeviceEventInfo" );
	VkDeviceEventInfoEXT *  pDeviceEventInfo = {};
	_ParseStruct( pDeviceEventInfo_node, OUT const_cast<VkDeviceEventInfoEXT * &>(pDeviceEventInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pFence_node = _FindByAttribName( root, "pFence" );
	VkFence *  pFence = {};
	_ParseResource( pFence_node, OUT const_cast<VkFence * &>(pFence) );
	for (auto listener : _listeners) {
		listener->RegisterDeviceEventEXT( _chunkCounter, threadId, timestamp, device, pDeviceEventInfo, pAllocator, pFence );
	}
	return true;
}

bool RdCaptureReader::Parse_vkRegisterDisplayEventEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* display_node = _FindByAttribName( root, "display" );
	VkDisplayKHR  display = {};
	_ParseResource( display_node, OUT display );
	Node_t* pDisplayEventInfo_node = _FindByAttribName( root, "pDisplayEventInfo" );
	VkDisplayEventInfoEXT *  pDisplayEventInfo = {};
	_ParseStruct( pDisplayEventInfo_node, OUT const_cast<VkDisplayEventInfoEXT * &>(pDisplayEventInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pFence_node = _FindByAttribName( root, "pFence" );
	VkFence *  pFence = {};
	_ParseResource( pFence_node, OUT const_cast<VkFence * &>(pFence) );
	for (auto listener : _listeners) {
		listener->RegisterDisplayEventEXT( _chunkCounter, threadId, timestamp, device, display, pDisplayEventInfo, pAllocator, pFence );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdPushDescriptorSetKHR (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pipelineBindPoint_node = _FindByAttribName( root, "pipelineBindPoint" );
	VkPipelineBindPoint  pipelineBindPoint = {};
	_ParseValue( pipelineBindPoint_node, OUT pipelineBindPoint );
	Node_t* layout_node = _FindByAttribName( root, "layout" );
	VkPipelineLayout  layout = {};
	_ParseResource( layout_node, OUT layout );
	Node_t* set_node = _FindByAttribName( root, "set" );
	uint32_t  set = {};
	_ParseValue( set_node, OUT set );
	Node_t* descriptorWriteCount_node = _FindByAttribName( root, "descriptorWriteCount" );
	uint32_t  descriptorWriteCount = {};
	_ParseValue( descriptorWriteCount_node, OUT descriptorWriteCount );
	Node_t* pDescriptorWrites_node = _FindByAttribName( root, "pDescriptorWrites" );
	VkWriteDescriptorSet *  pDescriptorWrites = {};
	_ParseStructArray( pDescriptorWrites_node, OUT const_cast<VkWriteDescriptorSet * &>(pDescriptorWrites), INOUT descriptorWriteCount );
	for (auto listener : _listeners) {
		listener->CmdPushDescriptorSetKHR( _chunkCounter, threadId, timestamp, commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateDescriptorUpdateTemplate (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkDescriptorUpdateTemplateCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkDescriptorUpdateTemplateCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pDescriptorUpdateTemplate_node = _FindByAttribName( root, "DescriptorUpdateTemplate" );
	VkDescriptorUpdateTemplate *  pDescriptorUpdateTemplate = {};
	_ParseResource( pDescriptorUpdateTemplate_node, OUT const_cast<VkDescriptorUpdateTemplate * &>(pDescriptorUpdateTemplate) );
	for (auto listener : _listeners) {
		listener->CreateDescriptorUpdateTemplate( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate );
	}
	return true;
}

bool RdCaptureReader::Parse_vkBindBufferMemory2 (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* bindInfoCount_node = _FindByAttribName( root, "bindInfoCount" );
	uint32_t  bindInfoCount = {};
	_ParseValue( bindInfoCount_node, OUT bindInfoCount );
	Node_t* pBindInfos_node = _FindByAttribName( root, "pBindInfos" );
	VkBindBufferMemoryInfo *  pBindInfos = {};
	_ParseStructArray( pBindInfos_node, OUT const_cast<VkBindBufferMemoryInfo * &>(pBindInfos), INOUT bindInfoCount );
	for (auto listener : _listeners) {
		listener->BindBufferMemory2( _chunkCounter, threadId, timestamp, device, bindInfoCount, pBindInfos );
	}
	return true;
}

bool RdCaptureReader::Parse_vkBindImageMemory2 (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* bindInfoCount_node = _FindByAttribName( root, "bindInfoCount" );
	uint32_t  bindInfoCount = {};
	_ParseValue( bindInfoCount_node, OUT bindInfoCount );
	Node_t* pBindInfos_node = _FindByAttribName( root, "pBindInfos" );
	VkBindImageMemoryInfo *  pBindInfos = {};
	_ParseStructArray( pBindInfos_node, OUT const_cast<VkBindImageMemoryInfo * &>(pBindInfos), INOUT bindInfoCount );
	for (auto listener : _listeners) {
		listener->BindImageMemory2( _chunkCounter, threadId, timestamp, device, bindInfoCount, pBindInfos );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdWriteBufferMarkerAMD (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pipelineStage_node = _FindByAttribName( root, "pipelineStage" );
	VkPipelineStageFlagBits  pipelineStage = {};
	_ParseValue( pipelineStage_node, OUT pipelineStage );
	Node_t* dstBuffer_node = _FindByAttribName( root, "destBuffer" );
	VkBuffer  dstBuffer = {};
	_ParseResource( dstBuffer_node, OUT dstBuffer );
	Node_t* dstOffset_node = _FindByAttribName( root, "dstOffset" );
	VkDeviceSize  dstOffset = {};
	_ParseValue( dstOffset_node, OUT dstOffset );
	Node_t* marker_node = _FindByAttribName( root, "marker" );
	uint32_t  marker = {};
	_ParseValue( marker_node, OUT marker );
	for (auto listener : _listeners) {
		listener->CmdWriteBufferMarkerAMD( _chunkCounter, threadId, timestamp, commandBuffer, pipelineStage, dstBuffer, dstOffset, marker );
	}
	return true;
}

bool RdCaptureReader::Parse_vkSetDebugUtilsObjectNameEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pNameInfo_node = _FindByAttribName( root, "pNameInfo" );
	VkDebugUtilsObjectNameInfoEXT *  pNameInfo = {};
	_ParseStruct( pNameInfo_node, OUT const_cast<VkDebugUtilsObjectNameInfoEXT * &>(pNameInfo) );
	for (auto listener : _listeners) {
		listener->SetDebugUtilsObjectNameEXT( _chunkCounter, threadId, timestamp, device, pNameInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkQueueBeginDebugUtilsLabelEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* queue_node = _FindByAttribName( root, "queue" );
	VkQueue  queue = {};
	_ParseResource( queue_node, OUT queue );
	Node_t* pLabelInfo_node = _FindByAttribName( root, "pLabelInfo" );
	VkDebugUtilsLabelEXT *  pLabelInfo = {};
	_ParseStruct( pLabelInfo_node, OUT const_cast<VkDebugUtilsLabelEXT * &>(pLabelInfo) );
	for (auto listener : _listeners) {
		listener->QueueBeginDebugUtilsLabelEXT( _chunkCounter, threadId, timestamp, queue, pLabelInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkQueueEndDebugUtilsLabelEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* queue_node = _FindByAttribName( root, "queue" );
	VkQueue  queue = {};
	_ParseResource( queue_node, OUT queue );
	for (auto listener : _listeners) {
		listener->QueueEndDebugUtilsLabelEXT( _chunkCounter, threadId, timestamp, queue );
	}
	return true;
}

bool RdCaptureReader::Parse_vkQueueInsertDebugUtilsLabelEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* queue_node = _FindByAttribName( root, "queue" );
	VkQueue  queue = {};
	_ParseResource( queue_node, OUT queue );
	Node_t* pLabelInfo_node = _FindByAttribName( root, "pLabelInfo" );
	VkDebugUtilsLabelEXT *  pLabelInfo = {};
	_ParseStruct( pLabelInfo_node, OUT const_cast<VkDebugUtilsLabelEXT * &>(pLabelInfo) );
	for (auto listener : _listeners) {
		listener->QueueInsertDebugUtilsLabelEXT( _chunkCounter, threadId, timestamp, queue, pLabelInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBeginDebugUtilsLabelEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pLabelInfo_node = _FindByAttribName( root, "pLabelInfo" );
	VkDebugUtilsLabelEXT *  pLabelInfo = {};
	_ParseStruct( pLabelInfo_node, OUT const_cast<VkDebugUtilsLabelEXT * &>(pLabelInfo) );
	for (auto listener : _listeners) {
		listener->CmdBeginDebugUtilsLabelEXT( _chunkCounter, threadId, timestamp, commandBuffer, pLabelInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdEndDebugUtilsLabelEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	for (auto listener : _listeners) {
		listener->CmdEndDebugUtilsLabelEXT( _chunkCounter, threadId, timestamp, commandBuffer );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdInsertDebugUtilsLabelEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pLabelInfo_node = _FindByAttribName( root, "pLabelInfo" );
	VkDebugUtilsLabelEXT *  pLabelInfo = {};
	_ParseStruct( pLabelInfo_node, OUT const_cast<VkDebugUtilsLabelEXT * &>(pLabelInfo) );
	for (auto listener : _listeners) {
		listener->CmdInsertDebugUtilsLabelEXT( _chunkCounter, threadId, timestamp, commandBuffer, pLabelInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateSamplerYcbcrConversion (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkSamplerYcbcrConversionCreateInfo *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkSamplerYcbcrConversionCreateInfo * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pYcbcrConversion_node = _FindByAttribName( root, "YcbcrConversion" );
	VkSamplerYcbcrConversion *  pYcbcrConversion = {};
	_ParseResource( pYcbcrConversion_node, OUT const_cast<VkSamplerYcbcrConversion * &>(pYcbcrConversion) );
	for (auto listener : _listeners) {
		listener->CreateSamplerYcbcrConversion( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pYcbcrConversion );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetDeviceMask (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* deviceMask_node = _FindByAttribName( root, "deviceMask" );
	uint32_t  deviceMask = {};
	_ParseValue( deviceMask_node, OUT deviceMask );
	for (auto listener : _listeners) {
		listener->CmdSetDeviceMask( _chunkCounter, threadId, timestamp, commandBuffer, deviceMask );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDispatchBase (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* baseGroupX_node = _FindByAttribName( root, "baseGroupX" );
	uint32_t  baseGroupX = {};
	_ParseValue( baseGroupX_node, OUT baseGroupX );
	Node_t* baseGroupY_node = _FindByAttribName( root, "baseGroupY" );
	uint32_t  baseGroupY = {};
	_ParseValue( baseGroupY_node, OUT baseGroupY );
	Node_t* baseGroupZ_node = _FindByAttribName( root, "baseGroupZ" );
	uint32_t  baseGroupZ = {};
	_ParseValue( baseGroupZ_node, OUT baseGroupZ );
	Node_t* groupCountX_node = _FindByAttribName( root, "groupCountX" );
	uint32_t  groupCountX = {};
	_ParseValue( groupCountX_node, OUT groupCountX );
	Node_t* groupCountY_node = _FindByAttribName( root, "groupCountY" );
	uint32_t  groupCountY = {};
	_ParseValue( groupCountY_node, OUT groupCountY );
	Node_t* groupCountZ_node = _FindByAttribName( root, "groupCountZ" );
	uint32_t  groupCountZ = {};
	_ParseValue( groupCountZ_node, OUT groupCountZ );
	for (auto listener : _listeners) {
		listener->CmdDispatchBase( _chunkCounter, threadId, timestamp, commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ );
	}
	return true;
}

bool RdCaptureReader::Parse_vkGetDeviceQueue2 (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pQueueInfo_node = _FindByAttribName( root, "pQueueInfo" );
	VkDeviceQueueInfo2 *  pQueueInfo = {};
	_ParseStruct( pQueueInfo_node, OUT const_cast<VkDeviceQueueInfo2 * &>(pQueueInfo) );
	Node_t* pQueue_node = _FindByAttribName( root, "Queue" );
	VkQueue *  pQueue = {};
	_ParseResource( pQueue_node, OUT const_cast<VkQueue * &>(pQueue) );
	for (auto listener : _listeners) {
		listener->GetDeviceQueue2( _chunkCounter, threadId, timestamp, device, pQueueInfo, pQueue );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDrawIndirectCountKHR (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* buffer_node = _FindByAttribName( root, "buffer" );
	VkBuffer  buffer = {};
	_ParseResource( buffer_node, OUT buffer );
	Node_t* offset_node = _FindByAttribName( root, "offset" );
	VkDeviceSize  offset = {};
	_ParseValue( offset_node, OUT offset );
	Node_t* countBuffer_node = _FindByAttribName( root, "countBuffer" );
	VkBuffer  countBuffer = {};
	_ParseResource( countBuffer_node, OUT countBuffer );
	Node_t* countBufferOffset_node = _FindByAttribName( root, "countBufferOffset" );
	VkDeviceSize  countBufferOffset = {};
	_ParseValue( countBufferOffset_node, OUT countBufferOffset );
	Node_t* maxDrawCount_node = _FindByAttribName( root, "maxDrawCount" );
	uint32_t  maxDrawCount = {};
	_ParseValue( maxDrawCount_node, OUT maxDrawCount );
	Node_t* stride_node = _FindByAttribName( root, "stride" );
	uint32_t  stride = {};
	_ParseValue( stride_node, OUT stride );
	for (auto listener : _listeners) {
		listener->CmdDrawIndirectCountKHR( _chunkCounter, threadId, timestamp, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDrawIndexedIndirectCountKHR (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* buffer_node = _FindByAttribName( root, "buffer" );
	VkBuffer  buffer = {};
	_ParseResource( buffer_node, OUT buffer );
	Node_t* offset_node = _FindByAttribName( root, "offset" );
	VkDeviceSize  offset = {};
	_ParseValue( offset_node, OUT offset );
	Node_t* countBuffer_node = _FindByAttribName( root, "countBuffer" );
	VkBuffer  countBuffer = {};
	_ParseResource( countBuffer_node, OUT countBuffer );
	Node_t* countBufferOffset_node = _FindByAttribName( root, "countBufferOffset" );
	VkDeviceSize  countBufferOffset = {};
	_ParseValue( countBufferOffset_node, OUT countBufferOffset );
	Node_t* maxDrawCount_node = _FindByAttribName( root, "maxDrawCount" );
	uint32_t  maxDrawCount = {};
	_ParseValue( maxDrawCount_node, OUT maxDrawCount );
	Node_t* stride_node = _FindByAttribName( root, "stride" );
	uint32_t  stride = {};
	_ParseValue( stride_node, OUT stride );
	for (auto listener : _listeners) {
		listener->CmdDrawIndexedIndirectCountKHR( _chunkCounter, threadId, timestamp, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCreateRenderPass2KHR (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* pCreateInfo_node = _FindByAttribName( root, "CreateInfo" );
	VkRenderPassCreateInfo2KHR *  pCreateInfo = {};
	_ParseStruct( pCreateInfo_node, OUT const_cast<VkRenderPassCreateInfo2KHR * &>(pCreateInfo) );
	Node_t* pAllocator_node = _FindByAttribName( root, "pAllocator" );
	VkAllocationCallbacks *  pAllocator = {};
	_ParseStruct( pAllocator_node, OUT const_cast<VkAllocationCallbacks * &>(pAllocator) );
	Node_t* pRenderPass_node = _FindByAttribName( root, "RenderPass" );
	VkRenderPass *  pRenderPass = {};
	_ParseResource( pRenderPass_node, OUT const_cast<VkRenderPass * &>(pRenderPass) );
	for (auto listener : _listeners) {
		listener->CreateRenderPass2KHR( _chunkCounter, threadId, timestamp, device, pCreateInfo, pAllocator, pRenderPass );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBeginRenderPass2KHR (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pRenderPassBegin_node = _FindByAttribName( root, "RenderPassBegin" );
	VkRenderPassBeginInfo *  pRenderPassBegin = {};
	_ParseStruct( pRenderPassBegin_node, OUT const_cast<VkRenderPassBeginInfo * &>(pRenderPassBegin) );
	Node_t* pSubpassBeginInfo_node = _FindByAttribName( root, "pSubpassBeginInfo" );
	VkSubpassBeginInfoKHR *  pSubpassBeginInfo = {};
	_ParseStruct( pSubpassBeginInfo_node, OUT const_cast<VkSubpassBeginInfoKHR * &>(pSubpassBeginInfo) );
	for (auto listener : _listeners) {
		listener->CmdBeginRenderPass2KHR( _chunkCounter, threadId, timestamp, commandBuffer, pRenderPassBegin, pSubpassBeginInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdNextSubpass2KHR (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pSubpassBeginInfo_node = _FindByAttribName( root, "pSubpassBeginInfo" );
	VkSubpassBeginInfoKHR *  pSubpassBeginInfo = {};
	_ParseStruct( pSubpassBeginInfo_node, OUT const_cast<VkSubpassBeginInfoKHR * &>(pSubpassBeginInfo) );
	Node_t* pSubpassEndInfo_node = _FindByAttribName( root, "pSubpassEndInfo" );
	VkSubpassEndInfoKHR *  pSubpassEndInfo = {};
	_ParseStruct( pSubpassEndInfo_node, OUT const_cast<VkSubpassEndInfoKHR * &>(pSubpassEndInfo) );
	for (auto listener : _listeners) {
		listener->CmdNextSubpass2KHR( _chunkCounter, threadId, timestamp, commandBuffer, pSubpassBeginInfo, pSubpassEndInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdEndRenderPass2KHR (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pSubpassEndInfo_node = _FindByAttribName( root, "pSubpassEndInfo" );
	VkSubpassEndInfoKHR *  pSubpassEndInfo = {};
	_ParseStruct( pSubpassEndInfo_node, OUT const_cast<VkSubpassEndInfoKHR * &>(pSubpassEndInfo) );
	for (auto listener : _listeners) {
		listener->CmdEndRenderPass2KHR( _chunkCounter, threadId, timestamp, commandBuffer, pSubpassEndInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBindTransformFeedbackBuffersEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* firstBinding_node = _FindByAttribName( root, "firstBinding" );
	uint32_t  firstBinding = {};
	_ParseValue( firstBinding_node, OUT firstBinding );
	Node_t* bindingCount_node = _FindByAttribName( root, "bindingCount" );
	uint32_t  bindingCount = {};
	_ParseValue( bindingCount_node, OUT bindingCount );
	Node_t* pBuffers_node = _FindByAttribName( root, "pBuffers" );
	VkBuffer *  pBuffers = {};
	_ParseResources( pBuffers_node, OUT const_cast<VkBuffer * &>(pBuffers), INOUT bindingCount );
	Node_t* pOffsets_node = _FindByAttribName( root, "pOffsets" );
	VkDeviceSize *  pOffsets = {};
	_ParseArray( pOffsets_node, OUT const_cast<VkDeviceSize * &>(pOffsets), INOUT bindingCount );
	Node_t* pSizes_node = _FindByAttribName( root, "pSizes" );
	VkDeviceSize *  pSizes = {};
	_ParseArray( pSizes_node, OUT const_cast<VkDeviceSize * &>(pSizes), INOUT bindingCount );
	for (auto listener : _listeners) {
		listener->CmdBindTransformFeedbackBuffersEXT( _chunkCounter, threadId, timestamp, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBeginQueryIndexedEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* queryPool_node = _FindByAttribName( root, "queryPool" );
	VkQueryPool  queryPool = {};
	_ParseResource( queryPool_node, OUT queryPool );
	Node_t* query_node = _FindByAttribName( root, "query" );
	uint32_t  query = {};
	_ParseValue( query_node, OUT query );
	Node_t* flags_node = _FindByAttribName( root, "flags" );
	VkQueryControlFlags  flags = {};
	_ParseValue( flags_node, OUT flags );
	Node_t* index_node = _FindByAttribName( root, "index" );
	uint32_t  index = {};
	_ParseValue( index_node, OUT index );
	for (auto listener : _listeners) {
		listener->CmdBeginQueryIndexedEXT( _chunkCounter, threadId, timestamp, commandBuffer, queryPool, query, flags, index );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdEndQueryIndexedEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* queryPool_node = _FindByAttribName( root, "queryPool" );
	VkQueryPool  queryPool = {};
	_ParseResource( queryPool_node, OUT queryPool );
	Node_t* query_node = _FindByAttribName( root, "query" );
	uint32_t  query = {};
	_ParseValue( query_node, OUT query );
	Node_t* index_node = _FindByAttribName( root, "index" );
	uint32_t  index = {};
	_ParseValue( index_node, OUT index );
	for (auto listener : _listeners) {
		listener->CmdEndQueryIndexedEXT( _chunkCounter, threadId, timestamp, commandBuffer, queryPool, query, index );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdDrawIndirectByteCountEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* instanceCount_node = _FindByAttribName( root, "instanceCount" );
	uint32_t  instanceCount = {};
	_ParseValue( instanceCount_node, OUT instanceCount );
	Node_t* firstInstance_node = _FindByAttribName( root, "firstInstance" );
	uint32_t  firstInstance = {};
	_ParseValue( firstInstance_node, OUT firstInstance );
	Node_t* counterBuffer_node = _FindByAttribName( root, "counterBuffer" );
	VkBuffer  counterBuffer = {};
	_ParseResource( counterBuffer_node, OUT counterBuffer );
	Node_t* counterBufferOffset_node = _FindByAttribName( root, "counterBufferOffset" );
	VkDeviceSize  counterBufferOffset = {};
	_ParseValue( counterBufferOffset_node, OUT counterBufferOffset );
	Node_t* counterOffset_node = _FindByAttribName( root, "counterOffset" );
	uint32_t  counterOffset = {};
	_ParseValue( counterOffset_node, OUT counterOffset );
	Node_t* vertexStride_node = _FindByAttribName( root, "vertexStride" );
	uint32_t  vertexStride = {};
	_ParseValue( vertexStride_node, OUT vertexStride );
	for (auto listener : _listeners) {
		listener->CmdDrawIndirectByteCountEXT( _chunkCounter, threadId, timestamp, commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdBeginConditionalRenderingEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pConditionalRenderingBegin_node = _FindByAttribName( root, "pConditionalRenderingBegin" );
	VkConditionalRenderingBeginInfoEXT *  pConditionalRenderingBegin = {};
	_ParseStruct( pConditionalRenderingBegin_node, OUT const_cast<VkConditionalRenderingBeginInfoEXT * &>(pConditionalRenderingBegin) );
	for (auto listener : _listeners) {
		listener->CmdBeginConditionalRenderingEXT( _chunkCounter, threadId, timestamp, commandBuffer, pConditionalRenderingBegin );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdEndConditionalRenderingEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	for (auto listener : _listeners) {
		listener->CmdEndConditionalRenderingEXT( _chunkCounter, threadId, timestamp, commandBuffer );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetSampleLocationsEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* pSampleLocationsInfo_node = _FindByAttribName( root, "pSampleLocationsInfo" );
	VkSampleLocationsInfoEXT *  pSampleLocationsInfo = {};
	_ParseStruct( pSampleLocationsInfo_node, OUT const_cast<VkSampleLocationsInfoEXT * &>(pSampleLocationsInfo) );
	for (auto listener : _listeners) {
		listener->CmdSetSampleLocationsEXT( _chunkCounter, threadId, timestamp, commandBuffer, pSampleLocationsInfo );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetDiscardRectangleEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* firstDiscardRectangle_node = _FindByAttribName( root, "firstDiscardRectangle" );
	uint32_t  firstDiscardRectangle = {};
	_ParseValue( firstDiscardRectangle_node, OUT firstDiscardRectangle );
	Node_t* discardRectangleCount_node = _FindByAttribName( root, "discardRectangleCount" );
	uint32_t  discardRectangleCount = {};
	_ParseValue( discardRectangleCount_node, OUT discardRectangleCount );
	Node_t* pDiscardRectangles_node = _FindByAttribName( root, "pDiscardRectangles" );
	VkRect2D *  pDiscardRectangles = {};
	_ParseStructArray( pDiscardRectangles_node, OUT const_cast<VkRect2D * &>(pDiscardRectangles), INOUT discardRectangleCount );
	for (auto listener : _listeners) {
		listener->CmdSetDiscardRectangleEXT( _chunkCounter, threadId, timestamp, commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles );
	}
	return true;
}

bool RdCaptureReader::Parse_vkResetQueryPoolEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* device_node = _FindByAttribName( root, "device" );
	VkDevice  device = {};
	_ParseResource( device_node, OUT device );
	Node_t* queryPool_node = _FindByAttribName( root, "queryPool" );
	VkQueryPool  queryPool = {};
	_ParseResource( queryPool_node, OUT queryPool );
	Node_t* firstQuery_node = _FindByAttribName( root, "firstQuery" );
	uint32_t  firstQuery = {};
	_ParseValue( firstQuery_node, OUT firstQuery );
	Node_t* queryCount_node = _FindByAttribName( root, "queryCount" );
	uint32_t  queryCount = {};
	_ParseValue( queryCount_node, OUT queryCount );
	for (auto listener : _listeners) {
		listener->ResetQueryPoolEXT( _chunkCounter, threadId, timestamp, device, queryPool, firstQuery, queryCount );
	}
	return true;
}

bool RdCaptureReader::Parse_vkCmdSetLineStippleEXT (const Node_t &root, uint64_t threadId, uint64_t timestamp)
{
	Node_t* commandBuffer_node = _FindByAttribName( root, "commandBuffer" );
	VkCommandBuffer  commandBuffer = {};
	_ParseResource( commandBuffer_node, OUT commandBuffer );
	Node_t* lineStippleFactor_node = _FindByAttribName( root, "lineStippleFactor" );
	uint32_t  lineStippleFactor = {};
	_ParseValue( lineStippleFactor_node, OUT lineStippleFactor );
	Node_t* lineStipplePattern_node = _FindByAttribName( root, "lineStipplePattern" );
	uint16_t  lineStipplePattern = {};
	_ParseValue( lineStipplePattern_node, OUT lineStipplePattern );
	for (auto listener : _listeners) {
		listener->CmdSetLineStippleEXT( _chunkCounter, threadId, timestamp, commandBuffer, lineStippleFactor, lineStipplePattern );
	}
	return true;
}

#pragma warning (pop)
