// auto-generated file

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkSwapchainKHR &result)
{
	CHECK_ERR( node );
	result = BitCast<VkSwapchainKHR>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkSwapchainKHR* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkSwapchainKHR>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkBufferView &result)
{
	CHECK_ERR( node );
	result = BitCast<VkBufferView>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkBufferView* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkBufferView>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkInstance &result)
{
	CHECK_ERR( node );
	result = BitCast<VkInstance>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkInstance* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkInstance>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkQueue &result)
{
	CHECK_ERR( node );
	result = BitCast<VkQueue>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkQueue* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkQueue>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkPhysicalDevice &result)
{
	CHECK_ERR( node );
	result = BitCast<VkPhysicalDevice>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkPhysicalDevice* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkPhysicalDevice>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDevice &result)
{
	CHECK_ERR( node );
	result = BitCast<VkDevice>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDevice* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkDevice>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkSemaphore &result)
{
	CHECK_ERR( node );
	result = BitCast<VkSemaphore>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkSemaphore* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkSemaphore>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkCommandBuffer &result)
{
	CHECK_ERR( node );
	result = BitCast<VkCommandBuffer>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkCommandBuffer* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkCommandBuffer>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkFence &result)
{
	CHECK_ERR( node );
	result = BitCast<VkFence>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkFence* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkFence>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkRenderPass &result)
{
	CHECK_ERR( node );
	result = BitCast<VkRenderPass>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkRenderPass* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkRenderPass>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDeviceMemory &result)
{
	CHECK_ERR( node );
	result = BitCast<VkDeviceMemory>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDeviceMemory* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkDeviceMemory>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkBuffer &result)
{
	CHECK_ERR( node );
	result = BitCast<VkBuffer>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkBuffer* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkBuffer>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkImage &result)
{
	CHECK_ERR( node );
	result = BitCast<VkImage>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkImage* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkImage>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDisplayModeKHR &result)
{
	CHECK_ERR( node );
	result = BitCast<VkDisplayModeKHR>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDisplayModeKHR* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkDisplayModeKHR>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkEvent &result)
{
	CHECK_ERR( node );
	result = BitCast<VkEvent>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkEvent* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkEvent>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkQueryPool &result)
{
	CHECK_ERR( node );
	result = BitCast<VkQueryPool>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkQueryPool* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkQueryPool>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkImageView &result)
{
	CHECK_ERR( node );
	result = BitCast<VkImageView>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkImageView* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkImageView>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkShaderModule &result)
{
	CHECK_ERR( node );
	result = BitCast<VkShaderModule>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkShaderModule* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkShaderModule>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkPipelineCache &result)
{
	CHECK_ERR( node );
	result = BitCast<VkPipelineCache>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkPipelineCache* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkPipelineCache>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkPipelineLayout &result)
{
	CHECK_ERR( node );
	result = BitCast<VkPipelineLayout>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkPipelineLayout* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkPipelineLayout>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkPipeline &result)
{
	CHECK_ERR( node );
	result = BitCast<VkPipeline>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkPipeline* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkPipeline>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDescriptorSetLayout &result)
{
	CHECK_ERR( node );
	result = BitCast<VkDescriptorSetLayout>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDescriptorSetLayout* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkDescriptorSetLayout>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkSampler &result)
{
	CHECK_ERR( node );
	result = BitCast<VkSampler>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkSampler* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkSampler>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDescriptorPool &result)
{
	CHECK_ERR( node );
	result = BitCast<VkDescriptorPool>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDescriptorPool* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkDescriptorPool>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDescriptorSet &result)
{
	CHECK_ERR( node );
	result = BitCast<VkDescriptorSet>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDescriptorSet* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkDescriptorSet>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkFramebuffer &result)
{
	CHECK_ERR( node );
	result = BitCast<VkFramebuffer>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkFramebuffer* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkFramebuffer>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkCommandPool &result)
{
	CHECK_ERR( node );
	result = BitCast<VkCommandPool>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkCommandPool* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkCommandPool>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkSurfaceKHR &result)
{
	CHECK_ERR( node );
	result = BitCast<VkSurfaceKHR>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkSurfaceKHR* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkSurfaceKHR>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDisplayKHR &result)
{
	CHECK_ERR( node );
	result = BitCast<VkDisplayKHR>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDisplayKHR* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkDisplayKHR>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkObjectTableNVX &result)
{
	CHECK_ERR( node );
	result = BitCast<VkObjectTableNVX>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkObjectTableNVX* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkObjectTableNVX>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkIndirectCommandsLayoutNVX &result)
{
	CHECK_ERR( node );
	result = BitCast<VkIndirectCommandsLayoutNVX>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkIndirectCommandsLayoutNVX* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkIndirectCommandsLayoutNVX>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkValidationCacheEXT &result)
{
	CHECK_ERR( node );
	result = BitCast<VkValidationCacheEXT>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkValidationCacheEXT* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkValidationCacheEXT>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkSamplerYcbcrConversion &result)
{
	CHECK_ERR( node );
	result = BitCast<VkSamplerYcbcrConversion>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkSamplerYcbcrConversion* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkSamplerYcbcrConversion>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDescriptorUpdateTemplate &result)
{
	CHECK_ERR( node );
	result = BitCast<VkDescriptorUpdateTemplate>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkDescriptorUpdateTemplate* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkDescriptorUpdateTemplate>( 1 );
	return _ParseResource( node, OUT *result );
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkAccelerationStructureNV &result)
{
	CHECK_ERR( node );
	result = BitCast<VkAccelerationStructureNV>(std::atoll( node->value() ));
	return true;
}

bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT VkAccelerationStructureNV* &result)
{
	CHECK_ERR( node );
	result = _allocator.Alloc<VkAccelerationStructureNV>( 1 );
	return _ParseResource( node, OUT *result );
}

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkPhysicalDeviceMemoryPriorityFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceMemoryPriorityFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceMemoryPriorityFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceMemoryPriorityFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMemoryPriorityFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceMemoryPriorityFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryPriority" ), OUT result.memoryPriority ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV (const Node_t *node, OUT VkPipelineViewportCoarseSampleOrderStateCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV (const Node_t *node, OUT VkPipelineViewportCoarseSampleOrderStateCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleOrderType" ), OUT result.sampleOrderType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "customSampleOrderCount" ), OUT result.customSampleOrderCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pCustomSampleOrders" ), OUT const_cast<VkCoarseSampleOrderCustomNV * &>(result.pCustomSampleOrders), INOUT result.customSampleOrderCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorUpdateTemplateEntry (const Node_t *node, OUT VkDescriptorUpdateTemplateEntry* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorUpdateTemplateEntry>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorUpdateTemplateEntry( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorUpdateTemplateEntry (const Node_t *node, OUT VkDescriptorUpdateTemplateEntry &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstBinding" ), OUT result.dstBinding ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstArrayElement" ), OUT result.dstArrayElement ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorCount" ), OUT result.descriptorCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorType" ), OUT result.descriptorType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stride" ), OUT result.stride ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineTessellationDomainOriginStateCreateInfo (const Node_t *node, OUT VkPipelineTessellationDomainOriginStateCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineTessellationDomainOriginStateCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineTessellationDomainOriginStateCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineTessellationDomainOriginStateCreateInfo (const Node_t *node, OUT VkPipelineTessellationDomainOriginStateCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "domainOrigin" ), OUT result.domainOrigin ));
	return true;
}

bool  RdCaptureReader::_Parse_VkApplicationInfo (const Node_t *node, OUT VkApplicationInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkApplicationInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkApplicationInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkApplicationInfo (const Node_t *node, OUT VkApplicationInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pApplicationName" ), OUT const_cast<char * &>(result.pApplicationName) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "applicationVersion" ), OUT result.applicationVersion ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pEngineName" ), OUT const_cast<char * &>(result.pEngineName) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "engineVersion" ), OUT result.engineVersion ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "apiVersion" ), OUT result.apiVersion ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceLimits (const Node_t *node, OUT VkPhysicalDeviceLimits* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceLimits>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceLimits( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceLimits (const Node_t *node, OUT VkPhysicalDeviceLimits &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxImageDimension1D" ), OUT result.maxImageDimension1D ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxImageDimension2D" ), OUT result.maxImageDimension2D ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxImageDimension3D" ), OUT result.maxImageDimension3D ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxImageDimensionCube" ), OUT result.maxImageDimensionCube ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxImageArrayLayers" ), OUT result.maxImageArrayLayers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTexelBufferElements" ), OUT result.maxTexelBufferElements ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxUniformBufferRange" ), OUT result.maxUniformBufferRange ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxStorageBufferRange" ), OUT result.maxStorageBufferRange ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPushConstantsSize" ), OUT result.maxPushConstantsSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxMemoryAllocationCount" ), OUT result.maxMemoryAllocationCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxSamplerAllocationCount" ), OUT result.maxSamplerAllocationCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bufferImageGranularity" ), OUT result.bufferImageGranularity ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sparseAddressSpaceSize" ), OUT result.sparseAddressSpaceSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxBoundDescriptorSets" ), OUT result.maxBoundDescriptorSets ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorSamplers" ), OUT result.maxPerStageDescriptorSamplers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorUniformBuffers" ), OUT result.maxPerStageDescriptorUniformBuffers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorStorageBuffers" ), OUT result.maxPerStageDescriptorStorageBuffers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorSampledImages" ), OUT result.maxPerStageDescriptorSampledImages ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorStorageImages" ), OUT result.maxPerStageDescriptorStorageImages ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorInputAttachments" ), OUT result.maxPerStageDescriptorInputAttachments ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageResources" ), OUT result.maxPerStageResources ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetSamplers" ), OUT result.maxDescriptorSetSamplers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetUniformBuffers" ), OUT result.maxDescriptorSetUniformBuffers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetUniformBuffersDynamic" ), OUT result.maxDescriptorSetUniformBuffersDynamic ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetStorageBuffers" ), OUT result.maxDescriptorSetStorageBuffers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetStorageBuffersDynamic" ), OUT result.maxDescriptorSetStorageBuffersDynamic ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetSampledImages" ), OUT result.maxDescriptorSetSampledImages ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetStorageImages" ), OUT result.maxDescriptorSetStorageImages ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetInputAttachments" ), OUT result.maxDescriptorSetInputAttachments ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxVertexInputAttributes" ), OUT result.maxVertexInputAttributes ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxVertexInputBindings" ), OUT result.maxVertexInputBindings ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxVertexInputAttributeOffset" ), OUT result.maxVertexInputAttributeOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxVertexInputBindingStride" ), OUT result.maxVertexInputBindingStride ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxVertexOutputComponents" ), OUT result.maxVertexOutputComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTessellationGenerationLevel" ), OUT result.maxTessellationGenerationLevel ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTessellationPatchSize" ), OUT result.maxTessellationPatchSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTessellationControlPerVertexInputComponents" ), OUT result.maxTessellationControlPerVertexInputComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTessellationControlPerVertexOutputComponents" ), OUT result.maxTessellationControlPerVertexOutputComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTessellationControlPerPatchOutputComponents" ), OUT result.maxTessellationControlPerPatchOutputComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTessellationControlTotalOutputComponents" ), OUT result.maxTessellationControlTotalOutputComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTessellationEvaluationInputComponents" ), OUT result.maxTessellationEvaluationInputComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTessellationEvaluationOutputComponents" ), OUT result.maxTessellationEvaluationOutputComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxGeometryShaderInvocations" ), OUT result.maxGeometryShaderInvocations ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxGeometryInputComponents" ), OUT result.maxGeometryInputComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxGeometryOutputComponents" ), OUT result.maxGeometryOutputComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxGeometryOutputVertices" ), OUT result.maxGeometryOutputVertices ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxGeometryTotalOutputComponents" ), OUT result.maxGeometryTotalOutputComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxFragmentInputComponents" ), OUT result.maxFragmentInputComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxFragmentOutputAttachments" ), OUT result.maxFragmentOutputAttachments ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxFragmentDualSrcAttachments" ), OUT result.maxFragmentDualSrcAttachments ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxFragmentCombinedOutputResources" ), OUT result.maxFragmentCombinedOutputResources ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxComputeSharedMemorySize" ), OUT result.maxComputeSharedMemorySize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxComputeWorkGroupCount" ), OUT result.maxComputeWorkGroupCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxComputeWorkGroupInvocations" ), OUT result.maxComputeWorkGroupInvocations ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxComputeWorkGroupSize" ), OUT result.maxComputeWorkGroupSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subPixelPrecisionBits" ), OUT result.subPixelPrecisionBits ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subTexelPrecisionBits" ), OUT result.subTexelPrecisionBits ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "mipmapPrecisionBits" ), OUT result.mipmapPrecisionBits ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDrawIndexedIndexValue" ), OUT result.maxDrawIndexedIndexValue ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDrawIndirectCount" ), OUT result.maxDrawIndirectCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxSamplerLodBias" ), OUT result.maxSamplerLodBias ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxSamplerAnisotropy" ), OUT result.maxSamplerAnisotropy ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxViewports" ), OUT result.maxViewports ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxViewportDimensions" ), OUT result.maxViewportDimensions ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewportBoundsRange" ), OUT result.viewportBoundsRange ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewportSubPixelBits" ), OUT result.viewportSubPixelBits ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minMemoryMapAlignment" ), OUT result.minMemoryMapAlignment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minTexelBufferOffsetAlignment" ), OUT result.minTexelBufferOffsetAlignment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minUniformBufferOffsetAlignment" ), OUT result.minUniformBufferOffsetAlignment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minStorageBufferOffsetAlignment" ), OUT result.minStorageBufferOffsetAlignment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minTexelOffset" ), OUT result.minTexelOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTexelOffset" ), OUT result.maxTexelOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minTexelGatherOffset" ), OUT result.minTexelGatherOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTexelGatherOffset" ), OUT result.maxTexelGatherOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minInterpolationOffset" ), OUT result.minInterpolationOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxInterpolationOffset" ), OUT result.maxInterpolationOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subPixelInterpolationOffsetBits" ), OUT result.subPixelInterpolationOffsetBits ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxFramebufferWidth" ), OUT result.maxFramebufferWidth ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxFramebufferHeight" ), OUT result.maxFramebufferHeight ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxFramebufferLayers" ), OUT result.maxFramebufferLayers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "framebufferColorSampleCounts" ), OUT result.framebufferColorSampleCounts ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "framebufferDepthSampleCounts" ), OUT result.framebufferDepthSampleCounts ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "framebufferStencilSampleCounts" ), OUT result.framebufferStencilSampleCounts ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "framebufferNoAttachmentsSampleCounts" ), OUT result.framebufferNoAttachmentsSampleCounts ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxColorAttachments" ), OUT result.maxColorAttachments ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampledImageColorSampleCounts" ), OUT result.sampledImageColorSampleCounts ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampledImageIntegerSampleCounts" ), OUT result.sampledImageIntegerSampleCounts ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampledImageDepthSampleCounts" ), OUT result.sampledImageDepthSampleCounts ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampledImageStencilSampleCounts" ), OUT result.sampledImageStencilSampleCounts ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "storageImageSampleCounts" ), OUT result.storageImageSampleCounts ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxSampleMaskWords" ), OUT result.maxSampleMaskWords ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "timestampComputeAndGraphics" ), OUT result.timestampComputeAndGraphics ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "timestampPeriod" ), OUT result.timestampPeriod ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxClipDistances" ), OUT result.maxClipDistances ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxCullDistances" ), OUT result.maxCullDistances ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxCombinedClipAndCullDistances" ), OUT result.maxCombinedClipAndCullDistances ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "discreteQueuePriorities" ), OUT result.discreteQueuePriorities ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pointSizeRange" ), OUT result.pointSizeRange ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "lineWidthRange" ), OUT result.lineWidthRange ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pointSizeGranularity" ), OUT result.pointSizeGranularity ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "lineWidthGranularity" ), OUT result.lineWidthGranularity ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "strictLines" ), OUT result.strictLines ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "standardSampleLocations" ), OUT result.standardSampleLocations ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "optimalBufferCopyOffsetAlignment" ), OUT result.optimalBufferCopyOffsetAlignment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "optimalBufferCopyRowPitchAlignment" ), OUT result.optimalBufferCopyRowPitchAlignment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "nonCoherentAtomSize" ), OUT result.nonCoherentAtomSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageFormatProperties (const Node_t *node, OUT VkImageFormatProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageFormatProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageFormatProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageFormatProperties (const Node_t *node, OUT VkImageFormatProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "maxExtent" ), OUT result.maxExtent ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxMipLevels" ), OUT result.maxMipLevels ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxArrayLayers" ), OUT result.maxArrayLayers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleCounts" ), OUT result.sampleCounts ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxResourceSize" ), OUT result.maxResourceSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDebugUtilsObjectNameInfoEXT (const Node_t *node, OUT VkDebugUtilsObjectNameInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDebugUtilsObjectNameInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDebugUtilsObjectNameInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDebugUtilsObjectNameInfoEXT (const Node_t *node, OUT VkDebugUtilsObjectNameInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "objectType" ), OUT result.objectType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "objectHandle" ), OUT result.objectHandle ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pObjectName" ), OUT const_cast<char * &>(result.pObjectName) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBufferViewCreateInfo (const Node_t *node, OUT VkBufferViewCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBufferViewCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBufferViewCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBufferViewCreateInfo (const Node_t *node, OUT VkBufferViewCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "buffer" ), OUT result.buffer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "range" ), OUT result.range ));
	return true;
}

bool  RdCaptureReader::_Parse_VkInstanceCreateInfo (const Node_t *node, OUT VkInstanceCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkInstanceCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkInstanceCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkInstanceCreateInfo (const Node_t *node, OUT VkInstanceCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pApplicationInfo" ), OUT const_cast<VkApplicationInfo * &>(result.pApplicationInfo) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "enabledLayerCount" ), OUT result.enabledLayerCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "ppEnabledLayerNames" ), OUT const_cast<char * * &>(result.ppEnabledLayerNames), INOUT result.enabledLayerCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "enabledExtensionCount" ), OUT result.enabledExtensionCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "ppEnabledExtensionNames" ), OUT const_cast<char * * &>(result.ppEnabledExtensionNames), INOUT result.enabledExtensionCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceLineRasterizationFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceLineRasterizationFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceLineRasterizationFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceLineRasterizationFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceLineRasterizationFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceLineRasterizationFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "rectangularLines" ), OUT result.rectangularLines ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bresenhamLines" ), OUT result.bresenhamLines ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "smoothLines" ), OUT result.smoothLines ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stippledRectangularLines" ), OUT result.stippledRectangularLines ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stippledBresenhamLines" ), OUT result.stippledBresenhamLines ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stippledSmoothLines" ), OUT result.stippledSmoothLines ));
	return true;
}

bool  RdCaptureReader::_Parse_VkValidationCacheCreateInfoEXT (const Node_t *node, OUT VkValidationCacheCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkValidationCacheCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkValidationCacheCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkValidationCacheCreateInfoEXT (const Node_t *node, OUT VkValidationCacheCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "initialDataSize" ), OUT result.initialDataSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pInitialData" ), OUT const_cast<void * &>(result.pInitialData) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkFormatProperties (const Node_t *node, OUT VkFormatProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkFormatProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkFormatProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkFormatProperties (const Node_t *node, OUT VkFormatProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "linearTilingFeatures" ), OUT result.linearTilingFeatures ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "optimalTilingFeatures" ), OUT result.optimalTilingFeatures ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bufferFeatures" ), OUT result.bufferFeatures ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryBarrier (const Node_t *node, OUT VkMemoryBarrier* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryBarrier>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryBarrier( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryBarrier (const Node_t *node, OUT VkMemoryBarrier &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcAccessMask" ), OUT result.srcAccessMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstAccessMask" ), OUT result.dstAccessMask ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineColorBlendAttachmentState (const Node_t *node, OUT VkPipelineColorBlendAttachmentState* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineColorBlendAttachmentState>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineColorBlendAttachmentState( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineColorBlendAttachmentState (const Node_t *node, OUT VkPipelineColorBlendAttachmentState &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "blendEnable" ), OUT result.blendEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcColorBlendFactor" ), OUT result.srcColorBlendFactor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstColorBlendFactor" ), OUT result.dstColorBlendFactor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "colorBlendOp" ), OUT result.colorBlendOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcAlphaBlendFactor" ), OUT result.srcAlphaBlendFactor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstAlphaBlendFactor" ), OUT result.dstAlphaBlendFactor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "alphaBlendOp" ), OUT result.alphaBlendOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "colorWriteMask" ), OUT result.colorWriteMask ));
	return true;
}

bool  RdCaptureReader::_Parse_VkAllocationCallbacks (const Node_t *node, OUT VkAllocationCallbacks* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAllocationCallbacks>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAllocationCallbacks( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAllocationCallbacks (const Node_t *node, OUT VkAllocationCallbacks &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pUserData" ), OUT const_cast<void * &>(result.pUserData) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pfnAllocation" ), OUT result.pfnAllocation ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pfnReallocation" ), OUT result.pfnReallocation ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pfnFree" ), OUT result.pfnFree ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pfnInternalAllocation" ), OUT result.pfnInternalAllocation ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pfnInternalFree" ), OUT result.pfnInternalFree ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkMemoryWin32HandlePropertiesKHR (const Node_t *node, OUT VkMemoryWin32HandlePropertiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryWin32HandlePropertiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryWin32HandlePropertiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryWin32HandlePropertiesKHR (const Node_t *node, OUT VkMemoryWin32HandlePropertiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryTypeBits" ), OUT result.memoryTypeBits ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkSubresourceLayout (const Node_t *node, OUT VkSubresourceLayout* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSubresourceLayout>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSubresourceLayout( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSubresourceLayout (const Node_t *node, OUT VkSubresourceLayout &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "size" ), OUT result.size ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "rowPitch" ), OUT result.rowPitch ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "arrayPitch" ), OUT result.arrayPitch ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthPitch" ), OUT result.depthPitch ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFeatures (const Node_t *node, OUT VkPhysicalDeviceFeatures* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceFeatures>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceFeatures( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFeatures (const Node_t *node, OUT VkPhysicalDeviceFeatures &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "robustBufferAccess" ), OUT result.robustBufferAccess ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fullDrawIndexUint32" ), OUT result.fullDrawIndexUint32 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageCubeArray" ), OUT result.imageCubeArray ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "independentBlend" ), OUT result.independentBlend ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "geometryShader" ), OUT result.geometryShader ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "tessellationShader" ), OUT result.tessellationShader ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleRateShading" ), OUT result.sampleRateShading ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dualSrcBlend" ), OUT result.dualSrcBlend ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "logicOp" ), OUT result.logicOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "multiDrawIndirect" ), OUT result.multiDrawIndirect ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "drawIndirectFirstInstance" ), OUT result.drawIndirectFirstInstance ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthClamp" ), OUT result.depthClamp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthBiasClamp" ), OUT result.depthBiasClamp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fillModeNonSolid" ), OUT result.fillModeNonSolid ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthBounds" ), OUT result.depthBounds ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "wideLines" ), OUT result.wideLines ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "largePoints" ), OUT result.largePoints ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "alphaToOne" ), OUT result.alphaToOne ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "multiViewport" ), OUT result.multiViewport ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "samplerAnisotropy" ), OUT result.samplerAnisotropy ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "textureCompressionETC2" ), OUT result.textureCompressionETC2 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "textureCompressionASTC_LDR" ), OUT result.textureCompressionASTC_LDR ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "textureCompressionBC" ), OUT result.textureCompressionBC ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "occlusionQueryPrecise" ), OUT result.occlusionQueryPrecise ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pipelineStatisticsQuery" ), OUT result.pipelineStatisticsQuery ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vertexPipelineStoresAndAtomics" ), OUT result.vertexPipelineStoresAndAtomics ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fragmentStoresAndAtomics" ), OUT result.fragmentStoresAndAtomics ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderTessellationAndGeometryPointSize" ), OUT result.shaderTessellationAndGeometryPointSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderImageGatherExtended" ), OUT result.shaderImageGatherExtended ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageImageExtendedFormats" ), OUT result.shaderStorageImageExtendedFormats ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageImageMultisample" ), OUT result.shaderStorageImageMultisample ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageImageReadWithoutFormat" ), OUT result.shaderStorageImageReadWithoutFormat ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageImageWriteWithoutFormat" ), OUT result.shaderStorageImageWriteWithoutFormat ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderUniformBufferArrayDynamicIndexing" ), OUT result.shaderUniformBufferArrayDynamicIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderSampledImageArrayDynamicIndexing" ), OUT result.shaderSampledImageArrayDynamicIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageBufferArrayDynamicIndexing" ), OUT result.shaderStorageBufferArrayDynamicIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageImageArrayDynamicIndexing" ), OUT result.shaderStorageImageArrayDynamicIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderClipDistance" ), OUT result.shaderClipDistance ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderCullDistance" ), OUT result.shaderCullDistance ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderFloat64" ), OUT result.shaderFloat64 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderInt64" ), OUT result.shaderInt64 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderInt16" ), OUT result.shaderInt16 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderResourceResidency" ), OUT result.shaderResourceResidency ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderResourceMinLod" ), OUT result.shaderResourceMinLod ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sparseBinding" ), OUT result.sparseBinding ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sparseResidencyBuffer" ), OUT result.sparseResidencyBuffer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sparseResidencyImage2D" ), OUT result.sparseResidencyImage2D ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sparseResidencyImage3D" ), OUT result.sparseResidencyImage3D ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sparseResidency2Samples" ), OUT result.sparseResidency2Samples ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sparseResidency4Samples" ), OUT result.sparseResidency4Samples ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sparseResidency8Samples" ), OUT result.sparseResidency8Samples ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sparseResidency16Samples" ), OUT result.sparseResidency16Samples ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sparseResidencyAliased" ), OUT result.sparseResidencyAliased ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "variableMultisampleRate" ), OUT result.variableMultisampleRate ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "inheritedQueries" ), OUT result.inheritedQueries ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_ANDROID_H_
bool  RdCaptureReader::_Parse_VkAndroidHardwareBufferUsageANDROID (const Node_t *node, OUT VkAndroidHardwareBufferUsageANDROID* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAndroidHardwareBufferUsageANDROID>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAndroidHardwareBufferUsageANDROID( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAndroidHardwareBufferUsageANDROID (const Node_t *node, OUT VkAndroidHardwareBufferUsageANDROID &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "androidHardwareBufferUsage" ), OUT result.androidHardwareBufferUsage ));
	return true;
}

