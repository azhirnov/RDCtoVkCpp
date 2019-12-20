// auto-generated file

#pragma warning (push)
#pragma warning (disable: 4100)

void CreateDevice (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDevice * pDevice) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_DEVICE, VkResourceID(*pDevice), chunkIndex );
	result << indent << "VK_CALL( vkCreateDevice( \n";
	result << indent << "		/*physicalDevice*/ " << remapper( VK_OBJECT_TYPE_PHYSICAL_DEVICE, physicalDevice );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pDevice*/ " << "&" << remapper( VK_OBJECT_TYPE_DEVICE, *pDevice, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void GetDeviceQueue (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkGetDeviceQueue( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*queueFamilyIndex*/ " << IntToString(queueFamilyIndex);
	result << ",\n";
	result << indent << "		/*queueIndex*/ " << IntToString(queueIndex);
	result << ",\n";
	result << indent << "		/*pQueue*/ " << "&" << remapper( VK_OBJECT_TYPE_QUEUE, *pQueue, true );
	result << " );\n";
	result << "	}\n";
	FlushGlobal();
}

void AllocateMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkMemoryAllocateInfo * pAllocateInfo, const VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pAllocateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pAllocateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_DEVICE_MEMORY, VkResourceID(*pMemory), chunkIndex );
	result << indent << "VK_CALL( app.vkAllocateMemory( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pAllocateInfo*/ " << nameSer.GetPtr(pAllocateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pMemory*/ " << "&" << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, *pMemory, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void UnmapMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkDeviceMemory memory) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkUnmapMemory( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*memory*/ " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, memory );
	result << " );\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateCommandPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkCommandPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCommandPool * pCommandPool) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_COMMAND_POOL, VkResourceID(*pCommandPool), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateCommandPool( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pCommandPool*/ " << "&" << remapper( VK_OBJECT_TYPE_COMMAND_POOL, *pCommandPool, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void ResetCommandPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "VK_CALL( app.vkResetCommandPool( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*commandPool*/ " << remapper( VK_OBJECT_TYPE_COMMAND_POOL, commandPool );
	result << ",\n";
	result << indent << "		/*flags*/ " << Serialize_VkCommandPoolResetFlags(flags);
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void AllocateCommandBuffers (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pAllocateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pAllocateInfo), nameSer, remapper, indent );
	}
	for (uint i = 0; i < pAllocateInfo->commandBufferCount; ++i) {
		remapper.CreateResource( VK_OBJECT_TYPE_COMMAND_BUFFER, VkResourceID(pCommandBuffers[i]), chunkIndex );
	}
	before << indent << "VkCommandBuffer " << nameSer.MakeUnique( &pCommandBuffers, "commandBuffers"s, "commandBuffer"s ) << "[" << IntToString(pAllocateInfo->commandBufferCount) << "] = {};\n";
	result << indent << "VK_CALL( app.vkAllocateCommandBuffers( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pAllocateInfo*/ " << nameSer.GetPtr(pAllocateInfo);
	result << ",\n";
	result << indent << "		/*pCommandBuffers*/ " << nameSer.Get( &pCommandBuffers );
	result << " ));\n";
	for (uint i = 0; i < pAllocateInfo->commandBufferCount; ++i) {
		result << indent << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, pCommandBuffers[i], true ) << " = " << nameSer.Get( &pCommandBuffers ) << "[" << IntToString(i) << "];\n";
	}
	result << "	}\n";
	FlushGlobal();
}

void CreateFramebuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkFramebufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_FRAMEBUFFER, VkResourceID(*pFramebuffer), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateFramebuffer( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pFramebuffer*/ " << "&" << remapper( VK_OBJECT_TYPE_FRAMEBUFFER, *pFramebuffer, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkRenderPassCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_RENDER_PASS, VkResourceID(*pRenderPass), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateRenderPass( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pRenderPass*/ " << "&" << remapper( VK_OBJECT_TYPE_RENDER_PASS, *pRenderPass, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateDescriptorPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_DESCRIPTOR_POOL, VkResourceID(*pDescriptorPool), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateDescriptorPool( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pDescriptorPool*/ " << "&" << remapper( VK_OBJECT_TYPE_DESCRIPTOR_POOL, *pDescriptorPool, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateDescriptorSetLayout (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT, VkResourceID(*pSetLayout), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateDescriptorSetLayout( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pSetLayout*/ " << "&" << remapper( VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT, *pSetLayout, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkBufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_BUFFER, VkResourceID(*pBuffer), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateBuffer( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pBuffer*/ " << "&" << remapper( VK_OBJECT_TYPE_BUFFER, *pBuffer, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateBufferView (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkBufferViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferView * pView) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_BUFFER_VIEW, VkResourceID(*pView), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateBufferView( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pView*/ " << "&" << remapper( VK_OBJECT_TYPE_BUFFER_VIEW, *pView, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkImageCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImage * pImage) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_IMAGE, VkResourceID(*pImage), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateImage( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pImage*/ " << "&" << remapper( VK_OBJECT_TYPE_IMAGE, *pImage, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateImageView (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkImageViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImageView * pView) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_IMAGE_VIEW, VkResourceID(*pView), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateImageView( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pView*/ " << "&" << remapper( VK_OBJECT_TYPE_IMAGE_VIEW, *pView, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateSampler (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSamplerCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSampler * pSampler) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_SAMPLER, VkResourceID(*pSampler), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateSampler( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pSampler*/ " << "&" << remapper( VK_OBJECT_TYPE_SAMPLER, *pSampler, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateShaderModule (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkShaderModule * pShaderModule) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_SHADER_MODULE, VkResourceID(*pShaderModule), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateShaderModule( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pShaderModule*/ " << "&" << remapper( VK_OBJECT_TYPE_SHADER_MODULE, *pShaderModule, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreatePipelineLayout (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkPipelineLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_PIPELINE_LAYOUT, VkResourceID(*pPipelineLayout), chunkIndex );
	result << indent << "VK_CALL( app.vkCreatePipelineLayout( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pPipelineLayout*/ " << "&" << remapper( VK_OBJECT_TYPE_PIPELINE_LAYOUT, *pPipelineLayout, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreatePipelineCache (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkPipelineCacheCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_PIPELINE_CACHE, VkResourceID(*pPipelineCache), chunkIndex );
	result << indent << "VK_CALL( app.vkCreatePipelineCache( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pPipelineCache*/ " << "&" << remapper( VK_OBJECT_TYPE_PIPELINE_CACHE, *pPipelineCache, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateGraphicsPipelines (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfos ) {
		CHECK( createInfoCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pCreateInfos, "createInfos"s, "graphicsPipelineCreateInfo"s, "createInfo"s );
		before << indent << "VkGraphicsPipelineCreateInfo  " << arr_name << "[" << IntToString(createInfoCount) << "] = {};\n";
		for (uint i = 0; i < createInfoCount; ++i) {
			Serialize2_VkGraphicsPipelineCreateInfo( pCreateInfos + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	for (uint i = 0; i < createInfoCount; ++i) {
		remapper.CreateResource( VK_OBJECT_TYPE_PIPELINE, VkResourceID(pPipelines[i]), chunkIndex );
	}
	before << indent << "VkPipeline " << nameSer.MakeUnique( &pPipelines, "pipelines"s, "pipeline"s ) << "[" << IntToString(createInfoCount) << "] = {};\n";
	result << indent << "VK_CALL( app.vkCreateGraphicsPipelines( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pipelineCache*/ " << remapper( VK_OBJECT_TYPE_PIPELINE_CACHE, pipelineCache );
	result << ",\n";
	result << indent << "		/*createInfoCount*/ " << IntToString(createInfoCount);
	result << ",\n";
	result << indent << "		/*pCreateInfos*/ " << nameSer.Get( &pCreateInfos );
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pPipelines*/ " << nameSer.Get( &pPipelines );
	result << " ));\n";
	for (uint i = 0; i < createInfoCount; ++i) {
		result << indent << remapper( VK_OBJECT_TYPE_PIPELINE, pPipelines[i], true ) << " = " << nameSer.Get( &pPipelines ) << "[" << IntToString(i) << "];\n";
	}
	result << "	}\n";
	FlushGlobal();
}

void CreateComputePipelines (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfos ) {
		CHECK( createInfoCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pCreateInfos, "createInfos"s, "computePipelineCreateInfo"s, "createInfo"s );
		before << indent << "VkComputePipelineCreateInfo  " << arr_name << "[" << IntToString(createInfoCount) << "] = {};\n";
		for (uint i = 0; i < createInfoCount; ++i) {
			Serialize2_VkComputePipelineCreateInfo( pCreateInfos + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	for (uint i = 0; i < createInfoCount; ++i) {
		remapper.CreateResource( VK_OBJECT_TYPE_PIPELINE, VkResourceID(pPipelines[i]), chunkIndex );
	}
	before << indent << "VkPipeline " << nameSer.MakeUnique( &pPipelines, "pipelines"s, "pipeline"s ) << "[" << IntToString(createInfoCount) << "] = {};\n";
	result << indent << "VK_CALL( app.vkCreateComputePipelines( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pipelineCache*/ " << remapper( VK_OBJECT_TYPE_PIPELINE_CACHE, pipelineCache );
	result << ",\n";
	result << indent << "		/*createInfoCount*/ " << IntToString(createInfoCount);
	result << ",\n";
	result << indent << "		/*pCreateInfos*/ " << nameSer.Get( &pCreateInfos );
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pPipelines*/ " << nameSer.Get( &pPipelines );
	result << " ));\n";
	for (uint i = 0; i < createInfoCount; ++i) {
		result << indent << remapper( VK_OBJECT_TYPE_PIPELINE, pPipelines[i], true ) << " = " << nameSer.Get( &pPipelines ) << "[" << IntToString(i) << "];\n";
	}
	result << "	}\n";
	FlushGlobal();
}

void GetSwapchainImagesKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	before << "	uint32_t " << nameSer.MakeUnique( &pSwapchainImageCount, "swapchainImageCount"s ) << " = {};\n";
	before << indent << "VkImage " << nameSer.MakeUnique( &pSwapchainImages, "swapchainImages"s, "image"s ) << "[" << IntToString(pSwapchainImageCount[0]) << "] = {};\n";
	result << indent << "VK_CALL( app.vkGetSwapchainImagesKHR( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*swapchain*/ " << remapper( VK_OBJECT_TYPE_SWAPCHAIN_KHR, swapchain );
	result << ",\n";
	result << indent << "		/*pSwapchainImageCount*/ " << nameSer.Get( &pSwapchainImageCount );
	result << ",\n";
	result << indent << "		/*pSwapchainImages*/ " << nameSer.Get( &pSwapchainImages );
	result << " ));\n";
	for (uint i = 0; i < pSwapchainImageCount[0]; ++i) {
		result << indent << remapper( VK_OBJECT_TYPE_IMAGE, pSwapchainImages[i], true ) << " = " << nameSer.Get( &pSwapchainImages ) << "[" << IntToString(i) << "];\n";
	}
	result << "	}\n";
	FlushGlobal();
}

void CreateSemaphore (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSemaphoreCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_SEMAPHORE, VkResourceID(*pSemaphore), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateSemaphore( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pSemaphore*/ " << "&" << remapper( VK_OBJECT_TYPE_SEMAPHORE, *pSemaphore, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateFence (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkFenceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_FENCE, VkResourceID(*pFence), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateFence( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pFence*/ " << "&" << remapper( VK_OBJECT_TYPE_FENCE, *pFence, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void GetFenceStatus (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkFence fence) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "VK_CALL( app.vkGetFenceStatus( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*fence*/ " << remapper( VK_OBJECT_TYPE_FENCE, fence );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void ResetFences (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t fenceCount, const VkFence * pFences) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pFences ) {
		CHECK( fenceCount > 0 );
		before << indent << "const VkFence  " << nameSer.MakeUnique( &pFences, "fences"s, "fence"s ) << "[] = {";
		for (uint i = 0; i < fenceCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_FENCE, pFences[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pFences ) << ") == " << IntToString(fenceCount) << " );\n\n";
	}
	result << indent << "VK_CALL( app.vkResetFences( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*fenceCount*/ " << IntToString(fenceCount);
	result << ",\n";
	result << indent << "		/*pFences*/ " << nameSer.Get( &pFences );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void WaitForFences (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t fenceCount, const VkFence * pFences, VkBool32 waitAll, uint64_t timeout) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pFences ) {
		CHECK( fenceCount > 0 );
		before << indent << "const VkFence  " << nameSer.MakeUnique( &pFences, "fences"s, "fence"s ) << "[] = {";
		for (uint i = 0; i < fenceCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_FENCE, pFences[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pFences ) << ") == " << IntToString(fenceCount) << " );\n\n";
	}
	result << indent << "VK_CALL( app.vkWaitForFences( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*fenceCount*/ " << IntToString(fenceCount);
	result << ",\n";
	result << indent << "		/*pFences*/ " << nameSer.Get( &pFences );
	result << ",\n";
	result << indent << "		/*waitAll*/ " << BoolToString(waitAll);
	result << ",\n";
	result << indent << "		/*timeout*/ " << IntToString(timeout);
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkEventCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkEvent * pEvent) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_EVENT, VkResourceID(*pEvent), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateEvent( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pEvent*/ " << "&" << remapper( VK_OBJECT_TYPE_EVENT, *pEvent, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void GetEventStatus (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "VK_CALL( app.vkGetEventStatus( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*event*/ " << remapper( VK_OBJECT_TYPE_EVENT, event );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void SetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "VK_CALL( app.vkSetEvent( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*event*/ " << remapper( VK_OBJECT_TYPE_EVENT, event );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void ResetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "VK_CALL( app.vkResetEvent( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*event*/ " << remapper( VK_OBJECT_TYPE_EVENT, event );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateQueryPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkQueryPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_QUERY_POOL, VkResourceID(*pQueryPool), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateQueryPool( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pQueryPool*/ " << "&" << remapper( VK_OBJECT_TYPE_QUERY_POOL, *pQueryPool, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void AllocateDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pAllocateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pAllocateInfo), nameSer, remapper, indent );
	}
	for (uint i = 0; i < pAllocateInfo->descriptorSetCount; ++i) {
		remapper.CreateResource( VK_OBJECT_TYPE_DESCRIPTOR_SET, VkResourceID(pDescriptorSets[i]), chunkIndex );
	}
	before << indent << "VkDescriptorSet " << nameSer.MakeUnique( &pDescriptorSets, "descriptorSets"s, "descriptorSet"s ) << "[" << IntToString(pAllocateInfo->descriptorSetCount) << "] = {};\n";
	result << indent << "VK_CALL( app.vkAllocateDescriptorSets( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pAllocateInfo*/ " << nameSer.GetPtr(pAllocateInfo);
	result << ",\n";
	result << indent << "		/*pDescriptorSets*/ " << nameSer.Get( &pDescriptorSets );
	result << " ));\n";
	for (uint i = 0; i < pAllocateInfo->descriptorSetCount; ++i) {
		result << indent << remapper( VK_OBJECT_TYPE_DESCRIPTOR_SET, pDescriptorSets[i], true ) << " = " << nameSer.Get( &pDescriptorSets ) << "[" << IntToString(i) << "];\n";
	}
	result << "	}\n";
	FlushGlobal();
}

void UpdateDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet * pDescriptorCopies) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pDescriptorWrites ) {
		CHECK( descriptorWriteCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pDescriptorWrites, "descriptorWrites"s, "writeDescriptorSet"s );
		before << indent << "VkWriteDescriptorSet  " << arr_name << "[" << IntToString(descriptorWriteCount) << "] = {};\n";
		for (uint i = 0; i < descriptorWriteCount; ++i) {
			Serialize2_VkWriteDescriptorSet( pDescriptorWrites + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( pDescriptorCopies ) {
		CHECK( descriptorCopyCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pDescriptorCopies, "descriptorCopies"s, "copyDescriptorSet"s );
		before << indent << "VkCopyDescriptorSet  " << arr_name << "[" << IntToString(descriptorCopyCount) << "] = {};\n";
		for (uint i = 0; i < descriptorCopyCount; ++i) {
			Serialize2_VkCopyDescriptorSet( pDescriptorCopies + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkUpdateDescriptorSets( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*descriptorWriteCount*/ " << IntToString(descriptorWriteCount);
	result << ",\n";
	result << indent << "		/*pDescriptorWrites*/ " << nameSer.Get( &pDescriptorWrites );
	result << ",\n";
	result << indent << "		/*descriptorCopyCount*/ " << IntToString(descriptorCopyCount);
	result << ",\n";
	result << indent << "		/*pDescriptorCopies*/ " << nameSer.Get( &pDescriptorCopies );
	result << " );\n";
	result << "	}\n";
	FlushGlobal();
}

void BeginCommandBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo * pBeginInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pBeginInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pBeginInfo), nameSer, remapper, indent );
	}
	result << indent << "VK_CALL( app.vkBeginCommandBuffer( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pBeginInfo*/ " << nameSer.GetPtr(pBeginInfo);
	result << " ));\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void EndCommandBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "VK_CALL( app.vkEndCommandBuffer( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << " ));\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void QueueWaitIdle (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "VK_CALL( app.vkQueueWaitIdle( \n";
	result << indent << "		/*queue*/ " << remapper( VK_OBJECT_TYPE_QUEUE, queue );
	result << " ));\n";
	result << "	}\n";
	FlushQueue( queue );
}

void DeviceWaitIdle (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "VK_CALL( app.vkDeviceWaitIdle( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void QueueSubmit (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, uint32_t submitCount, const VkSubmitInfo * pSubmits, VkFence fence) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pSubmits ) {
		CHECK( submitCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pSubmits, "submits"s, "submitInfo"s, "info"s );
		before << indent << "VkSubmitInfo  " << arr_name << "[" << IntToString(submitCount) << "] = {};\n";
		for (uint i = 0; i < submitCount; ++i) {
			Serialize2_VkSubmitInfo( pSubmits + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "VK_CALL( app.vkQueueSubmit( \n";
	result << indent << "		/*queue*/ " << remapper( VK_OBJECT_TYPE_QUEUE, queue );
	result << ",\n";
	result << indent << "		/*submitCount*/ " << IntToString(submitCount);
	result << ",\n";
	result << indent << "		/*pSubmits*/ " << nameSer.Get( &pSubmits );
	result << ",\n";
	result << indent << "		/*fence*/ " << remapper( VK_OBJECT_TYPE_FENCE, fence );
	result << " ));\n";
	result << "	}\n";
	FlushQueue( queue );
}

void BindBufferMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "VK_CALL( app.vkBindBufferMemory( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*buffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, buffer );
	result << ",\n";
	result << indent << "		/*memory*/ " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, memory );
	result << ",\n";
	result << indent << "		/*memoryOffset*/ " << IntToString(memoryOffset);
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void BindImageMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "VK_CALL( app.vkBindImageMemory( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*image*/ " << remapper( VK_OBJECT_TYPE_IMAGE, image );
	result << ",\n";
	result << indent << "		/*memory*/ " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, memory );
	result << ",\n";
	result << indent << "		/*memoryOffset*/ " << IntToString(memoryOffset);
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void QueueBindSparse (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo * pBindInfo, VkFence fence) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pBindInfo ) {
		CHECK( bindInfoCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pBindInfo, "bindInfo"s, "bindSparseInfo"s, "info"s );
		before << indent << "VkBindSparseInfo  " << arr_name << "[" << IntToString(bindInfoCount) << "] = {};\n";
		for (uint i = 0; i < bindInfoCount; ++i) {
			Serialize2_VkBindSparseInfo( pBindInfo + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "VK_CALL( app.vkQueueBindSparse( \n";
	result << indent << "		/*queue*/ " << remapper( VK_OBJECT_TYPE_QUEUE, queue );
	result << ",\n";
	result << indent << "		/*bindInfoCount*/ " << IntToString(bindInfoCount);
	result << ",\n";
	result << indent << "		/*pBindInfo*/ " << nameSer.Get( &pBindInfo );
	result << ",\n";
	result << indent << "		/*fence*/ " << remapper( VK_OBJECT_TYPE_FENCE, fence );
	result << " ));\n";
	result << "	}\n";
	FlushQueue( queue );
}

void CmdBeginRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pRenderPassBegin ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pRenderPassBegin), nameSer, remapper, indent );
	}
	result << indent << "app.vkCmdBeginRenderPass( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pRenderPassBegin*/ " << nameSer.GetPtr(pRenderPassBegin);
	result << ",\n";
	result << indent << "		/*contents*/ " << Serialize_VkSubpassContents(contents);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdNextSubpass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkSubpassContents contents) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdNextSubpass( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*contents*/ " << Serialize_VkSubpassContents(contents);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdExecuteCommands (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCommandBuffers ) {
		CHECK( commandBufferCount > 0 );
		before << indent << "const VkCommandBuffer  " << nameSer.MakeUnique( &pCommandBuffers, "commandBuffers"s, "commandBuffer"s ) << "[] = {";
		for (uint i = 0; i < commandBufferCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, pCommandBuffers[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pCommandBuffers ) << ") == " << IntToString(commandBufferCount) << " );\n\n";
	}
	result << indent << "app.vkCmdExecuteCommands( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*commandBufferCount*/ " << IntToString(commandBufferCount);
	result << ",\n";
	result << indent << "		/*pCommandBuffers*/ " << nameSer.Get( &pCommandBuffers );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdEndRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdEndRenderPass( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdBindPipeline (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdBindPipeline( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pipelineBindPoint*/ " << Serialize_VkPipelineBindPoint(pipelineBindPoint);
	result << ",\n";
	result << indent << "		/*pipeline*/ " << remapper( VK_OBJECT_TYPE_PIPELINE, pipeline );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetViewport (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport * pViewports) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pViewports ) {
		CHECK( viewportCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pViewports, "viewports"s, "viewport"s );
		before << indent << "VkViewport  " << arr_name << "[" << IntToString(viewportCount) << "] = {};\n";
		for (uint i = 0; i < viewportCount; ++i) {
			Serialize2_VkViewport( pViewports + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdSetViewport( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*firstViewport*/ " << IntToString(firstViewport);
	result << ",\n";
	result << indent << "		/*viewportCount*/ " << IntToString(viewportCount);
	result << ",\n";
	result << indent << "		/*pViewports*/ " << nameSer.Get( &pViewports );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetScissor (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D * pScissors) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pScissors ) {
		CHECK( scissorCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pScissors, "scissors"s, "rect2D"s );
		before << indent << "VkRect2D  " << arr_name << "[" << IntToString(scissorCount) << "] = {};\n";
		for (uint i = 0; i < scissorCount; ++i) {
			Serialize2_VkRect2D( pScissors + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdSetScissor( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*firstScissor*/ " << IntToString(firstScissor);
	result << ",\n";
	result << indent << "		/*scissorCount*/ " << IntToString(scissorCount);
	result << ",\n";
	result << indent << "		/*pScissors*/ " << nameSer.Get( &pScissors );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetLineWidth (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, float lineWidth) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdSetLineWidth( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*lineWidth*/ " << FloatToString(lineWidth);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetDepthBias (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdSetDepthBias( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*depthBiasConstantFactor*/ " << FloatToString(depthBiasConstantFactor);
	result << ",\n";
	result << indent << "		/*depthBiasClamp*/ " << FloatToString(depthBiasClamp);
	result << ",\n";
	result << indent << "		/*depthBiasSlopeFactor*/ " << FloatToString(depthBiasSlopeFactor);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetBlendConstants (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const float blendConstants[4]) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdSetBlendConstants( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*blendConstants*/ " << "StaticArray<float,4>{ ";
	for (uint i = 0; i < 4; ++i) {
		result << (i ? ", " : "") << FloatToString(blendConstants[i]);
	}
	result << " }";
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetDepthBounds (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdSetDepthBounds( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*minDepthBounds*/ " << FloatToString(minDepthBounds);
	result << ",\n";
	result << indent << "		/*maxDepthBounds*/ " << FloatToString(maxDepthBounds);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetStencilCompareMask (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdSetStencilCompareMask( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*faceMask*/ " << Serialize_VkStencilFaceFlags(faceMask);
	result << ",\n";
	result << indent << "		/*compareMask*/ " << IntToString(compareMask);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetStencilWriteMask (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdSetStencilWriteMask( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*faceMask*/ " << Serialize_VkStencilFaceFlags(faceMask);
	result << ",\n";
	result << indent << "		/*writeMask*/ " << IntToString(writeMask);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetStencilReference (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdSetStencilReference( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*faceMask*/ " << Serialize_VkStencilFaceFlags(faceMask);
	result << ",\n";
	result << indent << "		/*reference*/ " << IntToString(reference);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdBindDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t * pDynamicOffsets) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pDescriptorSets ) {
		CHECK( descriptorSetCount > 0 );
		before << indent << "const VkDescriptorSet  " << nameSer.MakeUnique( &pDescriptorSets, "descriptorSets"s, "descriptorSet"s ) << "[] = {";
		for (uint i = 0; i < descriptorSetCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_DESCRIPTOR_SET, pDescriptorSets[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pDescriptorSets ) << ") == " << IntToString(descriptorSetCount) << " );\n\n";
	}
	if ( pDynamicOffsets ) {
		CHECK( dynamicOffsetCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &pDynamicOffsets, "dynamicOffsets"s ) << "[] = { ";
		for (uint i = 0; i < dynamicOffsetCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(pDynamicOffsets[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pDynamicOffsets ) << ") == " << IntToString(dynamicOffsetCount) << " );\n\n";
	}
	result << indent << "app.vkCmdBindDescriptorSets( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pipelineBindPoint*/ " << Serialize_VkPipelineBindPoint(pipelineBindPoint);
	result << ",\n";
	result << indent << "		/*layout*/ " << remapper( VK_OBJECT_TYPE_PIPELINE_LAYOUT, layout );
	result << ",\n";
	result << indent << "		/*firstSet*/ " << IntToString(firstSet);
	result << ",\n";
	result << indent << "		/*descriptorSetCount*/ " << IntToString(descriptorSetCount);
	result << ",\n";
	result << indent << "		/*pDescriptorSets*/ " << nameSer.Get( &pDescriptorSets );
	result << ",\n";
	result << indent << "		/*dynamicOffsetCount*/ " << IntToString(dynamicOffsetCount);
	result << ",\n";
	result << indent << "		/*pDynamicOffsets*/ " << nameSer.Get( &pDynamicOffsets );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdBindVertexBuffers (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pBuffers ) {
		CHECK( bindingCount > 0 );
		before << indent << "const VkBuffer  " << nameSer.MakeUnique( &pBuffers, "buffers"s, "buffer"s ) << "[] = {";
		for (uint i = 0; i < bindingCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_BUFFER, pBuffers[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pBuffers ) << ") == " << IntToString(bindingCount) << " );\n\n";
	}
	if ( pOffsets ) {
		CHECK( bindingCount > 0 );
		before << indent << "const VkDeviceSize  " << nameSer.MakeUnique( &pOffsets, "offsets"s ) << "[] = { ";
		for (uint i = 0; i < bindingCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(pOffsets[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pOffsets ) << ") == " << IntToString(bindingCount) << " );\n\n";
	}
	result << indent << "app.vkCmdBindVertexBuffers( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*firstBinding*/ " << IntToString(firstBinding);
	result << ",\n";
	result << indent << "		/*bindingCount*/ " << IntToString(bindingCount);
	result << ",\n";
	result << indent << "		/*pBuffers*/ " << nameSer.Get( &pBuffers );
	result << ",\n";
	result << indent << "		/*pOffsets*/ " << nameSer.Get( &pOffsets );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdBindIndexBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdBindIndexBuffer( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*buffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, buffer );
	result << ",\n";
	result << indent << "		/*offset*/ " << IntToString(offset);
	result << ",\n";
	result << indent << "		/*indexType*/ " << Serialize_VkIndexType(indexType);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdCopyBufferToImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy * pRegions) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pRegions ) {
		CHECK( regionCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pRegions, "regions"s, "bufferImageCopy"s );
		before << indent << "VkBufferImageCopy  " << arr_name << "[" << IntToString(regionCount) << "] = {};\n";
		for (uint i = 0; i < regionCount; ++i) {
			Serialize2_VkBufferImageCopy( pRegions + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdCopyBufferToImage( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*srcBuffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, srcBuffer );
	result << ",\n";
	result << indent << "		/*dstImage*/ " << remapper( VK_OBJECT_TYPE_IMAGE, dstImage );
	result << ",\n";
	result << indent << "		/*dstImageLayout*/ " << Serialize_VkImageLayout(dstImageLayout);
	result << ",\n";
	result << indent << "		/*regionCount*/ " << IntToString(regionCount);
	result << ",\n";
	result << indent << "		/*pRegions*/ " << nameSer.Get( &pRegions );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdCopyImageToBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy * pRegions) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pRegions ) {
		CHECK( regionCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pRegions, "regions"s, "bufferImageCopy"s );
		before << indent << "VkBufferImageCopy  " << arr_name << "[" << IntToString(regionCount) << "] = {};\n";
		for (uint i = 0; i < regionCount; ++i) {
			Serialize2_VkBufferImageCopy( pRegions + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdCopyImageToBuffer( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*srcImage*/ " << remapper( VK_OBJECT_TYPE_IMAGE, srcImage );
	result << ",\n";
	result << indent << "		/*srcImageLayout*/ " << Serialize_VkImageLayout(srcImageLayout);
	result << ",\n";
	result << indent << "		/*dstBuffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, dstBuffer );
	result << ",\n";
	result << indent << "		/*regionCount*/ " << IntToString(regionCount);
	result << ",\n";
	result << indent << "		/*pRegions*/ " << nameSer.Get( &pRegions );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdCopyBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy * pRegions) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pRegions ) {
		CHECK( regionCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pRegions, "regions"s, "bufferCopy"s );
		before << indent << "VkBufferCopy  " << arr_name << "[" << IntToString(regionCount) << "] = {};\n";
		for (uint i = 0; i < regionCount; ++i) {
			Serialize2_VkBufferCopy( pRegions + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdCopyBuffer( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*srcBuffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, srcBuffer );
	result << ",\n";
	result << indent << "		/*dstBuffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, dstBuffer );
	result << ",\n";
	result << indent << "		/*regionCount*/ " << IntToString(regionCount);
	result << ",\n";
	result << indent << "		/*pRegions*/ " << nameSer.Get( &pRegions );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdCopyImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy * pRegions) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pRegions ) {
		CHECK( regionCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pRegions, "regions"s, "imageCopy"s );
		before << indent << "VkImageCopy  " << arr_name << "[" << IntToString(regionCount) << "] = {};\n";
		for (uint i = 0; i < regionCount; ++i) {
			Serialize2_VkImageCopy( pRegions + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdCopyImage( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*srcImage*/ " << remapper( VK_OBJECT_TYPE_IMAGE, srcImage );
	result << ",\n";
	result << indent << "		/*srcImageLayout*/ " << Serialize_VkImageLayout(srcImageLayout);
	result << ",\n";
	result << indent << "		/*dstImage*/ " << remapper( VK_OBJECT_TYPE_IMAGE, dstImage );
	result << ",\n";
	result << indent << "		/*dstImageLayout*/ " << Serialize_VkImageLayout(dstImageLayout);
	result << ",\n";
	result << indent << "		/*regionCount*/ " << IntToString(regionCount);
	result << ",\n";
	result << indent << "		/*pRegions*/ " << nameSer.Get( &pRegions );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdBlitImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit * pRegions, VkFilter filter) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pRegions ) {
		CHECK( regionCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pRegions, "regions"s, "imageBlit"s );
		before << indent << "VkImageBlit  " << arr_name << "[" << IntToString(regionCount) << "] = {};\n";
		for (uint i = 0; i < regionCount; ++i) {
			Serialize2_VkImageBlit( pRegions + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdBlitImage( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*srcImage*/ " << remapper( VK_OBJECT_TYPE_IMAGE, srcImage );
	result << ",\n";
	result << indent << "		/*srcImageLayout*/ " << Serialize_VkImageLayout(srcImageLayout);
	result << ",\n";
	result << indent << "		/*dstImage*/ " << remapper( VK_OBJECT_TYPE_IMAGE, dstImage );
	result << ",\n";
	result << indent << "		/*dstImageLayout*/ " << Serialize_VkImageLayout(dstImageLayout);
	result << ",\n";
	result << indent << "		/*regionCount*/ " << IntToString(regionCount);
	result << ",\n";
	result << indent << "		/*pRegions*/ " << nameSer.Get( &pRegions );
	result << ",\n";
	result << indent << "		/*filter*/ " << Serialize_VkFilter(filter);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdResolveImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve * pRegions) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pRegions ) {
		CHECK( regionCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pRegions, "regions"s, "imageResolve"s );
		before << indent << "VkImageResolve  " << arr_name << "[" << IntToString(regionCount) << "] = {};\n";
		for (uint i = 0; i < regionCount; ++i) {
			Serialize2_VkImageResolve( pRegions + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdResolveImage( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*srcImage*/ " << remapper( VK_OBJECT_TYPE_IMAGE, srcImage );
	result << ",\n";
	result << indent << "		/*srcImageLayout*/ " << Serialize_VkImageLayout(srcImageLayout);
	result << ",\n";
	result << indent << "		/*dstImage*/ " << remapper( VK_OBJECT_TYPE_IMAGE, dstImage );
	result << ",\n";
	result << indent << "		/*dstImageLayout*/ " << Serialize_VkImageLayout(dstImageLayout);
	result << ",\n";
	result << indent << "		/*regionCount*/ " << IntToString(regionCount);
	result << ",\n";
	result << indent << "		/*pRegions*/ " << nameSer.Get( &pRegions );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdUpdateBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void * pData) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	CHECK( (dataSize > 0) and (dataSize % 4 == 0) );
	before << indent << "const FIValue " << nameSer.MakeUnique( &pData, "data"s ) << "[] = {";
	for (uint i = 0; i < dataSize; ++i) {
		before << (i ? "," : "") << (i%8 == 0 ? "\n\t"s << indent : " ") << VoidToFIValueString( pData, i*sizeof(FIValue) );
	}
	before << '\n' << indent << "};\n";
	before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pData ) << ") == " << IntToString(dataSize) << " );\n\n";
	result << indent << "app.vkCmdUpdateBuffer( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*dstBuffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, dstBuffer );
	result << ",\n";
	result << indent << "		/*dstOffset*/ " << IntToString(dstOffset);
	result << ",\n";
	result << indent << "		/*dataSize*/ " << IntToString(dataSize);
	result << ",\n";
	result << indent << "		/*pData*/ " << nameSer.Get( &pData );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdFillBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdFillBuffer( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*dstBuffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, dstBuffer );
	result << ",\n";
	result << indent << "		/*dstOffset*/ " << IntToString(dstOffset);
	result << ",\n";
	result << indent << "		/*size*/ " << IntToString(size);
	result << ",\n";
	result << indent << "		/*data*/ " << IntToString(data);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdPushConstants (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void * pValues) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	CHECK( (size > 0) and (size % 4 == 0) );
	before << indent << "const FIValue " << nameSer.MakeUnique( &pValues, "values"s ) << "[] = {";
	for (uint i = 0; i < size; ++i) {
		before << (i ? "," : "") << (i%8 == 0 ? "\n\t"s << indent : " ") << VoidToFIValueString( pValues, i*sizeof(FIValue) );
	}
	before << '\n' << indent << "};\n";
	before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pValues ) << ") == " << IntToString(size) << " );\n\n";
	result << indent << "app.vkCmdPushConstants( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*layout*/ " << remapper( VK_OBJECT_TYPE_PIPELINE_LAYOUT, layout );
	result << ",\n";
	result << indent << "		/*stageFlags*/ " << Serialize_VkShaderStageFlags(stageFlags);
	result << ",\n";
	result << indent << "		/*offset*/ " << IntToString(offset);
	result << ",\n";
	result << indent << "		/*size*/ " << IntToString(size);
	result << ",\n";
	result << indent << "		/*pValues*/ " << nameSer.Get( &pValues );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdClearColorImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue * pColor, uint32_t rangeCount, const VkImageSubresourceRange * pRanges) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pColor ) {
		before << Serialize_VkClearColorValue( pColor, nameSer, remapper, indent );
	}
	if ( pRanges ) {
		CHECK( rangeCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pRanges, "ranges"s, "imageSubresourceRange"s );
		before << indent << "VkImageSubresourceRange  " << arr_name << "[" << IntToString(rangeCount) << "] = {};\n";
		for (uint i = 0; i < rangeCount; ++i) {
			Serialize2_VkImageSubresourceRange( pRanges + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdClearColorImage( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*image*/ " << remapper( VK_OBJECT_TYPE_IMAGE, image );
	result << ",\n";
	result << indent << "		/*imageLayout*/ " << Serialize_VkImageLayout(imageLayout);
	result << ",\n";
	result << indent << "		/*pColor*/ " << nameSer.GetPtr(pColor);
	result << ",\n";
	result << indent << "		/*rangeCount*/ " << IntToString(rangeCount);
	result << ",\n";
	result << indent << "		/*pRanges*/ " << nameSer.Get( &pRanges );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdClearDepthStencilImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue * pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange * pRanges) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pDepthStencil ) {
		before << Serialize_VkClearDepthStencilValue( pDepthStencil, nameSer, remapper, indent );
	}
	if ( pRanges ) {
		CHECK( rangeCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pRanges, "ranges"s, "imageSubresourceRange"s );
		before << indent << "VkImageSubresourceRange  " << arr_name << "[" << IntToString(rangeCount) << "] = {};\n";
		for (uint i = 0; i < rangeCount; ++i) {
			Serialize2_VkImageSubresourceRange( pRanges + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdClearDepthStencilImage( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*image*/ " << remapper( VK_OBJECT_TYPE_IMAGE, image );
	result << ",\n";
	result << indent << "		/*imageLayout*/ " << Serialize_VkImageLayout(imageLayout);
	result << ",\n";
	result << indent << "		/*pDepthStencil*/ " << nameSer.GetPtr(pDepthStencil);
	result << ",\n";
	result << indent << "		/*rangeCount*/ " << IntToString(rangeCount);
	result << ",\n";
	result << indent << "		/*pRanges*/ " << nameSer.Get( &pRanges );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdClearAttachments (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment * pAttachments, uint32_t rectCount, const VkClearRect * pRects) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pAttachments ) {
		CHECK( attachmentCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pAttachments, "attachments"s, "clearAttachment"s );
		before << indent << "VkClearAttachment  " << arr_name << "[" << IntToString(attachmentCount) << "] = {};\n";
		for (uint i = 0; i < attachmentCount; ++i) {
			Serialize2_VkClearAttachment( pAttachments + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( pRects ) {
		CHECK( rectCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pRects, "rects"s, "clearRect"s );
		before << indent << "VkClearRect  " << arr_name << "[" << IntToString(rectCount) << "] = {};\n";
		for (uint i = 0; i < rectCount; ++i) {
			Serialize2_VkClearRect( pRects + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdClearAttachments( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*attachmentCount*/ " << IntToString(attachmentCount);
	result << ",\n";
	result << indent << "		/*pAttachments*/ " << nameSer.Get( &pAttachments );
	result << ",\n";
	result << indent << "		/*rectCount*/ " << IntToString(rectCount);
	result << ",\n";
	result << indent << "		/*pRects*/ " << nameSer.Get( &pRects );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdPipelineBarrier (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pMemoryBarriers ) {
		CHECK( memoryBarrierCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pMemoryBarriers, "memoryBarriers"s, "memoryBarrier"s, "barrier"s );
		before << indent << "VkMemoryBarrier  " << arr_name << "[" << IntToString(memoryBarrierCount) << "] = {};\n";
		for (uint i = 0; i < memoryBarrierCount; ++i) {
			Serialize2_VkMemoryBarrier( pMemoryBarriers + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( pBufferMemoryBarriers ) {
		CHECK( bufferMemoryBarrierCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pBufferMemoryBarriers, "bufferMemoryBarriers"s, "bufferMemoryBarrier"s, "barrier"s );
		before << indent << "VkBufferMemoryBarrier  " << arr_name << "[" << IntToString(bufferMemoryBarrierCount) << "] = {};\n";
		for (uint i = 0; i < bufferMemoryBarrierCount; ++i) {
			Serialize2_VkBufferMemoryBarrier( pBufferMemoryBarriers + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( pImageMemoryBarriers ) {
		CHECK( imageMemoryBarrierCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pImageMemoryBarriers, "imageMemoryBarriers"s, "imageMemoryBarrier"s, "barrier"s );
		before << indent << "VkImageMemoryBarrier  " << arr_name << "[" << IntToString(imageMemoryBarrierCount) << "] = {};\n";
		for (uint i = 0; i < imageMemoryBarrierCount; ++i) {
			Serialize2_VkImageMemoryBarrier( pImageMemoryBarriers + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdPipelineBarrier( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*srcStageMask*/ " << Serialize_VkPipelineStageFlags(srcStageMask);
	result << ",\n";
	result << indent << "		/*dstStageMask*/ " << Serialize_VkPipelineStageFlags(dstStageMask);
	result << ",\n";
	result << indent << "		/*dependencyFlags*/ " << Serialize_VkDependencyFlags(dependencyFlags);
	result << ",\n";
	result << indent << "		/*memoryBarrierCount*/ " << IntToString(memoryBarrierCount);
	result << ",\n";
	result << indent << "		/*pMemoryBarriers*/ " << nameSer.Get( &pMemoryBarriers );
	result << ",\n";
	result << indent << "		/*bufferMemoryBarrierCount*/ " << IntToString(bufferMemoryBarrierCount);
	result << ",\n";
	result << indent << "		/*pBufferMemoryBarriers*/ " << nameSer.Get( &pBufferMemoryBarriers );
	result << ",\n";
	result << indent << "		/*imageMemoryBarrierCount*/ " << IntToString(imageMemoryBarrierCount);
	result << ",\n";
	result << indent << "		/*pImageMemoryBarriers*/ " << nameSer.Get( &pImageMemoryBarriers );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdWriteTimestamp (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdWriteTimestamp( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pipelineStage*/ " << Serialize_VkPipelineStageFlagBits(pipelineStage);
	result << ",\n";
	result << indent << "		/*queryPool*/ " << remapper( VK_OBJECT_TYPE_QUERY_POOL, queryPool );
	result << ",\n";
	result << indent << "		/*query*/ " << IntToString(query);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdCopyQueryPoolResults (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdCopyQueryPoolResults( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*queryPool*/ " << remapper( VK_OBJECT_TYPE_QUERY_POOL, queryPool );
	result << ",\n";
	result << indent << "		/*firstQuery*/ " << IntToString(firstQuery);
	result << ",\n";
	result << indent << "		/*queryCount*/ " << IntToString(queryCount);
	result << ",\n";
	result << indent << "		/*dstBuffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, dstBuffer );
	result << ",\n";
	result << indent << "		/*dstOffset*/ " << IntToString(dstOffset);
	result << ",\n";
	result << indent << "		/*stride*/ " << IntToString(stride);
	result << ",\n";
	result << indent << "		/*flags*/ " << Serialize_VkQueryResultFlags(flags);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdBeginQuery (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdBeginQuery( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*queryPool*/ " << remapper( VK_OBJECT_TYPE_QUERY_POOL, queryPool );
	result << ",\n";
	result << indent << "		/*query*/ " << IntToString(query);
	result << ",\n";
	result << indent << "		/*flags*/ " << Serialize_VkQueryControlFlags(flags);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdEndQuery (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdEndQuery( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*queryPool*/ " << remapper( VK_OBJECT_TYPE_QUERY_POOL, queryPool );
	result << ",\n";
	result << indent << "		/*query*/ " << IntToString(query);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdResetQueryPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdResetQueryPool( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*queryPool*/ " << remapper( VK_OBJECT_TYPE_QUERY_POOL, queryPool );
	result << ",\n";
	result << indent << "		/*firstQuery*/ " << IntToString(firstQuery);
	result << ",\n";
	result << indent << "		/*queryCount*/ " << IntToString(queryCount);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdSetEvent( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*event*/ " << remapper( VK_OBJECT_TYPE_EVENT, event );
	result << ",\n";
	result << indent << "		/*stageMask*/ " << Serialize_VkPipelineStageFlags(stageMask);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdResetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdResetEvent( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*event*/ " << remapper( VK_OBJECT_TYPE_EVENT, event );
	result << ",\n";
	result << indent << "		/*stageMask*/ " << Serialize_VkPipelineStageFlags(stageMask);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdWaitEvents (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pEvents ) {
		CHECK( eventCount > 0 );
		before << indent << "const VkEvent  " << nameSer.MakeUnique( &pEvents, "events"s, "event"s ) << "[] = {";
		for (uint i = 0; i < eventCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_EVENT, pEvents[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pEvents ) << ") == " << IntToString(eventCount) << " );\n\n";
	}
	if ( pMemoryBarriers ) {
		CHECK( memoryBarrierCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pMemoryBarriers, "memoryBarriers"s, "memoryBarrier"s, "barrier"s );
		before << indent << "VkMemoryBarrier  " << arr_name << "[" << IntToString(memoryBarrierCount) << "] = {};\n";
		for (uint i = 0; i < memoryBarrierCount; ++i) {
			Serialize2_VkMemoryBarrier( pMemoryBarriers + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( pBufferMemoryBarriers ) {
		CHECK( bufferMemoryBarrierCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pBufferMemoryBarriers, "bufferMemoryBarriers"s, "bufferMemoryBarrier"s, "barrier"s );
		before << indent << "VkBufferMemoryBarrier  " << arr_name << "[" << IntToString(bufferMemoryBarrierCount) << "] = {};\n";
		for (uint i = 0; i < bufferMemoryBarrierCount; ++i) {
			Serialize2_VkBufferMemoryBarrier( pBufferMemoryBarriers + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( pImageMemoryBarriers ) {
		CHECK( imageMemoryBarrierCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pImageMemoryBarriers, "imageMemoryBarriers"s, "imageMemoryBarrier"s, "barrier"s );
		before << indent << "VkImageMemoryBarrier  " << arr_name << "[" << IntToString(imageMemoryBarrierCount) << "] = {};\n";
		for (uint i = 0; i < imageMemoryBarrierCount; ++i) {
			Serialize2_VkImageMemoryBarrier( pImageMemoryBarriers + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdWaitEvents( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*eventCount*/ " << IntToString(eventCount);
	result << ",\n";
	result << indent << "		/*pEvents*/ " << nameSer.Get( &pEvents );
	result << ",\n";
	result << indent << "		/*srcStageMask*/ " << Serialize_VkPipelineStageFlags(srcStageMask);
	result << ",\n";
	result << indent << "		/*dstStageMask*/ " << Serialize_VkPipelineStageFlags(dstStageMask);
	result << ",\n";
	result << indent << "		/*memoryBarrierCount*/ " << IntToString(memoryBarrierCount);
	result << ",\n";
	result << indent << "		/*pMemoryBarriers*/ " << nameSer.Get( &pMemoryBarriers );
	result << ",\n";
	result << indent << "		/*bufferMemoryBarrierCount*/ " << IntToString(bufferMemoryBarrierCount);
	result << ",\n";
	result << indent << "		/*pBufferMemoryBarriers*/ " << nameSer.Get( &pBufferMemoryBarriers );
	result << ",\n";
	result << indent << "		/*imageMemoryBarrierCount*/ " << IntToString(imageMemoryBarrierCount);
	result << ",\n";
	result << indent << "		/*pImageMemoryBarriers*/ " << nameSer.Get( &pImageMemoryBarriers );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDraw (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdDraw( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*vertexCount*/ " << IntToString(vertexCount);
	result << ",\n";
	result << indent << "		/*instanceCount*/ " << IntToString(instanceCount);
	result << ",\n";
	result << indent << "		/*firstVertex*/ " << IntToString(firstVertex);
	result << ",\n";
	result << indent << "		/*firstInstance*/ " << IntToString(firstInstance);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDrawIndirect (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdDrawIndirect( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*buffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, buffer );
	result << ",\n";
	result << indent << "		/*offset*/ " << IntToString(offset);
	result << ",\n";
	result << indent << "		/*drawCount*/ " << IntToString(drawCount);
	result << ",\n";
	result << indent << "		/*stride*/ " << IntToString(stride);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDrawIndexed (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdDrawIndexed( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*indexCount*/ " << IntToString(indexCount);
	result << ",\n";
	result << indent << "		/*instanceCount*/ " << IntToString(instanceCount);
	result << ",\n";
	result << indent << "		/*firstIndex*/ " << IntToString(firstIndex);
	result << ",\n";
	result << indent << "		/*vertexOffset*/ " << IntToString(vertexOffset);
	result << ",\n";
	result << indent << "		/*firstInstance*/ " << IntToString(firstInstance);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDrawIndexedIndirect (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdDrawIndexedIndirect( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*buffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, buffer );
	result << ",\n";
	result << indent << "		/*offset*/ " << IntToString(offset);
	result << ",\n";
	result << indent << "		/*drawCount*/ " << IntToString(drawCount);
	result << ",\n";
	result << indent << "		/*stride*/ " << IntToString(stride);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDispatch (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdDispatch( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*groupCountX*/ " << IntToString(groupCountX);
	result << ",\n";
	result << indent << "		/*groupCountY*/ " << IntToString(groupCountY);
	result << ",\n";
	result << indent << "		/*groupCountZ*/ " << IntToString(groupCountZ);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDispatchIndirect (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdDispatchIndirect( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*buffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, buffer );
	result << ",\n";
	result << indent << "		/*offset*/ " << IntToString(offset);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDebugMarkerBeginEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pMarkerInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pMarkerInfo), nameSer, remapper, indent );
	}
	result << indent << "app.vkCmdDebugMarkerBeginEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pMarkerInfo*/ " << nameSer.GetPtr(pMarkerInfo);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDebugMarkerInsertEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pMarkerInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pMarkerInfo), nameSer, remapper, indent );
	}
	result << indent << "app.vkCmdDebugMarkerInsertEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pMarkerInfo*/ " << nameSer.GetPtr(pMarkerInfo);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDebugMarkerEndEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdDebugMarkerEndEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void DebugMarkerSetObjectNameEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDebugMarkerObjectNameInfoEXT * pNameInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pNameInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pNameInfo), nameSer, remapper, indent );
	}
	result << indent << "VK_CALL( app.vkDebugMarkerSetObjectNameEXT( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pNameInfo*/ " << nameSer.GetPtr(pNameInfo);
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CreateSwapchainKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSwapchainCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_SWAPCHAIN_KHR, VkResourceID(*pSwapchain), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateSwapchainKHR( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pSwapchain*/ " << "&" << remapper( VK_OBJECT_TYPE_SWAPCHAIN_KHR, *pSwapchain, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void RegisterDeviceEventEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDeviceEventInfoEXT * pDeviceEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pDeviceEventInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pDeviceEventInfo), nameSer, remapper, indent );
	}
	result << indent << "VK_CALL( app.vkRegisterDeviceEventEXT( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pDeviceEventInfo*/ " << nameSer.GetPtr(pDeviceEventInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pFence*/ " << "&" << remapper( VK_OBJECT_TYPE_FENCE, *pFence, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void RegisterDisplayEventEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT * pDisplayEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pDisplayEventInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pDisplayEventInfo), nameSer, remapper, indent );
	}
	result << indent << "VK_CALL( app.vkRegisterDisplayEventEXT( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*display*/ " << remapper( VK_OBJECT_TYPE_DISPLAY_KHR, display );
	result << ",\n";
	result << indent << "		/*pDisplayEventInfo*/ " << nameSer.GetPtr(pDisplayEventInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pFence*/ " << "&" << remapper( VK_OBJECT_TYPE_FENCE, *pFence, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CmdPushDescriptorSetKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pDescriptorWrites ) {
		CHECK( descriptorWriteCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pDescriptorWrites, "descriptorWrites"s, "writeDescriptorSet"s );
		before << indent << "VkWriteDescriptorSet  " << arr_name << "[" << IntToString(descriptorWriteCount) << "] = {};\n";
		for (uint i = 0; i < descriptorWriteCount; ++i) {
			Serialize2_VkWriteDescriptorSet( pDescriptorWrites + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdPushDescriptorSetKHR( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pipelineBindPoint*/ " << Serialize_VkPipelineBindPoint(pipelineBindPoint);
	result << ",\n";
	result << indent << "		/*layout*/ " << remapper( VK_OBJECT_TYPE_PIPELINE_LAYOUT, layout );
	result << ",\n";
	result << indent << "		/*set*/ " << IntToString(set);
	result << ",\n";
	result << indent << "		/*descriptorWriteCount*/ " << IntToString(descriptorWriteCount);
	result << ",\n";
	result << indent << "		/*pDescriptorWrites*/ " << nameSer.Get( &pDescriptorWrites );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CreateDescriptorUpdateTemplate (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE, VkResourceID(*pDescriptorUpdateTemplate), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateDescriptorUpdateTemplate( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pDescriptorUpdateTemplate*/ " << "&" << remapper( VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE, *pDescriptorUpdateTemplate, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void BindBufferMemory2 (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pBindInfos ) {
		CHECK( bindInfoCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pBindInfos, "bindInfos"s, "bindBufferMemoryInfo"s, "info"s );
		before << indent << "VkBindBufferMemoryInfo  " << arr_name << "[" << IntToString(bindInfoCount) << "] = {};\n";
		for (uint i = 0; i < bindInfoCount; ++i) {
			Serialize2_VkBindBufferMemoryInfo( pBindInfos + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "VK_CALL( app.vkBindBufferMemory2( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*bindInfoCount*/ " << IntToString(bindInfoCount);
	result << ",\n";
	result << indent << "		/*pBindInfos*/ " << nameSer.Get( &pBindInfos );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void BindImageMemory2 (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pBindInfos ) {
		CHECK( bindInfoCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pBindInfos, "bindInfos"s, "bindImageMemoryInfo"s, "info"s );
		before << indent << "VkBindImageMemoryInfo  " << arr_name << "[" << IntToString(bindInfoCount) << "] = {};\n";
		for (uint i = 0; i < bindInfoCount; ++i) {
			Serialize2_VkBindImageMemoryInfo( pBindInfos + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "VK_CALL( app.vkBindImageMemory2( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*bindInfoCount*/ " << IntToString(bindInfoCount);
	result << ",\n";
	result << indent << "		/*pBindInfos*/ " << nameSer.Get( &pBindInfos );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CmdWriteBufferMarkerAMD (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdWriteBufferMarkerAMD( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pipelineStage*/ " << Serialize_VkPipelineStageFlagBits(pipelineStage);
	result << ",\n";
	result << indent << "		/*dstBuffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, dstBuffer );
	result << ",\n";
	result << indent << "		/*dstOffset*/ " << IntToString(dstOffset);
	result << ",\n";
	result << indent << "		/*marker*/ " << IntToString(marker);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void SetDebugUtilsObjectNameEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDebugUtilsObjectNameInfoEXT * pNameInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pNameInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pNameInfo), nameSer, remapper, indent );
	}
	result << indent << "VK_CALL( app.vkSetDebugUtilsObjectNameEXT( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pNameInfo*/ " << nameSer.GetPtr(pNameInfo);
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void QueueBeginDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pLabelInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pLabelInfo), nameSer, remapper, indent );
	}
	result << indent << "app.vkQueueBeginDebugUtilsLabelEXT( \n";
	result << indent << "		/*queue*/ " << remapper( VK_OBJECT_TYPE_QUEUE, queue );
	result << ",\n";
	result << indent << "		/*pLabelInfo*/ " << nameSer.GetPtr(pLabelInfo);
	result << " );\n";
	result << "	}\n";
	FlushQueue( queue );
}

void QueueEndDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkQueueEndDebugUtilsLabelEXT( \n";
	result << indent << "		/*queue*/ " << remapper( VK_OBJECT_TYPE_QUEUE, queue );
	result << " );\n";
	result << "	}\n";
	FlushQueue( queue );
}

void QueueInsertDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pLabelInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pLabelInfo), nameSer, remapper, indent );
	}
	result << indent << "app.vkQueueInsertDebugUtilsLabelEXT( \n";
	result << indent << "		/*queue*/ " << remapper( VK_OBJECT_TYPE_QUEUE, queue );
	result << ",\n";
	result << indent << "		/*pLabelInfo*/ " << nameSer.GetPtr(pLabelInfo);
	result << " );\n";
	result << "	}\n";
	FlushQueue( queue );
}

void CmdBeginDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pLabelInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pLabelInfo), nameSer, remapper, indent );
	}
	result << indent << "app.vkCmdBeginDebugUtilsLabelEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pLabelInfo*/ " << nameSer.GetPtr(pLabelInfo);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdEndDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdEndDebugUtilsLabelEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdInsertDebugUtilsLabelEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pLabelInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pLabelInfo), nameSer, remapper, indent );
	}
	result << indent << "app.vkCmdInsertDebugUtilsLabelEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pLabelInfo*/ " << nameSer.GetPtr(pLabelInfo);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CreateSamplerYcbcrConversion (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION, VkResourceID(*pYcbcrConversion), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateSamplerYcbcrConversion( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pYcbcrConversion*/ " << "&" << remapper( VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION, *pYcbcrConversion, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CmdSetDeviceMask (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t deviceMask) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdSetDeviceMask( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*deviceMask*/ " << IntToString(deviceMask);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDispatchBase (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdDispatchBase( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*baseGroupX*/ " << IntToString(baseGroupX);
	result << ",\n";
	result << indent << "		/*baseGroupY*/ " << IntToString(baseGroupY);
	result << ",\n";
	result << indent << "		/*baseGroupZ*/ " << IntToString(baseGroupZ);
	result << ",\n";
	result << indent << "		/*groupCountX*/ " << IntToString(groupCountX);
	result << ",\n";
	result << indent << "		/*groupCountY*/ " << IntToString(groupCountY);
	result << ",\n";
	result << indent << "		/*groupCountZ*/ " << IntToString(groupCountZ);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void GetDeviceQueue2 (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pQueueInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pQueueInfo), nameSer, remapper, indent );
	}
	result << indent << "app.vkGetDeviceQueue2( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pQueueInfo*/ " << nameSer.GetPtr(pQueueInfo);
	result << ",\n";
	result << indent << "		/*pQueue*/ " << "&" << remapper( VK_OBJECT_TYPE_QUEUE, *pQueue, true );
	result << " );\n";
	result << "	}\n";
	FlushGlobal();
}

void CmdDrawIndirectCountKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdDrawIndirectCountKHR( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*buffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, buffer );
	result << ",\n";
	result << indent << "		/*offset*/ " << IntToString(offset);
	result << ",\n";
	result << indent << "		/*countBuffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, countBuffer );
	result << ",\n";
	result << indent << "		/*countBufferOffset*/ " << IntToString(countBufferOffset);
	result << ",\n";
	result << indent << "		/*maxDrawCount*/ " << IntToString(maxDrawCount);
	result << ",\n";
	result << indent << "		/*stride*/ " << IntToString(stride);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDrawIndexedIndirectCountKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdDrawIndexedIndirectCountKHR( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*buffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, buffer );
	result << ",\n";
	result << indent << "		/*offset*/ " << IntToString(offset);
	result << ",\n";
	result << indent << "		/*countBuffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, countBuffer );
	result << ",\n";
	result << indent << "		/*countBufferOffset*/ " << IntToString(countBufferOffset);
	result << ",\n";
	result << indent << "		/*maxDrawCount*/ " << IntToString(maxDrawCount);
	result << ",\n";
	result << indent << "		/*stride*/ " << IntToString(stride);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CreateRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkRenderPassCreateInfo2KHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pCreateInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pCreateInfo), nameSer, remapper, indent );
	}
	remapper.CreateResource( VK_OBJECT_TYPE_RENDER_PASS, VkResourceID(*pRenderPass), chunkIndex );
	result << indent << "VK_CALL( app.vkCreateRenderPass2KHR( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*pCreateInfo*/ " << nameSer.GetPtr(pCreateInfo);
	result << ",\n";
	result << indent << "		/*pAllocator*/ " << "null";
	result << ",\n";
	result << indent << "		/*pRenderPass*/ " << "&" << remapper( VK_OBJECT_TYPE_RENDER_PASS, *pRenderPass, true );
	result << " ));\n";
	result << "	}\n";
	FlushGlobal();
}

void CmdBeginRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfoKHR * pSubpassBeginInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pRenderPassBegin ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pRenderPassBegin), nameSer, remapper, indent );
	}
	if ( pSubpassBeginInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pSubpassBeginInfo), nameSer, remapper, indent );
	}
	result << indent << "app.vkCmdBeginRenderPass2KHR( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pRenderPassBegin*/ " << nameSer.GetPtr(pRenderPassBegin);
	result << ",\n";
	result << indent << "		/*pSubpassBeginInfo*/ " << nameSer.GetPtr(pSubpassBeginInfo);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdNextSubpass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkSubpassBeginInfoKHR * pSubpassBeginInfo, const VkSubpassEndInfoKHR * pSubpassEndInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pSubpassBeginInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pSubpassBeginInfo), nameSer, remapper, indent );
	}
	if ( pSubpassEndInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pSubpassEndInfo), nameSer, remapper, indent );
	}
	result << indent << "app.vkCmdNextSubpass2KHR( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pSubpassBeginInfo*/ " << nameSer.GetPtr(pSubpassBeginInfo);
	result << ",\n";
	result << indent << "		/*pSubpassEndInfo*/ " << nameSer.GetPtr(pSubpassEndInfo);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdEndRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkSubpassEndInfoKHR * pSubpassEndInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pSubpassEndInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pSubpassEndInfo), nameSer, remapper, indent );
	}
	result << indent << "app.vkCmdEndRenderPass2KHR( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pSubpassEndInfo*/ " << nameSer.GetPtr(pSubpassEndInfo);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdBindTransformFeedbackBuffersEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pBuffers ) {
		CHECK( bindingCount > 0 );
		before << indent << "const VkBuffer  " << nameSer.MakeUnique( &pBuffers, "buffers"s, "buffer"s ) << "[] = {";
		for (uint i = 0; i < bindingCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_BUFFER, pBuffers[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pBuffers ) << ") == " << IntToString(bindingCount) << " );\n\n";
	}
	if ( pOffsets ) {
		CHECK( bindingCount > 0 );
		before << indent << "const VkDeviceSize  " << nameSer.MakeUnique( &pOffsets, "offsets"s ) << "[] = { ";
		for (uint i = 0; i < bindingCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(pOffsets[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pOffsets ) << ") == " << IntToString(bindingCount) << " );\n\n";
	}
	if ( pSizes ) {
		CHECK( bindingCount > 0 );
		before << indent << "const VkDeviceSize  " << nameSer.MakeUnique( &pSizes, "sizes"s ) << "[] = { ";
		for (uint i = 0; i < bindingCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(pSizes[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &pSizes ) << ") == " << IntToString(bindingCount) << " );\n\n";
	}
	result << indent << "app.vkCmdBindTransformFeedbackBuffersEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*firstBinding*/ " << IntToString(firstBinding);
	result << ",\n";
	result << indent << "		/*bindingCount*/ " << IntToString(bindingCount);
	result << ",\n";
	result << indent << "		/*pBuffers*/ " << nameSer.Get( &pBuffers );
	result << ",\n";
	result << indent << "		/*pOffsets*/ " << nameSer.Get( &pOffsets );
	result << ",\n";
	result << indent << "		/*pSizes*/ " << nameSer.Get( &pSizes );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdBeginQueryIndexedEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdBeginQueryIndexedEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*queryPool*/ " << remapper( VK_OBJECT_TYPE_QUERY_POOL, queryPool );
	result << ",\n";
	result << indent << "		/*query*/ " << IntToString(query);
	result << ",\n";
	result << indent << "		/*flags*/ " << Serialize_VkQueryControlFlags(flags);
	result << ",\n";
	result << indent << "		/*index*/ " << IntToString(index);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdEndQueryIndexedEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdEndQueryIndexedEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*queryPool*/ " << remapper( VK_OBJECT_TYPE_QUERY_POOL, queryPool );
	result << ",\n";
	result << indent << "		/*query*/ " << IntToString(query);
	result << ",\n";
	result << indent << "		/*index*/ " << IntToString(index);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdDrawIndirectByteCountEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdDrawIndirectByteCountEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*instanceCount*/ " << IntToString(instanceCount);
	result << ",\n";
	result << indent << "		/*firstInstance*/ " << IntToString(firstInstance);
	result << ",\n";
	result << indent << "		/*counterBuffer*/ " << remapper( VK_OBJECT_TYPE_BUFFER, counterBuffer );
	result << ",\n";
	result << indent << "		/*counterBufferOffset*/ " << IntToString(counterBufferOffset);
	result << ",\n";
	result << indent << "		/*counterOffset*/ " << IntToString(counterOffset);
	result << ",\n";
	result << indent << "		/*vertexStride*/ " << IntToString(vertexStride);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdBeginConditionalRenderingEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT * pConditionalRenderingBegin) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pConditionalRenderingBegin ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pConditionalRenderingBegin), nameSer, remapper, indent );
	}
	result << indent << "app.vkCmdBeginConditionalRenderingEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pConditionalRenderingBegin*/ " << nameSer.GetPtr(pConditionalRenderingBegin);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdEndConditionalRenderingEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdEndConditionalRenderingEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetSampleLocationsEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT * pSampleLocationsInfo) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pSampleLocationsInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(pSampleLocationsInfo), nameSer, remapper, indent );
	}
	result << indent << "app.vkCmdSetSampleLocationsEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*pSampleLocationsInfo*/ " << nameSer.GetPtr(pSampleLocationsInfo);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void CmdSetDiscardRectangleEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D * pDiscardRectangles) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	if ( pDiscardRectangles ) {
		CHECK( discardRectangleCount > 0 );
		const String arr_name = nameSer.MakeUnique( &pDiscardRectangles, "discardRectangles"s, "rect2D"s );
		before << indent << "VkRect2D  " << arr_name << "[" << IntToString(discardRectangleCount) << "] = {};\n";
		for (uint i = 0; i < discardRectangleCount; ++i) {
			Serialize2_VkRect2D( pDiscardRectangles + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << "app.vkCmdSetDiscardRectangleEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*firstDiscardRectangle*/ " << IntToString(firstDiscardRectangle);
	result << ",\n";
	result << indent << "		/*discardRectangleCount*/ " << IntToString(discardRectangleCount);
	result << ",\n";
	result << indent << "		/*pDiscardRectangles*/ " << nameSer.Get( &pDiscardRectangles );
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

void ResetQueryPoolEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkResetQueryPoolEXT( \n";
	result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device );
	result << ",\n";
	result << indent << "		/*queryPool*/ " << remapper( VK_OBJECT_TYPE_QUERY_POOL, queryPool );
	result << ",\n";
	result << indent << "		/*firstQuery*/ " << IntToString(firstQuery);
	result << ",\n";
	result << indent << "		/*queryCount*/ " << IntToString(queryCount);
	result << " );\n";
	result << "	}\n";
	FlushGlobal();
}

void CmdSetLineStippleEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) override
{
	nameSer.Clear();
	remapper.SetCurrentPos( chunkIndex );
	before << "	{\n";
	result << indent << "app.vkCmdSetLineStippleEXT( \n";
	result << indent << "		/*commandBuffer*/ " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, commandBuffer );
	result << ",\n";
	result << indent << "		/*lineStippleFactor*/ " << IntToString(lineStippleFactor);
	result << ",\n";
	result << indent << "		/*lineStipplePattern*/ " << IntToString(lineStipplePattern);
	result << " );\n";
	result << "	}\n";
	FlushCommandBuffer( commandBuffer );
}

#pragma warning (push)