#endif // VULKAN_ANDROID_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkPipelineInputAssemblyStateCreateInfo (const Node_t *node, OUT VkPipelineInputAssemblyStateCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineInputAssemblyStateCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineInputAssemblyStateCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineInputAssemblyStateCreateInfo (const Node_t *node, OUT VkPipelineInputAssemblyStateCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "topology" ), OUT result.topology ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "primitiveRestartEnable" ), OUT result.primitiveRestartEnable ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExtent3D (const Node_t *node, OUT VkExtent3D* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExtent3D>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExtent3D( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExtent3D (const Node_t *node, OUT VkExtent3D &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "width" ), OUT result.width ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "height" ), OUT result.height ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depth" ), OUT result.depth ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExternalMemoryBufferCreateInfo (const Node_t *node, OUT VkExternalMemoryBufferCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExternalMemoryBufferCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExternalMemoryBufferCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExternalMemoryBufferCreateInfo (const Node_t *node, OUT VkExternalMemoryBufferCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleTypes" ), OUT result.handleTypes ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSemaphoreCreateInfo (const Node_t *node, OUT VkSemaphoreCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSemaphoreCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSemaphoreCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSemaphoreCreateInfo (const Node_t *node, OUT VkSemaphoreCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceCreateInfo (const Node_t *node, OUT VkDeviceCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceCreateInfo (const Node_t *node, OUT VkDeviceCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueCreateInfoCount" ), OUT result.queueCreateInfoCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pQueueCreateInfos" ), OUT const_cast<VkDeviceQueueCreateInfo * &>(result.pQueueCreateInfos), INOUT result.queueCreateInfoCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "enabledLayerCount" ), OUT result.enabledLayerCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "ppEnabledLayerNames" ), OUT const_cast<char * * &>(result.ppEnabledLayerNames), INOUT result.enabledLayerCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "enabledExtensionCount" ), OUT result.enabledExtensionCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "ppEnabledExtensionNames" ), OUT const_cast<char * * &>(result.ppEnabledExtensionNames), INOUT result.enabledExtensionCount ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pEnabledFeatures" ), OUT const_cast<VkPhysicalDeviceFeatures * &>(result.pEnabledFeatures) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExternalImageFormatProperties (const Node_t *node, OUT VkExternalImageFormatProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExternalImageFormatProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExternalImageFormatProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExternalImageFormatProperties (const Node_t *node, OUT VkExternalImageFormatProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "externalMemoryProperties" ), OUT result.externalMemoryProperties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSparseProperties (const Node_t *node, OUT VkPhysicalDeviceSparseProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceSparseProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceSparseProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSparseProperties (const Node_t *node, OUT VkPhysicalDeviceSparseProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "residencyStandard2DBlockShape" ), OUT result.residencyStandard2DBlockShape ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "residencyStandard2DMultisampleBlockShape" ), OUT result.residencyStandard2DMultisampleBlockShape ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "residencyStandard3DBlockShape" ), OUT result.residencyStandard3DBlockShape ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "residencyAlignedMipSize" ), OUT result.residencyAlignedMipSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "residencyNonResidentStrict" ), OUT result.residencyNonResidentStrict ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceProperties (const Node_t *node, OUT VkPhysicalDeviceProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceProperties (const Node_t *node, OUT VkPhysicalDeviceProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "apiVersion" ), OUT result.apiVersion ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "driverVersion" ), OUT result.driverVersion ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vendorID" ), OUT result.vendorID ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceID" ), OUT result.deviceID ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceType" ), OUT result.deviceType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceName" ), OUT result.deviceName ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pipelineCacheUUID" ), OUT result.pipelineCacheUUID ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "limits" ), OUT result.limits ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "sparseProperties" ), OUT result.sparseProperties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineCoverageReductionStateCreateInfoNV (const Node_t *node, OUT VkPipelineCoverageReductionStateCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineCoverageReductionStateCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineCoverageReductionStateCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineCoverageReductionStateCreateInfoNV (const Node_t *node, OUT VkPipelineCoverageReductionStateCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "coverageReductionMode" ), OUT result.coverageReductionMode ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSparseBufferMemoryBindInfo (const Node_t *node, OUT VkSparseBufferMemoryBindInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSparseBufferMemoryBindInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSparseBufferMemoryBindInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSparseBufferMemoryBindInfo (const Node_t *node, OUT VkSparseBufferMemoryBindInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "buffer" ), OUT result.buffer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bindCount" ), OUT result.bindCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pBinds" ), OUT const_cast<VkSparseMemoryBind * &>(result.pBinds), INOUT result.bindCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkQueueFamilyProperties (const Node_t *node, OUT VkQueueFamilyProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkQueueFamilyProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkQueueFamilyProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkQueueFamilyProperties (const Node_t *node, OUT VkQueueFamilyProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueFlags" ), OUT result.queueFlags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueCount" ), OUT result.queueCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "timestampValidBits" ), OUT result.timestampValidBits ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "minImageTransferGranularity" ), OUT result.minImageTransferGranularity ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryType (const Node_t *node, OUT VkMemoryType* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryType>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryType( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryType (const Node_t *node, OUT VkMemoryType &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "propertyFlags" ), OUT result.propertyFlags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "heapIndex" ), OUT result.heapIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkGeometryTrianglesNV (const Node_t *node, OUT VkGeometryTrianglesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkGeometryTrianglesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkGeometryTrianglesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkGeometryTrianglesNV (const Node_t *node, OUT VkGeometryTrianglesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "vertexData" ), OUT result.vertexData ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vertexOffset" ), OUT result.vertexOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vertexCount" ), OUT result.vertexCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vertexStride" ), OUT result.vertexStride ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vertexFormat" ), OUT result.vertexFormat ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "indexData" ), OUT result.indexData ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "indexOffset" ), OUT result.indexOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "indexCount" ), OUT result.indexCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "indexType" ), OUT result.indexType ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "transformData" ), OUT result.transformData ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "transformOffset" ), OUT result.transformOffset ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryHeap (const Node_t *node, OUT VkMemoryHeap* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryHeap>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryHeap( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryHeap (const Node_t *node, OUT VkMemoryHeap &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "size" ), OUT result.size ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageFormatListCreateInfoKHR (const Node_t *node, OUT VkImageFormatListCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageFormatListCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageFormatListCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageFormatListCreateInfoKHR (const Node_t *node, OUT VkImageFormatListCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewFormatCount" ), OUT result.viewFormatCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pViewFormats" ), OUT const_cast<VkFormat * &>(result.pViewFormats), INOUT result.viewFormatCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMemoryProperties (const Node_t *node, OUT VkPhysicalDeviceMemoryProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceMemoryProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceMemoryProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMemoryProperties (const Node_t *node, OUT VkPhysicalDeviceMemoryProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryTypeCount" ), OUT result.memoryTypeCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "memoryTypes" ), OUT result.memoryTypes, INOUT result.memoryTypeCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryHeapCount" ), OUT result.memoryHeapCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "memoryHeaps" ), OUT result.memoryHeaps, INOUT result.memoryHeapCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkOffset2D (const Node_t *node, OUT VkOffset2D* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkOffset2D>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkOffset2D( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkOffset2D (const Node_t *node, OUT VkOffset2D &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "x" ), OUT result.x ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "y" ), OUT result.y ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkSurfaceFullScreenExclusiveInfoEXT (const Node_t *node, OUT VkSurfaceFullScreenExclusiveInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSurfaceFullScreenExclusiveInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSurfaceFullScreenExclusiveInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSurfaceFullScreenExclusiveInfoEXT (const Node_t *node, OUT VkSurfaceFullScreenExclusiveInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fullScreenExclusive" ), OUT result.fullScreenExclusive ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkDeviceEventInfoEXT (const Node_t *node, OUT VkDeviceEventInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceEventInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceEventInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceEventInfoEXT (const Node_t *node, OUT VkDeviceEventInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceEvent" ), OUT result.deviceEvent ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineExecutableInternalRepresentationKHR (const Node_t *node, OUT VkPipelineExecutableInternalRepresentationKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineExecutableInternalRepresentationKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineExecutableInternalRepresentationKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineExecutableInternalRepresentationKHR (const Node_t *node, OUT VkPipelineExecutableInternalRepresentationKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "name" ), OUT result.name ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "description" ), OUT result.description ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "isText" ), OUT result.isText ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dataSize" ), OUT result.dataSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pData" ), OUT const_cast<void * &>(result.pData) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMappedMemoryRange (const Node_t *node, OUT VkMappedMemoryRange* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMappedMemoryRange>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMappedMemoryRange( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMappedMemoryRange (const Node_t *node, OUT VkMappedMemoryRange &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "memory" ), OUT result.memory ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "size" ), OUT result.size ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceQueueCreateInfo (const Node_t *node, OUT VkDeviceQueueCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceQueueCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceQueueCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceQueueCreateInfo (const Node_t *node, OUT VkDeviceQueueCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueFamilyIndex" ), OUT result.queueFamilyIndex ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueCount" ), OUT result.queueCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pQueuePriorities" ), OUT const_cast<float * &>(result.pQueuePriorities), INOUT result.queueCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSparseMemoryBind (const Node_t *node, OUT VkSparseMemoryBind* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSparseMemoryBind>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSparseMemoryBind( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSparseMemoryBind (const Node_t *node, OUT VkSparseMemoryBind &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "resourceOffset" ), OUT result.resourceOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "size" ), OUT result.size ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "memory" ), OUT result.memory ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryOffset" ), OUT result.memoryOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineDynamicStateCreateInfo (const Node_t *node, OUT VkPipelineDynamicStateCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineDynamicStateCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineDynamicStateCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineDynamicStateCreateInfo (const Node_t *node, OUT VkPipelineDynamicStateCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dynamicStateCount" ), OUT result.dynamicStateCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pDynamicStates" ), OUT const_cast<VkDynamicState * &>(result.pDynamicStates), INOUT result.dynamicStateCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSubmitInfo (const Node_t *node, OUT VkSubmitInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSubmitInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSubmitInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSubmitInfo (const Node_t *node, OUT VkSubmitInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "waitSemaphoreCount" ), OUT result.waitSemaphoreCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pWaitSemaphores" ), OUT const_cast<VkSemaphore * &>(result.pWaitSemaphores), INOUT result.waitSemaphoreCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pWaitDstStageMask" ), OUT const_cast<VkPipelineStageFlags * &>(result.pWaitDstStageMask), INOUT result.waitSemaphoreCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "commandBufferCount" ), OUT result.commandBufferCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pCommandBuffers" ), OUT const_cast<VkCommandBuffer * &>(result.pCommandBuffers), INOUT result.commandBufferCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "signalSemaphoreCount" ), OUT result.signalSemaphoreCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pSignalSemaphores" ), OUT const_cast<VkSemaphore * &>(result.pSignalSemaphores), INOUT result.signalSemaphoreCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageViewCreateInfo (const Node_t *node, OUT VkImageViewCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageViewCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageViewCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageViewCreateInfo (const Node_t *node, OUT VkImageViewCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "image" ), OUT result.image ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewType" ), OUT result.viewType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "components" ), OUT result.components ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "subresourceRange" ), OUT result.subresourceRange ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceTransformFeedbackFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceTransformFeedbackFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceTransformFeedbackFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceTransformFeedbackFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceTransformFeedbackFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceTransformFeedbackFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "transformFeedback" ), OUT result.transformFeedback ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "geometryStreams" ), OUT result.geometryStreams ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineTessellationStateCreateInfo (const Node_t *node, OUT VkPipelineTessellationStateCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineTessellationStateCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineTessellationStateCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineTessellationStateCreateInfo (const Node_t *node, OUT VkPipelineTessellationStateCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "patchControlPoints" ), OUT result.patchControlPoints ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImportMemoryHostPointerInfoEXT (const Node_t *node, OUT VkImportMemoryHostPointerInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImportMemoryHostPointerInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImportMemoryHostPointerInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImportMemoryHostPointerInfoEXT (const Node_t *node, OUT VkImportMemoryHostPointerInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pHostPointer" ), OUT const_cast<void * &>(result.pHostPointer) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceImageViewImageFormatInfoEXT (const Node_t *node, OUT VkPhysicalDeviceImageViewImageFormatInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceImageViewImageFormatInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceImageViewImageFormatInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceImageViewImageFormatInfoEXT (const Node_t *node, OUT VkPhysicalDeviceImageViewImageFormatInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageViewType" ), OUT result.imageViewType ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryAllocateInfo (const Node_t *node, OUT VkMemoryAllocateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryAllocateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryAllocateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryAllocateInfo (const Node_t *node, OUT VkMemoryAllocateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "allocationSize" ), OUT result.allocationSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryTypeIndex" ), OUT result.memoryTypeIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBufferDeviceAddressCreateInfoEXT (const Node_t *node, OUT VkBufferDeviceAddressCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBufferDeviceAddressCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBufferDeviceAddressCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBufferDeviceAddressCreateInfoEXT (const Node_t *node, OUT VkBufferDeviceAddressCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceAddress" ), OUT result.deviceAddress ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSpecializationMapEntry (const Node_t *node, OUT VkSpecializationMapEntry* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSpecializationMapEntry>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSpecializationMapEntry( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSpecializationMapEntry (const Node_t *node, OUT VkSpecializationMapEntry &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "constantID" ), OUT result.constantID ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "size" ), OUT result.size ));
	return true;
}

bool  RdCaptureReader::_Parse_VkComponentMapping (const Node_t *node, OUT VkComponentMapping* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkComponentMapping>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkComponentMapping( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkComponentMapping (const Node_t *node, OUT VkComponentMapping &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "r" ), OUT result.r ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "g" ), OUT result.g ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "b" ), OUT result.b ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "a" ), OUT result.a ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryRequirements (const Node_t *node, OUT VkMemoryRequirements* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryRequirements>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryRequirements( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryRequirements (const Node_t *node, OUT VkMemoryRequirements &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "size" ), OUT result.size ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "alignment" ), OUT result.alignment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryTypeBits" ), OUT result.memoryTypeBits ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageResolve (const Node_t *node, OUT VkImageResolve* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageResolve>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageResolve( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageResolve (const Node_t *node, OUT VkImageResolve &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "srcSubresource" ), OUT result.srcSubresource ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "srcOffset" ), OUT result.srcOffset ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "dstSubresource" ), OUT result.dstSubresource ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "dstOffset" ), OUT result.dstOffset ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "extent" ), OUT result.extent ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBindSparseInfo (const Node_t *node, OUT VkBindSparseInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBindSparseInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBindSparseInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBindSparseInfo (const Node_t *node, OUT VkBindSparseInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "waitSemaphoreCount" ), OUT result.waitSemaphoreCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pWaitSemaphores" ), OUT const_cast<VkSemaphore * &>(result.pWaitSemaphores), INOUT result.waitSemaphoreCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bufferBindCount" ), OUT result.bufferBindCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pBufferBinds" ), OUT const_cast<VkSparseBufferMemoryBindInfo * &>(result.pBufferBinds), INOUT result.bufferBindCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageOpaqueBindCount" ), OUT result.imageOpaqueBindCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pImageOpaqueBinds" ), OUT const_cast<VkSparseImageOpaqueMemoryBindInfo * &>(result.pImageOpaqueBinds), INOUT result.imageOpaqueBindCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageBindCount" ), OUT result.imageBindCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pImageBinds" ), OUT const_cast<VkSparseImageMemoryBindInfo * &>(result.pImageBinds), INOUT result.imageBindCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "signalSemaphoreCount" ), OUT result.signalSemaphoreCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pSignalSemaphores" ), OUT const_cast<VkSemaphore * &>(result.pSignalSemaphores), INOUT result.signalSemaphoreCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceImageFormatInfo2 (const Node_t *node, OUT VkPhysicalDeviceImageFormatInfo2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceImageFormatInfo2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceImageFormatInfo2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceImageFormatInfo2 (const Node_t *node, OUT VkPhysicalDeviceImageFormatInfo2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "type" ), OUT result.type ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "tiling" ), OUT result.tiling ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "usage" ), OUT result.usage ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSparseImageFormatProperties (const Node_t *node, OUT VkSparseImageFormatProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSparseImageFormatProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSparseImageFormatProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSparseImageFormatProperties (const Node_t *node, OUT VkSparseImageFormatProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "aspectMask" ), OUT result.aspectMask ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "imageGranularity" ), OUT result.imageGranularity ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSparseImageMemoryRequirements (const Node_t *node, OUT VkSparseImageMemoryRequirements* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSparseImageMemoryRequirements>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSparseImageMemoryRequirements( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSparseImageMemoryRequirements (const Node_t *node, OUT VkSparseImageMemoryRequirements &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "formatProperties" ), OUT result.formatProperties ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageMipTailFirstLod" ), OUT result.imageMipTailFirstLod ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageMipTailSize" ), OUT result.imageMipTailSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageMipTailOffset" ), OUT result.imageMipTailOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageMipTailStride" ), OUT result.imageMipTailStride ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkSemaphoreGetWin32HandleInfoKHR (const Node_t *node, OUT VkSemaphoreGetWin32HandleInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSemaphoreGetWin32HandleInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSemaphoreGetWin32HandleInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSemaphoreGetWin32HandleInfoKHR (const Node_t *node, OUT VkSemaphoreGetWin32HandleInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "semaphore" ), OUT result.semaphore ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkPerformanceOverrideInfoINTEL (const Node_t *node, OUT VkPerformanceOverrideInfoINTEL* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPerformanceOverrideInfoINTEL>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPerformanceOverrideInfoINTEL( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPerformanceOverrideInfoINTEL (const Node_t *node, OUT VkPerformanceOverrideInfoINTEL &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "type" ), OUT result.type ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "enable" ), OUT result.enable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "parameter" ), OUT result.parameter ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSparseImageOpaqueMemoryBindInfo (const Node_t *node, OUT VkSparseImageOpaqueMemoryBindInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSparseImageOpaqueMemoryBindInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSparseImageOpaqueMemoryBindInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSparseImageOpaqueMemoryBindInfo (const Node_t *node, OUT VkSparseImageOpaqueMemoryBindInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "image" ), OUT result.image ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bindCount" ), OUT result.bindCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pBinds" ), OUT const_cast<VkSparseMemoryBind * &>(result.pBinds), INOUT result.bindCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineViewportStateCreateInfo (const Node_t *node, OUT VkPipelineViewportStateCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineViewportStateCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineViewportStateCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineViewportStateCreateInfo (const Node_t *node, OUT VkPipelineViewportStateCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewportCount" ), OUT result.viewportCount ));
	CHECK_ERR( _ParseStructArrayOpt( _FindByAttribName( *node, "pViewports" ), OUT const_cast<VkViewport * &>(result.pViewports), uint32_t(result.viewportCount) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "scissorCount" ), OUT result.scissorCount ));
	CHECK_ERR( _ParseStructArrayOpt( _FindByAttribName( *node, "pScissors" ), OUT const_cast<VkRect2D * &>(result.pScissors), uint32_t(result.scissorCount) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkAccelerationStructureInfoNV (const Node_t *node, OUT VkAccelerationStructureInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAccelerationStructureInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAccelerationStructureInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAccelerationStructureInfoNV (const Node_t *node, OUT VkAccelerationStructureInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "type" ), OUT result.type ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "instanceCount" ), OUT result.instanceCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "geometryCount" ), OUT result.geometryCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pGeometries" ), OUT const_cast<VkGeometryNV * &>(result.pGeometries), INOUT result.geometryCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineVertexInputStateCreateInfo (const Node_t *node, OUT VkPipelineVertexInputStateCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineVertexInputStateCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineVertexInputStateCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineVertexInputStateCreateInfo (const Node_t *node, OUT VkPipelineVertexInputStateCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vertexBindingDescriptionCount" ), OUT result.vertexBindingDescriptionCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pVertexBindingDescriptions" ), OUT const_cast<VkVertexInputBindingDescription * &>(result.pVertexBindingDescriptions), INOUT result.vertexBindingDescriptionCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vertexAttributeDescriptionCount" ), OUT result.vertexAttributeDescriptionCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pVertexAttributeDescriptions" ), OUT const_cast<VkVertexInputAttributeDescription * &>(result.pVertexAttributeDescriptions), INOUT result.vertexAttributeDescriptionCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageSubresource (const Node_t *node, OUT VkImageSubresource* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageSubresource>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageSubresource( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageSubresource (const Node_t *node, OUT VkImageSubresource &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "aspectMask" ), OUT result.aspectMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "mipLevel" ), OUT result.mipLevel ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "arrayLayer" ), OUT result.arrayLayer ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkSurfaceFullScreenExclusiveWin32InfoEXT (const Node_t *node, OUT VkSurfaceFullScreenExclusiveWin32InfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSurfaceFullScreenExclusiveWin32InfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSurfaceFullScreenExclusiveWin32InfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSurfaceFullScreenExclusiveWin32InfoEXT (const Node_t *node, OUT VkSurfaceFullScreenExclusiveWin32InfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "hmonitor" ), OUT result.hmonitor ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExportSemaphoreWin32HandleInfoKHR (const Node_t *node, OUT VkExportSemaphoreWin32HandleInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExportSemaphoreWin32HandleInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExportSemaphoreWin32HandleInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExportSemaphoreWin32HandleInfoKHR (const Node_t *node, OUT VkExportSemaphoreWin32HandleInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pAttributes" ), OUT const_cast<SECURITY_ATTRIBUTES * &>(result.pAttributes) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dwAccess" ), OUT result.dwAccess ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "name" ), OUT result.name ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkFramebufferMixedSamplesCombinationNV (const Node_t *node, OUT VkFramebufferMixedSamplesCombinationNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkFramebufferMixedSamplesCombinationNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkFramebufferMixedSamplesCombinationNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkFramebufferMixedSamplesCombinationNV (const Node_t *node, OUT VkFramebufferMixedSamplesCombinationNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "coverageReductionMode" ), OUT result.coverageReductionMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "rasterizationSamples" ), OUT result.rasterizationSamples ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthStencilSamples" ), OUT result.depthStencilSamples ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "colorSamples" ), OUT result.colorSamples ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dedicatedAllocationImageAliasing" ), OUT result.dedicatedAllocationImageAliasing ));
	return true;
}

bool  RdCaptureReader::_Parse_VkOffset3D (const Node_t *node, OUT VkOffset3D* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkOffset3D>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkOffset3D( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkOffset3D (const Node_t *node, OUT VkOffset3D &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "x" ), OUT result.x ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "y" ), OUT result.y ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "z" ), OUT result.z ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationStateStreamCreateInfoEXT (const Node_t *node, OUT VkPipelineRasterizationStateStreamCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineRasterizationStateStreamCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineRasterizationStateStreamCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationStateStreamCreateInfoEXT (const Node_t *node, OUT VkPipelineRasterizationStateStreamCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "rasterizationStream" ), OUT result.rasterizationStream ));
	return true;
}

bool  RdCaptureReader::_Parse_VkAcquireNextImageInfoKHR (const Node_t *node, OUT VkAcquireNextImageInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAcquireNextImageInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAcquireNextImageInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAcquireNextImageInfoKHR (const Node_t *node, OUT VkAcquireNextImageInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "swapchain" ), OUT result.swapchain ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "timeout" ), OUT result.timeout ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "semaphore" ), OUT result.semaphore ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "fence" ), OUT result.fence ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceMask" ), OUT result.deviceMask ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceProtectedMemoryProperties (const Node_t *node, OUT VkPhysicalDeviceProtectedMemoryProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceProtectedMemoryProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceProtectedMemoryProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceProtectedMemoryProperties (const Node_t *node, OUT VkPhysicalDeviceProtectedMemoryProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "protectedNoFault" ), OUT result.protectedNoFault ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSparseImageMemoryBind (const Node_t *node, OUT VkSparseImageMemoryBind* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSparseImageMemoryBind>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSparseImageMemoryBind( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSparseImageMemoryBind (const Node_t *node, OUT VkSparseImageMemoryBind &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "subresource" ), OUT result.subresource ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "extent" ), OUT result.extent ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "memory" ), OUT result.memory ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryOffset" ), OUT result.memoryOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT (const Node_t *node, OUT VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT (const Node_t *node, OUT VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "requiredSubgroupSize" ), OUT result.requiredSubgroupSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSparseImageMemoryBindInfo (const Node_t *node, OUT VkSparseImageMemoryBindInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSparseImageMemoryBindInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSparseImageMemoryBindInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSparseImageMemoryBindInfo (const Node_t *node, OUT VkSparseImageMemoryBindInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "image" ), OUT result.image ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bindCount" ), OUT result.bindCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pBinds" ), OUT const_cast<VkSparseImageMemoryBind * &>(result.pBinds), INOUT result.bindCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkFenceCreateInfo (const Node_t *node, OUT VkFenceCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkFenceCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkFenceCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkFenceCreateInfo (const Node_t *node, OUT VkFenceCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkEventCreateInfo (const Node_t *node, OUT VkEventCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkEventCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkEventCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkEventCreateInfo (const Node_t *node, OUT VkEventCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageViewHandleInfoNVX (const Node_t *node, OUT VkImageViewHandleInfoNVX* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageViewHandleInfoNVX>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageViewHandleInfoNVX( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageViewHandleInfoNVX (const Node_t *node, OUT VkImageViewHandleInfoNVX &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "imageView" ), OUT result.imageView ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorType" ), OUT result.descriptorType ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "sampler" ), OUT result.sampler ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRenderPassBeginInfo (const Node_t *node, OUT VkRenderPassBeginInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRenderPassBeginInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRenderPassBeginInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRenderPassBeginInfo (const Node_t *node, OUT VkRenderPassBeginInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "renderPass" ), OUT result.renderPass ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "framebuffer" ), OUT result.framebuffer ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "renderArea" ), OUT result.renderArea ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "clearValueCount" ), OUT result.clearValueCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pClearValues" ), OUT const_cast<VkClearValue * &>(result.pClearValues), INOUT result.clearValueCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkQueryPoolCreateInfo (const Node_t *node, OUT VkQueryPoolCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkQueryPoolCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkQueryPoolCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkQueryPoolCreateInfo (const Node_t *node, OUT VkQueryPoolCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queryType" ), OUT result.queryType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queryCount" ), OUT result.queryCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pipelineStatistics" ), OUT result.pipelineStatistics ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBufferCreateInfo (const Node_t *node, OUT VkBufferCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBufferCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBufferCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBufferCreateInfo (const Node_t *node, OUT VkBufferCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "size" ), OUT result.size ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "usage" ), OUT result.usage ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sharingMode" ), OUT result.sharingMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueFamilyIndexCount" ), OUT result.queueFamilyIndexCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pQueueFamilyIndices" ), OUT const_cast<uint32_t * &>(result.pQueueFamilyIndices), INOUT result.queueFamilyIndexCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageCreateInfo (const Node_t *node, OUT VkImageCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageCreateInfo (const Node_t *node, OUT VkImageCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageType" ), OUT result.imageType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "extent" ), OUT result.extent ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "mipLevels" ), OUT result.mipLevels ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "arrayLayers" ), OUT result.arrayLayers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "samples" ), OUT result.samples ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "tiling" ), OUT result.tiling ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "usage" ), OUT result.usage ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sharingMode" ), OUT result.sharingMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueFamilyIndexCount" ), OUT result.queueFamilyIndexCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pQueueFamilyIndices" ), OUT const_cast<uint32_t * &>(result.pQueueFamilyIndices), INOUT result.queueFamilyIndexCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "initialLayout" ), OUT result.initialLayout ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineMultisampleStateCreateInfo (const Node_t *node, OUT VkPipelineMultisampleStateCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineMultisampleStateCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineMultisampleStateCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineMultisampleStateCreateInfo (const Node_t *node, OUT VkPipelineMultisampleStateCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "rasterizationSamples" ), OUT result.rasterizationSamples ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleShadingEnable" ), OUT result.sampleShadingEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minSampleShading" ), OUT result.minSampleShading ));
	CHECK_ERR( _ParseArrayOpt( _FindByAttribName( *node, "pSampleMask" ), OUT const_cast<VkSampleMask * &>(result.pSampleMask), uint32_t(((uint(result.rasterizationSamples) + 31) / 32)) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "alphaToCoverageEnable" ), OUT result.alphaToCoverageEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "alphaToOneEnable" ), OUT result.alphaToOneEnable ));
	return true;
}

bool  RdCaptureReader::_Parse_VkViewport (const Node_t *node, OUT VkViewport* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkViewport>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkViewport( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkViewport (const Node_t *node, OUT VkViewport &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "x" ), OUT result.x ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "y" ), OUT result.y ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "width" ), OUT result.width ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "height" ), OUT result.height ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minDepth" ), OUT result.minDepth ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDepth" ), OUT result.maxDepth ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageSubresourceRange (const Node_t *node, OUT VkImageSubresourceRange* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageSubresourceRange>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageSubresourceRange( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageSubresourceRange (const Node_t *node, OUT VkImageSubresourceRange &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "aspectMask" ), OUT result.aspectMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "baseMipLevel" ), OUT result.baseMipLevel ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "levelCount" ), OUT result.levelCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "baseArrayLayer" ), OUT result.baseArrayLayer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "layerCount" ), OUT result.layerCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkShaderModuleCreateInfo (const Node_t *node, OUT VkShaderModuleCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkShaderModuleCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkShaderModuleCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkShaderModuleCreateInfo (const Node_t *node, OUT VkShaderModuleCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "codeSize" ), OUT result.codeSize ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pCode" ), OUT const_cast<uint32_t * &>(result.pCode), INOUT result.codeSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT (const Node_t *node, OUT VkDescriptorSetLayoutBindingFlagsCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT (const Node_t *node, OUT VkDescriptorSetLayoutBindingFlagsCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bindingCount" ), OUT result.bindingCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pBindingFlags" ), OUT const_cast<VkDescriptorBindingFlagsEXT * &>(result.pBindingFlags), INOUT result.bindingCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineCacheCreateInfo (const Node_t *node, OUT VkPipelineCacheCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineCacheCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineCacheCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineCacheCreateInfo (const Node_t *node, OUT VkPipelineCacheCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "initialDataSize" ), OUT result.initialDataSize ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pInitialData" ), OUT const_cast<void * &>(result.pInitialData), INOUT result.initialDataSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineInfoKHR (const Node_t *node, OUT VkPipelineInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineInfoKHR (const Node_t *node, OUT VkPipelineInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "pipeline" ), OUT result.pipeline ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayPlaneInfo2KHR (const Node_t *node, OUT VkDisplayPlaneInfo2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayPlaneInfo2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayPlaneInfo2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayPlaneInfo2KHR (const Node_t *node, OUT VkDisplayPlaneInfo2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "mode" ), OUT result.mode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "planeIndex" ), OUT result.planeIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSpecializationInfo (const Node_t *node, OUT VkSpecializationInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSpecializationInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSpecializationInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSpecializationInfo (const Node_t *node, OUT VkSpecializationInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "mapEntryCount" ), OUT result.mapEntryCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pMapEntries" ), OUT const_cast<VkSpecializationMapEntry * &>(result.pMapEntries), INOUT result.mapEntryCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dataSize" ), OUT result.dataSize ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pData" ), OUT const_cast<void * &>(result.pData), INOUT result.dataSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineExecutableStatisticKHR (const Node_t *node, OUT VkPipelineExecutableStatisticKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineExecutableStatisticKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineExecutableStatisticKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineExecutableStatisticKHR (const Node_t *node, OUT VkPipelineExecutableStatisticKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "name" ), OUT result.name ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "description" ), OUT result.description ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "value" ), OUT result.value ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineShaderStageCreateInfo (const Node_t *node, OUT VkPipelineShaderStageCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineShaderStageCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineShaderStageCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineShaderStageCreateInfo (const Node_t *node, OUT VkPipelineShaderStageCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stage" ), OUT result.stage ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "module" ), OUT result.module ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pName" ), OUT const_cast<char * &>(result.pName) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pSpecializationInfo" ), OUT const_cast<VkSpecializationInfo * &>(result.pSpecializationInfo) ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkImportMemoryWin32HandleInfoNV (const Node_t *node, OUT VkImportMemoryWin32HandleInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImportMemoryWin32HandleInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImportMemoryWin32HandleInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImportMemoryWin32HandleInfoNV (const Node_t *node, OUT VkImportMemoryWin32HandleInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handle" ), OUT result.handle ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fragmentShaderSampleInterlock" ), OUT result.fragmentShaderSampleInterlock ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fragmentShaderPixelInterlock" ), OUT result.fragmentShaderPixelInterlock ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fragmentShaderShadingRateInterlock" ), OUT result.fragmentShaderShadingRateInterlock ));
	return true;
}

bool  RdCaptureReader::_Parse_VkVertexInputBindingDescription (const Node_t *node, OUT VkVertexInputBindingDescription* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkVertexInputBindingDescription>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkVertexInputBindingDescription( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkVertexInputBindingDescription (const Node_t *node, OUT VkVertexInputBindingDescription &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "binding" ), OUT result.binding ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stride" ), OUT result.stride ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "inputRate" ), OUT result.inputRate ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageCopy (const Node_t *node, OUT VkImageCopy* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageCopy>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageCopy( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageCopy (const Node_t *node, OUT VkImageCopy &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "srcSubresource" ), OUT result.srcSubresource ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "srcOffset" ), OUT result.srcOffset ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "dstSubresource" ), OUT result.dstSubresource ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "dstOffset" ), OUT result.dstOffset ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "extent" ), OUT result.extent ));
	return true;
}

bool  RdCaptureReader::_Parse_VkVertexInputAttributeDescription (const Node_t *node, OUT VkVertexInputAttributeDescription* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkVertexInputAttributeDescription>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkVertexInputAttributeDescription( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkVertexInputAttributeDescription (const Node_t *node, OUT VkVertexInputAttributeDescription &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "location" ), OUT result.location ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "binding" ), OUT result.binding ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExternalBufferInfo (const Node_t *node, OUT VkPhysicalDeviceExternalBufferInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceExternalBufferInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceExternalBufferInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExternalBufferInfo (const Node_t *node, OUT VkPhysicalDeviceExternalBufferInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "usage" ), OUT result.usage ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationStateCreateInfo (const Node_t *node, OUT VkPipelineRasterizationStateCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineRasterizationStateCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineRasterizationStateCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationStateCreateInfo (const Node_t *node, OUT VkPipelineRasterizationStateCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthClampEnable" ), OUT result.depthClampEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "rasterizerDiscardEnable" ), OUT result.rasterizerDiscardEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "polygonMode" ), OUT result.polygonMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "cullMode" ), OUT result.cullMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "frontFace" ), OUT result.frontFace ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthBiasEnable" ), OUT result.depthBiasEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthBiasConstantFactor" ), OUT result.depthBiasConstantFactor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthBiasClamp" ), OUT result.depthBiasClamp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthBiasSlopeFactor" ), OUT result.depthBiasSlopeFactor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "lineWidth" ), OUT result.lineWidth ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryHostPointerPropertiesEXT (const Node_t *node, OUT VkMemoryHostPointerPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryHostPointerPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryHostPointerPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryHostPointerPropertiesEXT (const Node_t *node, OUT VkMemoryHostPointerPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryTypeBits" ), OUT result.memoryTypeBits ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceGeneratedCommandsFeaturesNVX (const Node_t *node, OUT VkDeviceGeneratedCommandsFeaturesNVX* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceGeneratedCommandsFeaturesNVX>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceGeneratedCommandsFeaturesNVX( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceGeneratedCommandsFeaturesNVX (const Node_t *node, OUT VkDeviceGeneratedCommandsFeaturesNVX &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "computeBindingPointSupport" ), OUT result.computeBindingPointSupport ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExtent2D (const Node_t *node, OUT VkExtent2D* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExtent2D>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExtent2D( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExtent2D (const Node_t *node, OUT VkExtent2D &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "width" ), OUT result.width ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "height" ), OUT result.height ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPresentTimesInfoGOOGLE (const Node_t *node, OUT VkPresentTimesInfoGOOGLE* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPresentTimesInfoGOOGLE>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPresentTimesInfoGOOGLE( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPresentTimesInfoGOOGLE (const Node_t *node, OUT VkPresentTimesInfoGOOGLE &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "swapchainCount" ), OUT result.swapchainCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pTimes" ), OUT const_cast<VkPresentTimeGOOGLE * &>(result.pTimes), INOUT result.swapchainCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRect2D (const Node_t *node, OUT VkRect2D* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRect2D>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRect2D( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRect2D (const Node_t *node, OUT VkRect2D &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "extent" ), OUT result.extent ));
	return true;
}

bool  RdCaptureReader::_Parse_VkStencilOpState (const Node_t *node, OUT VkStencilOpState* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkStencilOpState>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkStencilOpState( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkStencilOpState (const Node_t *node, OUT VkStencilOpState &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "failOp" ), OUT result.failOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "passOp" ), OUT result.passOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthFailOp" ), OUT result.depthFailOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "compareOp" ), OUT result.compareOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "compareMask" ), OUT result.compareMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "writeMask" ), OUT result.writeMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "reference" ), OUT result.reference ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineDepthStencilStateCreateInfo (const Node_t *node, OUT VkPipelineDepthStencilStateCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineDepthStencilStateCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineDepthStencilStateCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineDepthStencilStateCreateInfo (const Node_t *node, OUT VkPipelineDepthStencilStateCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthTestEnable" ), OUT result.depthTestEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthWriteEnable" ), OUT result.depthWriteEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthCompareOp" ), OUT result.depthCompareOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthBoundsTestEnable" ), OUT result.depthBoundsTestEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stencilTestEnable" ), OUT result.stencilTestEnable ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "front" ), OUT result.front ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "back" ), OUT result.back ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minDepthBounds" ), OUT result.minDepthBounds ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDepthBounds" ), OUT result.maxDepthBounds ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_ANDROID_H_
bool  RdCaptureReader::_Parse_VkAndroidSurfaceCreateInfoKHR (const Node_t *node, OUT VkAndroidSurfaceCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAndroidSurfaceCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAndroidSurfaceCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAndroidSurfaceCreateInfoKHR (const Node_t *node, OUT VkAndroidSurfaceCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "window" ), OUT const_cast<struct ANativeWindow * &>(result.window) ));
	return true;
}

#endif // VULKAN_ANDROID_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkXYColorEXT (const Node_t *node, OUT VkXYColorEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkXYColorEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkXYColorEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkXYColorEXT (const Node_t *node, OUT VkXYColorEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "x" ), OUT result.x ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "y" ), OUT result.y ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineExecutableInfoKHR (const Node_t *node, OUT VkPipelineExecutableInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineExecutableInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineExecutableInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineExecutableInfoKHR (const Node_t *node, OUT VkPipelineExecutableInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "pipeline" ), OUT result.pipeline ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "executableIndex" ), OUT result.executableIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCommandBufferInheritanceInfo (const Node_t *node, OUT VkCommandBufferInheritanceInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCommandBufferInheritanceInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCommandBufferInheritanceInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCommandBufferInheritanceInfo (const Node_t *node, OUT VkCommandBufferInheritanceInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "renderPass" ), OUT result.renderPass ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subpass" ), OUT result.subpass ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "framebuffer" ), OUT result.framebuffer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "occlusionQueryEnable" ), OUT result.occlusionQueryEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queryFlags" ), OUT result.queryFlags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pipelineStatistics" ), OUT result.pipelineStatistics ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineColorBlendStateCreateInfo (const Node_t *node, OUT VkPipelineColorBlendStateCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineColorBlendStateCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineColorBlendStateCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineColorBlendStateCreateInfo (const Node_t *node, OUT VkPipelineColorBlendStateCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "logicOpEnable" ), OUT result.logicOpEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "logicOp" ), OUT result.logicOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "attachmentCount" ), OUT result.attachmentCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pAttachments" ), OUT const_cast<VkPipelineColorBlendAttachmentState * &>(result.pAttachments), INOUT result.attachmentCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "blendConstants" ), OUT result.blendConstants ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImportFenceFdInfoKHR (const Node_t *node, OUT VkImportFenceFdInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImportFenceFdInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImportFenceFdInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImportFenceFdInfoKHR (const Node_t *node, OUT VkImportFenceFdInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "fence" ), OUT result.fence ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fd" ), OUT result.fd ));
	return true;
}

bool  RdCaptureReader::_Parse_VkGraphicsPipelineCreateInfo (const Node_t *node, OUT VkGraphicsPipelineCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkGraphicsPipelineCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkGraphicsPipelineCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkGraphicsPipelineCreateInfo (const Node_t *node, OUT VkGraphicsPipelineCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stageCount" ), OUT result.stageCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pStages" ), OUT const_cast<VkPipelineShaderStageCreateInfo * &>(result.pStages), INOUT result.stageCount ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pVertexInputState" ), OUT const_cast<VkPipelineVertexInputStateCreateInfo * &>(result.pVertexInputState) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pInputAssemblyState" ), OUT const_cast<VkPipelineInputAssemblyStateCreateInfo * &>(result.pInputAssemblyState) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pTessellationState" ), OUT const_cast<VkPipelineTessellationStateCreateInfo * &>(result.pTessellationState) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pViewportState" ), OUT const_cast<VkPipelineViewportStateCreateInfo * &>(result.pViewportState) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pRasterizationState" ), OUT const_cast<VkPipelineRasterizationStateCreateInfo * &>(result.pRasterizationState) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pMultisampleState" ), OUT const_cast<VkPipelineMultisampleStateCreateInfo * &>(result.pMultisampleState) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pDepthStencilState" ), OUT const_cast<VkPipelineDepthStencilStateCreateInfo * &>(result.pDepthStencilState) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pColorBlendState" ), OUT const_cast<VkPipelineColorBlendStateCreateInfo * &>(result.pColorBlendState) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pDynamicState" ), OUT const_cast<VkPipelineDynamicStateCreateInfo * &>(result.pDynamicState) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "layout" ), OUT result.layout ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "renderPass" ), OUT result.renderPass ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subpass" ), OUT result.subpass ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "basePipelineHandle" ), OUT result.basePipelineHandle ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "basePipelineIndex" ), OUT result.basePipelineIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSamplerYcbcrConversionInfo (const Node_t *node, OUT VkSamplerYcbcrConversionInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSamplerYcbcrConversionInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSamplerYcbcrConversionInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSamplerYcbcrConversionInfo (const Node_t *node, OUT VkSamplerYcbcrConversionInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "conversion" ), OUT result.conversion ));
	return true;
}

bool  RdCaptureReader::_Parse_VkComputePipelineCreateInfo (const Node_t *node, OUT VkComputePipelineCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkComputePipelineCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkComputePipelineCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkComputePipelineCreateInfo (const Node_t *node, OUT VkComputePipelineCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "stage" ), OUT result.stage ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "layout" ), OUT result.layout ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "basePipelineHandle" ), OUT result.basePipelineHandle ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "basePipelineIndex" ), OUT result.basePipelineIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPushConstantRange (const Node_t *node, OUT VkPushConstantRange* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPushConstantRange>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPushConstantRange( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPushConstantRange (const Node_t *node, OUT VkPushConstantRange &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stageFlags" ), OUT result.stageFlags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "size" ), OUT result.size ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineLayoutCreateInfo (const Node_t *node, OUT VkPipelineLayoutCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineLayoutCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineLayoutCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineLayoutCreateInfo (const Node_t *node, OUT VkPipelineLayoutCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "setLayoutCount" ), OUT result.setLayoutCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pSetLayouts" ), OUT const_cast<VkDescriptorSetLayout * &>(result.pSetLayouts), INOUT result.setLayoutCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pushConstantRangeCount" ), OUT result.pushConstantRangeCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pPushConstantRanges" ), OUT const_cast<VkPushConstantRange * &>(result.pPushConstantRanges), INOUT result.pushConstantRangeCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayPlaneProperties2KHR (const Node_t *node, OUT VkDisplayPlaneProperties2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayPlaneProperties2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayPlaneProperties2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayPlaneProperties2KHR (const Node_t *node, OUT VkDisplayPlaneProperties2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "displayPlaneProperties" ), OUT result.displayPlaneProperties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayPresentInfoKHR (const Node_t *node, OUT VkDisplayPresentInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayPresentInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayPresentInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayPresentInfoKHR (const Node_t *node, OUT VkDisplayPresentInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "srcRect" ), OUT result.srcRect ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "dstRect" ), OUT result.dstRect ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "persistent" ), OUT result.persistent ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayPlanePropertiesKHR (const Node_t *node, OUT VkDisplayPlanePropertiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayPlanePropertiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayPlanePropertiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayPlanePropertiesKHR (const Node_t *node, OUT VkDisplayPlanePropertiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "currentDisplay" ), OUT result.currentDisplay ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "currentStackIndex" ), OUT result.currentStackIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSamplerCreateInfo (const Node_t *node, OUT VkSamplerCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSamplerCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSamplerCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSamplerCreateInfo (const Node_t *node, OUT VkSamplerCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "magFilter" ), OUT result.magFilter ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minFilter" ), OUT result.minFilter ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "mipmapMode" ), OUT result.mipmapMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "addressModeU" ), OUT result.addressModeU ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "addressModeV" ), OUT result.addressModeV ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "addressModeW" ), OUT result.addressModeW ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "mipLodBias" ), OUT result.mipLodBias ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "anisotropyEnable" ), OUT result.anisotropyEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxAnisotropy" ), OUT result.maxAnisotropy ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "compareEnable" ), OUT result.compareEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "compareOp" ), OUT result.compareOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minLod" ), OUT result.minLod ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxLod" ), OUT result.maxLod ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "borderColor" ), OUT result.borderColor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "unnormalizedCoordinates" ), OUT result.unnormalizedCoordinates ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorSetLayoutBinding (const Node_t *node, OUT VkDescriptorSetLayoutBinding* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorSetLayoutBinding>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorSetLayoutBinding( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorSetLayoutBinding (const Node_t *node, OUT VkDescriptorSetLayoutBinding &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "binding" ), OUT result.binding ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorType" ), OUT result.descriptorType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorCount" ), OUT result.descriptorCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stageFlags" ), OUT result.stageFlags ));
	CHECK_ERR( _ParseResourcesOpt( _FindByAttribName( *node, "pImmutableSamplers" ), OUT const_cast<VkSampler * &>(result.pImmutableSamplers), uint32_t(result.descriptorCount) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorSetLayoutCreateInfo (const Node_t *node, OUT VkDescriptorSetLayoutCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorSetLayoutCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorSetLayoutCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorSetLayoutCreateInfo (const Node_t *node, OUT VkDescriptorSetLayoutCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bindingCount" ), OUT result.bindingCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pBindings" ), OUT const_cast<VkDescriptorSetLayoutBinding * &>(result.pBindings), INOUT result.bindingCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorPoolSize (const Node_t *node, OUT VkDescriptorPoolSize* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorPoolSize>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorPoolSize( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorPoolSize (const Node_t *node, OUT VkDescriptorPoolSize &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "type" ), OUT result.type ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorCount" ), OUT result.descriptorCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorPoolCreateInfo (const Node_t *node, OUT VkDescriptorPoolCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorPoolCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorPoolCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorPoolCreateInfo (const Node_t *node, OUT VkDescriptorPoolCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxSets" ), OUT result.maxSets ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "poolSizeCount" ), OUT result.poolSizeCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pPoolSizes" ), OUT const_cast<VkDescriptorPoolSize * &>(result.pPoolSizes), INOUT result.poolSizeCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceRayTracingPropertiesNV (const Node_t *node, OUT VkPhysicalDeviceRayTracingPropertiesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceRayTracingPropertiesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceRayTracingPropertiesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceRayTracingPropertiesNV (const Node_t *node, OUT VkPhysicalDeviceRayTracingPropertiesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderGroupHandleSize" ), OUT result.shaderGroupHandleSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxRecursionDepth" ), OUT result.maxRecursionDepth ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxShaderGroupStride" ), OUT result.maxShaderGroupStride ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderGroupBaseAlignment" ), OUT result.shaderGroupBaseAlignment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxGeometryCount" ), OUT result.maxGeometryCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxInstanceCount" ), OUT result.maxInstanceCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTriangleCount" ), OUT result.maxTriangleCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetAccelerationStructures" ), OUT result.maxDescriptorSetAccelerationStructures ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageMemoryRequirementsInfo2 (const Node_t *node, OUT VkImageMemoryRequirementsInfo2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageMemoryRequirementsInfo2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageMemoryRequirementsInfo2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageMemoryRequirementsInfo2 (const Node_t *node, OUT VkImageMemoryRequirementsInfo2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "image" ), OUT result.image ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorSetAllocateInfo (const Node_t *node, OUT VkDescriptorSetAllocateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorSetAllocateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorSetAllocateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorSetAllocateInfo (const Node_t *node, OUT VkDescriptorSetAllocateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "descriptorPool" ), OUT result.descriptorPool ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorSetCount" ), OUT result.descriptorSetCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pSetLayouts" ), OUT const_cast<VkDescriptorSetLayout * &>(result.pSetLayouts), INOUT result.descriptorSetCount ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkExportMemoryWin32HandleInfoNV (const Node_t *node, OUT VkExportMemoryWin32HandleInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExportMemoryWin32HandleInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExportMemoryWin32HandleInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExportMemoryWin32HandleInfoNV (const Node_t *node, OUT VkExportMemoryWin32HandleInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pAttributes" ), OUT const_cast<SECURITY_ATTRIBUTES * &>(result.pAttributes) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dwAccess" ), OUT result.dwAccess ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkHdrMetadataEXT (const Node_t *node, OUT VkHdrMetadataEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkHdrMetadataEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkHdrMetadataEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkHdrMetadataEXT (const Node_t *node, OUT VkHdrMetadataEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "displayPrimaryRed" ), OUT result.displayPrimaryRed ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "displayPrimaryGreen" ), OUT result.displayPrimaryGreen ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "displayPrimaryBlue" ), OUT result.displayPrimaryBlue ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "whitePoint" ), OUT result.whitePoint ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxLuminance" ), OUT result.maxLuminance ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minLuminance" ), OUT result.minLuminance ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxContentLightLevel" ), OUT result.maxContentLightLevel ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxFrameAverageLightLevel" ), OUT result.maxFrameAverageLightLevel ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExternalSemaphoreInfo (const Node_t *node, OUT VkPhysicalDeviceExternalSemaphoreInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceExternalSemaphoreInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceExternalSemaphoreInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExternalSemaphoreInfo (const Node_t *node, OUT VkPhysicalDeviceExternalSemaphoreInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	return true;
}

bool  RdCaptureReader::_Parse_VkClearValue (const Node_t *node, OUT VkClearValue* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkClearValue>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkClearValue( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkClearValue (const Node_t *node, OUT VkClearValue &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "color" ), OUT result.color ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "depthStencil" ), OUT result.depthStencil ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorImageInfo (const Node_t *node, OUT VkDescriptorImageInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorImageInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorImageInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorImageInfo (const Node_t *node, OUT VkDescriptorImageInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "sampler" ), OUT result.sampler ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "imageView" ), OUT result.imageView ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageLayout" ), OUT result.imageLayout ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorBufferInfo (const Node_t *node, OUT VkDescriptorBufferInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorBufferInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorBufferInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorBufferInfo (const Node_t *node, OUT VkDescriptorBufferInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "buffer" ), OUT result.buffer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "range" ), OUT result.range ));
	return true;
}

bool  RdCaptureReader::_Parse_VkWriteDescriptorSet (const Node_t *node, OUT VkWriteDescriptorSet* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkWriteDescriptorSet>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkWriteDescriptorSet( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkWriteDescriptorSet (const Node_t *node, OUT VkWriteDescriptorSet &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "dstSet" ), OUT result.dstSet ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstBinding" ), OUT result.dstBinding ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstArrayElement" ), OUT result.dstArrayElement ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorCount" ), OUT result.descriptorCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorType" ), OUT result.descriptorType ));
	CHECK_ERR( _ParseStructArrayOpt( _FindByAttribName( *node, "pImageInfo" ), OUT const_cast<VkDescriptorImageInfo * &>(result.pImageInfo), uint32_t(result.descriptorCount) ));
	CHECK_ERR( _ParseStructArrayOpt( _FindByAttribName( *node, "pBufferInfo" ), OUT const_cast<VkDescriptorBufferInfo * &>(result.pBufferInfo), uint32_t(result.descriptorCount) ));
	CHECK_ERR( _ParseResourcesOpt( _FindByAttribName( *node, "pTexelBufferView" ), OUT const_cast<VkBufferView * &>(result.pTexelBufferView), uint32_t(result.descriptorCount) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCopyDescriptorSet (const Node_t *node, OUT VkCopyDescriptorSet* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCopyDescriptorSet>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCopyDescriptorSet( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCopyDescriptorSet (const Node_t *node, OUT VkCopyDescriptorSet &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "srcSet" ), OUT result.srcSet ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcBinding" ), OUT result.srcBinding ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcArrayElement" ), OUT result.srcArrayElement ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "dstSet" ), OUT result.dstSet ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstBinding" ), OUT result.dstBinding ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstArrayElement" ), OUT result.dstArrayElement ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorCount" ), OUT result.descriptorCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "filterMinmaxSingleComponentFormats" ), OUT result.filterMinmaxSingleComponentFormats ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "filterMinmaxImageComponentMapping" ), OUT result.filterMinmaxImageComponentMapping ));
	return true;
}

bool  RdCaptureReader::_Parse_VkFramebufferCreateInfo (const Node_t *node, OUT VkFramebufferCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkFramebufferCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkFramebufferCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkFramebufferCreateInfo (const Node_t *node, OUT VkFramebufferCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "renderPass" ), OUT result.renderPass ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "attachmentCount" ), OUT result.attachmentCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pAttachments" ), OUT const_cast<VkImageView * &>(result.pAttachments), INOUT result.attachmentCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "width" ), OUT result.width ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "height" ), OUT result.height ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "layers" ), OUT result.layers ));
	return true;
}

bool  RdCaptureReader::_Parse_VkAttachmentDescription (const Node_t *node, OUT VkAttachmentDescription* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAttachmentDescription>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAttachmentDescription( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAttachmentDescription (const Node_t *node, OUT VkAttachmentDescription &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "samples" ), OUT result.samples ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "loadOp" ), OUT result.loadOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "storeOp" ), OUT result.storeOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stencilLoadOp" ), OUT result.stencilLoadOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stencilStoreOp" ), OUT result.stencilStoreOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "initialLayout" ), OUT result.initialLayout ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "finalLayout" ), OUT result.finalLayout ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceImagelessFramebufferFeaturesKHR (const Node_t *node, OUT VkPhysicalDeviceImagelessFramebufferFeaturesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceImagelessFramebufferFeaturesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceImagelessFramebufferFeaturesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceImagelessFramebufferFeaturesKHR (const Node_t *node, OUT VkPhysicalDeviceImagelessFramebufferFeaturesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imagelessFramebuffer" ), OUT result.imagelessFramebuffer ));
	return true;
}

bool  RdCaptureReader::_Parse_VkAttachmentReference (const Node_t *node, OUT VkAttachmentReference* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAttachmentReference>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAttachmentReference( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAttachmentReference (const Node_t *node, OUT VkAttachmentReference &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "attachment" ), OUT result.attachment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "layout" ), OUT result.layout ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBufferDeviceAddressInfoEXT (const Node_t *node, OUT VkBufferDeviceAddressInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBufferDeviceAddressInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBufferDeviceAddressInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBufferDeviceAddressInfoEXT (const Node_t *node, OUT VkBufferDeviceAddressInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "buffer" ), OUT result.buffer ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSubpassDescription (const Node_t *node, OUT VkSubpassDescription* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSubpassDescription>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSubpassDescription( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSubpassDescription (const Node_t *node, OUT VkSubpassDescription &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pipelineBindPoint" ), OUT result.pipelineBindPoint ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "inputAttachmentCount" ), OUT result.inputAttachmentCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pInputAttachments" ), OUT const_cast<VkAttachmentReference * &>(result.pInputAttachments), INOUT result.inputAttachmentCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "colorAttachmentCount" ), OUT result.colorAttachmentCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pColorAttachments" ), OUT const_cast<VkAttachmentReference * &>(result.pColorAttachments), INOUT result.colorAttachmentCount ));
	CHECK_ERR( _ParseStructArrayOpt( _FindByAttribName( *node, "pResolveAttachments" ), OUT const_cast<VkAttachmentReference * &>(result.pResolveAttachments), uint32_t(result.colorAttachmentCount) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pDepthStencilAttachment" ), OUT const_cast<VkAttachmentReference * &>(result.pDepthStencilAttachment) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "preserveAttachmentCount" ), OUT result.preserveAttachmentCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pPreserveAttachments" ), OUT const_cast<uint32_t * &>(result.pPreserveAttachments), INOUT result.preserveAttachmentCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSubpassDependency (const Node_t *node, OUT VkSubpassDependency* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSubpassDependency>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSubpassDependency( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSubpassDependency (const Node_t *node, OUT VkSubpassDependency &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcSubpass" ), OUT result.srcSubpass ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstSubpass" ), OUT result.dstSubpass ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcStageMask" ), OUT result.srcStageMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstStageMask" ), OUT result.dstStageMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcAccessMask" ), OUT result.srcAccessMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstAccessMask" ), OUT result.dstAccessMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dependencyFlags" ), OUT result.dependencyFlags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRenderPassCreateInfo (const Node_t *node, OUT VkRenderPassCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRenderPassCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRenderPassCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRenderPassCreateInfo (const Node_t *node, OUT VkRenderPassCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "attachmentCount" ), OUT result.attachmentCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pAttachments" ), OUT const_cast<VkAttachmentDescription * &>(result.pAttachments), INOUT result.attachmentCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subpassCount" ), OUT result.subpassCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pSubpasses" ), OUT const_cast<VkSubpassDescription * &>(result.pSubpasses), INOUT result.subpassCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dependencyCount" ), OUT result.dependencyCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pDependencies" ), OUT const_cast<VkSubpassDependency * &>(result.pDependencies), INOUT result.dependencyCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCommandPoolCreateInfo (const Node_t *node, OUT VkCommandPoolCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCommandPoolCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCommandPoolCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCommandPoolCreateInfo (const Node_t *node, OUT VkCommandPoolCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueFamilyIndex" ), OUT result.queueFamilyIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCommandBufferAllocateInfo (const Node_t *node, OUT VkCommandBufferAllocateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCommandBufferAllocateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCommandBufferAllocateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCommandBufferAllocateInfo (const Node_t *node, OUT VkCommandBufferAllocateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "commandPool" ), OUT result.commandPool ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "level" ), OUT result.level ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "commandBufferCount" ), OUT result.commandBufferCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCommandBufferBeginInfo (const Node_t *node, OUT VkCommandBufferBeginInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCommandBufferBeginInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCommandBufferBeginInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCommandBufferBeginInfo (const Node_t *node, OUT VkCommandBufferBeginInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pInheritanceInfo" ), OUT const_cast<VkCommandBufferInheritanceInfo * &>(result.pInheritanceInfo) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBufferCopy (const Node_t *node, OUT VkBufferCopy* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBufferCopy>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBufferCopy( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBufferCopy (const Node_t *node, OUT VkBufferCopy &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcOffset" ), OUT result.srcOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstOffset" ), OUT result.dstOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "size" ), OUT result.size ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayModePropertiesKHR (const Node_t *node, OUT VkDisplayModePropertiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayModePropertiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayModePropertiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayModePropertiesKHR (const Node_t *node, OUT VkDisplayModePropertiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "displayMode" ), OUT result.displayMode ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "parameters" ), OUT result.parameters ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageSubresourceLayers (const Node_t *node, OUT VkImageSubresourceLayers* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageSubresourceLayers>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageSubresourceLayers( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageSubresourceLayers (const Node_t *node, OUT VkImageSubresourceLayers &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "aspectMask" ), OUT result.aspectMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "mipLevel" ), OUT result.mipLevel ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "baseArrayLayer" ), OUT result.baseArrayLayer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "layerCount" ), OUT result.layerCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkFramebufferAttachmentsCreateInfoKHR (const Node_t *node, OUT VkFramebufferAttachmentsCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkFramebufferAttachmentsCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkFramebufferAttachmentsCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkFramebufferAttachmentsCreateInfoKHR (const Node_t *node, OUT VkFramebufferAttachmentsCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "attachmentImageInfoCount" ), OUT result.attachmentImageInfoCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pAttachmentImageInfos" ), OUT const_cast<VkFramebufferAttachmentImageInfoKHR * &>(result.pAttachmentImageInfos), INOUT result.attachmentImageInfoCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageBlit (const Node_t *node, OUT VkImageBlit* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageBlit>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageBlit( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageBlit (const Node_t *node, OUT VkImageBlit &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "srcSubresource" ), OUT result.srcSubresource ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "srcOffsets" ), OUT result.srcOffsets ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "dstSubresource" ), OUT result.dstSubresource ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "dstOffsets" ), OUT result.dstOffsets ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBufferImageCopy (const Node_t *node, OUT VkBufferImageCopy* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBufferImageCopy>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBufferImageCopy( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBufferImageCopy (const Node_t *node, OUT VkBufferImageCopy &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bufferOffset" ), OUT result.bufferOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bufferRowLength" ), OUT result.bufferRowLength ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bufferImageHeight" ), OUT result.bufferImageHeight ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "imageSubresource" ), OUT result.imageSubresource ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "imageOffset" ), OUT result.imageOffset ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "imageExtent" ), OUT result.imageExtent ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT (const Node_t *node, OUT VkDescriptorSetVariableDescriptorCountLayoutSupportEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT (const Node_t *node, OUT VkDescriptorSetVariableDescriptorCountLayoutSupportEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxVariableDescriptorCount" ), OUT result.maxVariableDescriptorCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkClearColorValue (const Node_t *node, OUT VkClearColorValue* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkClearColorValue>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkClearColorValue( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkClearColorValue (const Node_t *node, OUT VkClearColorValue &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "float32" ), OUT result.float32 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "int32" ), OUT result.int32 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "uint32" ), OUT result.uint32 ));
	return true;
}

bool  RdCaptureReader::_Parse_VkClearDepthStencilValue (const Node_t *node, OUT VkClearDepthStencilValue* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkClearDepthStencilValue>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkClearDepthStencilValue( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkClearDepthStencilValue (const Node_t *node, OUT VkClearDepthStencilValue &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depth" ), OUT result.depth ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stencil" ), OUT result.stencil ));
	return true;
}

bool  RdCaptureReader::_Parse_VkClearAttachment (const Node_t *node, OUT VkClearAttachment* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkClearAttachment>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkClearAttachment( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkClearAttachment (const Node_t *node, OUT VkClearAttachment &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "aspectMask" ), OUT result.aspectMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "colorAttachment" ), OUT result.colorAttachment ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "clearValue" ), OUT result.clearValue ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceGeneratedCommandsLimitsNVX (const Node_t *node, OUT VkDeviceGeneratedCommandsLimitsNVX* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceGeneratedCommandsLimitsNVX>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceGeneratedCommandsLimitsNVX( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceGeneratedCommandsLimitsNVX (const Node_t *node, OUT VkDeviceGeneratedCommandsLimitsNVX &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxIndirectCommandsLayoutTokenCount" ), OUT result.maxIndirectCommandsLayoutTokenCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxObjectEntryCounts" ), OUT result.maxObjectEntryCounts ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minSequenceCountBufferOffsetAlignment" ), OUT result.minSequenceCountBufferOffsetAlignment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minSequenceIndexBufferOffsetAlignment" ), OUT result.minSequenceIndexBufferOffsetAlignment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minCommandsTokenBufferOffsetAlignment" ), OUT result.minCommandsTokenBufferOffsetAlignment ));
	return true;
}

bool  RdCaptureReader::_Parse_VkClearRect (const Node_t *node, OUT VkClearRect* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkClearRect>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkClearRect( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkClearRect (const Node_t *node, OUT VkClearRect &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "rect" ), OUT result.rect ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "baseArrayLayer" ), OUT result.baseArrayLayer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "layerCount" ), OUT result.layerCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkViewportSwizzleNV (const Node_t *node, OUT VkViewportSwizzleNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkViewportSwizzleNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkViewportSwizzleNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkViewportSwizzleNV (const Node_t *node, OUT VkViewportSwizzleNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "x" ), OUT result.x ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "y" ), OUT result.y ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "z" ), OUT result.z ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "w" ), OUT result.w ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBufferMemoryBarrier (const Node_t *node, OUT VkBufferMemoryBarrier* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBufferMemoryBarrier>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBufferMemoryBarrier( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBufferMemoryBarrier (const Node_t *node, OUT VkBufferMemoryBarrier &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcAccessMask" ), OUT result.srcAccessMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstAccessMask" ), OUT result.dstAccessMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcQueueFamilyIndex" ), OUT result.srcQueueFamilyIndex ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstQueueFamilyIndex" ), OUT result.dstQueueFamilyIndex ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "buffer" ), OUT result.buffer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "size" ), OUT result.size ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageMemoryBarrier (const Node_t *node, OUT VkImageMemoryBarrier* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageMemoryBarrier>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageMemoryBarrier( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageMemoryBarrier (const Node_t *node, OUT VkImageMemoryBarrier &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcAccessMask" ), OUT result.srcAccessMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstAccessMask" ), OUT result.dstAccessMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "oldLayout" ), OUT result.oldLayout ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "newLayout" ), OUT result.newLayout ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcQueueFamilyIndex" ), OUT result.srcQueueFamilyIndex ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstQueueFamilyIndex" ), OUT result.dstQueueFamilyIndex ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "image" ), OUT result.image ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "subresourceRange" ), OUT result.subresourceRange ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineCoverageToColorStateCreateInfoNV (const Node_t *node, OUT VkPipelineCoverageToColorStateCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineCoverageToColorStateCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineCoverageToColorStateCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineCoverageToColorStateCreateInfoNV (const Node_t *node, OUT VkPipelineCoverageToColorStateCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "coverageToColorEnable" ), OUT result.coverageToColorEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "coverageToColorLocation" ), OUT result.coverageToColorLocation ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkImportFenceWin32HandleInfoKHR (const Node_t *node, OUT VkImportFenceWin32HandleInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImportFenceWin32HandleInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImportFenceWin32HandleInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImportFenceWin32HandleInfoKHR (const Node_t *node, OUT VkImportFenceWin32HandleInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "fence" ), OUT result.fence ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handle" ), OUT result.handle ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "name" ), OUT result.name ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkPhysicalDevicePointClippingProperties (const Node_t *node, OUT VkPhysicalDevicePointClippingProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDevicePointClippingProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDevicePointClippingProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDevicePointClippingProperties (const Node_t *node, OUT VkPhysicalDevicePointClippingProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pointClippingBehavior" ), OUT result.pointClippingBehavior ));
	return true;
}

bool  RdCaptureReader::_Parse_VkShadingRatePaletteNV (const Node_t *node, OUT VkShadingRatePaletteNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkShadingRatePaletteNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkShadingRatePaletteNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkShadingRatePaletteNV (const Node_t *node, OUT VkShadingRatePaletteNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shadingRatePaletteEntryCount" ), OUT result.shadingRatePaletteEntryCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pShadingRatePaletteEntries" ), OUT const_cast<VkShadingRatePaletteEntryNV * &>(result.pShadingRatePaletteEntries), INOUT result.shadingRatePaletteEntryCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSubgroupProperties (const Node_t *node, OUT VkPhysicalDeviceSubgroupProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceSubgroupProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceSubgroupProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSubgroupProperties (const Node_t *node, OUT VkPhysicalDeviceSubgroupProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subgroupSize" ), OUT result.subgroupSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedStages" ), OUT result.supportedStages ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedOperations" ), OUT result.supportedOperations ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "quadOperationsInAllStages" ), OUT result.quadOperationsInAllStages ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineCompilerControlCreateInfoAMD (const Node_t *node, OUT VkPipelineCompilerControlCreateInfoAMD* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineCompilerControlCreateInfoAMD>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineCompilerControlCreateInfoAMD( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineCompilerControlCreateInfoAMD (const Node_t *node, OUT VkPipelineCompilerControlCreateInfoAMD &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "compilerControlFlags" ), OUT result.compilerControlFlags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBindBufferMemoryInfo (const Node_t *node, OUT VkBindBufferMemoryInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBindBufferMemoryInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBindBufferMemoryInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBindBufferMemoryInfo (const Node_t *node, OUT VkBindBufferMemoryInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "buffer" ), OUT result.buffer ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "memory" ), OUT result.memory ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryOffset" ), OUT result.memoryOffset ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBindImageMemoryInfo (const Node_t *node, OUT VkBindImageMemoryInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBindImageMemoryInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBindImageMemoryInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBindImageMemoryInfo (const Node_t *node, OUT VkBindImageMemoryInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "image" ), OUT result.image ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "memory" ), OUT result.memory ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryOffset" ), OUT result.memoryOffset ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSubpassEndInfoKHR (const Node_t *node, OUT VkSubpassEndInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSubpassEndInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSubpassEndInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSubpassEndInfoKHR (const Node_t *node, OUT VkSubpassEndInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDevice16BitStorageFeatures (const Node_t *node, OUT VkPhysicalDevice16BitStorageFeatures* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDevice16BitStorageFeatures>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDevice16BitStorageFeatures( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDevice16BitStorageFeatures (const Node_t *node, OUT VkPhysicalDevice16BitStorageFeatures &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "storageBuffer16BitAccess" ), OUT result.storageBuffer16BitAccess ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "uniformAndStorageBuffer16BitAccess" ), OUT result.uniformAndStorageBuffer16BitAccess ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "storagePushConstant16" ), OUT result.storagePushConstant16 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "storageInputOutput16" ), OUT result.storageInputOutput16 ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryDedicatedRequirements (const Node_t *node, OUT VkMemoryDedicatedRequirements* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryDedicatedRequirements>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryDedicatedRequirements( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryDedicatedRequirements (const Node_t *node, OUT VkMemoryDedicatedRequirements &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "prefersDedicatedAllocation" ), OUT result.prefersDedicatedAllocation ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "requiresDedicatedAllocation" ), OUT result.requiresDedicatedAllocation ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShadingRateImagePropertiesNV (const Node_t *node, OUT VkPhysicalDeviceShadingRateImagePropertiesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShadingRateImagePropertiesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShadingRateImagePropertiesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShadingRateImagePropertiesNV (const Node_t *node, OUT VkPhysicalDeviceShadingRateImagePropertiesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "shadingRateTexelSize" ), OUT result.shadingRateTexelSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shadingRatePaletteSize" ), OUT result.shadingRatePaletteSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shadingRateMaxCoarseSamples" ), OUT result.shadingRateMaxCoarseSamples ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageDrmFormatModifierExplicitCreateInfoEXT (const Node_t *node, OUT VkImageDrmFormatModifierExplicitCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageDrmFormatModifierExplicitCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageDrmFormatModifierExplicitCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageDrmFormatModifierExplicitCreateInfoEXT (const Node_t *node, OUT VkImageDrmFormatModifierExplicitCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "drmFormatModifier" ), OUT result.drmFormatModifier ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "drmFormatModifierPlaneCount" ), OUT result.drmFormatModifierPlaneCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pPlaneLayouts" ), OUT const_cast<VkSubresourceLayout * &>(result.pPlaneLayouts), INOUT result.drmFormatModifierPlaneCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryDedicatedAllocateInfo (const Node_t *node, OUT VkMemoryDedicatedAllocateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryDedicatedAllocateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryDedicatedAllocateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryDedicatedAllocateInfo (const Node_t *node, OUT VkMemoryDedicatedAllocateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "image" ), OUT result.image ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "buffer" ), OUT result.buffer ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryAllocateFlagsInfo (const Node_t *node, OUT VkMemoryAllocateFlagsInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryAllocateFlagsInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryAllocateFlagsInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryAllocateFlagsInfo (const Node_t *node, OUT VkMemoryAllocateFlagsInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceMask" ), OUT result.deviceMask ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceGroupRenderPassBeginInfo (const Node_t *node, OUT VkDeviceGroupRenderPassBeginInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceGroupRenderPassBeginInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceGroupRenderPassBeginInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceGroupRenderPassBeginInfo (const Node_t *node, OUT VkDeviceGroupRenderPassBeginInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceMask" ), OUT result.deviceMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceRenderAreaCount" ), OUT result.deviceRenderAreaCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pDeviceRenderAreas" ), OUT const_cast<VkRect2D * &>(result.pDeviceRenderAreas), INOUT result.deviceRenderAreaCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceGroupCommandBufferBeginInfo (const Node_t *node, OUT VkDeviceGroupCommandBufferBeginInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceGroupCommandBufferBeginInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceGroupCommandBufferBeginInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceGroupCommandBufferBeginInfo (const Node_t *node, OUT VkDeviceGroupCommandBufferBeginInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceMask" ), OUT result.deviceMask ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceYcbcrImageArraysFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceYcbcrImageArraysFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "ycbcrImageArrays" ), OUT result.ycbcrImageArrays ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceGroupSubmitInfo (const Node_t *node, OUT VkDeviceGroupSubmitInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceGroupSubmitInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceGroupSubmitInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceGroupSubmitInfo (const Node_t *node, OUT VkDeviceGroupSubmitInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "waitSemaphoreCount" ), OUT result.waitSemaphoreCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pWaitSemaphoreDeviceIndices" ), OUT const_cast<uint32_t * &>(result.pWaitSemaphoreDeviceIndices), INOUT result.waitSemaphoreCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "commandBufferCount" ), OUT result.commandBufferCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pCommandBufferDeviceMasks" ), OUT const_cast<uint32_t * &>(result.pCommandBufferDeviceMasks), INOUT result.commandBufferCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "signalSemaphoreCount" ), OUT result.signalSemaphoreCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pSignalSemaphoreDeviceIndices" ), OUT const_cast<uint32_t * &>(result.pSignalSemaphoreDeviceIndices), INOUT result.signalSemaphoreCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR (const Node_t *node, OUT VkPhysicalDeviceShaderFloat16Int8FeaturesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR (const Node_t *node, OUT VkPhysicalDeviceShaderFloat16Int8FeaturesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderFloat16" ), OUT result.shaderFloat16 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderInt8" ), OUT result.shaderInt8 ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceGroupBindSparseInfo (const Node_t *node, OUT VkDeviceGroupBindSparseInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceGroupBindSparseInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceGroupBindSparseInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceGroupBindSparseInfo (const Node_t *node, OUT VkDeviceGroupBindSparseInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "resourceDeviceIndex" ), OUT result.resourceDeviceIndex ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryDeviceIndex" ), OUT result.memoryDeviceIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBindBufferMemoryDeviceGroupInfo (const Node_t *node, OUT VkBindBufferMemoryDeviceGroupInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBindBufferMemoryDeviceGroupInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBindBufferMemoryDeviceGroupInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBindBufferMemoryDeviceGroupInfo (const Node_t *node, OUT VkBindBufferMemoryDeviceGroupInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceIndexCount" ), OUT result.deviceIndexCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pDeviceIndices" ), OUT const_cast<uint32_t * &>(result.pDeviceIndices), INOUT result.deviceIndexCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBindImageMemoryDeviceGroupInfo (const Node_t *node, OUT VkBindImageMemoryDeviceGroupInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBindImageMemoryDeviceGroupInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBindImageMemoryDeviceGroupInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBindImageMemoryDeviceGroupInfo (const Node_t *node, OUT VkBindImageMemoryDeviceGroupInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceIndexCount" ), OUT result.deviceIndexCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pDeviceIndices" ), OUT const_cast<uint32_t * &>(result.pDeviceIndices), INOUT result.deviceIndexCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "splitInstanceBindRegionCount" ), OUT result.splitInstanceBindRegionCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pSplitInstanceBindRegions" ), OUT const_cast<VkRect2D * &>(result.pSplitInstanceBindRegions), INOUT result.splitInstanceBindRegionCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceGroupProperties (const Node_t *node, OUT VkPhysicalDeviceGroupProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceGroupProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceGroupProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceGroupProperties (const Node_t *node, OUT VkPhysicalDeviceGroupProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "physicalDeviceCount" ), OUT result.physicalDeviceCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "physicalDevices" ), OUT result.physicalDevices, INOUT result.physicalDeviceCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subsetAllocation" ), OUT result.subsetAllocation ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceGroupDeviceCreateInfo (const Node_t *node, OUT VkDeviceGroupDeviceCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceGroupDeviceCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceGroupDeviceCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceGroupDeviceCreateInfo (const Node_t *node, OUT VkDeviceGroupDeviceCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "physicalDeviceCount" ), OUT result.physicalDeviceCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pPhysicalDevices" ), OUT const_cast<VkPhysicalDevice * &>(result.pPhysicalDevices), INOUT result.physicalDeviceCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSamplerReductionModeCreateInfoEXT (const Node_t *node, OUT VkSamplerReductionModeCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSamplerReductionModeCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSamplerReductionModeCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSamplerReductionModeCreateInfoEXT (const Node_t *node, OUT VkSamplerReductionModeCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "reductionMode" ), OUT result.reductionMode ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBufferMemoryRequirementsInfo2 (const Node_t *node, OUT VkBufferMemoryRequirementsInfo2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBufferMemoryRequirementsInfo2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBufferMemoryRequirementsInfo2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBufferMemoryRequirementsInfo2 (const Node_t *node, OUT VkBufferMemoryRequirementsInfo2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "buffer" ), OUT result.buffer ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageSparseMemoryRequirementsInfo2 (const Node_t *node, OUT VkImageSparseMemoryRequirementsInfo2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageSparseMemoryRequirementsInfo2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageSparseMemoryRequirementsInfo2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageSparseMemoryRequirementsInfo2 (const Node_t *node, OUT VkImageSparseMemoryRequirementsInfo2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "image" ), OUT result.image ));
	return true;
}

bool  RdCaptureReader::_Parse_VkAttachmentReference2KHR (const Node_t *node, OUT VkAttachmentReference2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAttachmentReference2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAttachmentReference2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAttachmentReference2KHR (const Node_t *node, OUT VkAttachmentReference2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "attachment" ), OUT result.attachment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "layout" ), OUT result.layout ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "aspectMask" ), OUT result.aspectMask ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryRequirements2 (const Node_t *node, OUT VkMemoryRequirements2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryRequirements2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryRequirements2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryRequirements2 (const Node_t *node, OUT VkMemoryRequirements2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "memoryRequirements" ), OUT result.memoryRequirements ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorSetLayoutSupport (const Node_t *node, OUT VkDescriptorSetLayoutSupport* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorSetLayoutSupport>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorSetLayoutSupport( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorSetLayoutSupport (const Node_t *node, OUT VkDescriptorSetLayoutSupport &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supported" ), OUT result.supported ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSparseImageMemoryRequirements2 (const Node_t *node, OUT VkSparseImageMemoryRequirements2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSparseImageMemoryRequirements2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSparseImageMemoryRequirements2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSparseImageMemoryRequirements2 (const Node_t *node, OUT VkSparseImageMemoryRequirements2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "memoryRequirements" ), OUT result.memoryRequirements ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFeatures2 (const Node_t *node, OUT VkPhysicalDeviceFeatures2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceFeatures2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceFeatures2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFeatures2 (const Node_t *node, OUT VkPhysicalDeviceFeatures2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "features" ), OUT result.features ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceProperties2 (const Node_t *node, OUT VkPhysicalDeviceProperties2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceProperties2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceProperties2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceProperties2 (const Node_t *node, OUT VkPhysicalDeviceProperties2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "properties" ), OUT result.properties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRenderPassAttachmentBeginInfoKHR (const Node_t *node, OUT VkRenderPassAttachmentBeginInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRenderPassAttachmentBeginInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRenderPassAttachmentBeginInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRenderPassAttachmentBeginInfoKHR (const Node_t *node, OUT VkRenderPassAttachmentBeginInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "attachmentCount" ), OUT result.attachmentCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pAttachments" ), OUT const_cast<VkImageView * &>(result.pAttachments), INOUT result.attachmentCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkFormatProperties2 (const Node_t *node, OUT VkFormatProperties2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkFormatProperties2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkFormatProperties2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkFormatProperties2 (const Node_t *node, OUT VkFormatProperties2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "formatProperties" ), OUT result.formatProperties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageFormatProperties2 (const Node_t *node, OUT VkImageFormatProperties2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageFormatProperties2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageFormatProperties2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageFormatProperties2 (const Node_t *node, OUT VkImageFormatProperties2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "imageFormatProperties" ), OUT result.imageFormatProperties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkQueueFamilyProperties2 (const Node_t *node, OUT VkQueueFamilyProperties2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkQueueFamilyProperties2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkQueueFamilyProperties2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkQueueFamilyProperties2 (const Node_t *node, OUT VkQueueFamilyProperties2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "queueFamilyProperties" ), OUT result.queueFamilyProperties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMemoryProperties2 (const Node_t *node, OUT VkPhysicalDeviceMemoryProperties2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceMemoryProperties2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceMemoryProperties2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMemoryProperties2 (const Node_t *node, OUT VkPhysicalDeviceMemoryProperties2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "memoryProperties" ), OUT result.memoryProperties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSparseImageFormatProperties2 (const Node_t *node, OUT VkSparseImageFormatProperties2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSparseImageFormatProperties2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSparseImageFormatProperties2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSparseImageFormatProperties2 (const Node_t *node, OUT VkSparseImageFormatProperties2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "properties" ), OUT result.properties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSparseImageFormatInfo2 (const Node_t *node, OUT VkPhysicalDeviceSparseImageFormatInfo2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceSparseImageFormatInfo2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceSparseImageFormatInfo2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSparseImageFormatInfo2 (const Node_t *node, OUT VkPhysicalDeviceSparseImageFormatInfo2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "type" ), OUT result.type ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "samples" ), OUT result.samples ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "usage" ), OUT result.usage ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "tiling" ), OUT result.tiling ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceASTCDecodeFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceASTCDecodeFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceASTCDecodeFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceASTCDecodeFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceASTCDecodeFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceASTCDecodeFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "decodeModeSharedExponent" ), OUT result.decodeModeSharedExponent ));
	return true;
}

bool  RdCaptureReader::_Parse_VkInputAttachmentAspectReference (const Node_t *node, OUT VkInputAttachmentAspectReference* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkInputAttachmentAspectReference>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkInputAttachmentAspectReference( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkInputAttachmentAspectReference (const Node_t *node, OUT VkInputAttachmentAspectReference &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subpass" ), OUT result.subpass ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "inputAttachmentIndex" ), OUT result.inputAttachmentIndex ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "aspectMask" ), OUT result.aspectMask ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRenderPassInputAttachmentAspectCreateInfo (const Node_t *node, OUT VkRenderPassInputAttachmentAspectCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRenderPassInputAttachmentAspectCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRenderPassInputAttachmentAspectCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRenderPassInputAttachmentAspectCreateInfo (const Node_t *node, OUT VkRenderPassInputAttachmentAspectCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "aspectReferenceCount" ), OUT result.aspectReferenceCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pAspectReferences" ), OUT const_cast<VkInputAttachmentAspectReference * &>(result.pAspectReferences), INOUT result.aspectReferenceCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageViewUsageCreateInfo (const Node_t *node, OUT VkImageViewUsageCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageViewUsageCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageViewUsageCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageViewUsageCreateInfo (const Node_t *node, OUT VkImageViewUsageCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "usage" ), OUT result.usage ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRenderPassMultiviewCreateInfo (const Node_t *node, OUT VkRenderPassMultiviewCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRenderPassMultiviewCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRenderPassMultiviewCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRenderPassMultiviewCreateInfo (const Node_t *node, OUT VkRenderPassMultiviewCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subpassCount" ), OUT result.subpassCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pViewMasks" ), OUT const_cast<uint32_t * &>(result.pViewMasks), INOUT result.subpassCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dependencyCount" ), OUT result.dependencyCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pViewOffsets" ), OUT const_cast<int32_t * &>(result.pViewOffsets), INOUT result.dependencyCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "correlationMaskCount" ), OUT result.correlationMaskCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pCorrelationMasks" ), OUT const_cast<uint32_t * &>(result.pCorrelationMasks), INOUT result.correlationMaskCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkFilterCubicImageViewImageFormatPropertiesEXT (const Node_t *node, OUT VkFilterCubicImageViewImageFormatPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkFilterCubicImageViewImageFormatPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkFilterCubicImageViewImageFormatPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkFilterCubicImageViewImageFormatPropertiesEXT (const Node_t *node, OUT VkFilterCubicImageViewImageFormatPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "filterCubic" ), OUT result.filterCubic ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "filterCubicMinmax" ), OUT result.filterCubicMinmax ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMultiviewFeatures (const Node_t *node, OUT VkPhysicalDeviceMultiviewFeatures* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceMultiviewFeatures>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceMultiviewFeatures( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMultiviewFeatures (const Node_t *node, OUT VkPhysicalDeviceMultiviewFeatures &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "multiview" ), OUT result.multiview ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "multiviewGeometryShader" ), OUT result.multiviewGeometryShader ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "multiviewTessellationShader" ), OUT result.multiviewTessellationShader ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayModeCreateInfoKHR (const Node_t *node, OUT VkDisplayModeCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayModeCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayModeCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayModeCreateInfoKHR (const Node_t *node, OUT VkDisplayModeCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "parameters" ), OUT result.parameters ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMultiviewProperties (const Node_t *node, OUT VkPhysicalDeviceMultiviewProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceMultiviewProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceMultiviewProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMultiviewProperties (const Node_t *node, OUT VkPhysicalDeviceMultiviewProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxMultiviewViewCount" ), OUT result.maxMultiviewViewCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxMultiviewInstanceIndex" ), OUT result.maxMultiviewInstanceIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayProperties2KHR (const Node_t *node, OUT VkDisplayProperties2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayProperties2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayProperties2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayProperties2KHR (const Node_t *node, OUT VkDisplayProperties2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "displayProperties" ), OUT result.displayProperties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceVariablePointersFeatures (const Node_t *node, OUT VkPhysicalDeviceVariablePointersFeatures* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceVariablePointersFeatures>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceVariablePointersFeatures( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceVariablePointersFeatures (const Node_t *node, OUT VkPhysicalDeviceVariablePointersFeatures &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "variablePointersStorageBuffer" ), OUT result.variablePointersStorageBuffer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "variablePointers" ), OUT result.variablePointers ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceProtectedMemoryFeatures (const Node_t *node, OUT VkPhysicalDeviceProtectedMemoryFeatures* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceProtectedMemoryFeatures>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceProtectedMemoryFeatures( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceProtectedMemoryFeatures (const Node_t *node, OUT VkPhysicalDeviceProtectedMemoryFeatures &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "protectedMemory" ), OUT result.protectedMemory ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRenderPassSampleLocationsBeginInfoEXT (const Node_t *node, OUT VkRenderPassSampleLocationsBeginInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRenderPassSampleLocationsBeginInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRenderPassSampleLocationsBeginInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRenderPassSampleLocationsBeginInfoEXT (const Node_t *node, OUT VkRenderPassSampleLocationsBeginInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "attachmentInitialSampleLocationsCount" ), OUT result.attachmentInitialSampleLocationsCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pAttachmentInitialSampleLocations" ), OUT const_cast<VkAttachmentSampleLocationsEXT * &>(result.pAttachmentInitialSampleLocations), INOUT result.attachmentInitialSampleLocationsCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "postSubpassSampleLocationsCount" ), OUT result.postSubpassSampleLocationsCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pPostSubpassSampleLocations" ), OUT const_cast<VkSubpassSampleLocationsEXT * &>(result.pPostSubpassSampleLocations), INOUT result.postSubpassSampleLocationsCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceQueueInfo2 (const Node_t *node, OUT VkDeviceQueueInfo2* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceQueueInfo2>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceQueueInfo2( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceQueueInfo2 (const Node_t *node, OUT VkDeviceQueueInfo2 &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueFamilyIndex" ), OUT result.queueFamilyIndex ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueIndex" ), OUT result.queueIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkProtectedSubmitInfo (const Node_t *node, OUT VkProtectedSubmitInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkProtectedSubmitInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkProtectedSubmitInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkProtectedSubmitInfo (const Node_t *node, OUT VkProtectedSubmitInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "protectedSubmit" ), OUT result.protectedSubmit ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSamplerYcbcrConversionCreateInfo (const Node_t *node, OUT VkSamplerYcbcrConversionCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSamplerYcbcrConversionCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSamplerYcbcrConversionCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSamplerYcbcrConversionCreateInfo (const Node_t *node, OUT VkSamplerYcbcrConversionCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "ycbcrModel" ), OUT result.ycbcrModel ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "ycbcrRange" ), OUT result.ycbcrRange ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "components" ), OUT result.components ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "xChromaOffset" ), OUT result.xChromaOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "yChromaOffset" ), OUT result.yChromaOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "chromaFilter" ), OUT result.chromaFilter ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "forceExplicitReconstruction" ), OUT result.forceExplicitReconstruction ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBindImagePlaneMemoryInfo (const Node_t *node, OUT VkBindImagePlaneMemoryInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBindImagePlaneMemoryInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBindImagePlaneMemoryInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBindImagePlaneMemoryInfo (const Node_t *node, OUT VkBindImagePlaneMemoryInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "planeAspect" ), OUT result.planeAspect ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceCooperativeMatrixPropertiesNV (const Node_t *node, OUT VkPhysicalDeviceCooperativeMatrixPropertiesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceCooperativeMatrixPropertiesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceCooperativeMatrixPropertiesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceCooperativeMatrixPropertiesNV (const Node_t *node, OUT VkPhysicalDeviceCooperativeMatrixPropertiesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "cooperativeMatrixSupportedStages" ), OUT result.cooperativeMatrixSupportedStages ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImagePlaneMemoryRequirementsInfo (const Node_t *node, OUT VkImagePlaneMemoryRequirementsInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImagePlaneMemoryRequirementsInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImagePlaneMemoryRequirementsInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImagePlaneMemoryRequirementsInfo (const Node_t *node, OUT VkImagePlaneMemoryRequirementsInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "planeAspect" ), OUT result.planeAspect ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFragmentDensityMapPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceFragmentDensityMapPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceFragmentDensityMapPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFragmentDensityMapPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceFragmentDensityMapPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "minFragmentDensityTexelSize" ), OUT result.minFragmentDensityTexelSize ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "maxFragmentDensityTexelSize" ), OUT result.maxFragmentDensityTexelSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fragmentDensityInvocations" ), OUT result.fragmentDensityInvocations ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSamplerYcbcrConversionFeatures (const Node_t *node, OUT VkPhysicalDeviceSamplerYcbcrConversionFeatures* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceSamplerYcbcrConversionFeatures>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceSamplerYcbcrConversionFeatures( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSamplerYcbcrConversionFeatures (const Node_t *node, OUT VkPhysicalDeviceSamplerYcbcrConversionFeatures &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "samplerYcbcrConversion" ), OUT result.samplerYcbcrConversion ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSamplerYcbcrConversionImageFormatProperties (const Node_t *node, OUT VkSamplerYcbcrConversionImageFormatProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSamplerYcbcrConversionImageFormatProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSamplerYcbcrConversionImageFormatProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSamplerYcbcrConversionImageFormatProperties (const Node_t *node, OUT VkSamplerYcbcrConversionImageFormatProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "combinedImageSamplerDescriptorCount" ), OUT result.combinedImageSamplerDescriptorCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorUpdateTemplateCreateInfo (const Node_t *node, OUT VkDescriptorUpdateTemplateCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorUpdateTemplateCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorUpdateTemplateCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorUpdateTemplateCreateInfo (const Node_t *node, OUT VkDescriptorUpdateTemplateCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorUpdateEntryCount" ), OUT result.descriptorUpdateEntryCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pDescriptorUpdateEntries" ), OUT const_cast<VkDescriptorUpdateTemplateEntry * &>(result.pDescriptorUpdateEntries), INOUT result.descriptorUpdateEntryCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "templateType" ), OUT result.templateType ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "descriptorSetLayout" ), OUT result.descriptorSetLayout ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pipelineBindPoint" ), OUT result.pipelineBindPoint ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "pipelineLayout" ), OUT result.pipelineLayout ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "set" ), OUT result.set ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExternalMemoryProperties (const Node_t *node, OUT VkExternalMemoryProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExternalMemoryProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExternalMemoryProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExternalMemoryProperties (const Node_t *node, OUT VkExternalMemoryProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "externalMemoryFeatures" ), OUT result.externalMemoryFeatures ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "exportFromImportedHandleTypes" ), OUT result.exportFromImportedHandleTypes ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "compatibleHandleTypes" ), OUT result.compatibleHandleTypes ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExternalImageFormatInfo (const Node_t *node, OUT VkPhysicalDeviceExternalImageFormatInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceExternalImageFormatInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceExternalImageFormatInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExternalImageFormatInfo (const Node_t *node, OUT VkPhysicalDeviceExternalImageFormatInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExternalBufferProperties (const Node_t *node, OUT VkExternalBufferProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExternalBufferProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExternalBufferProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExternalBufferProperties (const Node_t *node, OUT VkExternalBufferProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "externalMemoryProperties" ), OUT result.externalMemoryProperties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "advancedBlendMaxColorAttachments" ), OUT result.advancedBlendMaxColorAttachments ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "advancedBlendIndependentBlend" ), OUT result.advancedBlendIndependentBlend ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "advancedBlendNonPremultipliedSrcColor" ), OUT result.advancedBlendNonPremultipliedSrcColor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "advancedBlendNonPremultipliedDstColor" ), OUT result.advancedBlendNonPremultipliedDstColor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "advancedBlendCorrelatedOverlap" ), OUT result.advancedBlendCorrelatedOverlap ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "advancedBlendAllOperations" ), OUT result.advancedBlendAllOperations ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceIDProperties (const Node_t *node, OUT VkPhysicalDeviceIDProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceIDProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceIDProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceIDProperties (const Node_t *node, OUT VkPhysicalDeviceIDProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceUUID" ), OUT result.deviceUUID ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "driverUUID" ), OUT result.driverUUID ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceLUID" ), OUT result.deviceLUID ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceNodeMask" ), OUT result.deviceNodeMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceLUIDValid" ), OUT result.deviceLUIDValid ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExternalMemoryImageCreateInfo (const Node_t *node, OUT VkExternalMemoryImageCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExternalMemoryImageCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExternalMemoryImageCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExternalMemoryImageCreateInfo (const Node_t *node, OUT VkExternalMemoryImageCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleTypes" ), OUT result.handleTypes ));
	return true;
}

bool  RdCaptureReader::_Parse_VkGeometryAABBNV (const Node_t *node, OUT VkGeometryAABBNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkGeometryAABBNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkGeometryAABBNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkGeometryAABBNV (const Node_t *node, OUT VkGeometryAABBNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "aabbData" ), OUT result.aabbData ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "numAABBs" ), OUT result.numAABBs ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stride" ), OUT result.stride ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceCornerSampledImageFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceCornerSampledImageFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceCornerSampledImageFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceCornerSampledImageFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceCornerSampledImageFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceCornerSampledImageFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "cornerSampledImage" ), OUT result.cornerSampledImage ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExportMemoryAllocateInfo (const Node_t *node, OUT VkExportMemoryAllocateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExportMemoryAllocateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExportMemoryAllocateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExportMemoryAllocateInfo (const Node_t *node, OUT VkExportMemoryAllocateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleTypes" ), OUT result.handleTypes ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "representativeFragmentTest" ), OUT result.representativeFragmentTest ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExternalFenceInfo (const Node_t *node, OUT VkPhysicalDeviceExternalFenceInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceExternalFenceInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceExternalFenceInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExternalFenceInfo (const Node_t *node, OUT VkPhysicalDeviceExternalFenceInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkExportMemoryWin32HandleInfoKHR (const Node_t *node, OUT VkExportMemoryWin32HandleInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExportMemoryWin32HandleInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExportMemoryWin32HandleInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExportMemoryWin32HandleInfoKHR (const Node_t *node, OUT VkExportMemoryWin32HandleInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pAttributes" ), OUT const_cast<SECURITY_ATTRIBUTES * &>(result.pAttributes) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dwAccess" ), OUT result.dwAccess ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "name" ), OUT result.name ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkPhysicalDeviceCoherentMemoryFeaturesAMD (const Node_t *node, OUT VkPhysicalDeviceCoherentMemoryFeaturesAMD* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceCoherentMemoryFeaturesAMD>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceCoherentMemoryFeaturesAMD( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceCoherentMemoryFeaturesAMD (const Node_t *node, OUT VkPhysicalDeviceCoherentMemoryFeaturesAMD &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceCoherentMemory" ), OUT result.deviceCoherentMemory ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExternalFenceProperties (const Node_t *node, OUT VkExternalFenceProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExternalFenceProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExternalFenceProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExternalFenceProperties (const Node_t *node, OUT VkExternalFenceProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "exportFromImportedHandleTypes" ), OUT result.exportFromImportedHandleTypes ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "compatibleHandleTypes" ), OUT result.compatibleHandleTypes ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "externalFenceFeatures" ), OUT result.externalFenceFeatures ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationLineStateCreateInfoEXT (const Node_t *node, OUT VkPipelineRasterizationLineStateCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineRasterizationLineStateCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineRasterizationLineStateCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationLineStateCreateInfoEXT (const Node_t *node, OUT VkPipelineRasterizationLineStateCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "lineRasterizationMode" ), OUT result.lineRasterizationMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stippledLineEnable" ), OUT result.stippledLineEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "lineStippleFactor" ), OUT result.lineStippleFactor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "lineStipplePattern" ), OUT result.lineStipplePattern ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExportFenceCreateInfo (const Node_t *node, OUT VkExportFenceCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExportFenceCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExportFenceCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExportFenceCreateInfo (const Node_t *node, OUT VkExportFenceCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleTypes" ), OUT result.handleTypes ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPerformanceMarkerInfoINTEL (const Node_t *node, OUT VkPerformanceMarkerInfoINTEL* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPerformanceMarkerInfoINTEL>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPerformanceMarkerInfoINTEL( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPerformanceMarkerInfoINTEL (const Node_t *node, OUT VkPerformanceMarkerInfoINTEL &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "marker" ), OUT result.marker ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCoarseSampleLocationNV (const Node_t *node, OUT VkCoarseSampleLocationNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCoarseSampleLocationNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCoarseSampleLocationNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCoarseSampleLocationNV (const Node_t *node, OUT VkCoarseSampleLocationNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pixelX" ), OUT result.pixelX ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pixelY" ), OUT result.pixelY ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sample" ), OUT result.sample ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExportSemaphoreCreateInfo (const Node_t *node, OUT VkExportSemaphoreCreateInfo* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExportSemaphoreCreateInfo>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExportSemaphoreCreateInfo( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExportSemaphoreCreateInfo (const Node_t *node, OUT VkExportSemaphoreCreateInfo &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleTypes" ), OUT result.handleTypes ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExportMemoryAllocateInfoNV (const Node_t *node, OUT VkExportMemoryAllocateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExportMemoryAllocateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExportMemoryAllocateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExportMemoryAllocateInfoNV (const Node_t *node, OUT VkExportMemoryAllocateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleTypes" ), OUT result.handleTypes ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExternalSemaphoreProperties (const Node_t *node, OUT VkExternalSemaphoreProperties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExternalSemaphoreProperties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExternalSemaphoreProperties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExternalSemaphoreProperties (const Node_t *node, OUT VkExternalSemaphoreProperties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "exportFromImportedHandleTypes" ), OUT result.exportFromImportedHandleTypes ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "compatibleHandleTypes" ), OUT result.compatibleHandleTypes ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "externalSemaphoreFeatures" ), OUT result.externalSemaphoreFeatures ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMaintenance3Properties (const Node_t *node, OUT VkPhysicalDeviceMaintenance3Properties* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceMaintenance3Properties>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceMaintenance3Properties( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMaintenance3Properties (const Node_t *node, OUT VkPhysicalDeviceMaintenance3Properties &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerSetDescriptors" ), OUT result.maxPerSetDescriptors ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxMemoryAllocationSize" ), OUT result.maxMemoryAllocationSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderDrawParametersFeatures (const Node_t *node, OUT VkPhysicalDeviceShaderDrawParametersFeatures* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShaderDrawParametersFeatures>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShaderDrawParametersFeatures( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderDrawParametersFeatures (const Node_t *node, OUT VkPhysicalDeviceShaderDrawParametersFeatures &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderDrawParameters" ), OUT result.shaderDrawParameters ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayModeParametersKHR (const Node_t *node, OUT VkDisplayModeParametersKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayModeParametersKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayModeParametersKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayModeParametersKHR (const Node_t *node, OUT VkDisplayModeParametersKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "visibleRegion" ), OUT result.visibleRegion ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "refreshRate" ), OUT result.refreshRate ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSurfaceCapabilitiesKHR (const Node_t *node, OUT VkSurfaceCapabilitiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSurfaceCapabilitiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSurfaceCapabilitiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSurfaceCapabilitiesKHR (const Node_t *node, OUT VkSurfaceCapabilitiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minImageCount" ), OUT result.minImageCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxImageCount" ), OUT result.maxImageCount ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "currentExtent" ), OUT result.currentExtent ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "minImageExtent" ), OUT result.minImageExtent ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "maxImageExtent" ), OUT result.maxImageExtent ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxImageArrayLayers" ), OUT result.maxImageArrayLayers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedTransforms" ), OUT result.supportedTransforms ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "currentTransform" ), OUT result.currentTransform ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedCompositeAlpha" ), OUT result.supportedCompositeAlpha ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedUsageFlags" ), OUT result.supportedUsageFlags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceConditionalRenderingFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceConditionalRenderingFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceConditionalRenderingFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceConditionalRenderingFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceConditionalRenderingFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceConditionalRenderingFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "conditionalRendering" ), OUT result.conditionalRendering ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "inheritedConditionalRendering" ), OUT result.inheritedConditionalRendering ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSurfaceFormatKHR (const Node_t *node, OUT VkSurfaceFormatKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSurfaceFormatKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSurfaceFormatKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSurfaceFormatKHR (const Node_t *node, OUT VkSurfaceFormatKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "colorSpace" ), OUT result.colorSpace ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImportMemoryFdInfoKHR (const Node_t *node, OUT VkImportMemoryFdInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImportMemoryFdInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImportMemoryFdInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImportMemoryFdInfoKHR (const Node_t *node, OUT VkImportMemoryFdInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fd" ), OUT result.fd ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSwapchainCreateInfoKHR (const Node_t *node, OUT VkSwapchainCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSwapchainCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSwapchainCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSwapchainCreateInfoKHR (const Node_t *node, OUT VkSwapchainCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "surface" ), OUT result.surface ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minImageCount" ), OUT result.minImageCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageFormat" ), OUT result.imageFormat ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageColorSpace" ), OUT result.imageColorSpace ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "imageExtent" ), OUT result.imageExtent ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageArrayLayers" ), OUT result.imageArrayLayers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageUsage" ), OUT result.imageUsage ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageSharingMode" ), OUT result.imageSharingMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueFamilyIndexCount" ), OUT result.queueFamilyIndexCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pQueueFamilyIndices" ), OUT const_cast<uint32_t * &>(result.pQueueFamilyIndices), INOUT result.queueFamilyIndexCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "preTransform" ), OUT result.preTransform ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "compositeAlpha" ), OUT result.compositeAlpha ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "presentMode" ), OUT result.presentMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "clipped" ), OUT result.clipped ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "oldSwapchain" ), OUT result.oldSwapchain ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPresentInfoKHR (const Node_t *node, OUT VkPresentInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPresentInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPresentInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPresentInfoKHR (const Node_t *node, OUT VkPresentInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "waitSemaphoreCount" ), OUT result.waitSemaphoreCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pWaitSemaphores" ), OUT const_cast<VkSemaphore * &>(result.pWaitSemaphores), INOUT result.waitSemaphoreCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "swapchainCount" ), OUT result.swapchainCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pSwapchains" ), OUT const_cast<VkSwapchainKHR * &>(result.pSwapchains), INOUT result.swapchainCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pImageIndices" ), OUT const_cast<uint32_t * &>(result.pImageIndices), INOUT result.swapchainCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pResults" ), OUT const_cast<VkResult * &>(result.pResults), INOUT result.swapchainCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageSwapchainCreateInfoKHR (const Node_t *node, OUT VkImageSwapchainCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageSwapchainCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageSwapchainCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageSwapchainCreateInfoKHR (const Node_t *node, OUT VkImageSwapchainCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "swapchain" ), OUT result.swapchain ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBindImageMemorySwapchainInfoKHR (const Node_t *node, OUT VkBindImageMemorySwapchainInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBindImageMemorySwapchainInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBindImageMemorySwapchainInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBindImageMemorySwapchainInfoKHR (const Node_t *node, OUT VkBindImageMemorySwapchainInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "swapchain" ), OUT result.swapchain ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageIndex" ), OUT result.imageIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkIndirectCommandsLayoutTokenNVX (const Node_t *node, OUT VkIndirectCommandsLayoutTokenNVX* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkIndirectCommandsLayoutTokenNVX>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkIndirectCommandsLayoutTokenNVX( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkIndirectCommandsLayoutTokenNVX (const Node_t *node, OUT VkIndirectCommandsLayoutTokenNVX &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "tokenType" ), OUT result.tokenType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bindingUnit" ), OUT result.bindingUnit ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dynamicCount" ), OUT result.dynamicCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "divisor" ), OUT result.divisor ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceGroupPresentCapabilitiesKHR (const Node_t *node, OUT VkDeviceGroupPresentCapabilitiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceGroupPresentCapabilitiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceGroupPresentCapabilitiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceGroupPresentCapabilitiesKHR (const Node_t *node, OUT VkDeviceGroupPresentCapabilitiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "presentMask" ), OUT result.presentMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "modes" ), OUT result.modes ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkWin32KeyedMutexAcquireReleaseInfoNV (const Node_t *node, OUT VkWin32KeyedMutexAcquireReleaseInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkWin32KeyedMutexAcquireReleaseInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkWin32KeyedMutexAcquireReleaseInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkWin32KeyedMutexAcquireReleaseInfoNV (const Node_t *node, OUT VkWin32KeyedMutexAcquireReleaseInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "acquireCount" ), OUT result.acquireCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pAcquireSyncs" ), OUT const_cast<VkDeviceMemory * &>(result.pAcquireSyncs), INOUT result.acquireCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pAcquireKeys" ), OUT const_cast<uint64_t * &>(result.pAcquireKeys), INOUT result.acquireCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pAcquireTimeoutMilliseconds" ), OUT const_cast<uint32_t * &>(result.pAcquireTimeoutMilliseconds), INOUT result.acquireCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "releaseCount" ), OUT result.releaseCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pReleaseSyncs" ), OUT const_cast<VkDeviceMemory * &>(result.pReleaseSyncs), INOUT result.releaseCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pReleaseKeys" ), OUT const_cast<uint64_t * &>(result.pReleaseKeys), INOUT result.releaseCount ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkDeviceGroupPresentInfoKHR (const Node_t *node, OUT VkDeviceGroupPresentInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceGroupPresentInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceGroupPresentInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceGroupPresentInfoKHR (const Node_t *node, OUT VkDeviceGroupPresentInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "swapchainCount" ), OUT result.swapchainCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pDeviceMasks" ), OUT const_cast<uint32_t * &>(result.pDeviceMasks), INOUT result.swapchainCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "mode" ), OUT result.mode ));
	return true;
}

bool  RdCaptureReader::_Parse_VkVertexInputBindingDivisorDescriptionEXT (const Node_t *node, OUT VkVertexInputBindingDivisorDescriptionEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkVertexInputBindingDivisorDescriptionEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkVertexInputBindingDivisorDescriptionEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkVertexInputBindingDivisorDescriptionEXT (const Node_t *node, OUT VkVertexInputBindingDivisorDescriptionEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "binding" ), OUT result.binding ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "divisor" ), OUT result.divisor ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceGroupSwapchainCreateInfoKHR (const Node_t *node, OUT VkDeviceGroupSwapchainCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceGroupSwapchainCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceGroupSwapchainCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceGroupSwapchainCreateInfoKHR (const Node_t *node, OUT VkDeviceGroupSwapchainCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "modes" ), OUT result.modes ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayPropertiesKHR (const Node_t *node, OUT VkDisplayPropertiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayPropertiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayPropertiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayPropertiesKHR (const Node_t *node, OUT VkDisplayPropertiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "display" ), OUT result.display ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "displayName" ), OUT const_cast<char * &>(result.displayName) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "physicalDimensions" ), OUT result.physicalDimensions ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "physicalResolution" ), OUT result.physicalResolution ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedTransforms" ), OUT result.supportedTransforms ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "planeReorderPossible" ), OUT result.planeReorderPossible ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "persistentContent" ), OUT result.persistentContent ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayPlaneCapabilitiesKHR (const Node_t *node, OUT VkDisplayPlaneCapabilitiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayPlaneCapabilitiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayPlaneCapabilitiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayPlaneCapabilitiesKHR (const Node_t *node, OUT VkDisplayPlaneCapabilitiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedAlpha" ), OUT result.supportedAlpha ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "minSrcPosition" ), OUT result.minSrcPosition ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "maxSrcPosition" ), OUT result.maxSrcPosition ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "minSrcExtent" ), OUT result.minSrcExtent ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "maxSrcExtent" ), OUT result.maxSrcExtent ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "minDstPosition" ), OUT result.minDstPosition ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "maxDstPosition" ), OUT result.maxDstPosition ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "minDstExtent" ), OUT result.minDstExtent ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "maxDstExtent" ), OUT result.maxDstExtent ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplaySurfaceCreateInfoKHR (const Node_t *node, OUT VkDisplaySurfaceCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplaySurfaceCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplaySurfaceCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplaySurfaceCreateInfoKHR (const Node_t *node, OUT VkDisplaySurfaceCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "displayMode" ), OUT result.displayMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "planeIndex" ), OUT result.planeIndex ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "planeStackIndex" ), OUT result.planeStackIndex ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "transform" ), OUT result.transform ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "globalAlpha" ), OUT result.globalAlpha ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "alphaMode" ), OUT result.alphaMode ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "imageExtent" ), OUT result.imageExtent ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_XCB_H_
bool  RdCaptureReader::_Parse_VkXcbSurfaceCreateInfoKHR (const Node_t *node, OUT VkXcbSurfaceCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkXcbSurfaceCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkXcbSurfaceCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkXcbSurfaceCreateInfoKHR (const Node_t *node, OUT VkXcbSurfaceCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "connection" ), OUT const_cast<xcb_connection_t * &>(result.connection) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "window" ), OUT result.window ));
	return true;
}

#endif // VULKAN_XCB_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkMemoryFdPropertiesKHR (const Node_t *node, OUT VkMemoryFdPropertiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryFdPropertiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryFdPropertiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryFdPropertiesKHR (const Node_t *node, OUT VkMemoryFdPropertiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryTypeBits" ), OUT result.memoryTypeBits ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSubpassSampleLocationsEXT (const Node_t *node, OUT VkSubpassSampleLocationsEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSubpassSampleLocationsEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSubpassSampleLocationsEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSubpassSampleLocationsEXT (const Node_t *node, OUT VkSubpassSampleLocationsEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subpassIndex" ), OUT result.subpassIndex ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "sampleLocationsInfo" ), OUT result.sampleLocationsInfo ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryGetFdInfoKHR (const Node_t *node, OUT VkMemoryGetFdInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryGetFdInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryGetFdInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryGetFdInfoKHR (const Node_t *node, OUT VkMemoryGetFdInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "memory" ), OUT result.memory ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImportSemaphoreFdInfoKHR (const Node_t *node, OUT VkImportSemaphoreFdInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImportSemaphoreFdInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImportSemaphoreFdInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImportSemaphoreFdInfoKHR (const Node_t *node, OUT VkImportSemaphoreFdInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "semaphore" ), OUT result.semaphore ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fd" ), OUT result.fd ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSemaphoreGetFdInfoKHR (const Node_t *node, OUT VkSemaphoreGetFdInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSemaphoreGetFdInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSemaphoreGetFdInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSemaphoreGetFdInfoKHR (const Node_t *node, OUT VkSemaphoreGetFdInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "semaphore" ), OUT result.semaphore ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDevicePushDescriptorPropertiesKHR (const Node_t *node, OUT VkPhysicalDevicePushDescriptorPropertiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDevicePushDescriptorPropertiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDevicePushDescriptorPropertiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDevicePushDescriptorPropertiesKHR (const Node_t *node, OUT VkPhysicalDevicePushDescriptorPropertiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPushDescriptors" ), OUT result.maxPushDescriptors ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRectLayerKHR (const Node_t *node, OUT VkRectLayerKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRectLayerKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRectLayerKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRectLayerKHR (const Node_t *node, OUT VkRectLayerKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "extent" ), OUT result.extent ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "layer" ), OUT result.layer ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineColorBlendAdvancedStateCreateInfoEXT (const Node_t *node, OUT VkPipelineColorBlendAdvancedStateCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineColorBlendAdvancedStateCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineColorBlendAdvancedStateCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineColorBlendAdvancedStateCreateInfoEXT (const Node_t *node, OUT VkPipelineColorBlendAdvancedStateCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcPremultiplied" ), OUT result.srcPremultiplied ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstPremultiplied" ), OUT result.dstPremultiplied ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "blendOverlap" ), OUT result.blendOverlap ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPresentRegionKHR (const Node_t *node, OUT VkPresentRegionKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPresentRegionKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPresentRegionKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPresentRegionKHR (const Node_t *node, OUT VkPresentRegionKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "rectangleCount" ), OUT result.rectangleCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pRectangles" ), OUT const_cast<VkRectLayerKHR * &>(result.pRectangles), INOUT result.rectangleCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPresentRegionsKHR (const Node_t *node, OUT VkPresentRegionsKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPresentRegionsKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPresentRegionsKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPresentRegionsKHR (const Node_t *node, OUT VkPresentRegionsKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "swapchainCount" ), OUT result.swapchainCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pRegions" ), OUT const_cast<VkPresentRegionKHR * &>(result.pRegions), INOUT result.swapchainCount ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkImportMemoryWin32HandleInfoKHR (const Node_t *node, OUT VkImportMemoryWin32HandleInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImportMemoryWin32HandleInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImportMemoryWin32HandleInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImportMemoryWin32HandleInfoKHR (const Node_t *node, OUT VkImportMemoryWin32HandleInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handle" ), OUT result.handle ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "name" ), OUT result.name ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkFramebufferAttachmentImageInfoKHR (const Node_t *node, OUT VkFramebufferAttachmentImageInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkFramebufferAttachmentImageInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkFramebufferAttachmentImageInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkFramebufferAttachmentImageInfoKHR (const Node_t *node, OUT VkFramebufferAttachmentImageInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "usage" ), OUT result.usage ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "width" ), OUT result.width ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "height" ), OUT result.height ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "layerCount" ), OUT result.layerCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewFormatCount" ), OUT result.viewFormatCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pViewFormats" ), OUT const_cast<VkFormat * &>(result.pViewFormats), INOUT result.viewFormatCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkAttachmentDescription2KHR (const Node_t *node, OUT VkAttachmentDescription2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAttachmentDescription2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAttachmentDescription2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAttachmentDescription2KHR (const Node_t *node, OUT VkAttachmentDescription2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "samples" ), OUT result.samples ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "loadOp" ), OUT result.loadOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "storeOp" ), OUT result.storeOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stencilLoadOp" ), OUT result.stencilLoadOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stencilStoreOp" ), OUT result.stencilStoreOp ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "initialLayout" ), OUT result.initialLayout ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "finalLayout" ), OUT result.finalLayout ));
	return true;
}

bool  RdCaptureReader::_Parse_VkConformanceVersionKHR (const Node_t *node, OUT VkConformanceVersionKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkConformanceVersionKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkConformanceVersionKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkConformanceVersionKHR (const Node_t *node, OUT VkConformanceVersionKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "major" ), OUT result.major ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minor" ), OUT result.minor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subminor" ), OUT result.subminor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "patch" ), OUT result.patch ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSubpassDescription2KHR (const Node_t *node, OUT VkSubpassDescription2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSubpassDescription2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSubpassDescription2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSubpassDescription2KHR (const Node_t *node, OUT VkSubpassDescription2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pipelineBindPoint" ), OUT result.pipelineBindPoint ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewMask" ), OUT result.viewMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "inputAttachmentCount" ), OUT result.inputAttachmentCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pInputAttachments" ), OUT const_cast<VkAttachmentReference2KHR * &>(result.pInputAttachments), INOUT result.inputAttachmentCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "colorAttachmentCount" ), OUT result.colorAttachmentCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pColorAttachments" ), OUT const_cast<VkAttachmentReference2KHR * &>(result.pColorAttachments), INOUT result.colorAttachmentCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pResolveAttachments" ), OUT const_cast<VkAttachmentReference2KHR * &>(result.pResolveAttachments), INOUT result.colorAttachmentCount ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pDepthStencilAttachment" ), OUT const_cast<VkAttachmentReference2KHR * &>(result.pDepthStencilAttachment) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "preserveAttachmentCount" ), OUT result.preserveAttachmentCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pPreserveAttachments" ), OUT const_cast<uint32_t * &>(result.pPreserveAttachments), INOUT result.preserveAttachmentCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSubpassDependency2KHR (const Node_t *node, OUT VkSubpassDependency2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSubpassDependency2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSubpassDependency2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSubpassDependency2KHR (const Node_t *node, OUT VkSubpassDependency2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcSubpass" ), OUT result.srcSubpass ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstSubpass" ), OUT result.dstSubpass ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcStageMask" ), OUT result.srcStageMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstStageMask" ), OUT result.dstStageMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "srcAccessMask" ), OUT result.srcAccessMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dstAccessMask" ), OUT result.dstAccessMask ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dependencyFlags" ), OUT result.dependencyFlags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewOffset" ), OUT result.viewOffset ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceSubgroupSizeControlPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceSubgroupSizeControlPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minSubgroupSize" ), OUT result.minSubgroupSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxSubgroupSize" ), OUT result.maxSubgroupSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxComputeWorkgroupSubgroups" ), OUT result.maxComputeWorkgroupSubgroups ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "requiredSubgroupSizeStages" ), OUT result.requiredSubgroupSizeStages ));
	return true;
}

bool  RdCaptureReader::_Parse_VkQueueFamilyCheckpointPropertiesNV (const Node_t *node, OUT VkQueueFamilyCheckpointPropertiesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkQueueFamilyCheckpointPropertiesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkQueueFamilyCheckpointPropertiesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkQueueFamilyCheckpointPropertiesNV (const Node_t *node, OUT VkQueueFamilyCheckpointPropertiesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "checkpointExecutionStageMask" ), OUT result.checkpointExecutionStageMask ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRenderPassCreateInfo2KHR (const Node_t *node, OUT VkRenderPassCreateInfo2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRenderPassCreateInfo2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRenderPassCreateInfo2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRenderPassCreateInfo2KHR (const Node_t *node, OUT VkRenderPassCreateInfo2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "attachmentCount" ), OUT result.attachmentCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pAttachments" ), OUT const_cast<VkAttachmentDescription2KHR * &>(result.pAttachments), INOUT result.attachmentCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subpassCount" ), OUT result.subpassCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pSubpasses" ), OUT const_cast<VkSubpassDescription2KHR * &>(result.pSubpasses), INOUT result.subpassCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dependencyCount" ), OUT result.dependencyCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pDependencies" ), OUT const_cast<VkSubpassDependency2KHR * &>(result.pDependencies), INOUT result.dependencyCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "correlatedViewMaskCount" ), OUT result.correlatedViewMaskCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pCorrelatedViewMasks" ), OUT const_cast<uint32_t * &>(result.pCorrelatedViewMasks), INOUT result.correlatedViewMaskCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSubpassBeginInfoKHR (const Node_t *node, OUT VkSubpassBeginInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSubpassBeginInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSubpassBeginInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSubpassBeginInfoKHR (const Node_t *node, OUT VkSubpassBeginInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "contents" ), OUT result.contents ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceHostQueryResetFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceHostQueryResetFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceHostQueryResetFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceHostQueryResetFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceHostQueryResetFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceHostQueryResetFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "hostQueryReset" ), OUT result.hostQueryReset ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSharedPresentSurfaceCapabilitiesKHR (const Node_t *node, OUT VkSharedPresentSurfaceCapabilitiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSharedPresentSurfaceCapabilitiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSharedPresentSurfaceCapabilitiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSharedPresentSurfaceCapabilitiesKHR (const Node_t *node, OUT VkSharedPresentSurfaceCapabilitiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sharedPresentSupportedUsageFlags" ), OUT result.sharedPresentSupportedUsageFlags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSurfaceCapabilities2EXT (const Node_t *node, OUT VkSurfaceCapabilities2EXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSurfaceCapabilities2EXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSurfaceCapabilities2EXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSurfaceCapabilities2EXT (const Node_t *node, OUT VkSurfaceCapabilities2EXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minImageCount" ), OUT result.minImageCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxImageCount" ), OUT result.maxImageCount ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "currentExtent" ), OUT result.currentExtent ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "minImageExtent" ), OUT result.minImageExtent ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "maxImageExtent" ), OUT result.maxImageExtent ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxImageArrayLayers" ), OUT result.maxImageArrayLayers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedTransforms" ), OUT result.supportedTransforms ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "currentTransform" ), OUT result.currentTransform ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedCompositeAlpha" ), OUT result.supportedCompositeAlpha ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedUsageFlags" ), OUT result.supportedUsageFlags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedSurfaceCounters" ), OUT result.supportedSurfaceCounters ));
	return true;
}

bool  RdCaptureReader::_Parse_VkFenceGetFdInfoKHR (const Node_t *node, OUT VkFenceGetFdInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkFenceGetFdInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkFenceGetFdInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkFenceGetFdInfoKHR (const Node_t *node, OUT VkFenceGetFdInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "fence" ), OUT result.fence ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSurfaceInfo2KHR (const Node_t *node, OUT VkPhysicalDeviceSurfaceInfo2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceSurfaceInfo2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceSurfaceInfo2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSurfaceInfo2KHR (const Node_t *node, OUT VkPhysicalDeviceSurfaceInfo2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "surface" ), OUT result.surface ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSurfaceCapabilities2KHR (const Node_t *node, OUT VkSurfaceCapabilities2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSurfaceCapabilities2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSurfaceCapabilities2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSurfaceCapabilities2KHR (const Node_t *node, OUT VkSurfaceCapabilities2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "surfaceCapabilities" ), OUT result.surfaceCapabilities ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSurfaceFormat2KHR (const Node_t *node, OUT VkSurfaceFormat2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSurfaceFormat2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSurfaceFormat2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSurfaceFormat2KHR (const Node_t *node, OUT VkSurfaceFormat2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "surfaceFormat" ), OUT result.surfaceFormat ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkImportSemaphoreWin32HandleInfoKHR (const Node_t *node, OUT VkImportSemaphoreWin32HandleInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImportSemaphoreWin32HandleInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImportSemaphoreWin32HandleInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImportSemaphoreWin32HandleInfoKHR (const Node_t *node, OUT VkImportSemaphoreWin32HandleInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "semaphore" ), OUT result.semaphore ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handle" ), OUT result.handle ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "name" ), OUT result.name ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkDisplayModeProperties2KHR (const Node_t *node, OUT VkDisplayModeProperties2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayModeProperties2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayModeProperties2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayModeProperties2KHR (const Node_t *node, OUT VkDisplayModeProperties2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "displayModeProperties" ), OUT result.displayModeProperties ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayPlaneCapabilities2KHR (const Node_t *node, OUT VkDisplayPlaneCapabilities2KHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayPlaneCapabilities2KHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayPlaneCapabilities2KHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayPlaneCapabilities2KHR (const Node_t *node, OUT VkDisplayPlaneCapabilities2KHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "capabilities" ), OUT result.capabilities ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT (const Node_t *node, OUT VkDescriptorSetVariableDescriptorCountAllocateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT (const Node_t *node, OUT VkDescriptorSetVariableDescriptorCountAllocateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorSetCount" ), OUT result.descriptorSetCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pDescriptorCounts" ), OUT const_cast<uint32_t * &>(result.pDescriptorCounts), INOUT result.descriptorSetCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDevice8BitStorageFeaturesKHR (const Node_t *node, OUT VkPhysicalDevice8BitStorageFeaturesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDevice8BitStorageFeaturesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDevice8BitStorageFeaturesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDevice8BitStorageFeaturesKHR (const Node_t *node, OUT VkPhysicalDevice8BitStorageFeaturesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "storageBuffer8BitAccess" ), OUT result.storageBuffer8BitAccess ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "uniformAndStorageBuffer8BitAccess" ), OUT result.uniformAndStorageBuffer8BitAccess ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "storagePushConstant8" ), OUT result.storagePushConstant8 ));
	return true;
}

bool  RdCaptureReader::_Parse_VkInitializePerformanceApiInfoINTEL (const Node_t *node, OUT VkInitializePerformanceApiInfoINTEL* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkInitializePerformanceApiInfoINTEL>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkInitializePerformanceApiInfoINTEL( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkInitializePerformanceApiInfoINTEL (const Node_t *node, OUT VkInitializePerformanceApiInfoINTEL &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pUserData" ), OUT const_cast<void * &>(result.pUserData) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR (const Node_t *node, OUT VkPhysicalDeviceShaderAtomicInt64FeaturesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR (const Node_t *node, OUT VkPhysicalDeviceShaderAtomicInt64FeaturesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderBufferInt64Atomics" ), OUT result.shaderBufferInt64Atomics ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderSharedInt64Atomics" ), OUT result.shaderSharedInt64Atomics ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_ANDROID_H_
bool  RdCaptureReader::_Parse_VkExternalFormatANDROID (const Node_t *node, OUT VkExternalFormatANDROID* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExternalFormatANDROID>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExternalFormatANDROID( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExternalFormatANDROID (const Node_t *node, OUT VkExternalFormatANDROID &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "externalFormat" ), OUT result.externalFormat ));
	return true;
}

#endif // VULKAN_ANDROID_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkDedicatedAllocationMemoryAllocateInfoNV (const Node_t *node, OUT VkDedicatedAllocationMemoryAllocateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDedicatedAllocationMemoryAllocateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDedicatedAllocationMemoryAllocateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDedicatedAllocationMemoryAllocateInfoNV (const Node_t *node, OUT VkDedicatedAllocationMemoryAllocateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "image" ), OUT result.image ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "buffer" ), OUT result.buffer ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDriverPropertiesKHR (const Node_t *node, OUT VkPhysicalDeviceDriverPropertiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceDriverPropertiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceDriverPropertiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDriverPropertiesKHR (const Node_t *node, OUT VkPhysicalDeviceDriverPropertiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "driverID" ), OUT result.driverID ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "driverName" ), OUT result.driverName ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "driverInfo" ), OUT result.driverInfo ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "conformanceVersion" ), OUT result.conformanceVersion ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFloatControlsPropertiesKHR (const Node_t *node, OUT VkPhysicalDeviceFloatControlsPropertiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceFloatControlsPropertiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceFloatControlsPropertiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFloatControlsPropertiesKHR (const Node_t *node, OUT VkPhysicalDeviceFloatControlsPropertiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "denormBehaviorIndependence" ), OUT result.denormBehaviorIndependence ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "roundingModeIndependence" ), OUT result.roundingModeIndependence ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderSignedZeroInfNanPreserveFloat16" ), OUT result.shaderSignedZeroInfNanPreserveFloat16 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderSignedZeroInfNanPreserveFloat32" ), OUT result.shaderSignedZeroInfNanPreserveFloat32 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderSignedZeroInfNanPreserveFloat64" ), OUT result.shaderSignedZeroInfNanPreserveFloat64 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderDenormPreserveFloat16" ), OUT result.shaderDenormPreserveFloat16 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderDenormPreserveFloat32" ), OUT result.shaderDenormPreserveFloat32 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderDenormPreserveFloat64" ), OUT result.shaderDenormPreserveFloat64 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderDenormFlushToZeroFloat16" ), OUT result.shaderDenormFlushToZeroFloat16 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderDenormFlushToZeroFloat32" ), OUT result.shaderDenormFlushToZeroFloat32 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderDenormFlushToZeroFloat64" ), OUT result.shaderDenormFlushToZeroFloat64 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderRoundingModeRTEFloat16" ), OUT result.shaderRoundingModeRTEFloat16 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderRoundingModeRTEFloat32" ), OUT result.shaderRoundingModeRTEFloat32 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderRoundingModeRTEFloat64" ), OUT result.shaderRoundingModeRTEFloat64 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderRoundingModeRTZFloat16" ), OUT result.shaderRoundingModeRTZFloat16 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderRoundingModeRTZFloat32" ), OUT result.shaderRoundingModeRTZFloat32 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderRoundingModeRTZFloat64" ), OUT result.shaderRoundingModeRTZFloat64 ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMemoryBudgetPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceMemoryBudgetPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceMemoryBudgetPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceMemoryBudgetPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMemoryBudgetPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceMemoryBudgetPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "heapBudget" ), OUT result.heapBudget ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "heapUsage" ), OUT result.heapUsage ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSubpassDescriptionDepthStencilResolveKHR (const Node_t *node, OUT VkSubpassDescriptionDepthStencilResolveKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSubpassDescriptionDepthStencilResolveKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSubpassDescriptionDepthStencilResolveKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSubpassDescriptionDepthStencilResolveKHR (const Node_t *node, OUT VkSubpassDescriptionDepthStencilResolveKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthResolveMode" ), OUT result.depthResolveMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stencilResolveMode" ), OUT result.stencilResolveMode ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pDepthStencilResolveAttachment" ), OUT const_cast<VkAttachmentReference2KHR * &>(result.pDepthStencilResolveAttachment) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDepthStencilResolvePropertiesKHR (const Node_t *node, OUT VkPhysicalDeviceDepthStencilResolvePropertiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceDepthStencilResolvePropertiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceDepthStencilResolvePropertiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDepthStencilResolvePropertiesKHR (const Node_t *node, OUT VkPhysicalDeviceDepthStencilResolvePropertiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedDepthResolveModes" ), OUT result.supportedDepthResolveModes ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportedStencilResolveModes" ), OUT result.supportedStencilResolveModes ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "independentResolveNone" ), OUT result.independentResolveNone ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "independentResolve" ), OUT result.independentResolve ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR (const Node_t *node, OUT VkPhysicalDeviceVulkanMemoryModelFeaturesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR (const Node_t *node, OUT VkPhysicalDeviceVulkanMemoryModelFeaturesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vulkanMemoryModel" ), OUT result.vulkanMemoryModel ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vulkanMemoryModelDeviceScope" ), OUT result.vulkanMemoryModelDeviceScope ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vulkanMemoryModelAvailabilityVisibilityChains" ), OUT result.vulkanMemoryModelAvailabilityVisibilityChains ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSurfaceProtectedCapabilitiesKHR (const Node_t *node, OUT VkSurfaceProtectedCapabilitiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSurfaceProtectedCapabilitiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSurfaceProtectedCapabilitiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSurfaceProtectedCapabilitiesKHR (const Node_t *node, OUT VkSurfaceProtectedCapabilitiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportsProtected" ), OUT result.supportsProtected ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR (const Node_t *node, OUT VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR (const Node_t *node, OUT VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "uniformBufferStandardLayout" ), OUT result.uniformBufferStandardLayout ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceCoverageReductionModeFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceCoverageReductionModeFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceCoverageReductionModeFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceCoverageReductionModeFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceCoverageReductionModeFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceCoverageReductionModeFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "coverageReductionMode" ), OUT result.coverageReductionMode ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRenderPassFragmentDensityMapCreateInfoEXT (const Node_t *node, OUT VkRenderPassFragmentDensityMapCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRenderPassFragmentDensityMapCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRenderPassFragmentDensityMapCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRenderPassFragmentDensityMapCreateInfoEXT (const Node_t *node, OUT VkRenderPassFragmentDensityMapCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "fragmentDensityMapAttachment" ), OUT result.fragmentDensityMapAttachment ));
	return true;
}

bool  RdCaptureReader::_Parse_VkAccelerationStructureMemoryRequirementsInfoNV (const Node_t *node, OUT VkAccelerationStructureMemoryRequirementsInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAccelerationStructureMemoryRequirementsInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAccelerationStructureMemoryRequirementsInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAccelerationStructureMemoryRequirementsInfoNV (const Node_t *node, OUT VkAccelerationStructureMemoryRequirementsInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "type" ), OUT result.type ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "accelerationStructure" ), OUT result.accelerationStructure ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR (const Node_t *node, OUT VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR (const Node_t *node, OUT VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pipelineExecutableInfo" ), OUT result.pipelineExecutableInfo ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineExecutablePropertiesKHR (const Node_t *node, OUT VkPipelineExecutablePropertiesKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineExecutablePropertiesKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineExecutablePropertiesKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineExecutablePropertiesKHR (const Node_t *node, OUT VkPipelineExecutablePropertiesKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stages" ), OUT result.stages ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "name" ), OUT result.name ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "description" ), OUT result.description ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subgroupSize" ), OUT result.subgroupSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDebugUtilsObjectTagInfoEXT (const Node_t *node, OUT VkDebugUtilsObjectTagInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDebugUtilsObjectTagInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDebugUtilsObjectTagInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDebugUtilsObjectTagInfoEXT (const Node_t *node, OUT VkDebugUtilsObjectTagInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "objectType" ), OUT result.objectType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "objectHandle" ), OUT result.objectHandle ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "tagName" ), OUT result.tagName ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "tagSize" ), OUT result.tagSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pTag" ), OUT const_cast<void * &>(result.pTag) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineExecutableStatisticValueKHR (const Node_t *node, OUT VkPipelineExecutableStatisticValueKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineExecutableStatisticValueKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineExecutableStatisticValueKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineExecutableStatisticValueKHR (const Node_t *node, OUT VkPipelineExecutableStatisticValueKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "b32" ), OUT result.b32 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "i64" ), OUT result.i64 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "u64" ), OUT result.u64 ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "f64" ), OUT result.f64 ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDebugReportCallbackCreateInfoEXT (const Node_t *node, OUT VkDebugReportCallbackCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDebugReportCallbackCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDebugReportCallbackCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDebugReportCallbackCreateInfoEXT (const Node_t *node, OUT VkDebugReportCallbackCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pfnCallback" ), OUT result.pfnCallback ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pUserData" ), OUT const_cast<void * &>(result.pUserData) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineCreationFeedbackCreateInfoEXT (const Node_t *node, OUT VkPipelineCreationFeedbackCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineCreationFeedbackCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineCreationFeedbackCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineCreationFeedbackCreateInfoEXT (const Node_t *node, OUT VkPipelineCreationFeedbackCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pPipelineCreationFeedback" ), OUT const_cast<VkPipelineCreationFeedbackEXT * &>(result.pPipelineCreationFeedback) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pipelineStageCreationFeedbackCount" ), OUT result.pipelineStageCreationFeedbackCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pPipelineStageCreationFeedbacks" ), OUT const_cast<VkPipelineCreationFeedbackEXT * &>(result.pPipelineStageCreationFeedbacks), INOUT result.pipelineStageCreationFeedbackCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationStateRasterizationOrderAMD (const Node_t *node, OUT VkPipelineRasterizationStateRasterizationOrderAMD* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineRasterizationStateRasterizationOrderAMD>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineRasterizationStateRasterizationOrderAMD( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationStateRasterizationOrderAMD (const Node_t *node, OUT VkPipelineRasterizationStateRasterizationOrderAMD &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "rasterizationOrder" ), OUT result.rasterizationOrder ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDebugMarkerObjectNameInfoEXT (const Node_t *node, OUT VkDebugMarkerObjectNameInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDebugMarkerObjectNameInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDebugMarkerObjectNameInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDebugMarkerObjectNameInfoEXT (const Node_t *node, OUT VkDebugMarkerObjectNameInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "objectType" ), OUT result.objectType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "object" ), OUT result.object ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pObjectName" ), OUT const_cast<char * &>(result.pObjectName) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDebugMarkerObjectTagInfoEXT (const Node_t *node, OUT VkDebugMarkerObjectTagInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDebugMarkerObjectTagInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDebugMarkerObjectTagInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDebugMarkerObjectTagInfoEXT (const Node_t *node, OUT VkDebugMarkerObjectTagInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "objectType" ), OUT result.objectType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "object" ), OUT result.object ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "tagName" ), OUT result.tagName ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "tagSize" ), OUT result.tagSize ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pTag" ), OUT const_cast<void * &>(result.pTag), INOUT result.tagSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDebugMarkerMarkerInfoEXT (const Node_t *node, OUT VkDebugMarkerMarkerInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDebugMarkerMarkerInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDebugMarkerMarkerInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDebugMarkerMarkerInfoEXT (const Node_t *node, OUT VkDebugMarkerMarkerInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pMarkerName" ), OUT const_cast<char * &>(result.pMarkerName) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "color" ), OUT result.color ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDedicatedAllocationImageCreateInfoNV (const Node_t *node, OUT VkDedicatedAllocationImageCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDedicatedAllocationImageCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDedicatedAllocationImageCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDedicatedAllocationImageCreateInfoNV (const Node_t *node, OUT VkDedicatedAllocationImageCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dedicatedAllocation" ), OUT result.dedicatedAllocation ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDedicatedAllocationBufferCreateInfoNV (const Node_t *node, OUT VkDedicatedAllocationBufferCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDedicatedAllocationBufferCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDedicatedAllocationBufferCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDedicatedAllocationBufferCreateInfoNV (const Node_t *node, OUT VkDedicatedAllocationBufferCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dedicatedAllocation" ), OUT result.dedicatedAllocation ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceTransformFeedbackPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceTransformFeedbackPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceTransformFeedbackPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceTransformFeedbackPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceTransformFeedbackPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceTransformFeedbackPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTransformFeedbackStreams" ), OUT result.maxTransformFeedbackStreams ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTransformFeedbackBuffers" ), OUT result.maxTransformFeedbackBuffers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTransformFeedbackBufferSize" ), OUT result.maxTransformFeedbackBufferSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTransformFeedbackStreamDataSize" ), OUT result.maxTransformFeedbackStreamDataSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTransformFeedbackBufferDataSize" ), OUT result.maxTransformFeedbackBufferDataSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTransformFeedbackBufferDataStride" ), OUT result.maxTransformFeedbackBufferDataStride ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "transformFeedbackQueries" ), OUT result.transformFeedbackQueries ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "transformFeedbackStreamsLinesTriangles" ), OUT result.transformFeedbackStreamsLinesTriangles ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "transformFeedbackRasterizationStreamSelect" ), OUT result.transformFeedbackRasterizationStreamSelect ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "transformFeedbackDraw" ), OUT result.transformFeedbackDraw ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceIndexTypeUint8FeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceIndexTypeUint8FeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceIndexTypeUint8FeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceIndexTypeUint8FeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceIndexTypeUint8FeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "indexTypeUint8" ), OUT result.indexTypeUint8 ));
	return true;
}

bool  RdCaptureReader::_Parse_VkShaderModuleValidationCacheCreateInfoEXT (const Node_t *node, OUT VkShaderModuleValidationCacheCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkShaderModuleValidationCacheCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkShaderModuleValidationCacheCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkShaderModuleValidationCacheCreateInfoEXT (const Node_t *node, OUT VkShaderModuleValidationCacheCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "validationCache" ), OUT result.validationCache ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceConservativeRasterizationPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceConservativeRasterizationPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceConservativeRasterizationPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceConservativeRasterizationPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceConservativeRasterizationPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "primitiveOverestimationSize" ), OUT result.primitiveOverestimationSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxExtraPrimitiveOverestimationSize" ), OUT result.maxExtraPrimitiveOverestimationSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "extraPrimitiveOverestimationSizeGranularity" ), OUT result.extraPrimitiveOverestimationSizeGranularity ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "primitiveUnderestimation" ), OUT result.primitiveUnderestimation ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "conservativePointAndLineRasterization" ), OUT result.conservativePointAndLineRasterization ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "degenerateTrianglesRasterized" ), OUT result.degenerateTrianglesRasterized ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "degenerateLinesRasterized" ), OUT result.degenerateLinesRasterized ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fullyCoveredFragmentShaderInputVariable" ), OUT result.fullyCoveredFragmentShaderInputVariable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "conservativeRasterizationPostDepthCoverage" ), OUT result.conservativeRasterizationPostDepthCoverage ));
	return true;
}

bool  RdCaptureReader::_Parse_VkTextureLODGatherFormatPropertiesAMD (const Node_t *node, OUT VkTextureLODGatherFormatPropertiesAMD* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkTextureLODGatherFormatPropertiesAMD>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkTextureLODGatherFormatPropertiesAMD( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkTextureLODGatherFormatPropertiesAMD (const Node_t *node, OUT VkTextureLODGatherFormatPropertiesAMD &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "supportsTextureGatherLODBiasAMD" ), OUT result.supportsTextureGatherLODBiasAMD ));
	return true;
}

bool  RdCaptureReader::_Parse_VkQueryPoolCreateInfoINTEL (const Node_t *node, OUT VkQueryPoolCreateInfoINTEL* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkQueryPoolCreateInfoINTEL>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkQueryPoolCreateInfoINTEL( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkQueryPoolCreateInfoINTEL (const Node_t *node, OUT VkQueryPoolCreateInfoINTEL &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "performanceCountersSampling" ), OUT result.performanceCountersSampling ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCoarseSampleOrderCustomNV (const Node_t *node, OUT VkCoarseSampleOrderCustomNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCoarseSampleOrderCustomNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCoarseSampleOrderCustomNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCoarseSampleOrderCustomNV (const Node_t *node, OUT VkCoarseSampleOrderCustomNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shadingRate" ), OUT result.shadingRate ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleCount" ), OUT result.sampleCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleLocationCount" ), OUT result.sampleLocationCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pSampleLocations" ), OUT const_cast<VkCoarseSampleLocationNV * &>(result.pSampleLocations), INOUT result.sampleLocationCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayNativeHdrSurfaceCapabilitiesAMD (const Node_t *node, OUT VkDisplayNativeHdrSurfaceCapabilitiesAMD* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayNativeHdrSurfaceCapabilitiesAMD>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayNativeHdrSurfaceCapabilitiesAMD( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayNativeHdrSurfaceCapabilitiesAMD (const Node_t *node, OUT VkDisplayNativeHdrSurfaceCapabilitiesAMD &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "localDimmingSupport" ), OUT result.localDimmingSupport ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExternalMemoryImageCreateInfoNV (const Node_t *node, OUT VkExternalMemoryImageCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExternalMemoryImageCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExternalMemoryImageCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExternalMemoryImageCreateInfoNV (const Node_t *node, OUT VkExternalMemoryImageCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleTypes" ), OUT result.handleTypes ));
	return true;
}

bool  RdCaptureReader::_Parse_VkValidationFlagsEXT (const Node_t *node, OUT VkValidationFlagsEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkValidationFlagsEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkValidationFlagsEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkValidationFlagsEXT (const Node_t *node, OUT VkValidationFlagsEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "disabledValidationCheckCount" ), OUT result.disabledValidationCheckCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pDisabledValidationChecks" ), OUT const_cast<VkValidationCheckEXT * &>(result.pDisabledValidationChecks), INOUT result.disabledValidationCheckCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "textureCompressionASTC_HDR" ), OUT result.textureCompressionASTC_HDR ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageViewASTCDecodeModeEXT (const Node_t *node, OUT VkImageViewASTCDecodeModeEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageViewASTCDecodeModeEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageViewASTCDecodeModeEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageViewASTCDecodeModeEXT (const Node_t *node, OUT VkImageViewASTCDecodeModeEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "decodeMode" ), OUT result.decodeMode ));
	return true;
}

bool  RdCaptureReader::_Parse_VkConditionalRenderingBeginInfoEXT (const Node_t *node, OUT VkConditionalRenderingBeginInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkConditionalRenderingBeginInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkConditionalRenderingBeginInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkConditionalRenderingBeginInfoEXT (const Node_t *node, OUT VkConditionalRenderingBeginInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "buffer" ), OUT result.buffer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkD3D12FenceSubmitInfoKHR (const Node_t *node, OUT VkD3D12FenceSubmitInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkD3D12FenceSubmitInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkD3D12FenceSubmitInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkD3D12FenceSubmitInfoKHR (const Node_t *node, OUT VkD3D12FenceSubmitInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "waitSemaphoreValuesCount" ), OUT result.waitSemaphoreValuesCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pWaitSemaphoreValues" ), OUT const_cast<uint64_t * &>(result.pWaitSemaphoreValues), INOUT result.waitSemaphoreValuesCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "signalSemaphoreValuesCount" ), OUT result.signalSemaphoreValuesCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pSignalSemaphoreValues" ), OUT const_cast<uint64_t * &>(result.pSignalSemaphoreValues), INOUT result.signalSemaphoreValuesCount ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkPhysicalDeviceDiscardRectanglePropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceDiscardRectanglePropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceDiscardRectanglePropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceDiscardRectanglePropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDiscardRectanglePropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceDiscardRectanglePropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDiscardRectangles" ), OUT result.maxDiscardRectangles ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCommandBufferInheritanceConditionalRenderingInfoEXT (const Node_t *node, OUT VkCommandBufferInheritanceConditionalRenderingInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCommandBufferInheritanceConditionalRenderingInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCommandBufferInheritanceConditionalRenderingInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCommandBufferInheritanceConditionalRenderingInfoEXT (const Node_t *node, OUT VkCommandBufferInheritanceConditionalRenderingInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "conditionalRenderingEnable" ), OUT result.conditionalRenderingEnable ));
	return true;
}

bool  RdCaptureReader::_Parse_VkIndirectCommandsTokenNVX (const Node_t *node, OUT VkIndirectCommandsTokenNVX* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkIndirectCommandsTokenNVX>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkIndirectCommandsTokenNVX( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkIndirectCommandsTokenNVX (const Node_t *node, OUT VkIndirectCommandsTokenNVX &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "tokenType" ), OUT result.tokenType ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "buffer" ), OUT result.buffer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "offset" ), OUT result.offset ));
	return true;
}

bool  RdCaptureReader::_Parse_VkIndirectCommandsLayoutCreateInfoNVX (const Node_t *node, OUT VkIndirectCommandsLayoutCreateInfoNVX* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkIndirectCommandsLayoutCreateInfoNVX>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkIndirectCommandsLayoutCreateInfoNVX( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkIndirectCommandsLayoutCreateInfoNVX (const Node_t *node, OUT VkIndirectCommandsLayoutCreateInfoNVX &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pipelineBindPoint" ), OUT result.pipelineBindPoint ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "tokenCount" ), OUT result.tokenCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pTokens" ), OUT const_cast<VkIndirectCommandsLayoutTokenNVX * &>(result.pTokens), INOUT result.tokenCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayEventInfoEXT (const Node_t *node, OUT VkDisplayEventInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayEventInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayEventInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayEventInfoEXT (const Node_t *node, OUT VkDisplayEventInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "displayEvent" ), OUT result.displayEvent ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCmdProcessCommandsInfoNVX (const Node_t *node, OUT VkCmdProcessCommandsInfoNVX* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCmdProcessCommandsInfoNVX>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCmdProcessCommandsInfoNVX( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCmdProcessCommandsInfoNVX (const Node_t *node, OUT VkCmdProcessCommandsInfoNVX &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "objectTable" ), OUT result.objectTable ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "indirectCommandsLayout" ), OUT result.indirectCommandsLayout ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "indirectCommandsTokenCount" ), OUT result.indirectCommandsTokenCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pIndirectCommandsTokens" ), OUT const_cast<VkIndirectCommandsTokenNVX * &>(result.pIndirectCommandsTokens), INOUT result.indirectCommandsTokenCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxSequencesCount" ), OUT result.maxSequencesCount ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "targetCommandBuffer" ), OUT result.targetCommandBuffer ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "sequencesCountBuffer" ), OUT result.sequencesCountBuffer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sequencesCountOffset" ), OUT result.sequencesCountOffset ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "sequencesIndexBuffer" ), OUT result.sequencesIndexBuffer ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sequencesIndexOffset" ), OUT result.sequencesIndexOffset ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCmdReserveSpaceForCommandsInfoNVX (const Node_t *node, OUT VkCmdReserveSpaceForCommandsInfoNVX* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCmdReserveSpaceForCommandsInfoNVX>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCmdReserveSpaceForCommandsInfoNVX( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCmdReserveSpaceForCommandsInfoNVX (const Node_t *node, OUT VkCmdReserveSpaceForCommandsInfoNVX &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "objectTable" ), OUT result.objectTable ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "indirectCommandsLayout" ), OUT result.indirectCommandsLayout ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxSequencesCount" ), OUT result.maxSequencesCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkObjectTableCreateInfoNVX (const Node_t *node, OUT VkObjectTableCreateInfoNVX* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkObjectTableCreateInfoNVX>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkObjectTableCreateInfoNVX( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkObjectTableCreateInfoNVX (const Node_t *node, OUT VkObjectTableCreateInfoNVX &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "objectCount" ), OUT result.objectCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pObjectEntryTypes" ), OUT const_cast<VkObjectEntryTypeNVX * &>(result.pObjectEntryTypes), INOUT result.objectCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pObjectEntryCounts" ), OUT const_cast<uint32_t * &>(result.pObjectEntryCounts), INOUT result.objectCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pObjectEntryUsageFlags" ), OUT const_cast<VkObjectEntryUsageFlagsNVX * &>(result.pObjectEntryUsageFlags), INOUT result.objectCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxUniformBuffersPerDescriptor" ), OUT result.maxUniformBuffersPerDescriptor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxStorageBuffersPerDescriptor" ), OUT result.maxStorageBuffersPerDescriptor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxStorageImagesPerDescriptor" ), OUT result.maxStorageImagesPerDescriptor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxSampledImagesPerDescriptor" ), OUT result.maxSampledImagesPerDescriptor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPipelineLayouts" ), OUT result.maxPipelineLayouts ));
	return true;
}

bool  RdCaptureReader::_Parse_VkHeadlessSurfaceCreateInfoEXT (const Node_t *node, OUT VkHeadlessSurfaceCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkHeadlessSurfaceCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkHeadlessSurfaceCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkHeadlessSurfaceCreateInfoEXT (const Node_t *node, OUT VkHeadlessSurfaceCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkViewportWScalingNV (const Node_t *node, OUT VkViewportWScalingNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkViewportWScalingNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkViewportWScalingNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkViewportWScalingNV (const Node_t *node, OUT VkViewportWScalingNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "xcoeff" ), OUT result.xcoeff ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "ycoeff" ), OUT result.ycoeff ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineViewportExclusiveScissorStateCreateInfoNV (const Node_t *node, OUT VkPipelineViewportExclusiveScissorStateCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineViewportExclusiveScissorStateCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineViewportExclusiveScissorStateCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineViewportExclusiveScissorStateCreateInfoNV (const Node_t *node, OUT VkPipelineViewportExclusiveScissorStateCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "exclusiveScissorCount" ), OUT result.exclusiveScissorCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pExclusiveScissors" ), OUT const_cast<VkRect2D * &>(result.pExclusiveScissors), INOUT result.exclusiveScissorCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineViewportWScalingStateCreateInfoNV (const Node_t *node, OUT VkPipelineViewportWScalingStateCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineViewportWScalingStateCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineViewportWScalingStateCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineViewportWScalingStateCreateInfoNV (const Node_t *node, OUT VkPipelineViewportWScalingStateCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewportWScalingEnable" ), OUT result.viewportWScalingEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewportCount" ), OUT result.viewportCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pViewportWScalings" ), OUT const_cast<VkViewportWScalingNV * &>(result.pViewportWScalings), INOUT result.viewportCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "texelBufferAlignment" ), OUT result.texelBufferAlignment ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExclusiveScissorFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceExclusiveScissorFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceExclusiveScissorFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceExclusiveScissorFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExclusiveScissorFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceExclusiveScissorFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "exclusiveScissor" ), OUT result.exclusiveScissor ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDisplayPowerInfoEXT (const Node_t *node, OUT VkDisplayPowerInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDisplayPowerInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDisplayPowerInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDisplayPowerInfoEXT (const Node_t *node, OUT VkDisplayPowerInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "powerState" ), OUT result.powerState ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSwapchainCounterCreateInfoEXT (const Node_t *node, OUT VkSwapchainCounterCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSwapchainCounterCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSwapchainCounterCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSwapchainCounterCreateInfoEXT (const Node_t *node, OUT VkSwapchainCounterCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "surfaceCounters" ), OUT result.surfaceCounters ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDrmFormatModifierPropertiesEXT (const Node_t *node, OUT VkDrmFormatModifierPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDrmFormatModifierPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDrmFormatModifierPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDrmFormatModifierPropertiesEXT (const Node_t *node, OUT VkDrmFormatModifierPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "drmFormatModifier" ), OUT result.drmFormatModifier ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "drmFormatModifierPlaneCount" ), OUT result.drmFormatModifierPlaneCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "drmFormatModifierTilingFeatures" ), OUT result.drmFormatModifierTilingFeatures ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPresentTimeGOOGLE (const Node_t *node, OUT VkPresentTimeGOOGLE* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPresentTimeGOOGLE>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPresentTimeGOOGLE( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPresentTimeGOOGLE (const Node_t *node, OUT VkPresentTimeGOOGLE &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "presentID" ), OUT result.presentID ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "desiredPresentTime" ), OUT result.desiredPresentTime ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX (const Node_t *node, OUT VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX (const Node_t *node, OUT VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "perViewPositionAllComponents" ), OUT result.perViewPositionAllComponents ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineViewportSwizzleStateCreateInfoNV (const Node_t *node, OUT VkPipelineViewportSwizzleStateCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineViewportSwizzleStateCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineViewportSwizzleStateCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineViewportSwizzleStateCreateInfoNV (const Node_t *node, OUT VkPipelineViewportSwizzleStateCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewportCount" ), OUT result.viewportCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pViewportSwizzles" ), OUT const_cast<VkViewportSwizzleNV * &>(result.pViewportSwizzles), INOUT result.viewportCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineDiscardRectangleStateCreateInfoEXT (const Node_t *node, OUT VkPipelineDiscardRectangleStateCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineDiscardRectangleStateCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineDiscardRectangleStateCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineDiscardRectangleStateCreateInfoEXT (const Node_t *node, OUT VkPipelineDiscardRectangleStateCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "discardRectangleMode" ), OUT result.discardRectangleMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "discardRectangleCount" ), OUT result.discardRectangleCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pDiscardRectangles" ), OUT const_cast<VkRect2D * &>(result.pDiscardRectangles), INOUT result.discardRectangleCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationConservativeStateCreateInfoEXT (const Node_t *node, OUT VkPipelineRasterizationConservativeStateCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineRasterizationConservativeStateCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineRasterizationConservativeStateCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationConservativeStateCreateInfoEXT (const Node_t *node, OUT VkPipelineRasterizationConservativeStateCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "conservativeRasterizationMode" ), OUT result.conservativeRasterizationMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "extraPrimitiveOverestimationSize" ), OUT result.extraPrimitiveOverestimationSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDepthClipEnableFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceDepthClipEnableFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceDepthClipEnableFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceDepthClipEnableFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDepthClipEnableFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceDepthClipEnableFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthClipEnable" ), OUT result.depthClipEnable ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationDepthClipStateCreateInfoEXT (const Node_t *node, OUT VkPipelineRasterizationDepthClipStateCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineRasterizationDepthClipStateCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineRasterizationDepthClipStateCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineRasterizationDepthClipStateCreateInfoEXT (const Node_t *node, OUT VkPipelineRasterizationDepthClipStateCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "depthClipEnable" ), OUT result.depthClipEnable ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDebugUtilsLabelEXT (const Node_t *node, OUT VkDebugUtilsLabelEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDebugUtilsLabelEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDebugUtilsLabelEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDebugUtilsLabelEXT (const Node_t *node, OUT VkDebugUtilsLabelEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pLabelName" ), OUT const_cast<char * &>(result.pLabelName) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "color" ), OUT result.color ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExternalMemoryHostPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceExternalMemoryHostPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceExternalMemoryHostPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceExternalMemoryHostPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceExternalMemoryHostPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minImportedHostPointerAlignment" ), OUT result.minImportedHostPointerAlignment ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDebugUtilsMessengerCallbackDataEXT (const Node_t *node, OUT VkDebugUtilsMessengerCallbackDataEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDebugUtilsMessengerCallbackDataEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDebugUtilsMessengerCallbackDataEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDebugUtilsMessengerCallbackDataEXT (const Node_t *node, OUT VkDebugUtilsMessengerCallbackDataEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pMessageIdName" ), OUT const_cast<char * &>(result.pMessageIdName) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "messageIdNumber" ), OUT result.messageIdNumber ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pMessage" ), OUT const_cast<char * &>(result.pMessage) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueLabelCount" ), OUT result.queueLabelCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pQueueLabels" ), OUT const_cast<VkDebugUtilsLabelEXT * &>(result.pQueueLabels), INOUT result.queueLabelCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "cmdBufLabelCount" ), OUT result.cmdBufLabelCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pCmdBufLabels" ), OUT const_cast<VkDebugUtilsLabelEXT * &>(result.pCmdBufLabels), INOUT result.cmdBufLabelCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "objectCount" ), OUT result.objectCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pObjects" ), OUT const_cast<VkDebugUtilsObjectNameInfoEXT * &>(result.pObjects), INOUT result.objectCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDebugUtilsMessengerCreateInfoEXT (const Node_t *node, OUT VkDebugUtilsMessengerCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDebugUtilsMessengerCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDebugUtilsMessengerCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDebugUtilsMessengerCreateInfoEXT (const Node_t *node, OUT VkDebugUtilsMessengerCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "messageSeverity" ), OUT result.messageSeverity ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "messageType" ), OUT result.messageType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pfnUserCallback" ), OUT result.pfnUserCallback ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pUserData" ), OUT const_cast<void * &>(result.pUserData) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceInlineUniformBlockFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceInlineUniformBlockFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceInlineUniformBlockFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceInlineUniformBlockFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceInlineUniformBlockFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "inlineUniformBlock" ), OUT result.inlineUniformBlock ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorBindingInlineUniformBlockUpdateAfterBind" ), OUT result.descriptorBindingInlineUniformBlockUpdateAfterBind ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderDemoteToHelperInvocation" ), OUT result.shaderDemoteToHelperInvocation ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceInlineUniformBlockPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceInlineUniformBlockPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceInlineUniformBlockPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceInlineUniformBlockPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceInlineUniformBlockPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxInlineUniformBlockSize" ), OUT result.maxInlineUniformBlockSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorInlineUniformBlocks" ), OUT result.maxPerStageDescriptorInlineUniformBlocks ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks" ), OUT result.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetInlineUniformBlocks" ), OUT result.maxDescriptorSetInlineUniformBlocks ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetUpdateAfterBindInlineUniformBlocks" ), OUT result.maxDescriptorSetUpdateAfterBindInlineUniformBlocks ));
	return true;
}

bool  RdCaptureReader::_Parse_VkWriteDescriptorSetInlineUniformBlockEXT (const Node_t *node, OUT VkWriteDescriptorSetInlineUniformBlockEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkWriteDescriptorSetInlineUniformBlockEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkWriteDescriptorSetInlineUniformBlockEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkWriteDescriptorSetInlineUniformBlockEXT (const Node_t *node, OUT VkWriteDescriptorSetInlineUniformBlockEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dataSize" ), OUT result.dataSize ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pData" ), OUT const_cast<void * &>(result.pData), INOUT result.dataSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineViewportShadingRateImageStateCreateInfoNV (const Node_t *node, OUT VkPipelineViewportShadingRateImageStateCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineViewportShadingRateImageStateCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineViewportShadingRateImageStateCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineViewportShadingRateImageStateCreateInfoNV (const Node_t *node, OUT VkPipelineViewportShadingRateImageStateCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shadingRateImageEnable" ), OUT result.shadingRateImageEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "viewportCount" ), OUT result.viewportCount ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pShadingRatePalettes" ), OUT const_cast<VkShadingRatePaletteNV * &>(result.pShadingRatePalettes) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDescriptorPoolInlineUniformBlockCreateInfoEXT (const Node_t *node, OUT VkDescriptorPoolInlineUniformBlockCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDescriptorPoolInlineUniformBlockCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDescriptorPoolInlineUniformBlockCreateInfoEXT (const Node_t *node, OUT VkDescriptorPoolInlineUniformBlockCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxInlineUniformBlockBindings" ), OUT result.maxInlineUniformBlockBindings ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSampleLocationEXT (const Node_t *node, OUT VkSampleLocationEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSampleLocationEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSampleLocationEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSampleLocationEXT (const Node_t *node, OUT VkSampleLocationEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "x" ), OUT result.x ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "y" ), OUT result.y ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShadingRateImageFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceShadingRateImageFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShadingRateImageFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShadingRateImageFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShadingRateImageFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceShadingRateImageFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shadingRateImage" ), OUT result.shadingRateImage ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shadingRateCoarseSampleOrder" ), OUT result.shadingRateCoarseSampleOrder ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSampleLocationsInfoEXT (const Node_t *node, OUT VkSampleLocationsInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSampleLocationsInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSampleLocationsInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSampleLocationsInfoEXT (const Node_t *node, OUT VkSampleLocationsInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleLocationsPerPixel" ), OUT result.sampleLocationsPerPixel ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "sampleLocationGridSize" ), OUT result.sampleLocationGridSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleLocationsCount" ), OUT result.sampleLocationsCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pSampleLocations" ), OUT const_cast<VkSampleLocationEXT * &>(result.pSampleLocations), INOUT result.sampleLocationsCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkAttachmentSampleLocationsEXT (const Node_t *node, OUT VkAttachmentSampleLocationsEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAttachmentSampleLocationsEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAttachmentSampleLocationsEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAttachmentSampleLocationsEXT (const Node_t *node, OUT VkAttachmentSampleLocationsEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "attachmentIndex" ), OUT result.attachmentIndex ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "sampleLocationsInfo" ), OUT result.sampleLocationsInfo ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineSampleLocationsStateCreateInfoEXT (const Node_t *node, OUT VkPipelineSampleLocationsStateCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineSampleLocationsStateCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineSampleLocationsStateCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineSampleLocationsStateCreateInfoEXT (const Node_t *node, OUT VkPipelineSampleLocationsStateCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleLocationsEnable" ), OUT result.sampleLocationsEnable ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "sampleLocationsInfo" ), OUT result.sampleLocationsInfo ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSampleLocationsPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceSampleLocationsPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceSampleLocationsPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceSampleLocationsPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSampleLocationsPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceSampleLocationsPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleLocationSampleCounts" ), OUT result.sampleLocationSampleCounts ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "maxSampleLocationGridSize" ), OUT result.maxSampleLocationGridSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleLocationCoordinateRange" ), OUT result.sampleLocationCoordinateRange ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sampleLocationSubPixelBits" ), OUT result.sampleLocationSubPixelBits ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "variableSampleLocations" ), OUT result.variableSampleLocations ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMultisamplePropertiesEXT (const Node_t *node, OUT VkMultisamplePropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMultisamplePropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMultisamplePropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMultisamplePropertiesEXT (const Node_t *node, OUT VkMultisamplePropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "maxSampleLocationGridSize" ), OUT result.maxSampleLocationGridSize ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "advancedBlendCoherentOperations" ), OUT result.advancedBlendCoherentOperations ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineCoverageModulationStateCreateInfoNV (const Node_t *node, OUT VkPipelineCoverageModulationStateCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineCoverageModulationStateCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineCoverageModulationStateCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineCoverageModulationStateCreateInfoNV (const Node_t *node, OUT VkPipelineCoverageModulationStateCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "coverageModulationMode" ), OUT result.coverageModulationMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "coverageModulationTableEnable" ), OUT result.coverageModulationTableEnable ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "coverageModulationTableCount" ), OUT result.coverageModulationTableCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pCoverageModulationTable" ), OUT const_cast<float * &>(result.pCoverageModulationTable), INOUT result.coverageModulationTableCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV (const Node_t *node, OUT VkPhysicalDeviceShaderSMBuiltinsPropertiesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV (const Node_t *node, OUT VkPhysicalDeviceShaderSMBuiltinsPropertiesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderSMCount" ), OUT result.shaderSMCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderWarpsPerSM" ), OUT result.shaderWarpsPerSM ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceShaderSMBuiltinsFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceShaderSMBuiltinsFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderSMBuiltins" ), OUT result.shaderSMBuiltins ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDrmFormatModifierPropertiesListEXT (const Node_t *node, OUT VkDrmFormatModifierPropertiesListEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDrmFormatModifierPropertiesListEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDrmFormatModifierPropertiesListEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDrmFormatModifierPropertiesListEXT (const Node_t *node, OUT VkDrmFormatModifierPropertiesListEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "drmFormatModifierCount" ), OUT result.drmFormatModifierCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pDrmFormatModifierProperties" ), OUT const_cast<VkDrmFormatModifierPropertiesEXT * &>(result.pDrmFormatModifierProperties), INOUT result.drmFormatModifierCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceImageDrmFormatModifierInfoEXT (const Node_t *node, OUT VkPhysicalDeviceImageDrmFormatModifierInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceImageDrmFormatModifierInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceImageDrmFormatModifierInfoEXT (const Node_t *node, OUT VkPhysicalDeviceImageDrmFormatModifierInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "drmFormatModifier" ), OUT result.drmFormatModifier ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sharingMode" ), OUT result.sharingMode ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "queueFamilyIndexCount" ), OUT result.queueFamilyIndexCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pQueueFamilyIndices" ), OUT const_cast<uint32_t * &>(result.pQueueFamilyIndices), INOUT result.queueFamilyIndexCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageDrmFormatModifierListCreateInfoEXT (const Node_t *node, OUT VkImageDrmFormatModifierListCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageDrmFormatModifierListCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageDrmFormatModifierListCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageDrmFormatModifierListCreateInfoEXT (const Node_t *node, OUT VkImageDrmFormatModifierListCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "drmFormatModifierCount" ), OUT result.drmFormatModifierCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pDrmFormatModifiers" ), OUT const_cast<uint64_t * &>(result.pDrmFormatModifiers), INOUT result.drmFormatModifierCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageDrmFormatModifierPropertiesEXT (const Node_t *node, OUT VkImageDrmFormatModifierPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageDrmFormatModifierPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageDrmFormatModifierPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageDrmFormatModifierPropertiesEXT (const Node_t *node, OUT VkImageDrmFormatModifierPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "drmFormatModifier" ), OUT result.drmFormatModifier ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDescriptorIndexingFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceDescriptorIndexingFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceDescriptorIndexingFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceDescriptorIndexingFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDescriptorIndexingFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceDescriptorIndexingFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderInputAttachmentArrayDynamicIndexing" ), OUT result.shaderInputAttachmentArrayDynamicIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderUniformTexelBufferArrayDynamicIndexing" ), OUT result.shaderUniformTexelBufferArrayDynamicIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageTexelBufferArrayDynamicIndexing" ), OUT result.shaderStorageTexelBufferArrayDynamicIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderUniformBufferArrayNonUniformIndexing" ), OUT result.shaderUniformBufferArrayNonUniformIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderSampledImageArrayNonUniformIndexing" ), OUT result.shaderSampledImageArrayNonUniformIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageBufferArrayNonUniformIndexing" ), OUT result.shaderStorageBufferArrayNonUniformIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageImageArrayNonUniformIndexing" ), OUT result.shaderStorageImageArrayNonUniformIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderInputAttachmentArrayNonUniformIndexing" ), OUT result.shaderInputAttachmentArrayNonUniformIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderUniformTexelBufferArrayNonUniformIndexing" ), OUT result.shaderUniformTexelBufferArrayNonUniformIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageTexelBufferArrayNonUniformIndexing" ), OUT result.shaderStorageTexelBufferArrayNonUniformIndexing ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorBindingUniformBufferUpdateAfterBind" ), OUT result.descriptorBindingUniformBufferUpdateAfterBind ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorBindingSampledImageUpdateAfterBind" ), OUT result.descriptorBindingSampledImageUpdateAfterBind ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorBindingStorageImageUpdateAfterBind" ), OUT result.descriptorBindingStorageImageUpdateAfterBind ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorBindingStorageBufferUpdateAfterBind" ), OUT result.descriptorBindingStorageBufferUpdateAfterBind ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorBindingUniformTexelBufferUpdateAfterBind" ), OUT result.descriptorBindingUniformTexelBufferUpdateAfterBind ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorBindingStorageTexelBufferUpdateAfterBind" ), OUT result.descriptorBindingStorageTexelBufferUpdateAfterBind ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorBindingUpdateUnusedWhilePending" ), OUT result.descriptorBindingUpdateUnusedWhilePending ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorBindingPartiallyBound" ), OUT result.descriptorBindingPartiallyBound ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "descriptorBindingVariableDescriptorCount" ), OUT result.descriptorBindingVariableDescriptorCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "runtimeDescriptorArray" ), OUT result.runtimeDescriptorArray ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_ANDROID_H_
bool  RdCaptureReader::_Parse_VkAndroidHardwareBufferFormatPropertiesANDROID (const Node_t *node, OUT VkAndroidHardwareBufferFormatPropertiesANDROID* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAndroidHardwareBufferFormatPropertiesANDROID>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAndroidHardwareBufferFormatPropertiesANDROID( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAndroidHardwareBufferFormatPropertiesANDROID (const Node_t *node, OUT VkAndroidHardwareBufferFormatPropertiesANDROID &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "format" ), OUT result.format ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "externalFormat" ), OUT result.externalFormat ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "formatFeatures" ), OUT result.formatFeatures ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "samplerYcbcrConversionComponents" ), OUT result.samplerYcbcrConversionComponents ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "suggestedYcbcrModel" ), OUT result.suggestedYcbcrModel ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "suggestedYcbcrRange" ), OUT result.suggestedYcbcrRange ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "suggestedXChromaOffset" ), OUT result.suggestedXChromaOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "suggestedYChromaOffset" ), OUT result.suggestedYChromaOffset ));
	return true;
}

#endif // VULKAN_ANDROID_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL (const Node_t *node, OUT VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL (const Node_t *node, OUT VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderIntegerFunctions2" ), OUT result.shaderIntegerFunctions2 ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDescriptorIndexingPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceDescriptorIndexingPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceDescriptorIndexingPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceDescriptorIndexingPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceDescriptorIndexingPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceDescriptorIndexingPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxUpdateAfterBindDescriptorsInAllPools" ), OUT result.maxUpdateAfterBindDescriptorsInAllPools ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderUniformBufferArrayNonUniformIndexingNative" ), OUT result.shaderUniformBufferArrayNonUniformIndexingNative ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderSampledImageArrayNonUniformIndexingNative" ), OUT result.shaderSampledImageArrayNonUniformIndexingNative ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageBufferArrayNonUniformIndexingNative" ), OUT result.shaderStorageBufferArrayNonUniformIndexingNative ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderStorageImageArrayNonUniformIndexingNative" ), OUT result.shaderStorageImageArrayNonUniformIndexingNative ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderInputAttachmentArrayNonUniformIndexingNative" ), OUT result.shaderInputAttachmentArrayNonUniformIndexingNative ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "robustBufferAccessUpdateAfterBind" ), OUT result.robustBufferAccessUpdateAfterBind ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "quadDivergentImplicitLod" ), OUT result.quadDivergentImplicitLod ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorUpdateAfterBindSamplers" ), OUT result.maxPerStageDescriptorUpdateAfterBindSamplers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorUpdateAfterBindUniformBuffers" ), OUT result.maxPerStageDescriptorUpdateAfterBindUniformBuffers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorUpdateAfterBindStorageBuffers" ), OUT result.maxPerStageDescriptorUpdateAfterBindStorageBuffers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorUpdateAfterBindSampledImages" ), OUT result.maxPerStageDescriptorUpdateAfterBindSampledImages ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorUpdateAfterBindStorageImages" ), OUT result.maxPerStageDescriptorUpdateAfterBindStorageImages ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageDescriptorUpdateAfterBindInputAttachments" ), OUT result.maxPerStageDescriptorUpdateAfterBindInputAttachments ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxPerStageUpdateAfterBindResources" ), OUT result.maxPerStageUpdateAfterBindResources ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetUpdateAfterBindSamplers" ), OUT result.maxDescriptorSetUpdateAfterBindSamplers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetUpdateAfterBindUniformBuffers" ), OUT result.maxDescriptorSetUpdateAfterBindUniformBuffers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetUpdateAfterBindUniformBuffersDynamic" ), OUT result.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetUpdateAfterBindStorageBuffers" ), OUT result.maxDescriptorSetUpdateAfterBindStorageBuffers ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetUpdateAfterBindStorageBuffersDynamic" ), OUT result.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetUpdateAfterBindSampledImages" ), OUT result.maxDescriptorSetUpdateAfterBindSampledImages ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetUpdateAfterBindStorageImages" ), OUT result.maxDescriptorSetUpdateAfterBindStorageImages ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDescriptorSetUpdateAfterBindInputAttachments" ), OUT result.maxDescriptorSetUpdateAfterBindInputAttachments ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRayTracingShaderGroupCreateInfoNV (const Node_t *node, OUT VkRayTracingShaderGroupCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRayTracingShaderGroupCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRayTracingShaderGroupCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRayTracingShaderGroupCreateInfoNV (const Node_t *node, OUT VkRayTracingShaderGroupCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "type" ), OUT result.type ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "generalShader" ), OUT result.generalShader ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "closestHitShader" ), OUT result.closestHitShader ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "anyHitShader" ), OUT result.anyHitShader ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "intersectionShader" ), OUT result.intersectionShader ));
	return true;
}

bool  RdCaptureReader::_Parse_VkRayTracingPipelineCreateInfoNV (const Node_t *node, OUT VkRayTracingPipelineCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkRayTracingPipelineCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkRayTracingPipelineCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkRayTracingPipelineCreateInfoNV (const Node_t *node, OUT VkRayTracingPipelineCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stageCount" ), OUT result.stageCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pStages" ), OUT const_cast<VkPipelineShaderStageCreateInfo * &>(result.pStages), INOUT result.stageCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "groupCount" ), OUT result.groupCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pGroups" ), OUT const_cast<VkRayTracingShaderGroupCreateInfoNV * &>(result.pGroups), INOUT result.groupCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxRecursionDepth" ), OUT result.maxRecursionDepth ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "layout" ), OUT result.layout ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "basePipelineHandle" ), OUT result.basePipelineHandle ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "basePipelineIndex" ), OUT result.basePipelineIndex ));
	return true;
}

bool  RdCaptureReader::_Parse_VkGeometryDataNV (const Node_t *node, OUT VkGeometryDataNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkGeometryDataNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkGeometryDataNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkGeometryDataNV (const Node_t *node, OUT VkGeometryDataNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "triangles" ), OUT result.triangles ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "aabbs" ), OUT result.aabbs ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceCooperativeMatrixFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceCooperativeMatrixFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceCooperativeMatrixFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceCooperativeMatrixFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceCooperativeMatrixFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceCooperativeMatrixFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "cooperativeMatrix" ), OUT result.cooperativeMatrix ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "cooperativeMatrixRobustBufferAccess" ), OUT result.cooperativeMatrixRobustBufferAccess ));
	return true;
}

bool  RdCaptureReader::_Parse_VkGeometryNV (const Node_t *node, OUT VkGeometryNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkGeometryNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkGeometryNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkGeometryNV (const Node_t *node, OUT VkGeometryNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "geometryType" ), OUT result.geometryType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "geometry" ), OUT result.geometry ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	return true;
}

bool  RdCaptureReader::_Parse_VkAccelerationStructureCreateInfoNV (const Node_t *node, OUT VkAccelerationStructureCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAccelerationStructureCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAccelerationStructureCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAccelerationStructureCreateInfoNV (const Node_t *node, OUT VkAccelerationStructureCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "compactedSize" ), OUT result.compactedSize ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "info" ), OUT result.info ));
	return true;
}

bool  RdCaptureReader::_Parse_VkValidationFeaturesEXT (const Node_t *node, OUT VkValidationFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkValidationFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkValidationFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkValidationFeaturesEXT (const Node_t *node, OUT VkValidationFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "enabledValidationFeatureCount" ), OUT result.enabledValidationFeatureCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pEnabledValidationFeatures" ), OUT const_cast<VkValidationFeatureEnableEXT * &>(result.pEnabledValidationFeatures), INOUT result.enabledValidationFeatureCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "disabledValidationFeatureCount" ), OUT result.disabledValidationFeatureCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pDisabledValidationFeatures" ), OUT const_cast<VkValidationFeatureDisableEXT * &>(result.pDisabledValidationFeatures), INOUT result.disabledValidationFeatureCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkBindAccelerationStructureMemoryInfoNV (const Node_t *node, OUT VkBindAccelerationStructureMemoryInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkBindAccelerationStructureMemoryInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkBindAccelerationStructureMemoryInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkBindAccelerationStructureMemoryInfoNV (const Node_t *node, OUT VkBindAccelerationStructureMemoryInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "accelerationStructure" ), OUT result.accelerationStructure ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "memory" ), OUT result.memory ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryOffset" ), OUT result.memoryOffset ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "deviceIndexCount" ), OUT result.deviceIndexCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pDeviceIndices" ), OUT const_cast<uint32_t * &>(result.pDeviceIndices), INOUT result.deviceIndexCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkWriteDescriptorSetAccelerationStructureNV (const Node_t *node, OUT VkWriteDescriptorSetAccelerationStructureNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkWriteDescriptorSetAccelerationStructureNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkWriteDescriptorSetAccelerationStructureNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkWriteDescriptorSetAccelerationStructureNV (const Node_t *node, OUT VkWriteDescriptorSetAccelerationStructureNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "accelerationStructureCount" ), OUT result.accelerationStructureCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pAccelerationStructures" ), OUT const_cast<VkAccelerationStructureNV * &>(result.pAccelerationStructures), INOUT result.accelerationStructureCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceLineRasterizationPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceLineRasterizationPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceLineRasterizationPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceLineRasterizationPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceLineRasterizationPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceLineRasterizationPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "lineSubPixelPrecisionBits" ), OUT result.lineSubPixelPrecisionBits ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineRepresentativeFragmentTestStateCreateInfoNV (const Node_t *node, OUT VkPipelineRepresentativeFragmentTestStateCreateInfoNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineRepresentativeFragmentTestStateCreateInfoNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineRepresentativeFragmentTestStateCreateInfoNV (const Node_t *node, OUT VkPipelineRepresentativeFragmentTestStateCreateInfoNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "representativeFragmentTestEnable" ), OUT result.representativeFragmentTestEnable ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceQueueGlobalPriorityCreateInfoEXT (const Node_t *node, OUT VkDeviceQueueGlobalPriorityCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceQueueGlobalPriorityCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceQueueGlobalPriorityCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceQueueGlobalPriorityCreateInfoEXT (const Node_t *node, OUT VkDeviceQueueGlobalPriorityCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "globalPriority" ), OUT result.globalPriority ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCalibratedTimestampInfoEXT (const Node_t *node, OUT VkCalibratedTimestampInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCalibratedTimestampInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCalibratedTimestampInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCalibratedTimestampInfoEXT (const Node_t *node, OUT VkCalibratedTimestampInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "timeDomain" ), OUT result.timeDomain ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderCorePropertiesAMD (const Node_t *node, OUT VkPhysicalDeviceShaderCorePropertiesAMD* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShaderCorePropertiesAMD>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShaderCorePropertiesAMD( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderCorePropertiesAMD (const Node_t *node, OUT VkPhysicalDeviceShaderCorePropertiesAMD &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderEngineCount" ), OUT result.shaderEngineCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderArraysPerEngineCount" ), OUT result.shaderArraysPerEngineCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "computeUnitsPerShaderArray" ), OUT result.computeUnitsPerShaderArray ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "simdPerComputeUnit" ), OUT result.simdPerComputeUnit ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "wavefrontsPerSimd" ), OUT result.wavefrontsPerSimd ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "wavefrontSize" ), OUT result.wavefrontSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sgprsPerSimd" ), OUT result.sgprsPerSimd ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minSgprAllocation" ), OUT result.minSgprAllocation ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxSgprAllocation" ), OUT result.maxSgprAllocation ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sgprAllocationGranularity" ), OUT result.sgprAllocationGranularity ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vgprsPerSimd" ), OUT result.vgprsPerSimd ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "minVgprAllocation" ), OUT result.minVgprAllocation ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxVgprAllocation" ), OUT result.maxVgprAllocation ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vgprAllocationGranularity" ), OUT result.vgprAllocationGranularity ));
	return true;
}

bool  RdCaptureReader::_Parse_VkDeviceMemoryOverallocationCreateInfoAMD (const Node_t *node, OUT VkDeviceMemoryOverallocationCreateInfoAMD* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkDeviceMemoryOverallocationCreateInfoAMD>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkDeviceMemoryOverallocationCreateInfoAMD( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkDeviceMemoryOverallocationCreateInfoAMD (const Node_t *node, OUT VkDeviceMemoryOverallocationCreateInfoAMD &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "overallocationBehavior" ), OUT result.overallocationBehavior ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxVertexAttribDivisor" ), OUT result.maxVertexAttribDivisor ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineVertexInputDivisorStateCreateInfoEXT (const Node_t *node, OUT VkPipelineVertexInputDivisorStateCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineVertexInputDivisorStateCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineVertexInputDivisorStateCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineVertexInputDivisorStateCreateInfoEXT (const Node_t *node, OUT VkPipelineVertexInputDivisorStateCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vertexBindingDivisorCount" ), OUT result.vertexBindingDivisorCount ));
	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, "pVertexBindingDivisors" ), OUT const_cast<VkVertexInputBindingDivisorDescriptionEXT * &>(result.pVertexBindingDivisors), INOUT result.vertexBindingDivisorCount ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkFenceGetWin32HandleInfoKHR (const Node_t *node, OUT VkFenceGetWin32HandleInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkFenceGetWin32HandleInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkFenceGetWin32HandleInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkFenceGetWin32HandleInfoKHR (const Node_t *node, OUT VkFenceGetWin32HandleInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "fence" ), OUT result.fence ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_CORE_H_
bool  RdCaptureReader::_Parse_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vertexAttributeInstanceRateDivisor" ), OUT result.vertexAttributeInstanceRateDivisor ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "vertexAttributeInstanceRateZeroDivisor" ), OUT result.vertexAttributeInstanceRateZeroDivisor ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPipelineCreationFeedbackEXT (const Node_t *node, OUT VkPipelineCreationFeedbackEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPipelineCreationFeedbackEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPipelineCreationFeedbackEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPipelineCreationFeedbackEXT (const Node_t *node, OUT VkPipelineCreationFeedbackEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "duration" ), OUT result.duration ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceComputeShaderDerivativesFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceComputeShaderDerivativesFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "computeDerivativeGroupQuads" ), OUT result.computeDerivativeGroupQuads ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "computeDerivativeGroupLinear" ), OUT result.computeDerivativeGroupLinear ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT (const Node_t *node, OUT VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "storageTexelBufferOffsetAlignmentBytes" ), OUT result.storageTexelBufferOffsetAlignmentBytes ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "storageTexelBufferOffsetSingleTexelAlignment" ), OUT result.storageTexelBufferOffsetSingleTexelAlignment ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "uniformTexelBufferOffsetAlignmentBytes" ), OUT result.uniformTexelBufferOffsetAlignmentBytes ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "uniformTexelBufferOffsetSingleTexelAlignment" ), OUT result.uniformTexelBufferOffsetSingleTexelAlignment ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMeshShaderFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceMeshShaderFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceMeshShaderFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceMeshShaderFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMeshShaderFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceMeshShaderFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "taskShader" ), OUT result.taskShader ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "meshShader" ), OUT result.meshShader ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMeshShaderPropertiesNV (const Node_t *node, OUT VkPhysicalDeviceMeshShaderPropertiesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceMeshShaderPropertiesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceMeshShaderPropertiesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceMeshShaderPropertiesNV (const Node_t *node, OUT VkPhysicalDeviceMeshShaderPropertiesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxDrawMeshTasksCount" ), OUT result.maxDrawMeshTasksCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTaskWorkGroupInvocations" ), OUT result.maxTaskWorkGroupInvocations ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTaskWorkGroupSize" ), OUT result.maxTaskWorkGroupSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTaskTotalMemorySize" ), OUT result.maxTaskTotalMemorySize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxTaskOutputCount" ), OUT result.maxTaskOutputCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxMeshWorkGroupInvocations" ), OUT result.maxMeshWorkGroupInvocations ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxMeshWorkGroupSize" ), OUT result.maxMeshWorkGroupSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxMeshTotalMemorySize" ), OUT result.maxMeshTotalMemorySize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxMeshOutputVertices" ), OUT result.maxMeshOutputVertices ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxMeshOutputPrimitives" ), OUT result.maxMeshOutputPrimitives ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "maxMeshMultiviewViewCount" ), OUT result.maxMeshMultiviewViewCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "meshOutputPerVertexGranularity" ), OUT result.meshOutputPerVertexGranularity ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "meshOutputPerPrimitiveGranularity" ), OUT result.meshOutputPerPrimitiveGranularity ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fragmentShaderBarycentric" ), OUT result.fragmentShaderBarycentric ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderImageFootprintFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceShaderImageFootprintFeaturesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShaderImageFootprintFeaturesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShaderImageFootprintFeaturesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderImageFootprintFeaturesNV (const Node_t *node, OUT VkPhysicalDeviceShaderImageFootprintFeaturesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "imageFootprint" ), OUT result.imageFootprint ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCheckpointDataNV (const Node_t *node, OUT VkCheckpointDataNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCheckpointDataNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCheckpointDataNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCheckpointDataNV (const Node_t *node, OUT VkCheckpointDataNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stage" ), OUT result.stage ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pCheckpointMarker" ), OUT const_cast<void * &>(result.pCheckpointMarker) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderCoreProperties2AMD (const Node_t *node, OUT VkPhysicalDeviceShaderCoreProperties2AMD* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceShaderCoreProperties2AMD>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceShaderCoreProperties2AMD( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceShaderCoreProperties2AMD (const Node_t *node, OUT VkPhysicalDeviceShaderCoreProperties2AMD &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "shaderCoreFeatures" ), OUT result.shaderCoreFeatures ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "activeComputeUnitCount" ), OUT result.activeComputeUnitCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPerformanceStreamMarkerInfoINTEL (const Node_t *node, OUT VkPerformanceStreamMarkerInfoINTEL* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPerformanceStreamMarkerInfoINTEL>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPerformanceStreamMarkerInfoINTEL( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPerformanceStreamMarkerInfoINTEL (const Node_t *node, OUT VkPerformanceStreamMarkerInfoINTEL &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "marker" ), OUT result.marker ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceScalarBlockLayoutFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceScalarBlockLayoutFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "scalarBlockLayout" ), OUT result.scalarBlockLayout ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPerformanceConfigurationAcquireInfoINTEL (const Node_t *node, OUT VkPerformanceConfigurationAcquireInfoINTEL* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPerformanceConfigurationAcquireInfoINTEL>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPerformanceConfigurationAcquireInfoINTEL( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPerformanceConfigurationAcquireInfoINTEL (const Node_t *node, OUT VkPerformanceConfigurationAcquireInfoINTEL &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "type" ), OUT result.type ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDevicePCIBusInfoPropertiesEXT (const Node_t *node, OUT VkPhysicalDevicePCIBusInfoPropertiesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDevicePCIBusInfoPropertiesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDevicePCIBusInfoPropertiesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDevicePCIBusInfoPropertiesEXT (const Node_t *node, OUT VkPhysicalDevicePCIBusInfoPropertiesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pciDomain" ), OUT result.pciDomain ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pciBus" ), OUT result.pciBus ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pciDevice" ), OUT result.pciDevice ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pciFunction" ), OUT result.pciFunction ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSwapchainDisplayNativeHdrCreateInfoAMD (const Node_t *node, OUT VkSwapchainDisplayNativeHdrCreateInfoAMD* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSwapchainDisplayNativeHdrCreateInfoAMD>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSwapchainDisplayNativeHdrCreateInfoAMD( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSwapchainDisplayNativeHdrCreateInfoAMD (const Node_t *node, OUT VkSwapchainDisplayNativeHdrCreateInfoAMD &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "localDimmingEnable" ), OUT result.localDimmingEnable ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFragmentDensityMapFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceFragmentDensityMapFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceFragmentDensityMapFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceFragmentDensityMapFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceFragmentDensityMapFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fragmentDensityMap" ), OUT result.fragmentDensityMap ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fragmentDensityMapDynamic" ), OUT result.fragmentDensityMapDynamic ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fragmentDensityMapNonSubsampledImages" ), OUT result.fragmentDensityMapNonSubsampledImages ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceSubgroupSizeControlFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceSubgroupSizeControlFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "subgroupSizeControl" ), OUT result.subgroupSizeControl ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "computeFullSubgroups" ), OUT result.computeFullSubgroups ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryPriorityAllocateInfoEXT (const Node_t *node, OUT VkMemoryPriorityAllocateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryPriorityAllocateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryPriorityAllocateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryPriorityAllocateInfoEXT (const Node_t *node, OUT VkMemoryPriorityAllocateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "priority" ), OUT result.priority ));
	return true;
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceBufferDeviceAddressFeaturesEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT (const Node_t *node, OUT VkPhysicalDeviceBufferDeviceAddressFeaturesEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bufferDeviceAddress" ), OUT result.bufferDeviceAddress ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bufferDeviceAddressCaptureReplay" ), OUT result.bufferDeviceAddressCaptureReplay ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "bufferDeviceAddressMultiDevice" ), OUT result.bufferDeviceAddressMultiDevice ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImageStencilUsageCreateInfoEXT (const Node_t *node, OUT VkImageStencilUsageCreateInfoEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImageStencilUsageCreateInfoEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImageStencilUsageCreateInfoEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImageStencilUsageCreateInfoEXT (const Node_t *node, OUT VkImageStencilUsageCreateInfoEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "stencilUsage" ), OUT result.stencilUsage ));
	return true;
}

bool  RdCaptureReader::_Parse_VkCooperativeMatrixPropertiesNV (const Node_t *node, OUT VkCooperativeMatrixPropertiesNV* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkCooperativeMatrixPropertiesNV>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkCooperativeMatrixPropertiesNV( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkCooperativeMatrixPropertiesNV (const Node_t *node, OUT VkCooperativeMatrixPropertiesNV &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "MSize" ), OUT result.MSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "NSize" ), OUT result.NSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "KSize" ), OUT result.KSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "AType" ), OUT result.AType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "BType" ), OUT result.BType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "CType" ), OUT result.CType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "DType" ), OUT result.DType ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "scope" ), OUT result.scope ));
	return true;
}

#endif // VULKAN_CORE_H_

#ifdef VULKAN_WIN32_H_
bool  RdCaptureReader::_Parse_VkWin32SurfaceCreateInfoKHR (const Node_t *node, OUT VkWin32SurfaceCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkWin32SurfaceCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkWin32SurfaceCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkWin32SurfaceCreateInfoKHR (const Node_t *node, OUT VkWin32SurfaceCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "hinstance" ), OUT result.hinstance ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "hwnd" ), OUT result.hwnd ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryGetWin32HandleInfoKHR (const Node_t *node, OUT VkMemoryGetWin32HandleInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryGetWin32HandleInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryGetWin32HandleInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryGetWin32HandleInfoKHR (const Node_t *node, OUT VkMemoryGetWin32HandleInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "memory" ), OUT result.memory ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "handleType" ), OUT result.handleType ));
	return true;
}

bool  RdCaptureReader::_Parse_VkWin32KeyedMutexAcquireReleaseInfoKHR (const Node_t *node, OUT VkWin32KeyedMutexAcquireReleaseInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkWin32KeyedMutexAcquireReleaseInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkWin32KeyedMutexAcquireReleaseInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkWin32KeyedMutexAcquireReleaseInfoKHR (const Node_t *node, OUT VkWin32KeyedMutexAcquireReleaseInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "acquireCount" ), OUT result.acquireCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pAcquireSyncs" ), OUT const_cast<VkDeviceMemory * &>(result.pAcquireSyncs), INOUT result.acquireCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pAcquireKeys" ), OUT const_cast<uint64_t * &>(result.pAcquireKeys), INOUT result.acquireCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pAcquireTimeouts" ), OUT const_cast<uint32_t * &>(result.pAcquireTimeouts), INOUT result.acquireCount ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "releaseCount" ), OUT result.releaseCount ));
	CHECK_ERR( _ParseResources( _FindByAttribName( *node, "pReleaseSyncs" ), OUT const_cast<VkDeviceMemory * &>(result.pReleaseSyncs), INOUT result.releaseCount ));
	CHECK_ERR( _ParseArray( _FindByAttribName( *node, "pReleaseKeys" ), OUT const_cast<uint64_t * &>(result.pReleaseKeys), INOUT result.releaseCount ));
	return true;
}

bool  RdCaptureReader::_Parse_VkExportFenceWin32HandleInfoKHR (const Node_t *node, OUT VkExportFenceWin32HandleInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkExportFenceWin32HandleInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkExportFenceWin32HandleInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkExportFenceWin32HandleInfoKHR (const Node_t *node, OUT VkExportFenceWin32HandleInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "pAttributes" ), OUT const_cast<SECURITY_ATTRIBUTES * &>(result.pAttributes) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dwAccess" ), OUT result.dwAccess ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "name" ), OUT result.name ));
	return true;
}

bool  RdCaptureReader::_Parse_VkSurfaceCapabilitiesFullScreenExclusiveEXT (const Node_t *node, OUT VkSurfaceCapabilitiesFullScreenExclusiveEXT* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkSurfaceCapabilitiesFullScreenExclusiveEXT>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkSurfaceCapabilitiesFullScreenExclusiveEXT( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkSurfaceCapabilitiesFullScreenExclusiveEXT (const Node_t *node, OUT VkSurfaceCapabilitiesFullScreenExclusiveEXT &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "fullScreenExclusiveSupported" ), OUT result.fullScreenExclusiveSupported ));
	return true;
}

#endif // VULKAN_WIN32_H_

#ifdef VULKAN_ANDROID_H_
bool  RdCaptureReader::_Parse_VkAndroidHardwareBufferPropertiesANDROID (const Node_t *node, OUT VkAndroidHardwareBufferPropertiesANDROID* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkAndroidHardwareBufferPropertiesANDROID>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkAndroidHardwareBufferPropertiesANDROID( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkAndroidHardwareBufferPropertiesANDROID (const Node_t *node, OUT VkAndroidHardwareBufferPropertiesANDROID &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "allocationSize" ), OUT result.allocationSize ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "memoryTypeBits" ), OUT result.memoryTypeBits ));
	return true;
}

bool  RdCaptureReader::_Parse_VkImportAndroidHardwareBufferInfoANDROID (const Node_t *node, OUT VkImportAndroidHardwareBufferInfoANDROID* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkImportAndroidHardwareBufferInfoANDROID>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkImportAndroidHardwareBufferInfoANDROID( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkImportAndroidHardwareBufferInfoANDROID (const Node_t *node, OUT VkImportAndroidHardwareBufferInfoANDROID &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "buffer" ), OUT const_cast<struct AHardwareBuffer * &>(result.buffer) ));
	return true;
}

bool  RdCaptureReader::_Parse_VkMemoryGetAndroidHardwareBufferInfoANDROID (const Node_t *node, OUT VkMemoryGetAndroidHardwareBufferInfoANDROID* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkMemoryGetAndroidHardwareBufferInfoANDROID>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkMemoryGetAndroidHardwareBufferInfoANDROID( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkMemoryGetAndroidHardwareBufferInfoANDROID (const Node_t *node, OUT VkMemoryGetAndroidHardwareBufferInfoANDROID &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseResource( _FindByAttribName( *node, "memory" ), OUT result.memory ));
	return true;
}

#endif // VULKAN_ANDROID_H_

#ifdef VULKAN_XLIB_H_
bool  RdCaptureReader::_Parse_VkXlibSurfaceCreateInfoKHR (const Node_t *node, OUT VkXlibSurfaceCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkXlibSurfaceCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkXlibSurfaceCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkXlibSurfaceCreateInfoKHR (const Node_t *node, OUT VkXlibSurfaceCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "dpy" ), OUT const_cast<Display * &>(result.dpy) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "window" ), OUT result.window ));
	return true;
}

#endif // VULKAN_XLIB_H_

#ifdef VULKAN_WAYLAND_H_
bool  RdCaptureReader::_Parse_VkWaylandSurfaceCreateInfoKHR (const Node_t *node, OUT VkWaylandSurfaceCreateInfoKHR* &result)
{
	CHECK_ERR( node );
	if ( StringView{node->name()} == "null" ) {
		result = null;
		return true;
	}

	result = _allocator.Alloc<VkWaylandSurfaceCreateInfoKHR>( 1 );
	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));
	return _Parse_VkWaylandSurfaceCreateInfoKHR( node, OUT *result );
}

bool  RdCaptureReader::_Parse_VkWaylandSurfaceCreateInfoKHR (const Node_t *node, OUT VkWaylandSurfaceCreateInfoKHR &result)
{
	CHECK_ERR( node );
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "sType" ), OUT result.sType ));
	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, "pNext" ), OUT const_cast<void **>(&result.pNext) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "flags" ), OUT result.flags ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "display" ), OUT const_cast<struct wl_display * &>(result.display) ));
	CHECK_ERR( _ParseValue( _FindByAttribName( *node, "surface" ), OUT const_cast<struct wl_surface * &>(result.surface) ));
	return true;
}

#endif // VULKAN_WAYLAND_H_

