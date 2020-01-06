// auto-generated file

using namespace std::string_literals;

#pragma warning (push)
#pragma warning (disable: 4100)

ND_ String  SerializeStruct (const VkBaseInStructure *ptr, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	if ( ptr == null ) return {};
	String	result, before;
	BEGIN_ENUM_CHECKS();
	switch ( ptr->sType )
	{
		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT : {
			VkPhysicalDeviceMemoryPriorityFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceMemoryPriorityFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceMemoryPriorityFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceMemoryPriorityFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceMemoryPriorityFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV : {
			VkPipelineViewportCoarseSampleOrderStateCreateInfoNV const *  obj = BitCast<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineViewportCoarseSampleOrderStateCreateInfoNV"s, "createInfo"s );
			result << indent << "VkPipelineViewportCoarseSampleOrderStateCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO : {
			VkPipelineTessellationDomainOriginStateCreateInfo const *  obj = BitCast<VkPipelineTessellationDomainOriginStateCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineTessellationDomainOriginStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineTessellationDomainOriginStateCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineTessellationDomainOriginStateCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_APPLICATION_INFO : {
			VkApplicationInfo const *  obj = BitCast<VkApplicationInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "applicationInfo"s, "info"s );
			result << indent << "VkApplicationInfo  " << name << " = {};\n";
			Serialize2_VkApplicationInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT : {
			VkDebugUtilsObjectNameInfoEXT const *  obj = BitCast<VkDebugUtilsObjectNameInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "debugUtilsObjectNameInfo"s, "info"s );
			result << indent << "VkDebugUtilsObjectNameInfoEXT  " << name << " = {};\n";
			Serialize2_VkDebugUtilsObjectNameInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO : {
			VkBufferViewCreateInfo const *  obj = BitCast<VkBufferViewCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bufferViewCreateInfo"s, "createInfo"s );
			result << indent << "VkBufferViewCreateInfo  " << name << " = {};\n";
			Serialize2_VkBufferViewCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO : {
			VkInstanceCreateInfo const *  obj = BitCast<VkInstanceCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "instanceCreateInfo"s, "createInfo"s );
			result << indent << "VkInstanceCreateInfo  " << name << " = {};\n";
			Serialize2_VkInstanceCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT : {
			VkPhysicalDeviceLineRasterizationFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceLineRasterizationFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceLineRasterizationFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceLineRasterizationFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceLineRasterizationFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT : {
			VkValidationCacheCreateInfoEXT const *  obj = BitCast<VkValidationCacheCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "validationCacheCreateInfo"s, "createInfo"s );
			result << indent << "VkValidationCacheCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkValidationCacheCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_BARRIER : {
			VkMemoryBarrier const *  obj = BitCast<VkMemoryBarrier const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryBarrier"s, "barrier"s );
			result << indent << "VkMemoryBarrier  " << name << " = {};\n";
			Serialize2_VkMemoryBarrier( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkMemoryWin32HandlePropertiesKHR const *  obj = BitCast<VkMemoryWin32HandlePropertiesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryWin32HandleProperties"s, "properties"s );
			result << indent << "VkMemoryWin32HandlePropertiesKHR  " << name << " = {};\n";
			Serialize2_VkMemoryWin32HandlePropertiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID : {
			#ifdef VULKAN_ANDROID_H_
			VkAndroidHardwareBufferUsageANDROID const *  obj = BitCast<VkAndroidHardwareBufferUsageANDROID const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "androidHardwareBufferUsageANDROID"s );
			result << indent << "VkAndroidHardwareBufferUsageANDROID  " << name << " = {};\n";
			Serialize2_VkAndroidHardwareBufferUsageANDROID( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO : {
			VkPipelineInputAssemblyStateCreateInfo const *  obj = BitCast<VkPipelineInputAssemblyStateCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineInputAssemblyStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineInputAssemblyStateCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineInputAssemblyStateCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO : {
			VkExternalMemoryBufferCreateInfo const *  obj = BitCast<VkExternalMemoryBufferCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "externalMemoryBufferCreateInfo"s, "createInfo"s );
			result << indent << "VkExternalMemoryBufferCreateInfo  " << name << " = {};\n";
			Serialize2_VkExternalMemoryBufferCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO : {
			VkSemaphoreCreateInfo const *  obj = BitCast<VkSemaphoreCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "semaphoreCreateInfo"s, "createInfo"s );
			result << indent << "VkSemaphoreCreateInfo  " << name << " = {};\n";
			Serialize2_VkSemaphoreCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO : {
			VkDeviceCreateInfo const *  obj = BitCast<VkDeviceCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceCreateInfo"s, "createInfo"s );
			result << indent << "VkDeviceCreateInfo  " << name << " = {};\n";
			Serialize2_VkDeviceCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES : {
			VkExternalImageFormatProperties const *  obj = BitCast<VkExternalImageFormatProperties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "externalImageFormatProperties"s, "properties"s );
			result << indent << "VkExternalImageFormatProperties  " << name << " = {};\n";
			Serialize2_VkExternalImageFormatProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV : {
			VkPipelineCoverageReductionStateCreateInfoNV const *  obj = BitCast<VkPipelineCoverageReductionStateCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineCoverageReductionStateCreateInfoNV"s, "createInfo"s );
			result << indent << "VkPipelineCoverageReductionStateCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkPipelineCoverageReductionStateCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV : {
			VkGeometryTrianglesNV const *  obj = BitCast<VkGeometryTrianglesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "geometryTrianglesNV"s );
			result << indent << "VkGeometryTrianglesNV  " << name << " = {};\n";
			Serialize2_VkGeometryTrianglesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR : {
			VkImageFormatListCreateInfoKHR const *  obj = BitCast<VkImageFormatListCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageFormatListCreateInfo"s, "createInfo"s );
			result << indent << "VkImageFormatListCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkImageFormatListCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT : {
			#ifdef VULKAN_WIN32_H_
			VkSurfaceFullScreenExclusiveInfoEXT const *  obj = BitCast<VkSurfaceFullScreenExclusiveInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "surfaceFullScreenExclusiveInfo"s, "info"s );
			result << indent << "VkSurfaceFullScreenExclusiveInfoEXT  " << name << " = {};\n";
			Serialize2_VkSurfaceFullScreenExclusiveInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT : {
			VkDeviceEventInfoEXT const *  obj = BitCast<VkDeviceEventInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceEventInfo"s, "info"s );
			result << indent << "VkDeviceEventInfoEXT  " << name << " = {};\n";
			Serialize2_VkDeviceEventInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR : {
			VkPipelineExecutableInternalRepresentationKHR const *  obj = BitCast<VkPipelineExecutableInternalRepresentationKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineExecutableInternalRepresentation"s );
			result << indent << "VkPipelineExecutableInternalRepresentationKHR  " << name << " = {};\n";
			Serialize2_VkPipelineExecutableInternalRepresentationKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE : {
			VkMappedMemoryRange const *  obj = BitCast<VkMappedMemoryRange const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "mappedMemoryRange"s );
			result << indent << "VkMappedMemoryRange  " << name << " = {};\n";
			Serialize2_VkMappedMemoryRange( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO : {
			VkDeviceQueueCreateInfo const *  obj = BitCast<VkDeviceQueueCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceQueueCreateInfo"s, "createInfo"s );
			result << indent << "VkDeviceQueueCreateInfo  " << name << " = {};\n";
			Serialize2_VkDeviceQueueCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO : {
			VkPipelineDynamicStateCreateInfo const *  obj = BitCast<VkPipelineDynamicStateCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineDynamicStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineDynamicStateCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineDynamicStateCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SUBMIT_INFO : {
			VkSubmitInfo const *  obj = BitCast<VkSubmitInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "submitInfo"s, "info"s );
			result << indent << "VkSubmitInfo  " << name << " = {};\n";
			Serialize2_VkSubmitInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO : {
			VkImageViewCreateInfo const *  obj = BitCast<VkImageViewCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageViewCreateInfo"s, "createInfo"s );
			result << indent << "VkImageViewCreateInfo  " << name << " = {};\n";
			Serialize2_VkImageViewCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT : {
			VkPhysicalDeviceTransformFeedbackFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceTransformFeedbackFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceTransformFeedbackFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceTransformFeedbackFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceTransformFeedbackFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO : {
			VkPipelineTessellationStateCreateInfo const *  obj = BitCast<VkPipelineTessellationStateCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineTessellationStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineTessellationStateCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineTessellationStateCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT : {
			VkImportMemoryHostPointerInfoEXT const *  obj = BitCast<VkImportMemoryHostPointerInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "importMemoryHostPointerInfo"s, "info"s );
			result << indent << "VkImportMemoryHostPointerInfoEXT  " << name << " = {};\n";
			Serialize2_VkImportMemoryHostPointerInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT : {
			VkPhysicalDeviceImageViewImageFormatInfoEXT const *  obj = BitCast<VkPhysicalDeviceImageViewImageFormatInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceImageViewImageFormatInfo"s, "info"s );
			result << indent << "VkPhysicalDeviceImageViewImageFormatInfoEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceImageViewImageFormatInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO : {
			VkMemoryAllocateInfo const *  obj = BitCast<VkMemoryAllocateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryAllocateInfo"s, "info"s );
			result << indent << "VkMemoryAllocateInfo  " << name << " = {};\n";
			Serialize2_VkMemoryAllocateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT : {
			VkBufferDeviceAddressCreateInfoEXT const *  obj = BitCast<VkBufferDeviceAddressCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bufferDeviceAddressCreateInfo"s, "createInfo"s );
			result << indent << "VkBufferDeviceAddressCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkBufferDeviceAddressCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO : {
			VkBindSparseInfo const *  obj = BitCast<VkBindSparseInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bindSparseInfo"s, "info"s );
			result << indent << "VkBindSparseInfo  " << name << " = {};\n";
			Serialize2_VkBindSparseInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2 : {
			VkPhysicalDeviceImageFormatInfo2 const *  obj = BitCast<VkPhysicalDeviceImageFormatInfo2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceImageFormatInfo2"s, "info"s );
			result << indent << "VkPhysicalDeviceImageFormatInfo2  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceImageFormatInfo2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkSemaphoreGetWin32HandleInfoKHR const *  obj = BitCast<VkSemaphoreGetWin32HandleInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "semaphoreGetWin32HandleInfo"s, "info"s );
			result << indent << "VkSemaphoreGetWin32HandleInfoKHR  " << name << " = {};\n";
			Serialize2_VkSemaphoreGetWin32HandleInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL : {
			VkPerformanceOverrideInfoINTEL const *  obj = BitCast<VkPerformanceOverrideInfoINTEL const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "performanceOverrideInfoINTEL"s, "info"s );
			result << indent << "VkPerformanceOverrideInfoINTEL  " << name << " = {};\n";
			Serialize2_VkPerformanceOverrideInfoINTEL( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO : {
			VkPipelineViewportStateCreateInfo const *  obj = BitCast<VkPipelineViewportStateCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineViewportStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineViewportStateCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineViewportStateCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV : {
			VkAccelerationStructureInfoNV const *  obj = BitCast<VkAccelerationStructureInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "accelerationStructureInfoNV"s, "info"s );
			result << indent << "VkAccelerationStructureInfoNV  " << name << " = {};\n";
			Serialize2_VkAccelerationStructureInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO : {
			VkPipelineVertexInputStateCreateInfo const *  obj = BitCast<VkPipelineVertexInputStateCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineVertexInputStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineVertexInputStateCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineVertexInputStateCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT : {
			#ifdef VULKAN_WIN32_H_
			VkSurfaceFullScreenExclusiveWin32InfoEXT const *  obj = BitCast<VkSurfaceFullScreenExclusiveWin32InfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "surfaceFullScreenExclusiveWin32Info"s, "info"s );
			result << indent << "VkSurfaceFullScreenExclusiveWin32InfoEXT  " << name << " = {};\n";
			Serialize2_VkSurfaceFullScreenExclusiveWin32InfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkExportSemaphoreWin32HandleInfoKHR const *  obj = BitCast<VkExportSemaphoreWin32HandleInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "exportSemaphoreWin32HandleInfo"s, "info"s );
			result << indent << "VkExportSemaphoreWin32HandleInfoKHR  " << name << " = {};\n";
			Serialize2_VkExportSemaphoreWin32HandleInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV : {
			VkFramebufferMixedSamplesCombinationNV const *  obj = BitCast<VkFramebufferMixedSamplesCombinationNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "framebufferMixedSamplesCombinationNV"s );
			result << indent << "VkFramebufferMixedSamplesCombinationNV  " << name << " = {};\n";
			Serialize2_VkFramebufferMixedSamplesCombinationNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV : {
			VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV const *  obj = BitCast<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceDedicatedAllocationImageAliasingFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT : {
			VkPipelineRasterizationStateStreamCreateInfoEXT const *  obj = BitCast<VkPipelineRasterizationStateStreamCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineRasterizationStateStreamCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineRasterizationStateStreamCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkPipelineRasterizationStateStreamCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR : {
			VkAcquireNextImageInfoKHR const *  obj = BitCast<VkAcquireNextImageInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "acquireNextImageInfo"s, "info"s );
			result << indent << "VkAcquireNextImageInfoKHR  " << name << " = {};\n";
			Serialize2_VkAcquireNextImageInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES : {
			VkPhysicalDeviceProtectedMemoryProperties const *  obj = BitCast<VkPhysicalDeviceProtectedMemoryProperties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceProtectedMemoryProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceProtectedMemoryProperties  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceProtectedMemoryProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT : {
			VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT const *  obj = BitCast<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineShaderStageRequiredSubgroupSizeCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO : {
			VkFenceCreateInfo const *  obj = BitCast<VkFenceCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "fenceCreateInfo"s, "createInfo"s );
			result << indent << "VkFenceCreateInfo  " << name << " = {};\n";
			Serialize2_VkFenceCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO : {
			VkEventCreateInfo const *  obj = BitCast<VkEventCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "eventCreateInfo"s, "createInfo"s );
			result << indent << "VkEventCreateInfo  " << name << " = {};\n";
			Serialize2_VkEventCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX : {
			VkImageViewHandleInfoNVX const *  obj = BitCast<VkImageViewHandleInfoNVX const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageViewHandleInfoNVX"s, "info"s );
			result << indent << "VkImageViewHandleInfoNVX  " << name << " = {};\n";
			Serialize2_VkImageViewHandleInfoNVX( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO : {
			VkRenderPassBeginInfo const *  obj = BitCast<VkRenderPassBeginInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "renderPassBeginInfo"s, "info"s );
			result << indent << "VkRenderPassBeginInfo  " << name << " = {};\n";
			Serialize2_VkRenderPassBeginInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO : {
			VkQueryPoolCreateInfo const *  obj = BitCast<VkQueryPoolCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "queryPoolCreateInfo"s, "createInfo"s );
			result << indent << "VkQueryPoolCreateInfo  " << name << " = {};\n";
			Serialize2_VkQueryPoolCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO : {
			VkBufferCreateInfo const *  obj = BitCast<VkBufferCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bufferCreateInfo"s, "createInfo"s );
			result << indent << "VkBufferCreateInfo  " << name << " = {};\n";
			Serialize2_VkBufferCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO : {
			VkImageCreateInfo const *  obj = BitCast<VkImageCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageCreateInfo"s, "createInfo"s );
			result << indent << "VkImageCreateInfo  " << name << " = {};\n";
			Serialize2_VkImageCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO : {
			VkPipelineMultisampleStateCreateInfo const *  obj = BitCast<VkPipelineMultisampleStateCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineMultisampleStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineMultisampleStateCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineMultisampleStateCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO : {
			VkShaderModuleCreateInfo const *  obj = BitCast<VkShaderModuleCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "shaderModuleCreateInfo"s, "createInfo"s );
			result << indent << "VkShaderModuleCreateInfo  " << name << " = {};\n";
			Serialize2_VkShaderModuleCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT : {
			VkDescriptorSetLayoutBindingFlagsCreateInfoEXT const *  obj = BitCast<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "descriptorSetLayoutBindingFlagsCreateInfo"s, "createInfo"s );
			result << indent << "VkDescriptorSetLayoutBindingFlagsCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO : {
			VkPipelineCacheCreateInfo const *  obj = BitCast<VkPipelineCacheCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineCacheCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineCacheCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineCacheCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR : {
			VkPipelineInfoKHR const *  obj = BitCast<VkPipelineInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineInfo"s, "info"s );
			result << indent << "VkPipelineInfoKHR  " << name << " = {};\n";
			Serialize2_VkPipelineInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR : {
			VkDisplayPlaneInfo2KHR const *  obj = BitCast<VkDisplayPlaneInfo2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "displayPlaneInfo2"s, "info"s );
			result << indent << "VkDisplayPlaneInfo2KHR  " << name << " = {};\n";
			Serialize2_VkDisplayPlaneInfo2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR : {
			VkPipelineExecutableStatisticKHR const *  obj = BitCast<VkPipelineExecutableStatisticKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineExecutableStatistic"s );
			result << indent << "VkPipelineExecutableStatisticKHR  " << name << " = {};\n";
			Serialize2_VkPipelineExecutableStatisticKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO : {
			VkPipelineShaderStageCreateInfo const *  obj = BitCast<VkPipelineShaderStageCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineShaderStageCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineShaderStageCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineShaderStageCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV : {
			#ifdef VULKAN_WIN32_H_
			VkImportMemoryWin32HandleInfoNV const *  obj = BitCast<VkImportMemoryWin32HandleInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "importMemoryWin32HandleInfoNV"s, "info"s );
			result << indent << "VkImportMemoryWin32HandleInfoNV  " << name << " = {};\n";
			Serialize2_VkImportMemoryWin32HandleInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT : {
			VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceFragmentShaderInterlockFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO : {
			VkPhysicalDeviceExternalBufferInfo const *  obj = BitCast<VkPhysicalDeviceExternalBufferInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceExternalBufferInfo"s, "info"s );
			result << indent << "VkPhysicalDeviceExternalBufferInfo  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceExternalBufferInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO : {
			VkPipelineRasterizationStateCreateInfo const *  obj = BitCast<VkPipelineRasterizationStateCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineRasterizationStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineRasterizationStateCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineRasterizationStateCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT : {
			VkMemoryHostPointerPropertiesEXT const *  obj = BitCast<VkMemoryHostPointerPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryHostPointerProperties"s, "properties"s );
			result << indent << "VkMemoryHostPointerPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkMemoryHostPointerPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX : {
			VkDeviceGeneratedCommandsFeaturesNVX const *  obj = BitCast<VkDeviceGeneratedCommandsFeaturesNVX const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceGeneratedCommandsFeaturesNVX"s, "features"s );
			result << indent << "VkDeviceGeneratedCommandsFeaturesNVX  " << name << " = {};\n";
			Serialize2_VkDeviceGeneratedCommandsFeaturesNVX( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE : {
			VkPresentTimesInfoGOOGLE const *  obj = BitCast<VkPresentTimesInfoGOOGLE const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "presentTimesInfoGOOGLE"s, "info"s );
			result << indent << "VkPresentTimesInfoGOOGLE  " << name << " = {};\n";
			Serialize2_VkPresentTimesInfoGOOGLE( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO : {
			VkPipelineDepthStencilStateCreateInfo const *  obj = BitCast<VkPipelineDepthStencilStateCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineDepthStencilStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineDepthStencilStateCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineDepthStencilStateCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR : {
			#ifdef VULKAN_ANDROID_H_
			VkAndroidSurfaceCreateInfoKHR const *  obj = BitCast<VkAndroidSurfaceCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "androidSurfaceCreateInfo"s, "createInfo"s );
			result << indent << "VkAndroidSurfaceCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkAndroidSurfaceCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR : {
			VkPipelineExecutableInfoKHR const *  obj = BitCast<VkPipelineExecutableInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineExecutableInfo"s, "info"s );
			result << indent << "VkPipelineExecutableInfoKHR  " << name << " = {};\n";
			Serialize2_VkPipelineExecutableInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO : {
			VkCommandBufferInheritanceInfo const *  obj = BitCast<VkCommandBufferInheritanceInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "commandBufferInheritanceInfo"s, "info"s );
			result << indent << "VkCommandBufferInheritanceInfo  " << name << " = {};\n";
			Serialize2_VkCommandBufferInheritanceInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO : {
			VkPipelineColorBlendStateCreateInfo const *  obj = BitCast<VkPipelineColorBlendStateCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineColorBlendStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineColorBlendStateCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineColorBlendStateCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR : {
			VkImportFenceFdInfoKHR const *  obj = BitCast<VkImportFenceFdInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "importFenceFdInfo"s, "info"s );
			result << indent << "VkImportFenceFdInfoKHR  " << name << " = {};\n";
			Serialize2_VkImportFenceFdInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO : {
			VkGraphicsPipelineCreateInfo const *  obj = BitCast<VkGraphicsPipelineCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "graphicsPipelineCreateInfo"s, "createInfo"s );
			result << indent << "VkGraphicsPipelineCreateInfo  " << name << " = {};\n";
			Serialize2_VkGraphicsPipelineCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO : {
			VkSamplerYcbcrConversionInfo const *  obj = BitCast<VkSamplerYcbcrConversionInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "samplerYcbcrConversionInfo"s, "info"s );
			result << indent << "VkSamplerYcbcrConversionInfo  " << name << " = {};\n";
			Serialize2_VkSamplerYcbcrConversionInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO : {
			VkComputePipelineCreateInfo const *  obj = BitCast<VkComputePipelineCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "computePipelineCreateInfo"s, "createInfo"s );
			result << indent << "VkComputePipelineCreateInfo  " << name << " = {};\n";
			Serialize2_VkComputePipelineCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO : {
			VkPipelineLayoutCreateInfo const *  obj = BitCast<VkPipelineLayoutCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineLayoutCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineLayoutCreateInfo  " << name << " = {};\n";
			Serialize2_VkPipelineLayoutCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR : {
			VkDisplayPlaneProperties2KHR const *  obj = BitCast<VkDisplayPlaneProperties2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "displayPlaneProperties2"s, "properties"s );
			result << indent << "VkDisplayPlaneProperties2KHR  " << name << " = {};\n";
			Serialize2_VkDisplayPlaneProperties2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR : {
			VkDisplayPresentInfoKHR const *  obj = BitCast<VkDisplayPresentInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "displayPresentInfo"s, "info"s );
			result << indent << "VkDisplayPresentInfoKHR  " << name << " = {};\n";
			Serialize2_VkDisplayPresentInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO : {
			VkSamplerCreateInfo const *  obj = BitCast<VkSamplerCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "samplerCreateInfo"s, "createInfo"s );
			result << indent << "VkSamplerCreateInfo  " << name << " = {};\n";
			Serialize2_VkSamplerCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO : {
			VkDescriptorSetLayoutCreateInfo const *  obj = BitCast<VkDescriptorSetLayoutCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "descriptorSetLayoutCreateInfo"s, "createInfo"s );
			result << indent << "VkDescriptorSetLayoutCreateInfo  " << name << " = {};\n";
			Serialize2_VkDescriptorSetLayoutCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO : {
			VkDescriptorPoolCreateInfo const *  obj = BitCast<VkDescriptorPoolCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "descriptorPoolCreateInfo"s, "createInfo"s );
			result << indent << "VkDescriptorPoolCreateInfo  " << name << " = {};\n";
			Serialize2_VkDescriptorPoolCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV : {
			VkPhysicalDeviceRayTracingPropertiesNV const *  obj = BitCast<VkPhysicalDeviceRayTracingPropertiesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceRayTracingPropertiesNV"s, "properties"s );
			result << indent << "VkPhysicalDeviceRayTracingPropertiesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceRayTracingPropertiesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2 : {
			VkImageMemoryRequirementsInfo2 const *  obj = BitCast<VkImageMemoryRequirementsInfo2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageMemoryRequirementsInfo2"s, "info"s );
			result << indent << "VkImageMemoryRequirementsInfo2  " << name << " = {};\n";
			Serialize2_VkImageMemoryRequirementsInfo2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO : {
			VkDescriptorSetAllocateInfo const *  obj = BitCast<VkDescriptorSetAllocateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "descriptorSetAllocateInfo"s, "info"s );
			result << indent << "VkDescriptorSetAllocateInfo  " << name << " = {};\n";
			Serialize2_VkDescriptorSetAllocateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV : {
			#ifdef VULKAN_WIN32_H_
			VkExportMemoryWin32HandleInfoNV const *  obj = BitCast<VkExportMemoryWin32HandleInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "exportMemoryWin32HandleInfoNV"s, "info"s );
			result << indent << "VkExportMemoryWin32HandleInfoNV  " << name << " = {};\n";
			Serialize2_VkExportMemoryWin32HandleInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_HDR_METADATA_EXT : {
			VkHdrMetadataEXT const *  obj = BitCast<VkHdrMetadataEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "hdrMetadata"s );
			result << indent << "VkHdrMetadataEXT  " << name << " = {};\n";
			Serialize2_VkHdrMetadataEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO : {
			VkPhysicalDeviceExternalSemaphoreInfo const *  obj = BitCast<VkPhysicalDeviceExternalSemaphoreInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceExternalSemaphoreInfo"s, "info"s );
			result << indent << "VkPhysicalDeviceExternalSemaphoreInfo  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceExternalSemaphoreInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET : {
			VkWriteDescriptorSet const *  obj = BitCast<VkWriteDescriptorSet const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "writeDescriptorSet"s );
			result << indent << "VkWriteDescriptorSet  " << name << " = {};\n";
			Serialize2_VkWriteDescriptorSet( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET : {
			VkCopyDescriptorSet const *  obj = BitCast<VkCopyDescriptorSet const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "copyDescriptorSet"s );
			result << indent << "VkCopyDescriptorSet  " << name << " = {};\n";
			Serialize2_VkCopyDescriptorSet( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT : {
			VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceSamplerFilterMinmaxProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO : {
			VkFramebufferCreateInfo const *  obj = BitCast<VkFramebufferCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "framebufferCreateInfo"s, "createInfo"s );
			result << indent << "VkFramebufferCreateInfo  " << name << " = {};\n";
			Serialize2_VkFramebufferCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR : {
			VkPhysicalDeviceImagelessFramebufferFeaturesKHR const *  obj = BitCast<VkPhysicalDeviceImagelessFramebufferFeaturesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceImagelessFramebufferFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceImagelessFramebufferFeaturesKHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceImagelessFramebufferFeaturesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT : {
			VkBufferDeviceAddressInfoEXT const *  obj = BitCast<VkBufferDeviceAddressInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bufferDeviceAddressInfo"s, "info"s );
			result << indent << "VkBufferDeviceAddressInfoEXT  " << name << " = {};\n";
			Serialize2_VkBufferDeviceAddressInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO : {
			VkRenderPassCreateInfo const *  obj = BitCast<VkRenderPassCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "renderPassCreateInfo"s, "createInfo"s );
			result << indent << "VkRenderPassCreateInfo  " << name << " = {};\n";
			Serialize2_VkRenderPassCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO : {
			VkCommandPoolCreateInfo const *  obj = BitCast<VkCommandPoolCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "commandPoolCreateInfo"s, "createInfo"s );
			result << indent << "VkCommandPoolCreateInfo  " << name << " = {};\n";
			Serialize2_VkCommandPoolCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO : {
			VkCommandBufferAllocateInfo const *  obj = BitCast<VkCommandBufferAllocateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "commandBufferAllocateInfo"s, "info"s );
			result << indent << "VkCommandBufferAllocateInfo  " << name << " = {};\n";
			Serialize2_VkCommandBufferAllocateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO : {
			VkCommandBufferBeginInfo const *  obj = BitCast<VkCommandBufferBeginInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "commandBufferBeginInfo"s, "info"s );
			result << indent << "VkCommandBufferBeginInfo  " << name << " = {};\n";
			Serialize2_VkCommandBufferBeginInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR : {
			VkFramebufferAttachmentsCreateInfoKHR const *  obj = BitCast<VkFramebufferAttachmentsCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "framebufferAttachmentsCreateInfo"s, "createInfo"s );
			result << indent << "VkFramebufferAttachmentsCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkFramebufferAttachmentsCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT : {
			VkDescriptorSetVariableDescriptorCountLayoutSupportEXT const *  obj = BitCast<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "descriptorSetVariableDescriptorCountLayoutSupport"s );
			result << indent << "VkDescriptorSetVariableDescriptorCountLayoutSupportEXT  " << name << " = {};\n";
			Serialize2_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX : {
			VkDeviceGeneratedCommandsLimitsNVX const *  obj = BitCast<VkDeviceGeneratedCommandsLimitsNVX const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceGeneratedCommandsLimitsNVX"s );
			result << indent << "VkDeviceGeneratedCommandsLimitsNVX  " << name << " = {};\n";
			Serialize2_VkDeviceGeneratedCommandsLimitsNVX( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER : {
			VkBufferMemoryBarrier const *  obj = BitCast<VkBufferMemoryBarrier const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bufferMemoryBarrier"s, "barrier"s );
			result << indent << "VkBufferMemoryBarrier  " << name << " = {};\n";
			Serialize2_VkBufferMemoryBarrier( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER : {
			VkImageMemoryBarrier const *  obj = BitCast<VkImageMemoryBarrier const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageMemoryBarrier"s, "barrier"s );
			result << indent << "VkImageMemoryBarrier  " << name << " = {};\n";
			Serialize2_VkImageMemoryBarrier( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV : {
			VkPipelineCoverageToColorStateCreateInfoNV const *  obj = BitCast<VkPipelineCoverageToColorStateCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineCoverageToColorStateCreateInfoNV"s, "createInfo"s );
			result << indent << "VkPipelineCoverageToColorStateCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkPipelineCoverageToColorStateCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkImportFenceWin32HandleInfoKHR const *  obj = BitCast<VkImportFenceWin32HandleInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "importFenceWin32HandleInfo"s, "info"s );
			result << indent << "VkImportFenceWin32HandleInfoKHR  " << name << " = {};\n";
			Serialize2_VkImportFenceWin32HandleInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES : {
			VkPhysicalDevicePointClippingProperties const *  obj = BitCast<VkPhysicalDevicePointClippingProperties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDevicePointClippingProperties"s, "properties"s );
			result << indent << "VkPhysicalDevicePointClippingProperties  " << name << " = {};\n";
			Serialize2_VkPhysicalDevicePointClippingProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES : {
			VkPhysicalDeviceSubgroupProperties const *  obj = BitCast<VkPhysicalDeviceSubgroupProperties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceSubgroupProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceSubgroupProperties  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceSubgroupProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD : {
			VkPipelineCompilerControlCreateInfoAMD const *  obj = BitCast<VkPipelineCompilerControlCreateInfoAMD const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineCompilerControlCreateInfoAMD"s, "createInfo"s );
			result << indent << "VkPipelineCompilerControlCreateInfoAMD  " << name << " = {};\n";
			Serialize2_VkPipelineCompilerControlCreateInfoAMD( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO : {
			VkBindBufferMemoryInfo const *  obj = BitCast<VkBindBufferMemoryInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bindBufferMemoryInfo"s, "info"s );
			result << indent << "VkBindBufferMemoryInfo  " << name << " = {};\n";
			Serialize2_VkBindBufferMemoryInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO : {
			VkBindImageMemoryInfo const *  obj = BitCast<VkBindImageMemoryInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bindImageMemoryInfo"s, "info"s );
			result << indent << "VkBindImageMemoryInfo  " << name << " = {};\n";
			Serialize2_VkBindImageMemoryInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR : {
			VkSubpassEndInfoKHR const *  obj = BitCast<VkSubpassEndInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "subpassEndInfo"s, "info"s );
			result << indent << "VkSubpassEndInfoKHR  " << name << " = {};\n";
			Serialize2_VkSubpassEndInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES : {
			VkPhysicalDevice16BitStorageFeatures const *  obj = BitCast<VkPhysicalDevice16BitStorageFeatures const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDevice16BitStorageFeatures"s, "features"s );
			result << indent << "VkPhysicalDevice16BitStorageFeatures  " << name << " = {};\n";
			Serialize2_VkPhysicalDevice16BitStorageFeatures( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS : {
			VkMemoryDedicatedRequirements const *  obj = BitCast<VkMemoryDedicatedRequirements const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryDedicatedRequirements"s, "requirements"s );
			result << indent << "VkMemoryDedicatedRequirements  " << name << " = {};\n";
			Serialize2_VkMemoryDedicatedRequirements( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV : {
			VkPhysicalDeviceShadingRateImagePropertiesNV const *  obj = BitCast<VkPhysicalDeviceShadingRateImagePropertiesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShadingRateImagePropertiesNV"s, "properties"s );
			result << indent << "VkPhysicalDeviceShadingRateImagePropertiesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShadingRateImagePropertiesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT : {
			VkImageDrmFormatModifierExplicitCreateInfoEXT const *  obj = BitCast<VkImageDrmFormatModifierExplicitCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageDrmFormatModifierExplicitCreateInfo"s, "createInfo"s );
			result << indent << "VkImageDrmFormatModifierExplicitCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkImageDrmFormatModifierExplicitCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO : {
			VkMemoryDedicatedAllocateInfo const *  obj = BitCast<VkMemoryDedicatedAllocateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryDedicatedAllocateInfo"s, "info"s );
			result << indent << "VkMemoryDedicatedAllocateInfo  " << name << " = {};\n";
			Serialize2_VkMemoryDedicatedAllocateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO : {
			VkMemoryAllocateFlagsInfo const *  obj = BitCast<VkMemoryAllocateFlagsInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryAllocateFlagsInfo"s, "info"s );
			result << indent << "VkMemoryAllocateFlagsInfo  " << name << " = {};\n";
			Serialize2_VkMemoryAllocateFlagsInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO : {
			VkDeviceGroupRenderPassBeginInfo const *  obj = BitCast<VkDeviceGroupRenderPassBeginInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceGroupRenderPassBeginInfo"s, "info"s );
			result << indent << "VkDeviceGroupRenderPassBeginInfo  " << name << " = {};\n";
			Serialize2_VkDeviceGroupRenderPassBeginInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO : {
			VkDeviceGroupCommandBufferBeginInfo const *  obj = BitCast<VkDeviceGroupCommandBufferBeginInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceGroupCommandBufferBeginInfo"s, "info"s );
			result << indent << "VkDeviceGroupCommandBufferBeginInfo  " << name << " = {};\n";
			Serialize2_VkDeviceGroupCommandBufferBeginInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT : {
			VkPhysicalDeviceYcbcrImageArraysFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceYcbcrImageArraysFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceYcbcrImageArraysFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO : {
			VkDeviceGroupSubmitInfo const *  obj = BitCast<VkDeviceGroupSubmitInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceGroupSubmitInfo"s, "info"s );
			result << indent << "VkDeviceGroupSubmitInfo  " << name << " = {};\n";
			Serialize2_VkDeviceGroupSubmitInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR : {
			VkPhysicalDeviceShaderFloat16Int8FeaturesKHR const *  obj = BitCast<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShaderFloat16Int8Features"s, "features"s );
			result << indent << "VkPhysicalDeviceShaderFloat16Int8FeaturesKHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO : {
			VkDeviceGroupBindSparseInfo const *  obj = BitCast<VkDeviceGroupBindSparseInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceGroupBindSparseInfo"s, "info"s );
			result << indent << "VkDeviceGroupBindSparseInfo  " << name << " = {};\n";
			Serialize2_VkDeviceGroupBindSparseInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO : {
			VkBindBufferMemoryDeviceGroupInfo const *  obj = BitCast<VkBindBufferMemoryDeviceGroupInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bindBufferMemoryDeviceGroupInfo"s, "info"s );
			result << indent << "VkBindBufferMemoryDeviceGroupInfo  " << name << " = {};\n";
			Serialize2_VkBindBufferMemoryDeviceGroupInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO : {
			VkBindImageMemoryDeviceGroupInfo const *  obj = BitCast<VkBindImageMemoryDeviceGroupInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bindImageMemoryDeviceGroupInfo"s, "info"s );
			result << indent << "VkBindImageMemoryDeviceGroupInfo  " << name << " = {};\n";
			Serialize2_VkBindImageMemoryDeviceGroupInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES : {
			VkPhysicalDeviceGroupProperties const *  obj = BitCast<VkPhysicalDeviceGroupProperties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceGroupProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceGroupProperties  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceGroupProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO : {
			VkDeviceGroupDeviceCreateInfo const *  obj = BitCast<VkDeviceGroupDeviceCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceGroupDeviceCreateInfo"s, "createInfo"s );
			result << indent << "VkDeviceGroupDeviceCreateInfo  " << name << " = {};\n";
			Serialize2_VkDeviceGroupDeviceCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT : {
			VkSamplerReductionModeCreateInfoEXT const *  obj = BitCast<VkSamplerReductionModeCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "samplerReductionModeCreateInfo"s, "createInfo"s );
			result << indent << "VkSamplerReductionModeCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkSamplerReductionModeCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2 : {
			VkBufferMemoryRequirementsInfo2 const *  obj = BitCast<VkBufferMemoryRequirementsInfo2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bufferMemoryRequirementsInfo2"s, "info"s );
			result << indent << "VkBufferMemoryRequirementsInfo2  " << name << " = {};\n";
			Serialize2_VkBufferMemoryRequirementsInfo2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2 : {
			VkImageSparseMemoryRequirementsInfo2 const *  obj = BitCast<VkImageSparseMemoryRequirementsInfo2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageSparseMemoryRequirementsInfo2"s, "info"s );
			result << indent << "VkImageSparseMemoryRequirementsInfo2  " << name << " = {};\n";
			Serialize2_VkImageSparseMemoryRequirementsInfo2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR : {
			VkAttachmentReference2KHR const *  obj = BitCast<VkAttachmentReference2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "attachmentReference2"s );
			result << indent << "VkAttachmentReference2KHR  " << name << " = {};\n";
			Serialize2_VkAttachmentReference2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2 : {
			VkMemoryRequirements2 const *  obj = BitCast<VkMemoryRequirements2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryRequirements2"s, "requirements"s );
			result << indent << "VkMemoryRequirements2  " << name << " = {};\n";
			Serialize2_VkMemoryRequirements2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT : {
			VkDescriptorSetLayoutSupport const *  obj = BitCast<VkDescriptorSetLayoutSupport const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "descriptorSetLayoutSupport"s );
			result << indent << "VkDescriptorSetLayoutSupport  " << name << " = {};\n";
			Serialize2_VkDescriptorSetLayoutSupport( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2 : {
			VkSparseImageMemoryRequirements2 const *  obj = BitCast<VkSparseImageMemoryRequirements2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "sparseImageMemoryRequirements2"s, "requirements"s );
			result << indent << "VkSparseImageMemoryRequirements2  " << name << " = {};\n";
			Serialize2_VkSparseImageMemoryRequirements2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 : {
			VkPhysicalDeviceFeatures2 const *  obj = BitCast<VkPhysicalDeviceFeatures2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceFeatures2"s, "features"s );
			result << indent << "VkPhysicalDeviceFeatures2  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceFeatures2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 : {
			VkPhysicalDeviceProperties2 const *  obj = BitCast<VkPhysicalDeviceProperties2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceProperties2"s, "properties"s );
			result << indent << "VkPhysicalDeviceProperties2  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceProperties2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR : {
			VkRenderPassAttachmentBeginInfoKHR const *  obj = BitCast<VkRenderPassAttachmentBeginInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "renderPassAttachmentBeginInfo"s, "info"s );
			result << indent << "VkRenderPassAttachmentBeginInfoKHR  " << name << " = {};\n";
			Serialize2_VkRenderPassAttachmentBeginInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2 : {
			VkFormatProperties2 const *  obj = BitCast<VkFormatProperties2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "formatProperties2"s, "properties"s );
			result << indent << "VkFormatProperties2  " << name << " = {};\n";
			Serialize2_VkFormatProperties2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2 : {
			VkImageFormatProperties2 const *  obj = BitCast<VkImageFormatProperties2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageFormatProperties2"s, "properties"s );
			result << indent << "VkImageFormatProperties2  " << name << " = {};\n";
			Serialize2_VkImageFormatProperties2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2 : {
			VkQueueFamilyProperties2 const *  obj = BitCast<VkQueueFamilyProperties2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "queueFamilyProperties2"s, "properties"s );
			result << indent << "VkQueueFamilyProperties2  " << name << " = {};\n";
			Serialize2_VkQueueFamilyProperties2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2 : {
			VkPhysicalDeviceMemoryProperties2 const *  obj = BitCast<VkPhysicalDeviceMemoryProperties2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceMemoryProperties2"s, "properties"s );
			result << indent << "VkPhysicalDeviceMemoryProperties2  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceMemoryProperties2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2 : {
			VkSparseImageFormatProperties2 const *  obj = BitCast<VkSparseImageFormatProperties2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "sparseImageFormatProperties2"s, "properties"s );
			result << indent << "VkSparseImageFormatProperties2  " << name << " = {};\n";
			Serialize2_VkSparseImageFormatProperties2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2 : {
			VkPhysicalDeviceSparseImageFormatInfo2 const *  obj = BitCast<VkPhysicalDeviceSparseImageFormatInfo2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceSparseImageFormatInfo2"s, "info"s );
			result << indent << "VkPhysicalDeviceSparseImageFormatInfo2  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceSparseImageFormatInfo2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT : {
			VkPhysicalDeviceASTCDecodeFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceASTCDecodeFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceASTCDecodeFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceASTCDecodeFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceASTCDecodeFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO : {
			VkRenderPassInputAttachmentAspectCreateInfo const *  obj = BitCast<VkRenderPassInputAttachmentAspectCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "renderPassInputAttachmentAspectCreateInfo"s, "createInfo"s );
			result << indent << "VkRenderPassInputAttachmentAspectCreateInfo  " << name << " = {};\n";
			Serialize2_VkRenderPassInputAttachmentAspectCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO : {
			VkImageViewUsageCreateInfo const *  obj = BitCast<VkImageViewUsageCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageViewUsageCreateInfo"s, "createInfo"s );
			result << indent << "VkImageViewUsageCreateInfo  " << name << " = {};\n";
			Serialize2_VkImageViewUsageCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO : {
			VkRenderPassMultiviewCreateInfo const *  obj = BitCast<VkRenderPassMultiviewCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "renderPassMultiviewCreateInfo"s, "createInfo"s );
			result << indent << "VkRenderPassMultiviewCreateInfo  " << name << " = {};\n";
			Serialize2_VkRenderPassMultiviewCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT : {
			VkFilterCubicImageViewImageFormatPropertiesEXT const *  obj = BitCast<VkFilterCubicImageViewImageFormatPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "filterCubicImageViewImageFormatProperties"s, "properties"s );
			result << indent << "VkFilterCubicImageViewImageFormatPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkFilterCubicImageViewImageFormatPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES : {
			VkPhysicalDeviceMultiviewFeatures const *  obj = BitCast<VkPhysicalDeviceMultiviewFeatures const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceMultiviewFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceMultiviewFeatures  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceMultiviewFeatures( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR : {
			VkDisplayModeCreateInfoKHR const *  obj = BitCast<VkDisplayModeCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "displayModeCreateInfo"s, "createInfo"s );
			result << indent << "VkDisplayModeCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkDisplayModeCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES : {
			VkPhysicalDeviceMultiviewProperties const *  obj = BitCast<VkPhysicalDeviceMultiviewProperties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceMultiviewProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceMultiviewProperties  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceMultiviewProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR : {
			VkDisplayProperties2KHR const *  obj = BitCast<VkDisplayProperties2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "displayProperties2"s, "properties"s );
			result << indent << "VkDisplayProperties2KHR  " << name << " = {};\n";
			Serialize2_VkDisplayProperties2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES : {
			VkPhysicalDeviceVariablePointersFeatures const *  obj = BitCast<VkPhysicalDeviceVariablePointersFeatures const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceVariablePointersFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceVariablePointersFeatures  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceVariablePointersFeatures( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES : {
			VkPhysicalDeviceProtectedMemoryFeatures const *  obj = BitCast<VkPhysicalDeviceProtectedMemoryFeatures const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceProtectedMemoryFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceProtectedMemoryFeatures  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceProtectedMemoryFeatures( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT : {
			VkRenderPassSampleLocationsBeginInfoEXT const *  obj = BitCast<VkRenderPassSampleLocationsBeginInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "renderPassSampleLocationsBeginInfo"s, "info"s );
			result << indent << "VkRenderPassSampleLocationsBeginInfoEXT  " << name << " = {};\n";
			Serialize2_VkRenderPassSampleLocationsBeginInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2 : {
			VkDeviceQueueInfo2 const *  obj = BitCast<VkDeviceQueueInfo2 const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceQueueInfo2"s, "info"s );
			result << indent << "VkDeviceQueueInfo2  " << name << " = {};\n";
			Serialize2_VkDeviceQueueInfo2( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO : {
			VkProtectedSubmitInfo const *  obj = BitCast<VkProtectedSubmitInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "protectedSubmitInfo"s, "info"s );
			result << indent << "VkProtectedSubmitInfo  " << name << " = {};\n";
			Serialize2_VkProtectedSubmitInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO : {
			VkSamplerYcbcrConversionCreateInfo const *  obj = BitCast<VkSamplerYcbcrConversionCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "samplerYcbcrConversionCreateInfo"s, "createInfo"s );
			result << indent << "VkSamplerYcbcrConversionCreateInfo  " << name << " = {};\n";
			Serialize2_VkSamplerYcbcrConversionCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO : {
			VkBindImagePlaneMemoryInfo const *  obj = BitCast<VkBindImagePlaneMemoryInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bindImagePlaneMemoryInfo"s, "info"s );
			result << indent << "VkBindImagePlaneMemoryInfo  " << name << " = {};\n";
			Serialize2_VkBindImagePlaneMemoryInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV : {
			VkPhysicalDeviceCooperativeMatrixPropertiesNV const *  obj = BitCast<VkPhysicalDeviceCooperativeMatrixPropertiesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceCooperativeMatrixPropertiesNV"s, "properties"s );
			result << indent << "VkPhysicalDeviceCooperativeMatrixPropertiesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceCooperativeMatrixPropertiesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO : {
			VkImagePlaneMemoryRequirementsInfo const *  obj = BitCast<VkImagePlaneMemoryRequirementsInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imagePlaneMemoryRequirementsInfo"s, "info"s );
			result << indent << "VkImagePlaneMemoryRequirementsInfo  " << name << " = {};\n";
			Serialize2_VkImagePlaneMemoryRequirementsInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT : {
			VkPhysicalDeviceFragmentDensityMapPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceFragmentDensityMapPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceFragmentDensityMapProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceFragmentDensityMapPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceFragmentDensityMapPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES : {
			VkPhysicalDeviceSamplerYcbcrConversionFeatures const *  obj = BitCast<VkPhysicalDeviceSamplerYcbcrConversionFeatures const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceSamplerYcbcrConversionFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceSamplerYcbcrConversionFeatures  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceSamplerYcbcrConversionFeatures( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES : {
			VkSamplerYcbcrConversionImageFormatProperties const *  obj = BitCast<VkSamplerYcbcrConversionImageFormatProperties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "samplerYcbcrConversionImageFormatProperties"s, "properties"s );
			result << indent << "VkSamplerYcbcrConversionImageFormatProperties  " << name << " = {};\n";
			Serialize2_VkSamplerYcbcrConversionImageFormatProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO : {
			VkDescriptorUpdateTemplateCreateInfo const *  obj = BitCast<VkDescriptorUpdateTemplateCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "descriptorUpdateTemplateCreateInfo"s, "createInfo"s );
			result << indent << "VkDescriptorUpdateTemplateCreateInfo  " << name << " = {};\n";
			Serialize2_VkDescriptorUpdateTemplateCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO : {
			VkPhysicalDeviceExternalImageFormatInfo const *  obj = BitCast<VkPhysicalDeviceExternalImageFormatInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceExternalImageFormatInfo"s, "info"s );
			result << indent << "VkPhysicalDeviceExternalImageFormatInfo  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceExternalImageFormatInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES : {
			VkExternalBufferProperties const *  obj = BitCast<VkExternalBufferProperties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "externalBufferProperties"s, "properties"s );
			result << indent << "VkExternalBufferProperties  " << name << " = {};\n";
			Serialize2_VkExternalBufferProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT : {
			VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceBlendOperationAdvancedProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES : {
			VkPhysicalDeviceIDProperties const *  obj = BitCast<VkPhysicalDeviceIDProperties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceIDProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceIDProperties  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceIDProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO : {
			VkExternalMemoryImageCreateInfo const *  obj = BitCast<VkExternalMemoryImageCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "externalMemoryImageCreateInfo"s, "createInfo"s );
			result << indent << "VkExternalMemoryImageCreateInfo  " << name << " = {};\n";
			Serialize2_VkExternalMemoryImageCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV : {
			VkGeometryAABBNV const *  obj = BitCast<VkGeometryAABBNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "geometryAABBNV"s );
			result << indent << "VkGeometryAABBNV  " << name << " = {};\n";
			Serialize2_VkGeometryAABBNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV : {
			VkPhysicalDeviceCornerSampledImageFeaturesNV const *  obj = BitCast<VkPhysicalDeviceCornerSampledImageFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceCornerSampledImageFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceCornerSampledImageFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceCornerSampledImageFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO : {
			VkExportMemoryAllocateInfo const *  obj = BitCast<VkExportMemoryAllocateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "exportMemoryAllocateInfo"s, "info"s );
			result << indent << "VkExportMemoryAllocateInfo  " << name << " = {};\n";
			Serialize2_VkExportMemoryAllocateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV : {
			VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const *  obj = BitCast<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceRepresentativeFragmentTestFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO : {
			VkPhysicalDeviceExternalFenceInfo const *  obj = BitCast<VkPhysicalDeviceExternalFenceInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceExternalFenceInfo"s, "info"s );
			result << indent << "VkPhysicalDeviceExternalFenceInfo  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceExternalFenceInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkExportMemoryWin32HandleInfoKHR const *  obj = BitCast<VkExportMemoryWin32HandleInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "exportMemoryWin32HandleInfo"s, "info"s );
			result << indent << "VkExportMemoryWin32HandleInfoKHR  " << name << " = {};\n";
			Serialize2_VkExportMemoryWin32HandleInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD : {
			VkPhysicalDeviceCoherentMemoryFeaturesAMD const *  obj = BitCast<VkPhysicalDeviceCoherentMemoryFeaturesAMD const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceCoherentMemoryFeaturesAMD"s, "features"s );
			result << indent << "VkPhysicalDeviceCoherentMemoryFeaturesAMD  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceCoherentMemoryFeaturesAMD( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES : {
			VkExternalFenceProperties const *  obj = BitCast<VkExternalFenceProperties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "externalFenceProperties"s, "properties"s );
			result << indent << "VkExternalFenceProperties  " << name << " = {};\n";
			Serialize2_VkExternalFenceProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT : {
			VkPipelineRasterizationLineStateCreateInfoEXT const *  obj = BitCast<VkPipelineRasterizationLineStateCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineRasterizationLineStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineRasterizationLineStateCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkPipelineRasterizationLineStateCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO : {
			VkExportFenceCreateInfo const *  obj = BitCast<VkExportFenceCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "exportFenceCreateInfo"s, "createInfo"s );
			result << indent << "VkExportFenceCreateInfo  " << name << " = {};\n";
			Serialize2_VkExportFenceCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL : {
			VkPerformanceMarkerInfoINTEL const *  obj = BitCast<VkPerformanceMarkerInfoINTEL const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "performanceMarkerInfoINTEL"s, "info"s );
			result << indent << "VkPerformanceMarkerInfoINTEL  " << name << " = {};\n";
			Serialize2_VkPerformanceMarkerInfoINTEL( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO : {
			VkExportSemaphoreCreateInfo const *  obj = BitCast<VkExportSemaphoreCreateInfo const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "exportSemaphoreCreateInfo"s, "createInfo"s );
			result << indent << "VkExportSemaphoreCreateInfo  " << name << " = {};\n";
			Serialize2_VkExportSemaphoreCreateInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV : {
			VkExportMemoryAllocateInfoNV const *  obj = BitCast<VkExportMemoryAllocateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "exportMemoryAllocateInfoNV"s, "info"s );
			result << indent << "VkExportMemoryAllocateInfoNV  " << name << " = {};\n";
			Serialize2_VkExportMemoryAllocateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES : {
			VkExternalSemaphoreProperties const *  obj = BitCast<VkExternalSemaphoreProperties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "externalSemaphoreProperties"s, "properties"s );
			result << indent << "VkExternalSemaphoreProperties  " << name << " = {};\n";
			Serialize2_VkExternalSemaphoreProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES : {
			VkPhysicalDeviceMaintenance3Properties const *  obj = BitCast<VkPhysicalDeviceMaintenance3Properties const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceMaintenance3Properties"s, "properties"s );
			result << indent << "VkPhysicalDeviceMaintenance3Properties  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceMaintenance3Properties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES : {
			VkPhysicalDeviceShaderDrawParametersFeatures const *  obj = BitCast<VkPhysicalDeviceShaderDrawParametersFeatures const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShaderDrawParametersFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceShaderDrawParametersFeatures  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShaderDrawParametersFeatures( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT : {
			VkPhysicalDeviceConditionalRenderingFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceConditionalRenderingFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceConditionalRenderingFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceConditionalRenderingFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceConditionalRenderingFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR : {
			VkImportMemoryFdInfoKHR const *  obj = BitCast<VkImportMemoryFdInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "importMemoryFdInfo"s, "info"s );
			result << indent << "VkImportMemoryFdInfoKHR  " << name << " = {};\n";
			Serialize2_VkImportMemoryFdInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR : {
			VkSwapchainCreateInfoKHR const *  obj = BitCast<VkSwapchainCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "swapchainCreateInfo"s, "createInfo"s );
			result << indent << "VkSwapchainCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkSwapchainCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR : {
			VkPresentInfoKHR const *  obj = BitCast<VkPresentInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "presentInfo"s, "info"s );
			result << indent << "VkPresentInfoKHR  " << name << " = {};\n";
			Serialize2_VkPresentInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR : {
			VkImageSwapchainCreateInfoKHR const *  obj = BitCast<VkImageSwapchainCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageSwapchainCreateInfo"s, "createInfo"s );
			result << indent << "VkImageSwapchainCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkImageSwapchainCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR : {
			VkBindImageMemorySwapchainInfoKHR const *  obj = BitCast<VkBindImageMemorySwapchainInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bindImageMemorySwapchainInfo"s, "info"s );
			result << indent << "VkBindImageMemorySwapchainInfoKHR  " << name << " = {};\n";
			Serialize2_VkBindImageMemorySwapchainInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR : {
			VkDeviceGroupPresentCapabilitiesKHR const *  obj = BitCast<VkDeviceGroupPresentCapabilitiesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceGroupPresentCapabilities"s );
			result << indent << "VkDeviceGroupPresentCapabilitiesKHR  " << name << " = {};\n";
			Serialize2_VkDeviceGroupPresentCapabilitiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV : {
			#ifdef VULKAN_WIN32_H_
			VkWin32KeyedMutexAcquireReleaseInfoNV const *  obj = BitCast<VkWin32KeyedMutexAcquireReleaseInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "win32KeyedMutexAcquireReleaseInfoNV"s, "info"s );
			result << indent << "VkWin32KeyedMutexAcquireReleaseInfoNV  " << name << " = {};\n";
			Serialize2_VkWin32KeyedMutexAcquireReleaseInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR : {
			VkDeviceGroupPresentInfoKHR const *  obj = BitCast<VkDeviceGroupPresentInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceGroupPresentInfo"s, "info"s );
			result << indent << "VkDeviceGroupPresentInfoKHR  " << name << " = {};\n";
			Serialize2_VkDeviceGroupPresentInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR : {
			VkDeviceGroupSwapchainCreateInfoKHR const *  obj = BitCast<VkDeviceGroupSwapchainCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceGroupSwapchainCreateInfo"s, "createInfo"s );
			result << indent << "VkDeviceGroupSwapchainCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkDeviceGroupSwapchainCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR : {
			VkDisplaySurfaceCreateInfoKHR const *  obj = BitCast<VkDisplaySurfaceCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "displaySurfaceCreateInfo"s, "createInfo"s );
			result << indent << "VkDisplaySurfaceCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkDisplaySurfaceCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR : {
			#ifdef VULKAN_XCB_H_
			VkXcbSurfaceCreateInfoKHR const *  obj = BitCast<VkXcbSurfaceCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "xcbSurfaceCreateInfo"s, "createInfo"s );
			result << indent << "VkXcbSurfaceCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkXcbSurfaceCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR : {
			VkMemoryFdPropertiesKHR const *  obj = BitCast<VkMemoryFdPropertiesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryFdProperties"s, "properties"s );
			result << indent << "VkMemoryFdPropertiesKHR  " << name << " = {};\n";
			Serialize2_VkMemoryFdPropertiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR : {
			VkMemoryGetFdInfoKHR const *  obj = BitCast<VkMemoryGetFdInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryGetFdInfo"s, "info"s );
			result << indent << "VkMemoryGetFdInfoKHR  " << name << " = {};\n";
			Serialize2_VkMemoryGetFdInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR : {
			VkImportSemaphoreFdInfoKHR const *  obj = BitCast<VkImportSemaphoreFdInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "importSemaphoreFdInfo"s, "info"s );
			result << indent << "VkImportSemaphoreFdInfoKHR  " << name << " = {};\n";
			Serialize2_VkImportSemaphoreFdInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR : {
			VkSemaphoreGetFdInfoKHR const *  obj = BitCast<VkSemaphoreGetFdInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "semaphoreGetFdInfo"s, "info"s );
			result << indent << "VkSemaphoreGetFdInfoKHR  " << name << " = {};\n";
			Serialize2_VkSemaphoreGetFdInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR : {
			VkPhysicalDevicePushDescriptorPropertiesKHR const *  obj = BitCast<VkPhysicalDevicePushDescriptorPropertiesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDevicePushDescriptorProperties"s, "properties"s );
			result << indent << "VkPhysicalDevicePushDescriptorPropertiesKHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDevicePushDescriptorPropertiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT : {
			VkPipelineColorBlendAdvancedStateCreateInfoEXT const *  obj = BitCast<VkPipelineColorBlendAdvancedStateCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineColorBlendAdvancedStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineColorBlendAdvancedStateCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkPipelineColorBlendAdvancedStateCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR : {
			VkPresentRegionsKHR const *  obj = BitCast<VkPresentRegionsKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "presentRegions"s );
			result << indent << "VkPresentRegionsKHR  " << name << " = {};\n";
			Serialize2_VkPresentRegionsKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkImportMemoryWin32HandleInfoKHR const *  obj = BitCast<VkImportMemoryWin32HandleInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "importMemoryWin32HandleInfo"s, "info"s );
			result << indent << "VkImportMemoryWin32HandleInfoKHR  " << name << " = {};\n";
			Serialize2_VkImportMemoryWin32HandleInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR : {
			VkFramebufferAttachmentImageInfoKHR const *  obj = BitCast<VkFramebufferAttachmentImageInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "framebufferAttachmentImageInfo"s, "info"s );
			result << indent << "VkFramebufferAttachmentImageInfoKHR  " << name << " = {};\n";
			Serialize2_VkFramebufferAttachmentImageInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR : {
			VkAttachmentDescription2KHR const *  obj = BitCast<VkAttachmentDescription2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "attachmentDescription2"s );
			result << indent << "VkAttachmentDescription2KHR  " << name << " = {};\n";
			Serialize2_VkAttachmentDescription2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR : {
			VkSubpassDescription2KHR const *  obj = BitCast<VkSubpassDescription2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "subpassDescription2"s );
			result << indent << "VkSubpassDescription2KHR  " << name << " = {};\n";
			Serialize2_VkSubpassDescription2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR : {
			VkSubpassDependency2KHR const *  obj = BitCast<VkSubpassDependency2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "subpassDependency2"s );
			result << indent << "VkSubpassDependency2KHR  " << name << " = {};\n";
			Serialize2_VkSubpassDependency2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT : {
			VkPhysicalDeviceSubgroupSizeControlPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceSubgroupSizeControlProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceSubgroupSizeControlPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV : {
			VkQueueFamilyCheckpointPropertiesNV const *  obj = BitCast<VkQueueFamilyCheckpointPropertiesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "queueFamilyCheckpointPropertiesNV"s, "properties"s );
			result << indent << "VkQueueFamilyCheckpointPropertiesNV  " << name << " = {};\n";
			Serialize2_VkQueueFamilyCheckpointPropertiesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR : {
			VkRenderPassCreateInfo2KHR const *  obj = BitCast<VkRenderPassCreateInfo2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "renderPassCreateInfo2"s, "createInfo"s );
			result << indent << "VkRenderPassCreateInfo2KHR  " << name << " = {};\n";
			Serialize2_VkRenderPassCreateInfo2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR : {
			VkSubpassBeginInfoKHR const *  obj = BitCast<VkSubpassBeginInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "subpassBeginInfo"s, "info"s );
			result << indent << "VkSubpassBeginInfoKHR  " << name << " = {};\n";
			Serialize2_VkSubpassBeginInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT : {
			VkPhysicalDeviceHostQueryResetFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceHostQueryResetFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceHostQueryResetFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceHostQueryResetFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceHostQueryResetFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR : {
			VkSharedPresentSurfaceCapabilitiesKHR const *  obj = BitCast<VkSharedPresentSurfaceCapabilitiesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "sharedPresentSurfaceCapabilities"s );
			result << indent << "VkSharedPresentSurfaceCapabilitiesKHR  " << name << " = {};\n";
			Serialize2_VkSharedPresentSurfaceCapabilitiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT : {
			VkSurfaceCapabilities2EXT const *  obj = BitCast<VkSurfaceCapabilities2EXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "surfaceCapabilities2"s );
			result << indent << "VkSurfaceCapabilities2EXT  " << name << " = {};\n";
			Serialize2_VkSurfaceCapabilities2EXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR : {
			VkFenceGetFdInfoKHR const *  obj = BitCast<VkFenceGetFdInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "fenceGetFdInfo"s, "info"s );
			result << indent << "VkFenceGetFdInfoKHR  " << name << " = {};\n";
			Serialize2_VkFenceGetFdInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR : {
			VkPhysicalDeviceSurfaceInfo2KHR const *  obj = BitCast<VkPhysicalDeviceSurfaceInfo2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceSurfaceInfo2"s, "info"s );
			result << indent << "VkPhysicalDeviceSurfaceInfo2KHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceSurfaceInfo2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR : {
			VkSurfaceCapabilities2KHR const *  obj = BitCast<VkSurfaceCapabilities2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "surfaceCapabilities2"s );
			result << indent << "VkSurfaceCapabilities2KHR  " << name << " = {};\n";
			Serialize2_VkSurfaceCapabilities2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR : {
			VkSurfaceFormat2KHR const *  obj = BitCast<VkSurfaceFormat2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "surfaceFormat2"s );
			result << indent << "VkSurfaceFormat2KHR  " << name << " = {};\n";
			Serialize2_VkSurfaceFormat2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkImportSemaphoreWin32HandleInfoKHR const *  obj = BitCast<VkImportSemaphoreWin32HandleInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "importSemaphoreWin32HandleInfo"s, "info"s );
			result << indent << "VkImportSemaphoreWin32HandleInfoKHR  " << name << " = {};\n";
			Serialize2_VkImportSemaphoreWin32HandleInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR : {
			VkDisplayModeProperties2KHR const *  obj = BitCast<VkDisplayModeProperties2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "displayModeProperties2"s, "properties"s );
			result << indent << "VkDisplayModeProperties2KHR  " << name << " = {};\n";
			Serialize2_VkDisplayModeProperties2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR : {
			VkDisplayPlaneCapabilities2KHR const *  obj = BitCast<VkDisplayPlaneCapabilities2KHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "displayPlaneCapabilities2"s );
			result << indent << "VkDisplayPlaneCapabilities2KHR  " << name << " = {};\n";
			Serialize2_VkDisplayPlaneCapabilities2KHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT : {
			VkDescriptorSetVariableDescriptorCountAllocateInfoEXT const *  obj = BitCast<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "descriptorSetVariableDescriptorCountAllocateInfo"s, "info"s );
			result << indent << "VkDescriptorSetVariableDescriptorCountAllocateInfoEXT  " << name << " = {};\n";
			Serialize2_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR : {
			VkPhysicalDevice8BitStorageFeaturesKHR const *  obj = BitCast<VkPhysicalDevice8BitStorageFeaturesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDevice8BitStorageFeatures"s, "features"s );
			result << indent << "VkPhysicalDevice8BitStorageFeaturesKHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDevice8BitStorageFeaturesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL : {
			VkInitializePerformanceApiInfoINTEL const *  obj = BitCast<VkInitializePerformanceApiInfoINTEL const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "initializePerformanceApiInfoINTEL"s, "info"s );
			result << indent << "VkInitializePerformanceApiInfoINTEL  " << name << " = {};\n";
			Serialize2_VkInitializePerformanceApiInfoINTEL( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR : {
			VkPhysicalDeviceShaderAtomicInt64FeaturesKHR const *  obj = BitCast<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShaderAtomicInt64Features"s, "features"s );
			result << indent << "VkPhysicalDeviceShaderAtomicInt64FeaturesKHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID : {
			#ifdef VULKAN_ANDROID_H_
			VkExternalFormatANDROID const *  obj = BitCast<VkExternalFormatANDROID const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "externalFormatANDROID"s );
			result << indent << "VkExternalFormatANDROID  " << name << " = {};\n";
			Serialize2_VkExternalFormatANDROID( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV : {
			VkDedicatedAllocationMemoryAllocateInfoNV const *  obj = BitCast<VkDedicatedAllocationMemoryAllocateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "dedicatedAllocationMemoryAllocateInfoNV"s, "info"s );
			result << indent << "VkDedicatedAllocationMemoryAllocateInfoNV  " << name << " = {};\n";
			Serialize2_VkDedicatedAllocationMemoryAllocateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR : {
			VkPhysicalDeviceDriverPropertiesKHR const *  obj = BitCast<VkPhysicalDeviceDriverPropertiesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceDriverProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceDriverPropertiesKHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceDriverPropertiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR : {
			VkPhysicalDeviceFloatControlsPropertiesKHR const *  obj = BitCast<VkPhysicalDeviceFloatControlsPropertiesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceFloatControlsProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceFloatControlsPropertiesKHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceFloatControlsPropertiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT : {
			VkPhysicalDeviceMemoryBudgetPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceMemoryBudgetPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceMemoryBudgetProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceMemoryBudgetPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceMemoryBudgetPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR : {
			VkSubpassDescriptionDepthStencilResolveKHR const *  obj = BitCast<VkSubpassDescriptionDepthStencilResolveKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "subpassDescriptionDepthStencilResolve"s );
			result << indent << "VkSubpassDescriptionDepthStencilResolveKHR  " << name << " = {};\n";
			Serialize2_VkSubpassDescriptionDepthStencilResolveKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR : {
			VkPhysicalDeviceDepthStencilResolvePropertiesKHR const *  obj = BitCast<VkPhysicalDeviceDepthStencilResolvePropertiesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceDepthStencilResolveProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceDepthStencilResolvePropertiesKHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceDepthStencilResolvePropertiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR : {
			VkPhysicalDeviceVulkanMemoryModelFeaturesKHR const *  obj = BitCast<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceVulkanMemoryModelFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceVulkanMemoryModelFeaturesKHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR : {
			VkSurfaceProtectedCapabilitiesKHR const *  obj = BitCast<VkSurfaceProtectedCapabilitiesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "surfaceProtectedCapabilities"s );
			result << indent << "VkSurfaceProtectedCapabilitiesKHR  " << name << " = {};\n";
			Serialize2_VkSurfaceProtectedCapabilitiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR : {
			VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR const *  obj = BitCast<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceUniformBufferStandardLayoutFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV : {
			VkPhysicalDeviceCoverageReductionModeFeaturesNV const *  obj = BitCast<VkPhysicalDeviceCoverageReductionModeFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceCoverageReductionModeFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceCoverageReductionModeFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceCoverageReductionModeFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT : {
			VkRenderPassFragmentDensityMapCreateInfoEXT const *  obj = BitCast<VkRenderPassFragmentDensityMapCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "renderPassFragmentDensityMapCreateInfo"s, "createInfo"s );
			result << indent << "VkRenderPassFragmentDensityMapCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkRenderPassFragmentDensityMapCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV : {
			VkAccelerationStructureMemoryRequirementsInfoNV const *  obj = BitCast<VkAccelerationStructureMemoryRequirementsInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "accelerationStructureMemoryRequirementsInfoNV"s, "info"s );
			result << indent << "VkAccelerationStructureMemoryRequirementsInfoNV  " << name << " = {};\n";
			Serialize2_VkAccelerationStructureMemoryRequirementsInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR : {
			VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR const *  obj = BitCast<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDevicePipelineExecutablePropertiesFeatures"s, "properties"s );
			result << indent << "VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR  " << name << " = {};\n";
			Serialize2_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR : {
			VkPipelineExecutablePropertiesKHR const *  obj = BitCast<VkPipelineExecutablePropertiesKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineExecutableProperties"s, "properties"s );
			result << indent << "VkPipelineExecutablePropertiesKHR  " << name << " = {};\n";
			Serialize2_VkPipelineExecutablePropertiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT : {
			VkDebugUtilsObjectTagInfoEXT const *  obj = BitCast<VkDebugUtilsObjectTagInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "debugUtilsObjectTagInfo"s, "info"s );
			result << indent << "VkDebugUtilsObjectTagInfoEXT  " << name << " = {};\n";
			Serialize2_VkDebugUtilsObjectTagInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT : {
			VkDebugReportCallbackCreateInfoEXT const *  obj = BitCast<VkDebugReportCallbackCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "debugReportCallbackCreateInfo"s, "createInfo"s );
			result << indent << "VkDebugReportCallbackCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkDebugReportCallbackCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT : {
			VkPipelineCreationFeedbackCreateInfoEXT const *  obj = BitCast<VkPipelineCreationFeedbackCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineCreationFeedbackCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineCreationFeedbackCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkPipelineCreationFeedbackCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD : {
			VkPipelineRasterizationStateRasterizationOrderAMD const *  obj = BitCast<VkPipelineRasterizationStateRasterizationOrderAMD const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineRasterizationStateRasterizationOrderAMD"s );
			result << indent << "VkPipelineRasterizationStateRasterizationOrderAMD  " << name << " = {};\n";
			Serialize2_VkPipelineRasterizationStateRasterizationOrderAMD( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT : {
			VkDebugMarkerObjectNameInfoEXT const *  obj = BitCast<VkDebugMarkerObjectNameInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "debugMarkerObjectNameInfo"s, "info"s );
			result << indent << "VkDebugMarkerObjectNameInfoEXT  " << name << " = {};\n";
			Serialize2_VkDebugMarkerObjectNameInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT : {
			VkDebugMarkerObjectTagInfoEXT const *  obj = BitCast<VkDebugMarkerObjectTagInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "debugMarkerObjectTagInfo"s, "info"s );
			result << indent << "VkDebugMarkerObjectTagInfoEXT  " << name << " = {};\n";
			Serialize2_VkDebugMarkerObjectTagInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT : {
			VkDebugMarkerMarkerInfoEXT const *  obj = BitCast<VkDebugMarkerMarkerInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "debugMarkerMarkerInfo"s, "info"s );
			result << indent << "VkDebugMarkerMarkerInfoEXT  " << name << " = {};\n";
			Serialize2_VkDebugMarkerMarkerInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV : {
			VkDedicatedAllocationImageCreateInfoNV const *  obj = BitCast<VkDedicatedAllocationImageCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "dedicatedAllocationImageCreateInfoNV"s, "createInfo"s );
			result << indent << "VkDedicatedAllocationImageCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkDedicatedAllocationImageCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV : {
			VkDedicatedAllocationBufferCreateInfoNV const *  obj = BitCast<VkDedicatedAllocationBufferCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "dedicatedAllocationBufferCreateInfoNV"s, "createInfo"s );
			result << indent << "VkDedicatedAllocationBufferCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkDedicatedAllocationBufferCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT : {
			VkPhysicalDeviceTransformFeedbackPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceTransformFeedbackPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceTransformFeedbackProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceTransformFeedbackPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceTransformFeedbackPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT : {
			VkPhysicalDeviceIndexTypeUint8FeaturesEXT const *  obj = BitCast<VkPhysicalDeviceIndexTypeUint8FeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceIndexTypeUint8Features"s, "features"s );
			result << indent << "VkPhysicalDeviceIndexTypeUint8FeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceIndexTypeUint8FeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT : {
			VkShaderModuleValidationCacheCreateInfoEXT const *  obj = BitCast<VkShaderModuleValidationCacheCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "shaderModuleValidationCacheCreateInfo"s, "createInfo"s );
			result << indent << "VkShaderModuleValidationCacheCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkShaderModuleValidationCacheCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT : {
			VkPhysicalDeviceConservativeRasterizationPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceConservativeRasterizationProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceConservativeRasterizationPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceConservativeRasterizationPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD : {
			VkTextureLODGatherFormatPropertiesAMD const *  obj = BitCast<VkTextureLODGatherFormatPropertiesAMD const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "textureLODGatherFormatPropertiesAMD"s, "properties"s );
			result << indent << "VkTextureLODGatherFormatPropertiesAMD  " << name << " = {};\n";
			Serialize2_VkTextureLODGatherFormatPropertiesAMD( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL : {
			VkQueryPoolCreateInfoINTEL const *  obj = BitCast<VkQueryPoolCreateInfoINTEL const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "queryPoolCreateInfoINTEL"s, "createInfo"s );
			result << indent << "VkQueryPoolCreateInfoINTEL  " << name << " = {};\n";
			Serialize2_VkQueryPoolCreateInfoINTEL( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD : {
			VkDisplayNativeHdrSurfaceCapabilitiesAMD const *  obj = BitCast<VkDisplayNativeHdrSurfaceCapabilitiesAMD const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "displayNativeHdrSurfaceCapabilitiesAMD"s );
			result << indent << "VkDisplayNativeHdrSurfaceCapabilitiesAMD  " << name << " = {};\n";
			Serialize2_VkDisplayNativeHdrSurfaceCapabilitiesAMD( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV : {
			VkExternalMemoryImageCreateInfoNV const *  obj = BitCast<VkExternalMemoryImageCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "externalMemoryImageCreateInfoNV"s, "createInfo"s );
			result << indent << "VkExternalMemoryImageCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkExternalMemoryImageCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT : {
			VkValidationFlagsEXT const *  obj = BitCast<VkValidationFlagsEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "validationFlags"s );
			result << indent << "VkValidationFlagsEXT  " << name << " = {};\n";
			Serialize2_VkValidationFlagsEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT : {
			VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceTextureCompressionASTCHDRFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT : {
			VkImageViewASTCDecodeModeEXT const *  obj = BitCast<VkImageViewASTCDecodeModeEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageViewASTCDecodeMode"s );
			result << indent << "VkImageViewASTCDecodeModeEXT  " << name << " = {};\n";
			Serialize2_VkImageViewASTCDecodeModeEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT : {
			VkConditionalRenderingBeginInfoEXT const *  obj = BitCast<VkConditionalRenderingBeginInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "conditionalRenderingBeginInfo"s, "info"s );
			result << indent << "VkConditionalRenderingBeginInfoEXT  " << name << " = {};\n";
			Serialize2_VkConditionalRenderingBeginInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkD3D12FenceSubmitInfoKHR const *  obj = BitCast<VkD3D12FenceSubmitInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "d3D12FenceSubmitInfo"s, "info"s );
			result << indent << "VkD3D12FenceSubmitInfoKHR  " << name << " = {};\n";
			Serialize2_VkD3D12FenceSubmitInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT : {
			VkPhysicalDeviceDiscardRectanglePropertiesEXT const *  obj = BitCast<VkPhysicalDeviceDiscardRectanglePropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceDiscardRectangleProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceDiscardRectanglePropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceDiscardRectanglePropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT : {
			VkCommandBufferInheritanceConditionalRenderingInfoEXT const *  obj = BitCast<VkCommandBufferInheritanceConditionalRenderingInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "commandBufferInheritanceConditionalRenderingInfo"s, "info"s );
			result << indent << "VkCommandBufferInheritanceConditionalRenderingInfoEXT  " << name << " = {};\n";
			Serialize2_VkCommandBufferInheritanceConditionalRenderingInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX : {
			VkIndirectCommandsLayoutCreateInfoNVX const *  obj = BitCast<VkIndirectCommandsLayoutCreateInfoNVX const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "indirectCommandsLayoutCreateInfoNVX"s, "createInfo"s );
			result << indent << "VkIndirectCommandsLayoutCreateInfoNVX  " << name << " = {};\n";
			Serialize2_VkIndirectCommandsLayoutCreateInfoNVX( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT : {
			VkDisplayEventInfoEXT const *  obj = BitCast<VkDisplayEventInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "displayEventInfo"s, "info"s );
			result << indent << "VkDisplayEventInfoEXT  " << name << " = {};\n";
			Serialize2_VkDisplayEventInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX : {
			VkCmdProcessCommandsInfoNVX const *  obj = BitCast<VkCmdProcessCommandsInfoNVX const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "cmdProcessCommandsInfoNVX"s, "info"s );
			result << indent << "VkCmdProcessCommandsInfoNVX  " << name << " = {};\n";
			Serialize2_VkCmdProcessCommandsInfoNVX( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX : {
			VkCmdReserveSpaceForCommandsInfoNVX const *  obj = BitCast<VkCmdReserveSpaceForCommandsInfoNVX const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "cmdReserveSpaceForCommandsInfoNVX"s, "info"s );
			result << indent << "VkCmdReserveSpaceForCommandsInfoNVX  " << name << " = {};\n";
			Serialize2_VkCmdReserveSpaceForCommandsInfoNVX( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX : {
			VkObjectTableCreateInfoNVX const *  obj = BitCast<VkObjectTableCreateInfoNVX const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "objectTableCreateInfoNVX"s, "createInfo"s );
			result << indent << "VkObjectTableCreateInfoNVX  " << name << " = {};\n";
			Serialize2_VkObjectTableCreateInfoNVX( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT : {
			VkHeadlessSurfaceCreateInfoEXT const *  obj = BitCast<VkHeadlessSurfaceCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "headlessSurfaceCreateInfo"s, "createInfo"s );
			result << indent << "VkHeadlessSurfaceCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkHeadlessSurfaceCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV : {
			VkPipelineViewportExclusiveScissorStateCreateInfoNV const *  obj = BitCast<VkPipelineViewportExclusiveScissorStateCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineViewportExclusiveScissorStateCreateInfoNV"s, "createInfo"s );
			result << indent << "VkPipelineViewportExclusiveScissorStateCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkPipelineViewportExclusiveScissorStateCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV : {
			VkPipelineViewportWScalingStateCreateInfoNV const *  obj = BitCast<VkPipelineViewportWScalingStateCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineViewportWScalingStateCreateInfoNV"s, "createInfo"s );
			result << indent << "VkPipelineViewportWScalingStateCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkPipelineViewportWScalingStateCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT : {
			VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceTexelBufferAlignmentFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV : {
			VkPhysicalDeviceExclusiveScissorFeaturesNV const *  obj = BitCast<VkPhysicalDeviceExclusiveScissorFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceExclusiveScissorFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceExclusiveScissorFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceExclusiveScissorFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT : {
			VkDisplayPowerInfoEXT const *  obj = BitCast<VkDisplayPowerInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "displayPowerInfo"s, "info"s );
			result << indent << "VkDisplayPowerInfoEXT  " << name << " = {};\n";
			Serialize2_VkDisplayPowerInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT : {
			VkSwapchainCounterCreateInfoEXT const *  obj = BitCast<VkSwapchainCounterCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "swapchainCounterCreateInfo"s, "createInfo"s );
			result << indent << "VkSwapchainCounterCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkSwapchainCounterCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX : {
			VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX const *  obj = BitCast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceMultiviewPerViewAttributesPropertiesNVX"s, "properties"s );
			result << indent << "VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV : {
			VkPipelineViewportSwizzleStateCreateInfoNV const *  obj = BitCast<VkPipelineViewportSwizzleStateCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineViewportSwizzleStateCreateInfoNV"s, "createInfo"s );
			result << indent << "VkPipelineViewportSwizzleStateCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkPipelineViewportSwizzleStateCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT : {
			VkPipelineDiscardRectangleStateCreateInfoEXT const *  obj = BitCast<VkPipelineDiscardRectangleStateCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineDiscardRectangleStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineDiscardRectangleStateCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkPipelineDiscardRectangleStateCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT : {
			VkPipelineRasterizationConservativeStateCreateInfoEXT const *  obj = BitCast<VkPipelineRasterizationConservativeStateCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineRasterizationConservativeStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineRasterizationConservativeStateCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkPipelineRasterizationConservativeStateCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT : {
			VkPhysicalDeviceDepthClipEnableFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceDepthClipEnableFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceDepthClipEnableFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceDepthClipEnableFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceDepthClipEnableFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT : {
			VkPipelineRasterizationDepthClipStateCreateInfoEXT const *  obj = BitCast<VkPipelineRasterizationDepthClipStateCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineRasterizationDepthClipStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineRasterizationDepthClipStateCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkPipelineRasterizationDepthClipStateCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT : {
			VkDebugUtilsLabelEXT const *  obj = BitCast<VkDebugUtilsLabelEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "debugUtilsLabel"s );
			result << indent << "VkDebugUtilsLabelEXT  " << name << " = {};\n";
			Serialize2_VkDebugUtilsLabelEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT : {
			VkPhysicalDeviceExternalMemoryHostPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceExternalMemoryHostProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceExternalMemoryHostPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceExternalMemoryHostPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT : {
			VkDebugUtilsMessengerCallbackDataEXT const *  obj = BitCast<VkDebugUtilsMessengerCallbackDataEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "debugUtilsMessengerCallbackData"s );
			result << indent << "VkDebugUtilsMessengerCallbackDataEXT  " << name << " = {};\n";
			Serialize2_VkDebugUtilsMessengerCallbackDataEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT : {
			VkDebugUtilsMessengerCreateInfoEXT const *  obj = BitCast<VkDebugUtilsMessengerCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "debugUtilsMessengerCreateInfo"s, "createInfo"s );
			result << indent << "VkDebugUtilsMessengerCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkDebugUtilsMessengerCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT : {
			VkPhysicalDeviceInlineUniformBlockFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceInlineUniformBlockFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceInlineUniformBlockFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceInlineUniformBlockFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceInlineUniformBlockFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT : {
			VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShaderDemoteToHelperInvocationFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT : {
			VkPhysicalDeviceInlineUniformBlockPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceInlineUniformBlockPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceInlineUniformBlockProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceInlineUniformBlockPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceInlineUniformBlockPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT : {
			VkWriteDescriptorSetInlineUniformBlockEXT const *  obj = BitCast<VkWriteDescriptorSetInlineUniformBlockEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "writeDescriptorSetInlineUniformBlock"s );
			result << indent << "VkWriteDescriptorSetInlineUniformBlockEXT  " << name << " = {};\n";
			Serialize2_VkWriteDescriptorSetInlineUniformBlockEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV : {
			VkPipelineViewportShadingRateImageStateCreateInfoNV const *  obj = BitCast<VkPipelineViewportShadingRateImageStateCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineViewportShadingRateImageStateCreateInfoNV"s, "createInfo"s );
			result << indent << "VkPipelineViewportShadingRateImageStateCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkPipelineViewportShadingRateImageStateCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT : {
			VkDescriptorPoolInlineUniformBlockCreateInfoEXT const *  obj = BitCast<VkDescriptorPoolInlineUniformBlockCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "descriptorPoolInlineUniformBlockCreateInfo"s, "createInfo"s );
			result << indent << "VkDescriptorPoolInlineUniformBlockCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkDescriptorPoolInlineUniformBlockCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV : {
			VkPhysicalDeviceShadingRateImageFeaturesNV const *  obj = BitCast<VkPhysicalDeviceShadingRateImageFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShadingRateImageFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceShadingRateImageFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShadingRateImageFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT : {
			VkSampleLocationsInfoEXT const *  obj = BitCast<VkSampleLocationsInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "sampleLocationsInfo"s, "info"s );
			result << indent << "VkSampleLocationsInfoEXT  " << name << " = {};\n";
			Serialize2_VkSampleLocationsInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT : {
			VkPipelineSampleLocationsStateCreateInfoEXT const *  obj = BitCast<VkPipelineSampleLocationsStateCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineSampleLocationsStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineSampleLocationsStateCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkPipelineSampleLocationsStateCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT : {
			VkPhysicalDeviceSampleLocationsPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceSampleLocationsPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceSampleLocationsProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceSampleLocationsPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceSampleLocationsPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT : {
			VkMultisamplePropertiesEXT const *  obj = BitCast<VkMultisamplePropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "multisampleProperties"s, "properties"s );
			result << indent << "VkMultisamplePropertiesEXT  " << name << " = {};\n";
			Serialize2_VkMultisamplePropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT : {
			VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceBlendOperationAdvancedFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV : {
			VkPipelineCoverageModulationStateCreateInfoNV const *  obj = BitCast<VkPipelineCoverageModulationStateCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineCoverageModulationStateCreateInfoNV"s, "createInfo"s );
			result << indent << "VkPipelineCoverageModulationStateCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkPipelineCoverageModulationStateCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV : {
			VkPhysicalDeviceShaderSMBuiltinsPropertiesNV const *  obj = BitCast<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShaderSMBuiltinsPropertiesNV"s, "properties"s );
			result << indent << "VkPhysicalDeviceShaderSMBuiltinsPropertiesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV : {
			VkPhysicalDeviceShaderSMBuiltinsFeaturesNV const *  obj = BitCast<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShaderSMBuiltinsFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceShaderSMBuiltinsFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT : {
			VkDrmFormatModifierPropertiesListEXT const *  obj = BitCast<VkDrmFormatModifierPropertiesListEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "drmFormatModifierPropertiesList"s, "properties"s );
			result << indent << "VkDrmFormatModifierPropertiesListEXT  " << name << " = {};\n";
			Serialize2_VkDrmFormatModifierPropertiesListEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT : {
			VkPhysicalDeviceImageDrmFormatModifierInfoEXT const *  obj = BitCast<VkPhysicalDeviceImageDrmFormatModifierInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceImageDrmFormatModifierInfo"s, "info"s );
			result << indent << "VkPhysicalDeviceImageDrmFormatModifierInfoEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceImageDrmFormatModifierInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT : {
			VkImageDrmFormatModifierListCreateInfoEXT const *  obj = BitCast<VkImageDrmFormatModifierListCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageDrmFormatModifierListCreateInfo"s, "createInfo"s );
			result << indent << "VkImageDrmFormatModifierListCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkImageDrmFormatModifierListCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT : {
			VkImageDrmFormatModifierPropertiesEXT const *  obj = BitCast<VkImageDrmFormatModifierPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageDrmFormatModifierProperties"s, "properties"s );
			result << indent << "VkImageDrmFormatModifierPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkImageDrmFormatModifierPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT : {
			VkPhysicalDeviceDescriptorIndexingFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceDescriptorIndexingFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceDescriptorIndexingFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceDescriptorIndexingFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceDescriptorIndexingFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID : {
			#ifdef VULKAN_ANDROID_H_
			VkAndroidHardwareBufferFormatPropertiesANDROID const *  obj = BitCast<VkAndroidHardwareBufferFormatPropertiesANDROID const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "androidHardwareBufferFormatPropertiesANDROID"s, "properties"s );
			result << indent << "VkAndroidHardwareBufferFormatPropertiesANDROID  " << name << " = {};\n";
			Serialize2_VkAndroidHardwareBufferFormatPropertiesANDROID( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL : {
			VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL const *  obj = BitCast<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShaderIntegerFunctions2FeaturesINTEL"s, "features"s );
			result << indent << "VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT : {
			VkPhysicalDeviceDescriptorIndexingPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceDescriptorIndexingPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceDescriptorIndexingProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceDescriptorIndexingPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceDescriptorIndexingPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV : {
			VkRayTracingShaderGroupCreateInfoNV const *  obj = BitCast<VkRayTracingShaderGroupCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "rayTracingShaderGroupCreateInfoNV"s, "createInfo"s );
			result << indent << "VkRayTracingShaderGroupCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkRayTracingShaderGroupCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV : {
			VkRayTracingPipelineCreateInfoNV const *  obj = BitCast<VkRayTracingPipelineCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "rayTracingPipelineCreateInfoNV"s, "createInfo"s );
			result << indent << "VkRayTracingPipelineCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkRayTracingPipelineCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV : {
			VkPhysicalDeviceCooperativeMatrixFeaturesNV const *  obj = BitCast<VkPhysicalDeviceCooperativeMatrixFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceCooperativeMatrixFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceCooperativeMatrixFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceCooperativeMatrixFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_GEOMETRY_NV : {
			VkGeometryNV const *  obj = BitCast<VkGeometryNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "geometryNV"s );
			result << indent << "VkGeometryNV  " << name << " = {};\n";
			Serialize2_VkGeometryNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV : {
			VkAccelerationStructureCreateInfoNV const *  obj = BitCast<VkAccelerationStructureCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "accelerationStructureCreateInfoNV"s, "createInfo"s );
			result << indent << "VkAccelerationStructureCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkAccelerationStructureCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT : {
			VkValidationFeaturesEXT const *  obj = BitCast<VkValidationFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "validationFeatures"s, "features"s );
			result << indent << "VkValidationFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkValidationFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV : {
			VkBindAccelerationStructureMemoryInfoNV const *  obj = BitCast<VkBindAccelerationStructureMemoryInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "bindAccelerationStructureMemoryInfoNV"s, "info"s );
			result << indent << "VkBindAccelerationStructureMemoryInfoNV  " << name << " = {};\n";
			Serialize2_VkBindAccelerationStructureMemoryInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV : {
			VkWriteDescriptorSetAccelerationStructureNV const *  obj = BitCast<VkWriteDescriptorSetAccelerationStructureNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "writeDescriptorSetAccelerationStructureNV"s );
			result << indent << "VkWriteDescriptorSetAccelerationStructureNV  " << name << " = {};\n";
			Serialize2_VkWriteDescriptorSetAccelerationStructureNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT : {
			VkPhysicalDeviceLineRasterizationPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceLineRasterizationPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceLineRasterizationProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceLineRasterizationPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceLineRasterizationPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV : {
			VkPipelineRepresentativeFragmentTestStateCreateInfoNV const *  obj = BitCast<VkPipelineRepresentativeFragmentTestStateCreateInfoNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineRepresentativeFragmentTestStateCreateInfoNV"s, "createInfo"s );
			result << indent << "VkPipelineRepresentativeFragmentTestStateCreateInfoNV  " << name << " = {};\n";
			Serialize2_VkPipelineRepresentativeFragmentTestStateCreateInfoNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT : {
			VkDeviceQueueGlobalPriorityCreateInfoEXT const *  obj = BitCast<VkDeviceQueueGlobalPriorityCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceQueueGlobalPriorityCreateInfo"s, "createInfo"s );
			result << indent << "VkDeviceQueueGlobalPriorityCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkDeviceQueueGlobalPriorityCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT : {
			VkCalibratedTimestampInfoEXT const *  obj = BitCast<VkCalibratedTimestampInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "calibratedTimestampInfo"s, "info"s );
			result << indent << "VkCalibratedTimestampInfoEXT  " << name << " = {};\n";
			Serialize2_VkCalibratedTimestampInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD : {
			VkPhysicalDeviceShaderCorePropertiesAMD const *  obj = BitCast<VkPhysicalDeviceShaderCorePropertiesAMD const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShaderCorePropertiesAMD"s, "properties"s );
			result << indent << "VkPhysicalDeviceShaderCorePropertiesAMD  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShaderCorePropertiesAMD( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD : {
			VkDeviceMemoryOverallocationCreateInfoAMD const *  obj = BitCast<VkDeviceMemoryOverallocationCreateInfoAMD const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "deviceMemoryOverallocationCreateInfoAMD"s, "createInfo"s );
			result << indent << "VkDeviceMemoryOverallocationCreateInfoAMD  " << name << " = {};\n";
			Serialize2_VkDeviceMemoryOverallocationCreateInfoAMD( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT : {
			VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceVertexAttributeDivisorProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT : {
			VkPipelineVertexInputDivisorStateCreateInfoEXT const *  obj = BitCast<VkPipelineVertexInputDivisorStateCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "pipelineVertexInputDivisorStateCreateInfo"s, "createInfo"s );
			result << indent << "VkPipelineVertexInputDivisorStateCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkPipelineVertexInputDivisorStateCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkFenceGetWin32HandleInfoKHR const *  obj = BitCast<VkFenceGetWin32HandleInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "fenceGetWin32HandleInfo"s, "info"s );
			result << indent << "VkFenceGetWin32HandleInfoKHR  " << name << " = {};\n";
			Serialize2_VkFenceGetWin32HandleInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT : {
			VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceVertexAttributeDivisorFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV : {
			VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const *  obj = BitCast<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceComputeShaderDerivativesFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceComputeShaderDerivativesFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT : {
			VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT const *  obj = BitCast<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceTexelBufferAlignmentProperties"s, "properties"s );
			result << indent << "VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV : {
			VkPhysicalDeviceMeshShaderFeaturesNV const *  obj = BitCast<VkPhysicalDeviceMeshShaderFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceMeshShaderFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceMeshShaderFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceMeshShaderFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV : {
			VkPhysicalDeviceMeshShaderPropertiesNV const *  obj = BitCast<VkPhysicalDeviceMeshShaderPropertiesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceMeshShaderPropertiesNV"s, "properties"s );
			result << indent << "VkPhysicalDeviceMeshShaderPropertiesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceMeshShaderPropertiesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV : {
			VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV const *  obj = BitCast<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceFragmentShaderBarycentricFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV : {
			VkPhysicalDeviceShaderImageFootprintFeaturesNV const *  obj = BitCast<VkPhysicalDeviceShaderImageFootprintFeaturesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShaderImageFootprintFeaturesNV"s, "features"s );
			result << indent << "VkPhysicalDeviceShaderImageFootprintFeaturesNV  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShaderImageFootprintFeaturesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV : {
			VkCheckpointDataNV const *  obj = BitCast<VkCheckpointDataNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "checkpointDataNV"s );
			result << indent << "VkCheckpointDataNV  " << name << " = {};\n";
			Serialize2_VkCheckpointDataNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD : {
			VkPhysicalDeviceShaderCoreProperties2AMD const *  obj = BitCast<VkPhysicalDeviceShaderCoreProperties2AMD const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceShaderCoreProperties2AMD"s, "properties"s );
			result << indent << "VkPhysicalDeviceShaderCoreProperties2AMD  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceShaderCoreProperties2AMD( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL : {
			VkPerformanceStreamMarkerInfoINTEL const *  obj = BitCast<VkPerformanceStreamMarkerInfoINTEL const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "performanceStreamMarkerInfoINTEL"s, "info"s );
			result << indent << "VkPerformanceStreamMarkerInfoINTEL  " << name << " = {};\n";
			Serialize2_VkPerformanceStreamMarkerInfoINTEL( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT : {
			VkPhysicalDeviceScalarBlockLayoutFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceScalarBlockLayoutFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceScalarBlockLayoutFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL : {
			VkPerformanceConfigurationAcquireInfoINTEL const *  obj = BitCast<VkPerformanceConfigurationAcquireInfoINTEL const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "performanceConfigurationAcquireInfoINTEL"s, "info"s );
			result << indent << "VkPerformanceConfigurationAcquireInfoINTEL  " << name << " = {};\n";
			Serialize2_VkPerformanceConfigurationAcquireInfoINTEL( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT : {
			VkPhysicalDevicePCIBusInfoPropertiesEXT const *  obj = BitCast<VkPhysicalDevicePCIBusInfoPropertiesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDevicePCIBusInfoProperties"s, "info"s );
			result << indent << "VkPhysicalDevicePCIBusInfoPropertiesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDevicePCIBusInfoPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD : {
			VkSwapchainDisplayNativeHdrCreateInfoAMD const *  obj = BitCast<VkSwapchainDisplayNativeHdrCreateInfoAMD const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "swapchainDisplayNativeHdrCreateInfoAMD"s, "createInfo"s );
			result << indent << "VkSwapchainDisplayNativeHdrCreateInfoAMD  " << name << " = {};\n";
			Serialize2_VkSwapchainDisplayNativeHdrCreateInfoAMD( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT : {
			VkPhysicalDeviceFragmentDensityMapFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceFragmentDensityMapFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceFragmentDensityMapFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceFragmentDensityMapFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceFragmentDensityMapFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT : {
			VkPhysicalDeviceSubgroupSizeControlFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceSubgroupSizeControlFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceSubgroupSizeControlFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT : {
			VkMemoryPriorityAllocateInfoEXT const *  obj = BitCast<VkMemoryPriorityAllocateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryPriorityAllocateInfo"s, "info"s );
			result << indent << "VkMemoryPriorityAllocateInfoEXT  " << name << " = {};\n";
			Serialize2_VkMemoryPriorityAllocateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT : {
			VkPhysicalDeviceBufferDeviceAddressFeaturesEXT const *  obj = BitCast<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "physicalDeviceBufferDeviceAddressFeatures"s, "features"s );
			result << indent << "VkPhysicalDeviceBufferDeviceAddressFeaturesEXT  " << name << " = {};\n";
			Serialize2_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT : {
			VkImageStencilUsageCreateInfoEXT const *  obj = BitCast<VkImageStencilUsageCreateInfoEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "imageStencilUsageCreateInfo"s, "createInfo"s );
			result << indent << "VkImageStencilUsageCreateInfoEXT  " << name << " = {};\n";
			Serialize2_VkImageStencilUsageCreateInfoEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV : {
			VkCooperativeMatrixPropertiesNV const *  obj = BitCast<VkCooperativeMatrixPropertiesNV const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "cooperativeMatrixPropertiesNV"s, "properties"s );
			result << indent << "VkCooperativeMatrixPropertiesNV  " << name << " = {};\n";
			Serialize2_VkCooperativeMatrixPropertiesNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			break;
		}

		case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkWin32SurfaceCreateInfoKHR const *  obj = BitCast<VkWin32SurfaceCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "win32SurfaceCreateInfo"s, "createInfo"s );
			result << indent << "VkWin32SurfaceCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkWin32SurfaceCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkMemoryGetWin32HandleInfoKHR const *  obj = BitCast<VkMemoryGetWin32HandleInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryGetWin32HandleInfo"s, "info"s );
			result << indent << "VkMemoryGetWin32HandleInfoKHR  " << name << " = {};\n";
			Serialize2_VkMemoryGetWin32HandleInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkWin32KeyedMutexAcquireReleaseInfoKHR const *  obj = BitCast<VkWin32KeyedMutexAcquireReleaseInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "win32KeyedMutexAcquireReleaseInfo"s, "info"s );
			result << indent << "VkWin32KeyedMutexAcquireReleaseInfoKHR  " << name << " = {};\n";
			Serialize2_VkWin32KeyedMutexAcquireReleaseInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR : {
			#ifdef VULKAN_WIN32_H_
			VkExportFenceWin32HandleInfoKHR const *  obj = BitCast<VkExportFenceWin32HandleInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "exportFenceWin32HandleInfo"s, "info"s );
			result << indent << "VkExportFenceWin32HandleInfoKHR  " << name << " = {};\n";
			Serialize2_VkExportFenceWin32HandleInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT : {
			#ifdef VULKAN_WIN32_H_
			VkSurfaceCapabilitiesFullScreenExclusiveEXT const *  obj = BitCast<VkSurfaceCapabilitiesFullScreenExclusiveEXT const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "surfaceCapabilitiesFullScreenExclusive"s );
			result << indent << "VkSurfaceCapabilitiesFullScreenExclusiveEXT  " << name << " = {};\n";
			Serialize2_VkSurfaceCapabilitiesFullScreenExclusiveEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID : {
			#ifdef VULKAN_ANDROID_H_
			VkAndroidHardwareBufferPropertiesANDROID const *  obj = BitCast<VkAndroidHardwareBufferPropertiesANDROID const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "androidHardwareBufferPropertiesANDROID"s, "properties"s );
			result << indent << "VkAndroidHardwareBufferPropertiesANDROID  " << name << " = {};\n";
			Serialize2_VkAndroidHardwareBufferPropertiesANDROID( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID : {
			#ifdef VULKAN_ANDROID_H_
			VkImportAndroidHardwareBufferInfoANDROID const *  obj = BitCast<VkImportAndroidHardwareBufferInfoANDROID const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "importAndroidHardwareBufferInfoANDROID"s, "info"s );
			result << indent << "VkImportAndroidHardwareBufferInfoANDROID  " << name << " = {};\n";
			Serialize2_VkImportAndroidHardwareBufferInfoANDROID( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID : {
			#ifdef VULKAN_ANDROID_H_
			VkMemoryGetAndroidHardwareBufferInfoANDROID const *  obj = BitCast<VkMemoryGetAndroidHardwareBufferInfoANDROID const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "memoryGetAndroidHardwareBufferInfoANDROID"s, "info"s );
			result << indent << "VkMemoryGetAndroidHardwareBufferInfoANDROID  " << name << " = {};\n";
			Serialize2_VkMemoryGetAndroidHardwareBufferInfoANDROID( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR : {
			#ifdef VULKAN_XLIB_H_
			VkXlibSurfaceCreateInfoKHR const *  obj = BitCast<VkXlibSurfaceCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "xlibSurfaceCreateInfo"s, "createInfo"s );
			result << indent << "VkXlibSurfaceCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkXlibSurfaceCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR : {
			#ifdef VULKAN_WAYLAND_H_
			VkWaylandSurfaceCreateInfoKHR const *  obj = BitCast<VkWaylandSurfaceCreateInfoKHR const *>( ptr );
			const String  name = nameSer.MakeUnique( obj, "waylandSurfaceCreateInfo"s, "createInfo"s );
			result << indent << "VkWaylandSurfaceCreateInfoKHR  " << name << " = {};\n";
			Serialize2_VkWaylandSurfaceCreateInfoKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
			#endif
			break;
		}

		case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO : CHECK(false); break;
		case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO : CHECK(false); break;
		case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP : CHECK(false); break;
		case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN : CHECK(false); break;
		case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK : CHECK(false); break;
		case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK : CHECK(false); break;
		case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT : CHECK(false); break;
		case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP : CHECK(false); break;
		case VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA : CHECK(false); break;
		case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT : CHECK(false); break;
		case VK_STRUCTURE_TYPE_RANGE_SIZE : CHECK(false); break;
		case VK_STRUCTURE_TYPE_MAX_ENUM : CHECK(false); break;
	}
	END_ENUM_CHECKS();
	return before + result;
}

#pragma warning (pop)

void  Serialize2_VkPhysicalDeviceMemoryPriorityFeaturesEXT (const VkPhysicalDeviceMemoryPriorityFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT );
	result << indent << name << ".memoryPriority = " << BoolToString(obj->memoryPriority) << ";\n";
}

void  Serialize2_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV (const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV );
	if ( obj->pCustomSampleOrders ) {
		CHECK( obj->customSampleOrderCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pCustomSampleOrders, "customSampleOrders"s, "coarseSampleOrderCustomNV"s );
		before << indent << "VkCoarseSampleOrderCustomNV  " << arr_name << "[" << IntToString(obj->customSampleOrderCount) << "] = {};\n";
		for (uint i = 0; i < obj->customSampleOrderCount; ++i) {
			Serialize2_VkCoarseSampleOrderCustomNV( obj->pCustomSampleOrders + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".sampleOrderType = " << Serialize_VkCoarseSampleOrderTypeNV(obj->sampleOrderType) << ";\n";
	result << indent << name << ".customSampleOrderCount = " << IntToString(obj->customSampleOrderCount) << ";\n";
	result << indent << name << ".pCustomSampleOrders = " << nameSer.Get( &obj->pCustomSampleOrders ) << ";\n";
}

ND_ String  Serialize_VkDescriptorUpdateTemplateEntry (const VkDescriptorUpdateTemplateEntry *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "descriptorUpdateTemplateEntry"s );
	result << indent << "VkDescriptorUpdateTemplateEntry  " << name << " = {};\n";
	Serialize2_VkDescriptorUpdateTemplateEntry( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkDescriptorUpdateTemplateEntry (const VkDescriptorUpdateTemplateEntry *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".dstBinding = " << IntToString(obj->dstBinding) << ";\n";
	result << indent << name << ".dstArrayElement = " << IntToString(obj->dstArrayElement) << ";\n";
	result << indent << name << ".descriptorCount = " << IntToString(obj->descriptorCount) << ";\n";
	result << indent << name << ".descriptorType = " << Serialize_VkDescriptorType(obj->descriptorType) << ";\n";
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
	result << indent << name << ".stride = " << IntToString(obj->stride) << ";\n";
}

void  Serialize2_VkPipelineTessellationDomainOriginStateCreateInfo (const VkPipelineTessellationDomainOriginStateCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO );
	result << indent << name << ".domainOrigin = " << Serialize_VkTessellationDomainOrigin(obj->domainOrigin) << ";\n";
}

void  Serialize2_VkApplicationInfo (const VkApplicationInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_APPLICATION_INFO );
	result << indent << name << ".pApplicationName = " << '"' << obj->pApplicationName << '"' << ";\n";
	result << indent << name << ".applicationVersion = " << IntToString(obj->applicationVersion) << ";\n";
	result << indent << name << ".pEngineName = " << '"' << obj->pEngineName << '"' << ";\n";
	result << indent << name << ".engineVersion = " << IntToString(obj->engineVersion) << ";\n";
	result << indent << name << ".apiVersion = " << IntToString(obj->apiVersion) << ";\n";
}

ND_ String  Serialize_VkPhysicalDeviceLimits (const VkPhysicalDeviceLimits *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "physicalDeviceLimits"s );
	result << indent << "VkPhysicalDeviceLimits  " << name << " = {};\n";
	Serialize2_VkPhysicalDeviceLimits( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkPhysicalDeviceLimits (const VkPhysicalDeviceLimits *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".maxImageDimension1D = " << IntToString(obj->maxImageDimension1D) << ";\n";
	result << indent << name << ".maxImageDimension2D = " << IntToString(obj->maxImageDimension2D) << ";\n";
	result << indent << name << ".maxImageDimension3D = " << IntToString(obj->maxImageDimension3D) << ";\n";
	result << indent << name << ".maxImageDimensionCube = " << IntToString(obj->maxImageDimensionCube) << ";\n";
	result << indent << name << ".maxImageArrayLayers = " << IntToString(obj->maxImageArrayLayers) << ";\n";
	result << indent << name << ".maxTexelBufferElements = " << IntToString(obj->maxTexelBufferElements) << ";\n";
	result << indent << name << ".maxUniformBufferRange = " << IntToString(obj->maxUniformBufferRange) << ";\n";
	result << indent << name << ".maxStorageBufferRange = " << IntToString(obj->maxStorageBufferRange) << ";\n";
	result << indent << name << ".maxPushConstantsSize = " << IntToString(obj->maxPushConstantsSize) << ";\n";
	result << indent << name << ".maxMemoryAllocationCount = " << IntToString(obj->maxMemoryAllocationCount) << ";\n";
	result << indent << name << ".maxSamplerAllocationCount = " << IntToString(obj->maxSamplerAllocationCount) << ";\n";
	result << indent << name << ".bufferImageGranularity = " << IntToString(obj->bufferImageGranularity) << ";\n";
	result << indent << name << ".sparseAddressSpaceSize = " << IntToString(obj->sparseAddressSpaceSize) << ";\n";
	result << indent << name << ".maxBoundDescriptorSets = " << IntToString(obj->maxBoundDescriptorSets) << ";\n";
	result << indent << name << ".maxPerStageDescriptorSamplers = " << IntToString(obj->maxPerStageDescriptorSamplers) << ";\n";
	result << indent << name << ".maxPerStageDescriptorUniformBuffers = " << IntToString(obj->maxPerStageDescriptorUniformBuffers) << ";\n";
	result << indent << name << ".maxPerStageDescriptorStorageBuffers = " << IntToString(obj->maxPerStageDescriptorStorageBuffers) << ";\n";
	result << indent << name << ".maxPerStageDescriptorSampledImages = " << IntToString(obj->maxPerStageDescriptorSampledImages) << ";\n";
	result << indent << name << ".maxPerStageDescriptorStorageImages = " << IntToString(obj->maxPerStageDescriptorStorageImages) << ";\n";
	result << indent << name << ".maxPerStageDescriptorInputAttachments = " << IntToString(obj->maxPerStageDescriptorInputAttachments) << ";\n";
	result << indent << name << ".maxPerStageResources = " << IntToString(obj->maxPerStageResources) << ";\n";
	result << indent << name << ".maxDescriptorSetSamplers = " << IntToString(obj->maxDescriptorSetSamplers) << ";\n";
	result << indent << name << ".maxDescriptorSetUniformBuffers = " << IntToString(obj->maxDescriptorSetUniformBuffers) << ";\n";
	result << indent << name << ".maxDescriptorSetUniformBuffersDynamic = " << IntToString(obj->maxDescriptorSetUniformBuffersDynamic) << ";\n";
	result << indent << name << ".maxDescriptorSetStorageBuffers = " << IntToString(obj->maxDescriptorSetStorageBuffers) << ";\n";
	result << indent << name << ".maxDescriptorSetStorageBuffersDynamic = " << IntToString(obj->maxDescriptorSetStorageBuffersDynamic) << ";\n";
	result << indent << name << ".maxDescriptorSetSampledImages = " << IntToString(obj->maxDescriptorSetSampledImages) << ";\n";
	result << indent << name << ".maxDescriptorSetStorageImages = " << IntToString(obj->maxDescriptorSetStorageImages) << ";\n";
	result << indent << name << ".maxDescriptorSetInputAttachments = " << IntToString(obj->maxDescriptorSetInputAttachments) << ";\n";
	result << indent << name << ".maxVertexInputAttributes = " << IntToString(obj->maxVertexInputAttributes) << ";\n";
	result << indent << name << ".maxVertexInputBindings = " << IntToString(obj->maxVertexInputBindings) << ";\n";
	result << indent << name << ".maxVertexInputAttributeOffset = " << IntToString(obj->maxVertexInputAttributeOffset) << ";\n";
	result << indent << name << ".maxVertexInputBindingStride = " << IntToString(obj->maxVertexInputBindingStride) << ";\n";
	result << indent << name << ".maxVertexOutputComponents = " << IntToString(obj->maxVertexOutputComponents) << ";\n";
	result << indent << name << ".maxTessellationGenerationLevel = " << IntToString(obj->maxTessellationGenerationLevel) << ";\n";
	result << indent << name << ".maxTessellationPatchSize = " << IntToString(obj->maxTessellationPatchSize) << ";\n";
	result << indent << name << ".maxTessellationControlPerVertexInputComponents = " << IntToString(obj->maxTessellationControlPerVertexInputComponents) << ";\n";
	result << indent << name << ".maxTessellationControlPerVertexOutputComponents = " << IntToString(obj->maxTessellationControlPerVertexOutputComponents) << ";\n";
	result << indent << name << ".maxTessellationControlPerPatchOutputComponents = " << IntToString(obj->maxTessellationControlPerPatchOutputComponents) << ";\n";
	result << indent << name << ".maxTessellationControlTotalOutputComponents = " << IntToString(obj->maxTessellationControlTotalOutputComponents) << ";\n";
	result << indent << name << ".maxTessellationEvaluationInputComponents = " << IntToString(obj->maxTessellationEvaluationInputComponents) << ";\n";
	result << indent << name << ".maxTessellationEvaluationOutputComponents = " << IntToString(obj->maxTessellationEvaluationOutputComponents) << ";\n";
	result << indent << name << ".maxGeometryShaderInvocations = " << IntToString(obj->maxGeometryShaderInvocations) << ";\n";
	result << indent << name << ".maxGeometryInputComponents = " << IntToString(obj->maxGeometryInputComponents) << ";\n";
	result << indent << name << ".maxGeometryOutputComponents = " << IntToString(obj->maxGeometryOutputComponents) << ";\n";
	result << indent << name << ".maxGeometryOutputVertices = " << IntToString(obj->maxGeometryOutputVertices) << ";\n";
	result << indent << name << ".maxGeometryTotalOutputComponents = " << IntToString(obj->maxGeometryTotalOutputComponents) << ";\n";
	result << indent << name << ".maxFragmentInputComponents = " << IntToString(obj->maxFragmentInputComponents) << ";\n";
	result << indent << name << ".maxFragmentOutputAttachments = " << IntToString(obj->maxFragmentOutputAttachments) << ";\n";
	result << indent << name << ".maxFragmentDualSrcAttachments = " << IntToString(obj->maxFragmentDualSrcAttachments) << ";\n";
	result << indent << name << ".maxFragmentCombinedOutputResources = " << IntToString(obj->maxFragmentCombinedOutputResources) << ";\n";
	result << indent << name << ".maxComputeSharedMemorySize = " << IntToString(obj->maxComputeSharedMemorySize) << ";\n";
	result << indent << name << ".maxComputeWorkGroupCount << " << "StaticArray<uint32_t, " << IntToString(CountOf(obj->maxComputeWorkGroupCount)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->maxComputeWorkGroupCount); ++i) {
		result << (i ? ", " : "") << IntToString(obj->maxComputeWorkGroupCount[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".maxComputeWorkGroupInvocations = " << IntToString(obj->maxComputeWorkGroupInvocations) << ";\n";
	result << indent << name << ".maxComputeWorkGroupSize << " << "StaticArray<uint32_t, " << IntToString(CountOf(obj->maxComputeWorkGroupSize)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->maxComputeWorkGroupSize); ++i) {
		result << (i ? ", " : "") << IntToString(obj->maxComputeWorkGroupSize[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".subPixelPrecisionBits = " << IntToString(obj->subPixelPrecisionBits) << ";\n";
	result << indent << name << ".subTexelPrecisionBits = " << IntToString(obj->subTexelPrecisionBits) << ";\n";
	result << indent << name << ".mipmapPrecisionBits = " << IntToString(obj->mipmapPrecisionBits) << ";\n";
	result << indent << name << ".maxDrawIndexedIndexValue = " << IntToString(obj->maxDrawIndexedIndexValue) << ";\n";
	result << indent << name << ".maxDrawIndirectCount = " << IntToString(obj->maxDrawIndirectCount) << ";\n";
	result << indent << name << ".maxSamplerLodBias = " << FloatToString(obj->maxSamplerLodBias) << ";\n";
	result << indent << name << ".maxSamplerAnisotropy = " << FloatToString(obj->maxSamplerAnisotropy) << ";\n";
	result << indent << name << ".maxViewports = " << IntToString(obj->maxViewports) << ";\n";
	result << indent << name << ".maxViewportDimensions << " << "StaticArray<uint32_t, " << IntToString(CountOf(obj->maxViewportDimensions)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->maxViewportDimensions); ++i) {
		result << (i ? ", " : "") << IntToString(obj->maxViewportDimensions[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".viewportBoundsRange << " << "StaticArray<float, " << IntToString(CountOf(obj->viewportBoundsRange)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->viewportBoundsRange); ++i) {
		result << (i ? ", " : "") << FloatToString(obj->viewportBoundsRange[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".viewportSubPixelBits = " << IntToString(obj->viewportSubPixelBits) << ";\n";
	result << indent << name << ".minMemoryMapAlignment = " << IntToString(obj->minMemoryMapAlignment) << ";\n";
	result << indent << name << ".minTexelBufferOffsetAlignment = " << IntToString(obj->minTexelBufferOffsetAlignment) << ";\n";
	result << indent << name << ".minUniformBufferOffsetAlignment = " << IntToString(obj->minUniformBufferOffsetAlignment) << ";\n";
	result << indent << name << ".minStorageBufferOffsetAlignment = " << IntToString(obj->minStorageBufferOffsetAlignment) << ";\n";
	result << indent << name << ".minTexelOffset = " << IntToString(obj->minTexelOffset) << ";\n";
	result << indent << name << ".maxTexelOffset = " << IntToString(obj->maxTexelOffset) << ";\n";
	result << indent << name << ".minTexelGatherOffset = " << IntToString(obj->minTexelGatherOffset) << ";\n";
	result << indent << name << ".maxTexelGatherOffset = " << IntToString(obj->maxTexelGatherOffset) << ";\n";
	result << indent << name << ".minInterpolationOffset = " << FloatToString(obj->minInterpolationOffset) << ";\n";
	result << indent << name << ".maxInterpolationOffset = " << FloatToString(obj->maxInterpolationOffset) << ";\n";
	result << indent << name << ".subPixelInterpolationOffsetBits = " << IntToString(obj->subPixelInterpolationOffsetBits) << ";\n";
	result << indent << name << ".maxFramebufferWidth = " << IntToString(obj->maxFramebufferWidth) << ";\n";
	result << indent << name << ".maxFramebufferHeight = " << IntToString(obj->maxFramebufferHeight) << ";\n";
	result << indent << name << ".maxFramebufferLayers = " << IntToString(obj->maxFramebufferLayers) << ";\n";
	result << indent << name << ".framebufferColorSampleCounts = " << Serialize_VkSampleCountFlags(obj->framebufferColorSampleCounts) << ";\n";
	result << indent << name << ".framebufferDepthSampleCounts = " << Serialize_VkSampleCountFlags(obj->framebufferDepthSampleCounts) << ";\n";
	result << indent << name << ".framebufferStencilSampleCounts = " << Serialize_VkSampleCountFlags(obj->framebufferStencilSampleCounts) << ";\n";
	result << indent << name << ".framebufferNoAttachmentsSampleCounts = " << Serialize_VkSampleCountFlags(obj->framebufferNoAttachmentsSampleCounts) << ";\n";
	result << indent << name << ".maxColorAttachments = " << IntToString(obj->maxColorAttachments) << ";\n";
	result << indent << name << ".sampledImageColorSampleCounts = " << Serialize_VkSampleCountFlags(obj->sampledImageColorSampleCounts) << ";\n";
	result << indent << name << ".sampledImageIntegerSampleCounts = " << Serialize_VkSampleCountFlags(obj->sampledImageIntegerSampleCounts) << ";\n";
	result << indent << name << ".sampledImageDepthSampleCounts = " << Serialize_VkSampleCountFlags(obj->sampledImageDepthSampleCounts) << ";\n";
	result << indent << name << ".sampledImageStencilSampleCounts = " << Serialize_VkSampleCountFlags(obj->sampledImageStencilSampleCounts) << ";\n";
	result << indent << name << ".storageImageSampleCounts = " << Serialize_VkSampleCountFlags(obj->storageImageSampleCounts) << ";\n";
	result << indent << name << ".maxSampleMaskWords = " << IntToString(obj->maxSampleMaskWords) << ";\n";
	result << indent << name << ".timestampComputeAndGraphics = " << BoolToString(obj->timestampComputeAndGraphics) << ";\n";
	result << indent << name << ".timestampPeriod = " << FloatToString(obj->timestampPeriod) << ";\n";
	result << indent << name << ".maxClipDistances = " << IntToString(obj->maxClipDistances) << ";\n";
	result << indent << name << ".maxCullDistances = " << IntToString(obj->maxCullDistances) << ";\n";
	result << indent << name << ".maxCombinedClipAndCullDistances = " << IntToString(obj->maxCombinedClipAndCullDistances) << ";\n";
	result << indent << name << ".discreteQueuePriorities = " << IntToString(obj->discreteQueuePriorities) << ";\n";
	result << indent << name << ".pointSizeRange << " << "StaticArray<float, " << IntToString(CountOf(obj->pointSizeRange)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->pointSizeRange); ++i) {
		result << (i ? ", " : "") << FloatToString(obj->pointSizeRange[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".lineWidthRange << " << "StaticArray<float, " << IntToString(CountOf(obj->lineWidthRange)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->lineWidthRange); ++i) {
		result << (i ? ", " : "") << FloatToString(obj->lineWidthRange[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".pointSizeGranularity = " << FloatToString(obj->pointSizeGranularity) << ";\n";
	result << indent << name << ".lineWidthGranularity = " << FloatToString(obj->lineWidthGranularity) << ";\n";
	result << indent << name << ".strictLines = " << BoolToString(obj->strictLines) << ";\n";
	result << indent << name << ".standardSampleLocations = " << BoolToString(obj->standardSampleLocations) << ";\n";
	result << indent << name << ".optimalBufferCopyOffsetAlignment = " << IntToString(obj->optimalBufferCopyOffsetAlignment) << ";\n";
	result << indent << name << ".optimalBufferCopyRowPitchAlignment = " << IntToString(obj->optimalBufferCopyRowPitchAlignment) << ";\n";
	result << indent << name << ".nonCoherentAtomSize = " << IntToString(obj->nonCoherentAtomSize) << ";\n";
}

ND_ String  Serialize_VkImageFormatProperties (const VkImageFormatProperties *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "imageFormatProperties"s, "properties"s );
	result << indent << "VkImageFormatProperties  " << name << " = {};\n";
	Serialize2_VkImageFormatProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkImageFormatProperties (const VkImageFormatProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	Serialize2_VkExtent3D( &obj->maxExtent, String(name) << ".maxExtent", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".maxMipLevels = " << IntToString(obj->maxMipLevels) << ";\n";
	result << indent << name << ".maxArrayLayers = " << IntToString(obj->maxArrayLayers) << ";\n";
	result << indent << name << ".sampleCounts = " << Serialize_VkSampleCountFlags(obj->sampleCounts) << ";\n";
	result << indent << name << ".maxResourceSize = " << IntToString(obj->maxResourceSize) << ";\n";
}

void  Serialize2_VkDebugUtilsObjectNameInfoEXT (const VkDebugUtilsObjectNameInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT );
	result << indent << name << ".objectType = " << Serialize_VkObjectType(obj->objectType) << ";\n";
	result << indent << name << ".objectHandle = " << IntToString(obj->objectHandle) << ";\n";
	result << indent << name << ".pObjectName = " << '"' << obj->pObjectName << '"' << ";\n";
}

void  Serialize2_VkBufferViewCreateInfo (const VkBufferViewCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkBufferViewCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".buffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->buffer ) << ";\n";
	result << indent << name << ".format = " << Serialize_VkFormat(obj->format) << ";\n";
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
	result << indent << name << ".range = " << IntToString(obj->range) << ";\n";
}

void  Serialize2_VkInstanceCreateInfo (const VkInstanceCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO );
	if ( obj->pApplicationInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pApplicationInfo), nameSer, remapper, indent );
	}
	result << indent << name << ".flags = " << Serialize_VkInstanceCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".pApplicationInfo = " << nameSer.GetPtr(obj->pApplicationInfo) << ";\n";
	result << indent << name << ".enabledLayerCount = " << IntToString(obj->enabledLayerCount) << ";\n";
	result << indent << name << ".ppEnabledLayerNames = " << nameSer.Get( &obj->ppEnabledLayerNames ) << ";\n";
	result << indent << name << ".enabledExtensionCount = " << IntToString(obj->enabledExtensionCount) << ";\n";
	result << indent << name << ".ppEnabledExtensionNames = " << nameSer.Get( &obj->ppEnabledExtensionNames ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceLineRasterizationFeaturesEXT (const VkPhysicalDeviceLineRasterizationFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT );
	result << indent << name << ".rectangularLines = " << BoolToString(obj->rectangularLines) << ";\n";
	result << indent << name << ".bresenhamLines = " << BoolToString(obj->bresenhamLines) << ";\n";
	result << indent << name << ".smoothLines = " << BoolToString(obj->smoothLines) << ";\n";
	result << indent << name << ".stippledRectangularLines = " << BoolToString(obj->stippledRectangularLines) << ";\n";
	result << indent << name << ".stippledBresenhamLines = " << BoolToString(obj->stippledBresenhamLines) << ";\n";
	result << indent << name << ".stippledSmoothLines = " << BoolToString(obj->stippledSmoothLines) << ";\n";
}

void  Serialize2_VkValidationCacheCreateInfoEXT (const VkValidationCacheCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT );
	result << indent << name << ".flags = " << Serialize_VkValidationCacheCreateFlagsEXT(obj->flags) << ";\n";
	result << indent << name << ".initialDataSize = " << IntToString(obj->initialDataSize) << ";\n";
	result << indent << name << ".pInitialData = " << "null" << ";\n";
}

ND_ String  Serialize_VkFormatProperties (const VkFormatProperties *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "formatProperties"s, "properties"s );
	result << indent << "VkFormatProperties  " << name << " = {};\n";
	Serialize2_VkFormatProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkFormatProperties (const VkFormatProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".linearTilingFeatures = " << Serialize_VkFormatFeatureFlags(obj->linearTilingFeatures) << ";\n";
	result << indent << name << ".optimalTilingFeatures = " << Serialize_VkFormatFeatureFlags(obj->optimalTilingFeatures) << ";\n";
	result << indent << name << ".bufferFeatures = " << Serialize_VkFormatFeatureFlags(obj->bufferFeatures) << ";\n";
}

void  Serialize2_VkMemoryBarrier (const VkMemoryBarrier *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_BARRIER );
	result << indent << name << ".srcAccessMask = " << Serialize_VkAccessFlags(obj->srcAccessMask) << ";\n";
	result << indent << name << ".dstAccessMask = " << Serialize_VkAccessFlags(obj->dstAccessMask) << ";\n";
}

ND_ String  Serialize_VkPipelineColorBlendAttachmentState (const VkPipelineColorBlendAttachmentState *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "pipelineColorBlendAttachmentState"s );
	result << indent << "VkPipelineColorBlendAttachmentState  " << name << " = {};\n";
	Serialize2_VkPipelineColorBlendAttachmentState( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkPipelineColorBlendAttachmentState (const VkPipelineColorBlendAttachmentState *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".blendEnable = " << BoolToString(obj->blendEnable) << ";\n";
	result << indent << name << ".srcColorBlendFactor = " << Serialize_VkBlendFactor(obj->srcColorBlendFactor) << ";\n";
	result << indent << name << ".dstColorBlendFactor = " << Serialize_VkBlendFactor(obj->dstColorBlendFactor) << ";\n";
	result << indent << name << ".colorBlendOp = " << Serialize_VkBlendOp(obj->colorBlendOp) << ";\n";
	result << indent << name << ".srcAlphaBlendFactor = " << Serialize_VkBlendFactor(obj->srcAlphaBlendFactor) << ";\n";
	result << indent << name << ".dstAlphaBlendFactor = " << Serialize_VkBlendFactor(obj->dstAlphaBlendFactor) << ";\n";
	result << indent << name << ".alphaBlendOp = " << Serialize_VkBlendOp(obj->alphaBlendOp) << ";\n";
	result << indent << name << ".colorWriteMask = " << Serialize_VkColorComponentFlags(obj->colorWriteMask) << ";\n";
}

ND_ String  Serialize_VkAllocationCallbacks (const VkAllocationCallbacks *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "allocationCallbacks"s );
	result << indent << "VkAllocationCallbacks  " << name << " = {};\n";
	Serialize2_VkAllocationCallbacks( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkAllocationCallbacks (const VkAllocationCallbacks *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".pUserData = " << "null" << ";\n";
	result << indent << name << ".pfnAllocation = " << "BitCast<PFN_vkAllocationFunction>(" << HexToString(obj->pfnAllocation) << ")" << ";\n";
	result << indent << name << ".pfnReallocation = " << "BitCast<PFN_vkReallocationFunction>(" << HexToString(obj->pfnReallocation) << ")" << ";\n";
	result << indent << name << ".pfnFree = " << "BitCast<PFN_vkFreeFunction>(" << HexToString(obj->pfnFree) << ")" << ";\n";
	result << indent << name << ".pfnInternalAllocation = " << "BitCast<PFN_vkInternalAllocationNotification>(" << HexToString(obj->pfnInternalAllocation) << ")" << ";\n";
	result << indent << name << ".pfnInternalFree = " << "BitCast<PFN_vkInternalFreeNotification>(" << HexToString(obj->pfnInternalFree) << ")" << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkMemoryWin32HandlePropertiesKHR (const VkMemoryWin32HandlePropertiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR );
	result << indent << name << ".memoryTypeBits = " << IntToString(obj->memoryTypeBits) << ";\n";
}
#endif

ND_ String  Serialize_VkSubresourceLayout (const VkSubresourceLayout *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "subresourceLayout"s );
	result << indent << "VkSubresourceLayout  " << name << " = {};\n";
	Serialize2_VkSubresourceLayout( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSubresourceLayout (const VkSubresourceLayout *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
	result << indent << name << ".size = " << IntToString(obj->size) << ";\n";
	result << indent << name << ".rowPitch = " << IntToString(obj->rowPitch) << ";\n";
	result << indent << name << ".arrayPitch = " << IntToString(obj->arrayPitch) << ";\n";
	result << indent << name << ".depthPitch = " << IntToString(obj->depthPitch) << ";\n";
}

ND_ String  Serialize_VkPhysicalDeviceFeatures (const VkPhysicalDeviceFeatures *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "physicalDeviceFeatures"s, "features"s );
	result << indent << "VkPhysicalDeviceFeatures  " << name << " = {};\n";
	Serialize2_VkPhysicalDeviceFeatures( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkPhysicalDeviceFeatures (const VkPhysicalDeviceFeatures *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".robustBufferAccess = " << BoolToString(obj->robustBufferAccess) << ";\n";
	result << indent << name << ".fullDrawIndexUint32 = " << BoolToString(obj->fullDrawIndexUint32) << ";\n";
	result << indent << name << ".imageCubeArray = " << BoolToString(obj->imageCubeArray) << ";\n";
	result << indent << name << ".independentBlend = " << BoolToString(obj->independentBlend) << ";\n";
	result << indent << name << ".geometryShader = " << BoolToString(obj->geometryShader) << ";\n";
	result << indent << name << ".tessellationShader = " << BoolToString(obj->tessellationShader) << ";\n";
	result << indent << name << ".sampleRateShading = " << BoolToString(obj->sampleRateShading) << ";\n";
	result << indent << name << ".dualSrcBlend = " << BoolToString(obj->dualSrcBlend) << ";\n";
	result << indent << name << ".logicOp = " << BoolToString(obj->logicOp) << ";\n";
	result << indent << name << ".multiDrawIndirect = " << BoolToString(obj->multiDrawIndirect) << ";\n";
	result << indent << name << ".drawIndirectFirstInstance = " << BoolToString(obj->drawIndirectFirstInstance) << ";\n";
	result << indent << name << ".depthClamp = " << BoolToString(obj->depthClamp) << ";\n";
	result << indent << name << ".depthBiasClamp = " << BoolToString(obj->depthBiasClamp) << ";\n";
	result << indent << name << ".fillModeNonSolid = " << BoolToString(obj->fillModeNonSolid) << ";\n";
	result << indent << name << ".depthBounds = " << BoolToString(obj->depthBounds) << ";\n";
	result << indent << name << ".wideLines = " << BoolToString(obj->wideLines) << ";\n";
	result << indent << name << ".largePoints = " << BoolToString(obj->largePoints) << ";\n";
	result << indent << name << ".alphaToOne = " << BoolToString(obj->alphaToOne) << ";\n";
	result << indent << name << ".multiViewport = " << BoolToString(obj->multiViewport) << ";\n";
	result << indent << name << ".samplerAnisotropy = " << BoolToString(obj->samplerAnisotropy) << ";\n";
	result << indent << name << ".textureCompressionETC2 = " << BoolToString(obj->textureCompressionETC2) << ";\n";
	result << indent << name << ".textureCompressionASTC_LDR = " << BoolToString(obj->textureCompressionASTC_LDR) << ";\n";
	result << indent << name << ".textureCompressionBC = " << BoolToString(obj->textureCompressionBC) << ";\n";
	result << indent << name << ".occlusionQueryPrecise = " << BoolToString(obj->occlusionQueryPrecise) << ";\n";
	result << indent << name << ".pipelineStatisticsQuery = " << BoolToString(obj->pipelineStatisticsQuery) << ";\n";
	result << indent << name << ".vertexPipelineStoresAndAtomics = " << BoolToString(obj->vertexPipelineStoresAndAtomics) << ";\n";
	result << indent << name << ".fragmentStoresAndAtomics = " << BoolToString(obj->fragmentStoresAndAtomics) << ";\n";
	result << indent << name << ".shaderTessellationAndGeometryPointSize = " << BoolToString(obj->shaderTessellationAndGeometryPointSize) << ";\n";
	result << indent << name << ".shaderImageGatherExtended = " << BoolToString(obj->shaderImageGatherExtended) << ";\n";
	result << indent << name << ".shaderStorageImageExtendedFormats = " << BoolToString(obj->shaderStorageImageExtendedFormats) << ";\n";
	result << indent << name << ".shaderStorageImageMultisample = " << BoolToString(obj->shaderStorageImageMultisample) << ";\n";
	result << indent << name << ".shaderStorageImageReadWithoutFormat = " << BoolToString(obj->shaderStorageImageReadWithoutFormat) << ";\n";
	result << indent << name << ".shaderStorageImageWriteWithoutFormat = " << BoolToString(obj->shaderStorageImageWriteWithoutFormat) << ";\n";
	result << indent << name << ".shaderUniformBufferArrayDynamicIndexing = " << BoolToString(obj->shaderUniformBufferArrayDynamicIndexing) << ";\n";
	result << indent << name << ".shaderSampledImageArrayDynamicIndexing = " << BoolToString(obj->shaderSampledImageArrayDynamicIndexing) << ";\n";
	result << indent << name << ".shaderStorageBufferArrayDynamicIndexing = " << BoolToString(obj->shaderStorageBufferArrayDynamicIndexing) << ";\n";
	result << indent << name << ".shaderStorageImageArrayDynamicIndexing = " << BoolToString(obj->shaderStorageImageArrayDynamicIndexing) << ";\n";
	result << indent << name << ".shaderClipDistance = " << BoolToString(obj->shaderClipDistance) << ";\n";
	result << indent << name << ".shaderCullDistance = " << BoolToString(obj->shaderCullDistance) << ";\n";
	result << indent << name << ".shaderFloat64 = " << BoolToString(obj->shaderFloat64) << ";\n";
	result << indent << name << ".shaderInt64 = " << BoolToString(obj->shaderInt64) << ";\n";
	result << indent << name << ".shaderInt16 = " << BoolToString(obj->shaderInt16) << ";\n";
	result << indent << name << ".shaderResourceResidency = " << BoolToString(obj->shaderResourceResidency) << ";\n";
	result << indent << name << ".shaderResourceMinLod = " << BoolToString(obj->shaderResourceMinLod) << ";\n";
	result << indent << name << ".sparseBinding = " << BoolToString(obj->sparseBinding) << ";\n";
	result << indent << name << ".sparseResidencyBuffer = " << BoolToString(obj->sparseResidencyBuffer) << ";\n";
	result << indent << name << ".sparseResidencyImage2D = " << BoolToString(obj->sparseResidencyImage2D) << ";\n";
	result << indent << name << ".sparseResidencyImage3D = " << BoolToString(obj->sparseResidencyImage3D) << ";\n";
	result << indent << name << ".sparseResidency2Samples = " << BoolToString(obj->sparseResidency2Samples) << ";\n";
	result << indent << name << ".sparseResidency4Samples = " << BoolToString(obj->sparseResidency4Samples) << ";\n";
	result << indent << name << ".sparseResidency8Samples = " << BoolToString(obj->sparseResidency8Samples) << ";\n";
	result << indent << name << ".sparseResidency16Samples = " << BoolToString(obj->sparseResidency16Samples) << ";\n";
	result << indent << name << ".sparseResidencyAliased = " << BoolToString(obj->sparseResidencyAliased) << ";\n";
	result << indent << name << ".variableMultisampleRate = " << BoolToString(obj->variableMultisampleRate) << ";\n";
	result << indent << name << ".inheritedQueries = " << BoolToString(obj->inheritedQueries) << ";\n";
}

#ifdef VULKAN_ANDROID_H_
void  Serialize2_VkAndroidHardwareBufferUsageANDROID (const VkAndroidHardwareBufferUsageANDROID *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID );
	result << indent << name << ".androidHardwareBufferUsage = " << IntToString(obj->androidHardwareBufferUsage) << ";\n";
}
#endif

void  Serialize2_VkPipelineInputAssemblyStateCreateInfo (const VkPipelineInputAssemblyStateCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkPipelineInputAssemblyStateCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".topology = " << Serialize_VkPrimitiveTopology(obj->topology) << ";\n";
	result << indent << name << ".primitiveRestartEnable = " << BoolToString(obj->primitiveRestartEnable) << ";\n";
}

ND_ String  Serialize_VkExtent3D (const VkExtent3D *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "extent3D"s );
	result << indent << "VkExtent3D  " << name << " = {};\n";
	Serialize2_VkExtent3D( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkExtent3D (const VkExtent3D *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << " = { " << IntToString(obj->width) << ", " << IntToString(obj->height) << ", " << IntToString(obj->depth) << " };\n";
}

void  Serialize2_VkExternalMemoryBufferCreateInfo (const VkExternalMemoryBufferCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO );
	result << indent << name << ".handleTypes = " << Serialize_VkExternalMemoryHandleTypeFlags(obj->handleTypes) << ";\n";
}

void  Serialize2_VkSemaphoreCreateInfo (const VkSemaphoreCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkSemaphoreCreateFlags(obj->flags) << ";\n";
}

void  Serialize2_VkDeviceCreateInfo (const VkDeviceCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO );
	if ( obj->pQueueCreateInfos ) {
		CHECK( obj->queueCreateInfoCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pQueueCreateInfos, "queueCreateInfos"s, "deviceQueueCreateInfo"s, "createInfo"s );
		before << indent << "VkDeviceQueueCreateInfo  " << arr_name << "[" << IntToString(obj->queueCreateInfoCount) << "] = {};\n";
		for (uint i = 0; i < obj->queueCreateInfoCount; ++i) {
			Serialize2_VkDeviceQueueCreateInfo( obj->pQueueCreateInfos + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pEnabledFeatures ) {
		before << Serialize_VkPhysicalDeviceFeatures( obj->pEnabledFeatures, nameSer, remapper, indent );
	}
	result << indent << name << ".flags = " << Serialize_VkDeviceCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".queueCreateInfoCount = " << IntToString(obj->queueCreateInfoCount) << ";\n";
	result << indent << name << ".pQueueCreateInfos = " << nameSer.Get( &obj->pQueueCreateInfos ) << ";\n";
	result << indent << name << ".enabledLayerCount = " << IntToString(obj->enabledLayerCount) << ";\n";
	result << indent << name << ".ppEnabledLayerNames = " << nameSer.Get( &obj->ppEnabledLayerNames ) << ";\n";
	result << indent << name << ".enabledExtensionCount = " << IntToString(obj->enabledExtensionCount) << ";\n";
	result << indent << name << ".ppEnabledExtensionNames = " << nameSer.Get( &obj->ppEnabledExtensionNames ) << ";\n";
	result << indent << name << ".pEnabledFeatures = " << nameSer.GetPtr(obj->pEnabledFeatures) << ";\n";
}

void  Serialize2_VkExternalImageFormatProperties (const VkExternalImageFormatProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES );
	Serialize2_VkExternalMemoryProperties( &obj->externalMemoryProperties, String(name) << ".externalMemoryProperties", nameSer, remapper, indent, INOUT result, INOUT before );
}

ND_ String  Serialize_VkPhysicalDeviceSparseProperties (const VkPhysicalDeviceSparseProperties *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "physicalDeviceSparseProperties"s, "properties"s );
	result << indent << "VkPhysicalDeviceSparseProperties  " << name << " = {};\n";
	Serialize2_VkPhysicalDeviceSparseProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkPhysicalDeviceSparseProperties (const VkPhysicalDeviceSparseProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".residencyStandard2DBlockShape = " << BoolToString(obj->residencyStandard2DBlockShape) << ";\n";
	result << indent << name << ".residencyStandard2DMultisampleBlockShape = " << BoolToString(obj->residencyStandard2DMultisampleBlockShape) << ";\n";
	result << indent << name << ".residencyStandard3DBlockShape = " << BoolToString(obj->residencyStandard3DBlockShape) << ";\n";
	result << indent << name << ".residencyAlignedMipSize = " << BoolToString(obj->residencyAlignedMipSize) << ";\n";
	result << indent << name << ".residencyNonResidentStrict = " << BoolToString(obj->residencyNonResidentStrict) << ";\n";
}

ND_ String  Serialize_VkPhysicalDeviceProperties (const VkPhysicalDeviceProperties *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "physicalDeviceProperties"s, "properties"s );
	result << indent << "VkPhysicalDeviceProperties  " << name << " = {};\n";
	Serialize2_VkPhysicalDeviceProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkPhysicalDeviceProperties (const VkPhysicalDeviceProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".apiVersion = " << IntToString(obj->apiVersion) << ";\n";
	result << indent << name << ".driverVersion = " << IntToString(obj->driverVersion) << ";\n";
	result << indent << name << ".vendorID = " << IntToString(obj->vendorID) << ";\n";
	result << indent << name << ".deviceID = " << IntToString(obj->deviceID) << ";\n";
	result << indent << name << ".deviceType = " << Serialize_VkPhysicalDeviceType(obj->deviceType) << ";\n";
	result << indent << name << ".deviceName = " << '"' << obj->deviceName << '"' << ";\n";
	result << indent << name << ".pipelineCacheUUID << " << "StaticArray<uint8_t, " << IntToString(CountOf(obj->pipelineCacheUUID)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->pipelineCacheUUID); ++i) {
		result << (i ? ", " : "") << IntToString(obj->pipelineCacheUUID[i]);
	}
	result << " }" << ";\n";
	Serialize2_VkPhysicalDeviceLimits( &obj->limits, String(name) << ".limits", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkPhysicalDeviceSparseProperties( &obj->sparseProperties, String(name) << ".sparseProperties", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPipelineCoverageReductionStateCreateInfoNV (const VkPipelineCoverageReductionStateCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV );
	result << indent << name << ".flags = " << Serialize_VkPipelineCoverageReductionStateCreateFlagsNV(obj->flags) << ";\n";
	result << indent << name << ".coverageReductionMode = " << Serialize_VkCoverageReductionModeNV(obj->coverageReductionMode) << ";\n";
}

ND_ String  Serialize_VkSparseBufferMemoryBindInfo (const VkSparseBufferMemoryBindInfo *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "sparseBufferMemoryBindInfo"s, "info"s );
	result << indent << "VkSparseBufferMemoryBindInfo  " << name << " = {};\n";
	Serialize2_VkSparseBufferMemoryBindInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSparseBufferMemoryBindInfo (const VkSparseBufferMemoryBindInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	if ( obj->pBinds ) {
		CHECK( obj->bindCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pBinds, "binds"s, "sparseMemoryBind"s );
		before << indent << "VkSparseMemoryBind  " << arr_name << "[" << IntToString(obj->bindCount) << "] = {};\n";
		for (uint i = 0; i < obj->bindCount; ++i) {
			Serialize2_VkSparseMemoryBind( obj->pBinds + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".buffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->buffer ) << ";\n";
	result << indent << name << ".bindCount = " << IntToString(obj->bindCount) << ";\n";
	result << indent << name << ".pBinds = " << nameSer.Get( &obj->pBinds ) << ";\n";
}

ND_ String  Serialize_VkQueueFamilyProperties (const VkQueueFamilyProperties *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "queueFamilyProperties"s, "properties"s );
	result << indent << "VkQueueFamilyProperties  " << name << " = {};\n";
	Serialize2_VkQueueFamilyProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkQueueFamilyProperties (const VkQueueFamilyProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".queueFlags = " << Serialize_VkQueueFlags(obj->queueFlags) << ";\n";
	result << indent << name << ".queueCount = " << IntToString(obj->queueCount) << ";\n";
	result << indent << name << ".timestampValidBits = " << IntToString(obj->timestampValidBits) << ";\n";
	Serialize2_VkExtent3D( &obj->minImageTransferGranularity, String(name) << ".minImageTransferGranularity", nameSer, remapper, indent, INOUT result, INOUT before );
}

ND_ String  Serialize_VkMemoryType (const VkMemoryType *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "memoryType"s );
	result << indent << "VkMemoryType  " << name << " = {};\n";
	Serialize2_VkMemoryType( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkMemoryType (const VkMemoryType *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".propertyFlags = " << Serialize_VkMemoryPropertyFlags(obj->propertyFlags) << ";\n";
	result << indent << name << ".heapIndex = " << IntToString(obj->heapIndex) << ";\n";
}

void  Serialize2_VkGeometryTrianglesNV (const VkGeometryTrianglesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV );
	result << indent << name << ".vertexData = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->vertexData ) << ";\n";
	result << indent << name << ".vertexOffset = " << IntToString(obj->vertexOffset) << ";\n";
	result << indent << name << ".vertexCount = " << IntToString(obj->vertexCount) << ";\n";
	result << indent << name << ".vertexStride = " << IntToString(obj->vertexStride) << ";\n";
	result << indent << name << ".vertexFormat = " << Serialize_VkFormat(obj->vertexFormat) << ";\n";
	result << indent << name << ".indexData = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->indexData ) << ";\n";
	result << indent << name << ".indexOffset = " << IntToString(obj->indexOffset) << ";\n";
	result << indent << name << ".indexCount = " << IntToString(obj->indexCount) << ";\n";
	result << indent << name << ".indexType = " << Serialize_VkIndexType(obj->indexType) << ";\n";
	result << indent << name << ".transformData = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->transformData ) << ";\n";
	result << indent << name << ".transformOffset = " << IntToString(obj->transformOffset) << ";\n";
}

ND_ String  Serialize_VkMemoryHeap (const VkMemoryHeap *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "memoryHeap"s );
	result << indent << "VkMemoryHeap  " << name << " = {};\n";
	Serialize2_VkMemoryHeap( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkMemoryHeap (const VkMemoryHeap *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".size = " << IntToString(obj->size) << ";\n";
	result << indent << name << ".flags = " << Serialize_VkMemoryHeapFlags(obj->flags) << ";\n";
}

void  Serialize2_VkImageFormatListCreateInfoKHR (const VkImageFormatListCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR );
	if ( obj->pViewFormats ) {
		CHECK( obj->viewFormatCount > 0 );
		before << indent << "const VkFormat  " << nameSer.MakeUnique( &obj->pViewFormats, "viewFormats"s ) << "[] = {";
		for (uint i = 0; i < obj->viewFormatCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkFormat( obj->pViewFormats[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pViewFormats ) << ") == " << IntToString(obj->viewFormatCount) << " );\n\n";
	}
	result << indent << name << ".viewFormatCount = " << IntToString(obj->viewFormatCount) << ";\n";
	result << indent << name << ".pViewFormats = " << nameSer.Get( &obj->pViewFormats ) << ";\n";
}

ND_ String  Serialize_VkPhysicalDeviceMemoryProperties (const VkPhysicalDeviceMemoryProperties *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "physicalDeviceMemoryProperties"s, "properties"s );
	result << indent << "VkPhysicalDeviceMemoryProperties  " << name << " = {};\n";
	Serialize2_VkPhysicalDeviceMemoryProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkPhysicalDeviceMemoryProperties (const VkPhysicalDeviceMemoryProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	if ( obj->memoryTypes ) {
		CHECK( CountOf(obj->memoryTypes) > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->memoryTypes, "memoryTypes"s, "memoryType"s );
		before << indent << "VkMemoryType  " << arr_name << "[" << IntToString(CountOf(obj->memoryTypes)) << "] = {};\n";
		for (uint i = 0; i < CountOf(obj->memoryTypes); ++i) {
			Serialize2_VkMemoryType( obj->memoryTypes + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->memoryHeaps ) {
		CHECK( CountOf(obj->memoryHeaps) > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->memoryHeaps, "memoryHeaps"s, "memoryHeap"s );
		before << indent << "VkMemoryHeap  " << arr_name << "[" << IntToString(CountOf(obj->memoryHeaps)) << "] = {};\n";
		for (uint i = 0; i < CountOf(obj->memoryHeaps); ++i) {
			Serialize2_VkMemoryHeap( obj->memoryHeaps + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".memoryTypeCount = " << IntToString(obj->memoryTypeCount) << ";\n";
	result << indent << name << ".memoryTypes = " << nameSer.Get( &obj->memoryTypes ) << ";\n";
	result << indent << name << ".memoryHeapCount = " << IntToString(obj->memoryHeapCount) << ";\n";
	result << indent << name << ".memoryHeaps = " << nameSer.Get( &obj->memoryHeaps ) << ";\n";
}

ND_ String  Serialize_VkOffset2D (const VkOffset2D *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "offset2D"s );
	result << indent << "VkOffset2D  " << name << " = {};\n";
	Serialize2_VkOffset2D( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkOffset2D (const VkOffset2D *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << " = { " << IntToString(obj->x) << ", " << IntToString(obj->y) << " };\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkSurfaceFullScreenExclusiveInfoEXT (const VkSurfaceFullScreenExclusiveInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT );
	result << indent << name << ".fullScreenExclusive = " << Serialize_VkFullScreenExclusiveEXT(obj->fullScreenExclusive) << ";\n";
}
#endif

void  Serialize2_VkDeviceEventInfoEXT (const VkDeviceEventInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT );
	result << indent << name << ".deviceEvent = " << Serialize_VkDeviceEventTypeEXT(obj->deviceEvent) << ";\n";
}

void  Serialize2_VkPipelineExecutableInternalRepresentationKHR (const VkPipelineExecutableInternalRepresentationKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR );
	result << indent << name << ".name = " << '"' << obj->name << '"' << ";\n";
	result << indent << name << ".description = " << '"' << obj->description << '"' << ";\n";
	result << indent << name << ".isText = " << BoolToString(obj->isText) << ";\n";
	result << indent << name << ".dataSize = " << IntToString(obj->dataSize) << ";\n";
	result << indent << name << ".pData = " << "null" << ";\n";
}

void  Serialize2_VkMappedMemoryRange (const VkMappedMemoryRange *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE );
	result << indent << name << ".memory = " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->memory ) << ";\n";
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
	result << indent << name << ".size = " << (obj->size == VK_WHOLE_SIZE ? "VK_WHOLE_SIZE" : IntToString(obj->size)) << ";\n";
}

void  Serialize2_VkDeviceQueueCreateInfo (const VkDeviceQueueCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO );
	if ( obj->pQueuePriorities ) {
		CHECK( obj->queueCount > 0 );
		before << indent << "const float  " << nameSer.MakeUnique( &obj->pQueuePriorities, "queuePriorities"s ) << "[] = { ";
		for (uint i = 0; i < obj->queueCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << FloatToString(obj->pQueuePriorities[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pQueuePriorities ) << ") == " << IntToString(obj->queueCount) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkDeviceQueueCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".queueFamilyIndex = " << IntToString(obj->queueFamilyIndex) << ";\n";
	result << indent << name << ".queueCount = " << IntToString(obj->queueCount) << ";\n";
	result << indent << name << ".pQueuePriorities = " << nameSer.Get( &obj->pQueuePriorities ) << ";\n";
}

ND_ String  Serialize_VkSparseMemoryBind (const VkSparseMemoryBind *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "sparseMemoryBind"s );
	result << indent << "VkSparseMemoryBind  " << name << " = {};\n";
	Serialize2_VkSparseMemoryBind( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSparseMemoryBind (const VkSparseMemoryBind *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".resourceOffset = " << IntToString(obj->resourceOffset) << ";\n";
	result << indent << name << ".size = " << IntToString(obj->size) << ";\n";
	result << indent << name << ".memory = " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->memory ) << ";\n";
	result << indent << name << ".memoryOffset = " << IntToString(obj->memoryOffset) << ";\n";
	result << indent << name << ".flags = " << Serialize_VkSparseMemoryBindFlags(obj->flags) << ";\n";
}

void  Serialize2_VkPipelineDynamicStateCreateInfo (const VkPipelineDynamicStateCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO );
	if ( obj->pDynamicStates ) {
		CHECK( obj->dynamicStateCount > 0 );
		before << indent << "const VkDynamicState  " << nameSer.MakeUnique( &obj->pDynamicStates, "dynamicStates"s ) << "[] = {";
		for (uint i = 0; i < obj->dynamicStateCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkDynamicState( obj->pDynamicStates[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pDynamicStates ) << ") == " << IntToString(obj->dynamicStateCount) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineDynamicStateCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".dynamicStateCount = " << IntToString(obj->dynamicStateCount) << ";\n";
	result << indent << name << ".pDynamicStates = " << nameSer.Get( &obj->pDynamicStates ) << ";\n";
}

void  Serialize2_VkSubmitInfo (const VkSubmitInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SUBMIT_INFO );
	if ( obj->pWaitSemaphores ) {
		CHECK( obj->waitSemaphoreCount > 0 );
		before << indent << "const VkSemaphore  " << nameSer.MakeUnique( &obj->pWaitSemaphores, "waitSemaphores"s, "semaphore"s ) << "[] = {";
		for (uint i = 0; i < obj->waitSemaphoreCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_SEMAPHORE, obj->pWaitSemaphores[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pWaitSemaphores ) << ") == " << IntToString(obj->waitSemaphoreCount) << " );\n\n";
	}
	if ( obj->pWaitDstStageMask ) {
		CHECK( obj->waitSemaphoreCount > 0 );
		before << indent << "const VkPipelineStageFlags  " << nameSer.MakeUnique( &obj->pWaitDstStageMask, "waitDstStageMask"s ) << "[] = {";
		for (uint i = 0; i < obj->waitSemaphoreCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkPipelineStageFlags( obj->pWaitDstStageMask[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pWaitDstStageMask ) << ") == " << IntToString(obj->waitSemaphoreCount) << " );\n\n";
	}
	if ( obj->pCommandBuffers ) {
		CHECK( obj->commandBufferCount > 0 );
		before << indent << "const VkCommandBuffer  " << nameSer.MakeUnique( &obj->pCommandBuffers, "commandBuffers"s, "commandBuffer"s ) << "[] = {";
		for (uint i = 0; i < obj->commandBufferCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, obj->pCommandBuffers[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pCommandBuffers ) << ") == " << IntToString(obj->commandBufferCount) << " );\n\n";
	}
	if ( obj->pSignalSemaphores ) {
		CHECK( obj->signalSemaphoreCount > 0 );
		before << indent << "const VkSemaphore  " << nameSer.MakeUnique( &obj->pSignalSemaphores, "signalSemaphores"s, "semaphore"s ) << "[] = {";
		for (uint i = 0; i < obj->signalSemaphoreCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_SEMAPHORE, obj->pSignalSemaphores[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pSignalSemaphores ) << ") == " << IntToString(obj->signalSemaphoreCount) << " );\n\n";
	}
	result << indent << name << ".waitSemaphoreCount = " << IntToString(obj->waitSemaphoreCount) << ";\n";
	result << indent << name << ".pWaitSemaphores = " << nameSer.Get( &obj->pWaitSemaphores ) << ";\n";
	result << indent << name << ".pWaitDstStageMask = " << nameSer.Get( &obj->pWaitDstStageMask ) << ";\n";
	result << indent << name << ".commandBufferCount = " << IntToString(obj->commandBufferCount) << ";\n";
	result << indent << name << ".pCommandBuffers = " << nameSer.Get( &obj->pCommandBuffers ) << ";\n";
	result << indent << name << ".signalSemaphoreCount = " << IntToString(obj->signalSemaphoreCount) << ";\n";
	result << indent << name << ".pSignalSemaphores = " << nameSer.Get( &obj->pSignalSemaphores ) << ";\n";
}

void  Serialize2_VkImageViewCreateInfo (const VkImageViewCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkImageViewCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".image = " << remapper( VK_OBJECT_TYPE_IMAGE, obj->image ) << ";\n";
	result << indent << name << ".viewType = " << Serialize_VkImageViewType(obj->viewType) << ";\n";
	result << indent << name << ".format = " << Serialize_VkFormat(obj->format) << ";\n";
	Serialize2_VkComponentMapping( &obj->components, String(name) << ".components", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkImageSubresourceRange( &obj->subresourceRange, String(name) << ".subresourceRange", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPhysicalDeviceTransformFeedbackFeaturesEXT (const VkPhysicalDeviceTransformFeedbackFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT );
	result << indent << name << ".transformFeedback = " << BoolToString(obj->transformFeedback) << ";\n";
	result << indent << name << ".geometryStreams = " << BoolToString(obj->geometryStreams) << ";\n";
}

void  Serialize2_VkPipelineTessellationStateCreateInfo (const VkPipelineTessellationStateCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkPipelineTessellationStateCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".patchControlPoints = " << IntToString(obj->patchControlPoints) << ";\n";
}

void  Serialize2_VkImportMemoryHostPointerInfoEXT (const VkImportMemoryHostPointerInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT );
	result << indent << name << ".handleType = " << Serialize_VkExternalMemoryHandleTypeFlagBits(obj->handleType) << ";\n";
	result << indent << name << ".pHostPointer = " << "null" << ";\n";
}

void  Serialize2_VkPhysicalDeviceImageViewImageFormatInfoEXT (const VkPhysicalDeviceImageViewImageFormatInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT );
	result << indent << name << ".imageViewType = " << Serialize_VkImageViewType(obj->imageViewType) << ";\n";
}

void  Serialize2_VkMemoryAllocateInfo (const VkMemoryAllocateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO );
	result << indent << name << ".allocationSize = " << IntToString(obj->allocationSize) << ";\n";
	result << indent << name << ".memoryTypeIndex = " << IntToString(obj->memoryTypeIndex) << ";\n";
}

void  Serialize2_VkBufferDeviceAddressCreateInfoEXT (const VkBufferDeviceAddressCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT );
	result << indent << name << ".deviceAddress = " << "BitCast<VkDeviceAddress>(" << HexToString(obj->deviceAddress) << ")" << ";\n";
}

ND_ String  Serialize_VkSpecializationMapEntry (const VkSpecializationMapEntry *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "specializationMapEntry"s );
	result << indent << "VkSpecializationMapEntry  " << name << " = {};\n";
	Serialize2_VkSpecializationMapEntry( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSpecializationMapEntry (const VkSpecializationMapEntry *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".constantID = " << IntToString(obj->constantID) << ";\n";
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
	result << indent << name << ".size = " << IntToString(obj->size) << ";\n";
}

ND_ String  Serialize_VkComponentMapping (const VkComponentMapping *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "componentMapping"s );
	result << indent << "VkComponentMapping  " << name << " = {};\n";
	Serialize2_VkComponentMapping( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkComponentMapping (const VkComponentMapping *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".r = " << Serialize_VkComponentSwizzle(obj->r) << ";\n";
	result << indent << name << ".g = " << Serialize_VkComponentSwizzle(obj->g) << ";\n";
	result << indent << name << ".b = " << Serialize_VkComponentSwizzle(obj->b) << ";\n";
	result << indent << name << ".a = " << Serialize_VkComponentSwizzle(obj->a) << ";\n";
}

ND_ String  Serialize_VkMemoryRequirements (const VkMemoryRequirements *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "memoryRequirements"s, "requirements"s );
	result << indent << "VkMemoryRequirements  " << name << " = {};\n";
	Serialize2_VkMemoryRequirements( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkMemoryRequirements (const VkMemoryRequirements *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".size = " << IntToString(obj->size) << ";\n";
	result << indent << name << ".alignment = " << IntToString(obj->alignment) << ";\n";
	result << indent << name << ".memoryTypeBits = " << IntToString(obj->memoryTypeBits) << ";\n";
}

ND_ String  Serialize_VkImageResolve (const VkImageResolve *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "imageResolve"s );
	result << indent << "VkImageResolve  " << name << " = {};\n";
	Serialize2_VkImageResolve( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkImageResolve (const VkImageResolve *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	Serialize2_VkImageSubresourceLayers( &obj->srcSubresource, String(name) << ".srcSubresource", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkOffset3D( &obj->srcOffset, String(name) << ".srcOffset", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkImageSubresourceLayers( &obj->dstSubresource, String(name) << ".dstSubresource", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkOffset3D( &obj->dstOffset, String(name) << ".dstOffset", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent3D( &obj->extent, String(name) << ".extent", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkBindSparseInfo (const VkBindSparseInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BIND_SPARSE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BIND_SPARSE_INFO );
	if ( obj->pWaitSemaphores ) {
		CHECK( obj->waitSemaphoreCount > 0 );
		before << indent << "const VkSemaphore  " << nameSer.MakeUnique( &obj->pWaitSemaphores, "waitSemaphores"s, "semaphore"s ) << "[] = {";
		for (uint i = 0; i < obj->waitSemaphoreCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_SEMAPHORE, obj->pWaitSemaphores[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pWaitSemaphores ) << ") == " << IntToString(obj->waitSemaphoreCount) << " );\n\n";
	}
	if ( obj->pBufferBinds ) {
		CHECK( obj->bufferBindCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pBufferBinds, "bufferBinds"s, "sparseBufferMemoryBindInfo"s, "info"s );
		before << indent << "VkSparseBufferMemoryBindInfo  " << arr_name << "[" << IntToString(obj->bufferBindCount) << "] = {};\n";
		for (uint i = 0; i < obj->bufferBindCount; ++i) {
			Serialize2_VkSparseBufferMemoryBindInfo( obj->pBufferBinds + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pImageOpaqueBinds ) {
		CHECK( obj->imageOpaqueBindCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pImageOpaqueBinds, "imageOpaqueBinds"s, "sparseImageOpaqueMemoryBindInfo"s, "info"s );
		before << indent << "VkSparseImageOpaqueMemoryBindInfo  " << arr_name << "[" << IntToString(obj->imageOpaqueBindCount) << "] = {};\n";
		for (uint i = 0; i < obj->imageOpaqueBindCount; ++i) {
			Serialize2_VkSparseImageOpaqueMemoryBindInfo( obj->pImageOpaqueBinds + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pImageBinds ) {
		CHECK( obj->imageBindCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pImageBinds, "imageBinds"s, "sparseImageMemoryBindInfo"s, "info"s );
		before << indent << "VkSparseImageMemoryBindInfo  " << arr_name << "[" << IntToString(obj->imageBindCount) << "] = {};\n";
		for (uint i = 0; i < obj->imageBindCount; ++i) {
			Serialize2_VkSparseImageMemoryBindInfo( obj->pImageBinds + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pSignalSemaphores ) {
		CHECK( obj->signalSemaphoreCount > 0 );
		before << indent << "const VkSemaphore  " << nameSer.MakeUnique( &obj->pSignalSemaphores, "signalSemaphores"s, "semaphore"s ) << "[] = {";
		for (uint i = 0; i < obj->signalSemaphoreCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_SEMAPHORE, obj->pSignalSemaphores[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pSignalSemaphores ) << ") == " << IntToString(obj->signalSemaphoreCount) << " );\n\n";
	}
	result << indent << name << ".waitSemaphoreCount = " << IntToString(obj->waitSemaphoreCount) << ";\n";
	result << indent << name << ".pWaitSemaphores = " << nameSer.Get( &obj->pWaitSemaphores ) << ";\n";
	result << indent << name << ".bufferBindCount = " << IntToString(obj->bufferBindCount) << ";\n";
	result << indent << name << ".pBufferBinds = " << nameSer.Get( &obj->pBufferBinds ) << ";\n";
	result << indent << name << ".imageOpaqueBindCount = " << IntToString(obj->imageOpaqueBindCount) << ";\n";
	result << indent << name << ".pImageOpaqueBinds = " << nameSer.Get( &obj->pImageOpaqueBinds ) << ";\n";
	result << indent << name << ".imageBindCount = " << IntToString(obj->imageBindCount) << ";\n";
	result << indent << name << ".pImageBinds = " << nameSer.Get( &obj->pImageBinds ) << ";\n";
	result << indent << name << ".signalSemaphoreCount = " << IntToString(obj->signalSemaphoreCount) << ";\n";
	result << indent << name << ".pSignalSemaphores = " << nameSer.Get( &obj->pSignalSemaphores ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceImageFormatInfo2 (const VkPhysicalDeviceImageFormatInfo2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2 );
	result << indent << name << ".format = " << Serialize_VkFormat(obj->format) << ";\n";
	result << indent << name << ".type = " << Serialize_VkImageType(obj->type) << ";\n";
	result << indent << name << ".tiling = " << Serialize_VkImageTiling(obj->tiling) << ";\n";
	result << indent << name << ".usage = " << Serialize_VkImageUsageFlags(obj->usage) << ";\n";
	result << indent << name << ".flags = " << Serialize_VkImageCreateFlags(obj->flags) << ";\n";
}

ND_ String  Serialize_VkSparseImageFormatProperties (const VkSparseImageFormatProperties *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "sparseImageFormatProperties"s, "properties"s );
	result << indent << "VkSparseImageFormatProperties  " << name << " = {};\n";
	Serialize2_VkSparseImageFormatProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSparseImageFormatProperties (const VkSparseImageFormatProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".aspectMask = " << Serialize_VkImageAspectFlags(obj->aspectMask) << ";\n";
	Serialize2_VkExtent3D( &obj->imageGranularity, String(name) << ".imageGranularity", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".flags = " << Serialize_VkSparseImageFormatFlags(obj->flags) << ";\n";
}

ND_ String  Serialize_VkSparseImageMemoryRequirements (const VkSparseImageMemoryRequirements *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "sparseImageMemoryRequirements"s, "requirements"s );
	result << indent << "VkSparseImageMemoryRequirements  " << name << " = {};\n";
	Serialize2_VkSparseImageMemoryRequirements( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSparseImageMemoryRequirements (const VkSparseImageMemoryRequirements *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	Serialize2_VkSparseImageFormatProperties( &obj->formatProperties, String(name) << ".formatProperties", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".imageMipTailFirstLod = " << IntToString(obj->imageMipTailFirstLod) << ";\n";
	result << indent << name << ".imageMipTailSize = " << IntToString(obj->imageMipTailSize) << ";\n";
	result << indent << name << ".imageMipTailOffset = " << IntToString(obj->imageMipTailOffset) << ";\n";
	result << indent << name << ".imageMipTailStride = " << IntToString(obj->imageMipTailStride) << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkSemaphoreGetWin32HandleInfoKHR (const VkSemaphoreGetWin32HandleInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR );
	result << indent << name << ".semaphore = " << remapper( VK_OBJECT_TYPE_SEMAPHORE, obj->semaphore ) << ";\n";
	result << indent << name << ".handleType = " << Serialize_VkExternalSemaphoreHandleTypeFlagBits(obj->handleType) << ";\n";
}
#endif

void  Serialize2_VkPerformanceOverrideInfoINTEL (const VkPerformanceOverrideInfoINTEL *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL );
	result << indent << name << ".type = " << Serialize_VkPerformanceOverrideTypeINTEL(obj->type) << ";\n";
	result << indent << name << ".enable = " << BoolToString(obj->enable) << ";\n";
	result << indent << name << ".parameter = " << IntToString(obj->parameter) << ";\n";
}

ND_ String  Serialize_VkSparseImageOpaqueMemoryBindInfo (const VkSparseImageOpaqueMemoryBindInfo *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "sparseImageOpaqueMemoryBindInfo"s, "info"s );
	result << indent << "VkSparseImageOpaqueMemoryBindInfo  " << name << " = {};\n";
	Serialize2_VkSparseImageOpaqueMemoryBindInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSparseImageOpaqueMemoryBindInfo (const VkSparseImageOpaqueMemoryBindInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	if ( obj->pBinds ) {
		CHECK( obj->bindCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pBinds, "binds"s, "sparseMemoryBind"s );
		before << indent << "VkSparseMemoryBind  " << arr_name << "[" << IntToString(obj->bindCount) << "] = {};\n";
		for (uint i = 0; i < obj->bindCount; ++i) {
			Serialize2_VkSparseMemoryBind( obj->pBinds + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".image = " << remapper( VK_OBJECT_TYPE_IMAGE, obj->image ) << ";\n";
	result << indent << name << ".bindCount = " << IntToString(obj->bindCount) << ";\n";
	result << indent << name << ".pBinds = " << nameSer.Get( &obj->pBinds ) << ";\n";
}

void  Serialize2_VkPipelineViewportStateCreateInfo (const VkPipelineViewportStateCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO );
	if ( obj->pViewports ) {
		CHECK( obj->viewportCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pViewports, "viewports"s, "viewport"s );
		before << indent << "VkViewport  " << arr_name << "[" << IntToString(obj->viewportCount) << "] = {};\n";
		for (uint i = 0; i < obj->viewportCount; ++i) {
			Serialize2_VkViewport( obj->pViewports + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pScissors ) {
		CHECK( obj->scissorCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pScissors, "scissors"s, "rect2D"s );
		before << indent << "VkRect2D  " << arr_name << "[" << IntToString(obj->scissorCount) << "] = {};\n";
		for (uint i = 0; i < obj->scissorCount; ++i) {
			Serialize2_VkRect2D( obj->pScissors + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineViewportStateCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".viewportCount = " << IntToString(obj->viewportCount) << ";\n";
	result << indent << name << ".pViewports = " << nameSer.Get( &obj->pViewports ) << ";\n";
	result << indent << name << ".scissorCount = " << IntToString(obj->scissorCount) << ";\n";
	result << indent << name << ".pScissors = " << nameSer.Get( &obj->pScissors ) << ";\n";
}

void  Serialize2_VkAccelerationStructureInfoNV (const VkAccelerationStructureInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV );
	if ( obj->pGeometries ) {
		CHECK( obj->geometryCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pGeometries, "geometries"s, "geometryNV"s );
		before << indent << "VkGeometryNV  " << arr_name << "[" << IntToString(obj->geometryCount) << "] = {};\n";
		for (uint i = 0; i < obj->geometryCount; ++i) {
			Serialize2_VkGeometryNV( obj->pGeometries + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".type = " << Serialize_VkAccelerationStructureTypeNV(obj->type) << ";\n";
	result << indent << name << ".flags = " << Serialize_VkBuildAccelerationStructureFlagsNV(obj->flags) << ";\n";
	result << indent << name << ".instanceCount = " << IntToString(obj->instanceCount) << ";\n";
	result << indent << name << ".geometryCount = " << IntToString(obj->geometryCount) << ";\n";
	result << indent << name << ".pGeometries = " << nameSer.Get( &obj->pGeometries ) << ";\n";
}

void  Serialize2_VkPipelineVertexInputStateCreateInfo (const VkPipelineVertexInputStateCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO );
	if ( obj->pVertexBindingDescriptions ) {
		CHECK( obj->vertexBindingDescriptionCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pVertexBindingDescriptions, "vertexBindingDescriptions"s, "vertexInputBindingDescription"s );
		before << indent << "VkVertexInputBindingDescription  " << arr_name << "[" << IntToString(obj->vertexBindingDescriptionCount) << "] = {};\n";
		for (uint i = 0; i < obj->vertexBindingDescriptionCount; ++i) {
			Serialize2_VkVertexInputBindingDescription( obj->pVertexBindingDescriptions + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pVertexAttributeDescriptions ) {
		CHECK( obj->vertexAttributeDescriptionCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pVertexAttributeDescriptions, "vertexAttributeDescriptions"s, "vertexInputAttributeDescription"s );
		before << indent << "VkVertexInputAttributeDescription  " << arr_name << "[" << IntToString(obj->vertexAttributeDescriptionCount) << "] = {};\n";
		for (uint i = 0; i < obj->vertexAttributeDescriptionCount; ++i) {
			Serialize2_VkVertexInputAttributeDescription( obj->pVertexAttributeDescriptions + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineVertexInputStateCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".vertexBindingDescriptionCount = " << IntToString(obj->vertexBindingDescriptionCount) << ";\n";
	result << indent << name << ".pVertexBindingDescriptions = " << nameSer.Get( &obj->pVertexBindingDescriptions ) << ";\n";
	result << indent << name << ".vertexAttributeDescriptionCount = " << IntToString(obj->vertexAttributeDescriptionCount) << ";\n";
	result << indent << name << ".pVertexAttributeDescriptions = " << nameSer.Get( &obj->pVertexAttributeDescriptions ) << ";\n";
}

ND_ String  Serialize_VkImageSubresource (const VkImageSubresource *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "imageSubresource"s );
	result << indent << "VkImageSubresource  " << name << " = {};\n";
	Serialize2_VkImageSubresource( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkImageSubresource (const VkImageSubresource *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".aspectMask = " << Serialize_VkImageAspectFlags(obj->aspectMask) << ";\n";
	result << indent << name << ".mipLevel = " << IntToString(obj->mipLevel) << ";\n";
	result << indent << name << ".arrayLayer = " << IntToString(obj->arrayLayer) << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkSurfaceFullScreenExclusiveWin32InfoEXT (const VkSurfaceFullScreenExclusiveWin32InfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT );
	result << indent << name << ".hmonitor = " << "BitCast<HMONITOR>(" << HexToString(obj->hmonitor) << ")" << ";\n";
}
#endif

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkExportSemaphoreWin32HandleInfoKHR (const VkExportSemaphoreWin32HandleInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR );
	result << indent << name << ".pAttributes = " << "BitCast<SECURITY_ATTRIBUTES*>(" << HexToString(obj->pAttributes) << ")" << ";\n";
	result << indent << name << ".dwAccess = " << IntToString(obj->dwAccess) << ";\n";
	result << indent << name << ".name = " << WCharToString(obj->name) << ";\n";
}
#endif

void  Serialize2_VkFramebufferMixedSamplesCombinationNV (const VkFramebufferMixedSamplesCombinationNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV );
	result << indent << name << ".coverageReductionMode = " << Serialize_VkCoverageReductionModeNV(obj->coverageReductionMode) << ";\n";
	result << indent << name << ".rasterizationSamples = " << Serialize_VkSampleCountFlagBits(obj->rasterizationSamples) << ";\n";
	result << indent << name << ".depthStencilSamples = " << Serialize_VkSampleCountFlags(obj->depthStencilSamples) << ";\n";
	result << indent << name << ".colorSamples = " << Serialize_VkSampleCountFlags(obj->colorSamples) << ";\n";
}

void  Serialize2_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV (const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV );
	result << indent << name << ".dedicatedAllocationImageAliasing = " << BoolToString(obj->dedicatedAllocationImageAliasing) << ";\n";
}

ND_ String  Serialize_VkOffset3D (const VkOffset3D *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "offset3D"s );
	result << indent << "VkOffset3D  " << name << " = {};\n";
	Serialize2_VkOffset3D( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkOffset3D (const VkOffset3D *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << " = { " << IntToString(obj->x) << ", " << IntToString(obj->y) << ", " << IntToString(obj->z) << " };\n";
}

void  Serialize2_VkPipelineRasterizationStateStreamCreateInfoEXT (const VkPipelineRasterizationStateStreamCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT );
	result << indent << name << ".flags = " << Serialize_VkPipelineRasterizationStateStreamCreateFlagsEXT(obj->flags) << ";\n";
	result << indent << name << ".rasterizationStream = " << IntToString(obj->rasterizationStream) << ";\n";
}

void  Serialize2_VkAcquireNextImageInfoKHR (const VkAcquireNextImageInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR );
	result << indent << name << ".swapchain = " << remapper( VK_OBJECT_TYPE_SWAPCHAIN_KHR, obj->swapchain ) << ";\n";
	result << indent << name << ".timeout = " << IntToString(obj->timeout) << ";\n";
	result << indent << name << ".semaphore = " << remapper( VK_OBJECT_TYPE_SEMAPHORE, obj->semaphore ) << ";\n";
	result << indent << name << ".fence = " << remapper( VK_OBJECT_TYPE_FENCE, obj->fence ) << ";\n";
	result << indent << name << ".deviceMask = " << IntToString(obj->deviceMask) << ";\n";
}

void  Serialize2_VkPhysicalDeviceProtectedMemoryProperties (const VkPhysicalDeviceProtectedMemoryProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES );
	result << indent << name << ".protectedNoFault = " << BoolToString(obj->protectedNoFault) << ";\n";
}

ND_ String  Serialize_VkSparseImageMemoryBind (const VkSparseImageMemoryBind *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "sparseImageMemoryBind"s );
	result << indent << "VkSparseImageMemoryBind  " << name << " = {};\n";
	Serialize2_VkSparseImageMemoryBind( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSparseImageMemoryBind (const VkSparseImageMemoryBind *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	Serialize2_VkImageSubresource( &obj->subresource, String(name) << ".subresource", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkOffset3D( &obj->offset, String(name) << ".offset", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent3D( &obj->extent, String(name) << ".extent", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".memory = " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->memory ) << ";\n";
	result << indent << name << ".memoryOffset = " << IntToString(obj->memoryOffset) << ";\n";
	result << indent << name << ".flags = " << Serialize_VkSparseMemoryBindFlags(obj->flags) << ";\n";
}

void  Serialize2_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT (const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT );
	result << indent << name << ".requiredSubgroupSize = " << IntToString(obj->requiredSubgroupSize) << ";\n";
}

ND_ String  Serialize_VkSparseImageMemoryBindInfo (const VkSparseImageMemoryBindInfo *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "sparseImageMemoryBindInfo"s, "info"s );
	result << indent << "VkSparseImageMemoryBindInfo  " << name << " = {};\n";
	Serialize2_VkSparseImageMemoryBindInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSparseImageMemoryBindInfo (const VkSparseImageMemoryBindInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	if ( obj->pBinds ) {
		CHECK( obj->bindCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pBinds, "binds"s, "sparseImageMemoryBind"s );
		before << indent << "VkSparseImageMemoryBind  " << arr_name << "[" << IntToString(obj->bindCount) << "] = {};\n";
		for (uint i = 0; i < obj->bindCount; ++i) {
			Serialize2_VkSparseImageMemoryBind( obj->pBinds + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".image = " << remapper( VK_OBJECT_TYPE_IMAGE, obj->image ) << ";\n";
	result << indent << name << ".bindCount = " << IntToString(obj->bindCount) << ";\n";
	result << indent << name << ".pBinds = " << nameSer.Get( &obj->pBinds ) << ";\n";
}

void  Serialize2_VkFenceCreateInfo (const VkFenceCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_FENCE_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkFenceCreateFlags(obj->flags) << ";\n";
}

void  Serialize2_VkEventCreateInfo (const VkEventCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EVENT_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkEventCreateFlags(obj->flags) << ";\n";
}

void  Serialize2_VkImageViewHandleInfoNVX (const VkImageViewHandleInfoNVX *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX );
	result << indent << name << ".imageView = " << remapper( VK_OBJECT_TYPE_IMAGE_VIEW, obj->imageView ) << ";\n";
	result << indent << name << ".descriptorType = " << Serialize_VkDescriptorType(obj->descriptorType) << ";\n";
	result << indent << name << ".sampler = " << remapper( VK_OBJECT_TYPE_SAMPLER, obj->sampler ) << ";\n";
}

void  Serialize2_VkRenderPassBeginInfo (const VkRenderPassBeginInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO );
	if ( obj->pClearValues ) {
		CHECK( obj->clearValueCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pClearValues, "clearValues"s, "clearValue"s );
		before << indent << "VkClearValue  " << arr_name << "[" << IntToString(obj->clearValueCount) << "] = {};\n";
		for (uint i = 0; i < obj->clearValueCount; ++i) {
			Serialize2_VkClearValue( obj->pClearValues + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".renderPass = " << remapper( VK_OBJECT_TYPE_RENDER_PASS, obj->renderPass ) << ";\n";
	result << indent << name << ".framebuffer = " << remapper( VK_OBJECT_TYPE_FRAMEBUFFER, obj->framebuffer ) << ";\n";
	Serialize2_VkRect2D( &obj->renderArea, String(name) << ".renderArea", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".clearValueCount = " << IntToString(obj->clearValueCount) << ";\n";
	result << indent << name << ".pClearValues = " << nameSer.Get( &obj->pClearValues ) << ";\n";
}

void  Serialize2_VkQueryPoolCreateInfo (const VkQueryPoolCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkQueryPoolCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".queryType = " << Serialize_VkQueryType(obj->queryType) << ";\n";
	result << indent << name << ".queryCount = " << IntToString(obj->queryCount) << ";\n";
	result << indent << name << ".pipelineStatistics = " << Serialize_VkQueryPipelineStatisticFlags(obj->pipelineStatistics) << ";\n";
}

void  Serialize2_VkBufferCreateInfo (const VkBufferCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO );
	if ( obj->pQueueFamilyIndices ) {
		CHECK( obj->queueFamilyIndexCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pQueueFamilyIndices, "queueFamilyIndices"s ) << "[] = { ";
		for (uint i = 0; i < obj->queueFamilyIndexCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pQueueFamilyIndices[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pQueueFamilyIndices ) << ") == " << IntToString(obj->queueFamilyIndexCount) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkBufferCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".size = " << IntToString(obj->size) << ";\n";
	result << indent << name << ".usage = " << Serialize_VkBufferUsageFlags(obj->usage) << ";\n";
	result << indent << name << ".sharingMode = " << Serialize_VkSharingMode(obj->sharingMode) << ";\n";
	result << indent << name << ".queueFamilyIndexCount = " << IntToString(obj->queueFamilyIndexCount) << ";\n";
	result << indent << name << ".pQueueFamilyIndices = " << nameSer.Get( &obj->pQueueFamilyIndices ) << ";\n";
}

void  Serialize2_VkImageCreateInfo (const VkImageCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO );
	if ( obj->pQueueFamilyIndices ) {
		CHECK( obj->queueFamilyIndexCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pQueueFamilyIndices, "queueFamilyIndices"s ) << "[] = { ";
		for (uint i = 0; i < obj->queueFamilyIndexCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pQueueFamilyIndices[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pQueueFamilyIndices ) << ") == " << IntToString(obj->queueFamilyIndexCount) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkImageCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".imageType = " << Serialize_VkImageType(obj->imageType) << ";\n";
	result << indent << name << ".format = " << Serialize_VkFormat(obj->format) << ";\n";
	Serialize2_VkExtent3D( &obj->extent, String(name) << ".extent", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".mipLevels = " << IntToString(obj->mipLevels) << ";\n";
	result << indent << name << ".arrayLayers = " << IntToString(obj->arrayLayers) << ";\n";
	result << indent << name << ".samples = " << Serialize_VkSampleCountFlagBits(obj->samples) << ";\n";
	result << indent << name << ".tiling = " << Serialize_VkImageTiling(obj->tiling) << ";\n";
	result << indent << name << ".usage = " << Serialize_VkImageUsageFlags(obj->usage) << ";\n";
	result << indent << name << ".sharingMode = " << Serialize_VkSharingMode(obj->sharingMode) << ";\n";
	result << indent << name << ".queueFamilyIndexCount = " << IntToString(obj->queueFamilyIndexCount) << ";\n";
	result << indent << name << ".pQueueFamilyIndices = " << nameSer.Get( &obj->pQueueFamilyIndices ) << ";\n";
	result << indent << name << ".initialLayout = " << Serialize_VkImageLayout(obj->initialLayout) << ";\n";
}

void  Serialize2_VkPipelineMultisampleStateCreateInfo (const VkPipelineMultisampleStateCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO );
	if ( obj->pSampleMask ) {
		CHECK( ((uint(obj->rasterizationSamples) + 31) / 32) > 0 );
		before << indent << "const VkSampleMask  " << nameSer.MakeUnique( &obj->pSampleMask, "sampleMask"s ) << "[] = { ";
		for (uint i = 0; i < ((uint(obj->rasterizationSamples) + 31) / 32); ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pSampleMask[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pSampleMask ) << ") == " << IntToString(((uint(obj->rasterizationSamples) + 31) / 32)) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineMultisampleStateCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".rasterizationSamples = " << Serialize_VkSampleCountFlagBits(obj->rasterizationSamples) << ";\n";
	result << indent << name << ".sampleShadingEnable = " << BoolToString(obj->sampleShadingEnable) << ";\n";
	result << indent << name << ".minSampleShading = " << FloatToString(obj->minSampleShading) << ";\n";
	result << indent << name << ".pSampleMask = " << nameSer.Get( &obj->pSampleMask ) << ";\n";
	result << indent << name << ".alphaToCoverageEnable = " << BoolToString(obj->alphaToCoverageEnable) << ";\n";
	result << indent << name << ".alphaToOneEnable = " << BoolToString(obj->alphaToOneEnable) << ";\n";
}

ND_ String  Serialize_VkViewport (const VkViewport *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "viewport"s );
	result << indent << "VkViewport  " << name << " = {};\n";
	Serialize2_VkViewport( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkViewport (const VkViewport *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".x = " << FloatToString(obj->x) << ";\n";
	result << indent << name << ".y = " << FloatToString(obj->y) << ";\n";
	result << indent << name << ".width = " << FloatToString(obj->width) << ";\n";
	result << indent << name << ".height = " << FloatToString(obj->height) << ";\n";
	result << indent << name << ".minDepth = " << FloatToString(obj->minDepth) << ";\n";
	result << indent << name << ".maxDepth = " << FloatToString(obj->maxDepth) << ";\n";
}

ND_ String  Serialize_VkImageSubresourceRange (const VkImageSubresourceRange *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "imageSubresourceRange"s );
	result << indent << "VkImageSubresourceRange  " << name << " = {};\n";
	Serialize2_VkImageSubresourceRange( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkImageSubresourceRange (const VkImageSubresourceRange *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".aspectMask = " << Serialize_VkImageAspectFlags(obj->aspectMask) << ";\n";
	result << indent << name << ".baseMipLevel = " << IntToString(obj->baseMipLevel) << ";\n";
	result << indent << name << ".levelCount = " << IntToString(obj->levelCount) << ";\n";
	result << indent << name << ".baseArrayLayer = " << IntToString(obj->baseArrayLayer) << ";\n";
	result << indent << name << ".layerCount = " << IntToString(obj->layerCount) << ";\n";
}

void  Serialize2_VkShaderModuleCreateInfo (const VkShaderModuleCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO );
	if ( obj->pCode ) {
		CHECK( obj->codeSize > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pCode, "code"s ) << "[] = { ";
		for (uint i = 0; i < obj->codeSize; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pCode[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pCode ) << ") == " << IntToString(obj->codeSize) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkShaderModuleCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".codeSize = " << IntToString(obj->codeSize) << ";\n";
	result << indent << name << ".pCode = " << nameSer.Get( &obj->pCode ) << ";\n";
}

void  Serialize2_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT (const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT );
	if ( obj->pBindingFlags ) {
		CHECK( obj->bindingCount > 0 );
		before << indent << "const VkDescriptorBindingFlagsEXT  " << nameSer.MakeUnique( &obj->pBindingFlags, "bindingFlags"s ) << "[] = {";
		for (uint i = 0; i < obj->bindingCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkDescriptorBindingFlagsEXT( obj->pBindingFlags[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pBindingFlags ) << ") == " << IntToString(obj->bindingCount) << " );\n\n";
	}
	result << indent << name << ".bindingCount = " << IntToString(obj->bindingCount) << ";\n";
	result << indent << name << ".pBindingFlags = " << nameSer.Get( &obj->pBindingFlags ) << ";\n";
}

void  Serialize2_VkPipelineCacheCreateInfo (const VkPipelineCacheCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO );
	CHECK( (obj->initialDataSize > 0) and (obj->initialDataSize % 4 == 0) );
	before << indent << "const FIValue " << nameSer.MakeUnique( &obj->pInitialData, "initialData"s ) << "[] = {";
	for (uint i = 0; i < obj->initialDataSize; ++i) {
		before << (i ? "," : "") << (i%8 == 0 ? "\n\t"s << indent : " ") << VoidToFIValueString( obj->pInitialData, i*sizeof(FIValue) );
	}
	before << '\n' << indent << "};\n";
	before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pInitialData ) << ") == " << IntToString(obj->initialDataSize) << " );\n\n";
	result << indent << name << ".flags = " << Serialize_VkPipelineCacheCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".initialDataSize = " << IntToString(obj->initialDataSize) << ";\n";
	result << indent << name << ".pInitialData = " << nameSer.Get( &obj->pInitialData ) << ";\n";
}

void  Serialize2_VkPipelineInfoKHR (const VkPipelineInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR );
	result << indent << name << ".pipeline = " << remapper( VK_OBJECT_TYPE_PIPELINE, obj->pipeline ) << ";\n";
}

void  Serialize2_VkDisplayPlaneInfo2KHR (const VkDisplayPlaneInfo2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR );
	result << indent << name << ".mode = " << remapper( VK_OBJECT_TYPE_DISPLAY_MODE_KHR, obj->mode ) << ";\n";
	result << indent << name << ".planeIndex = " << IntToString(obj->planeIndex) << ";\n";
}

ND_ String  Serialize_VkSpecializationInfo (const VkSpecializationInfo *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "specializationInfo"s, "info"s );
	result << indent << "VkSpecializationInfo  " << name << " = {};\n";
	Serialize2_VkSpecializationInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSpecializationInfo (const VkSpecializationInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	if ( obj->pMapEntries ) {
		CHECK( obj->mapEntryCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pMapEntries, "mapEntries"s, "specializationMapEntry"s );
		before << indent << "VkSpecializationMapEntry  " << arr_name << "[" << IntToString(obj->mapEntryCount) << "] = {};\n";
		for (uint i = 0; i < obj->mapEntryCount; ++i) {
			Serialize2_VkSpecializationMapEntry( obj->pMapEntries + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	CHECK( (obj->dataSize > 0) and (obj->dataSize % 4 == 0) );
	before << indent << "const FIValue " << nameSer.MakeUnique( &obj->pData, "data"s ) << "[] = {";
	for (uint i = 0; i < obj->dataSize; ++i) {
		before << (i ? "," : "") << (i%8 == 0 ? "\n\t"s << indent : " ") << VoidToFIValueString( obj->pData, i*sizeof(FIValue) );
	}
	before << '\n' << indent << "};\n";
	before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pData ) << ") == " << IntToString(obj->dataSize) << " );\n\n";
	result << indent << name << ".mapEntryCount = " << IntToString(obj->mapEntryCount) << ";\n";
	result << indent << name << ".pMapEntries = " << nameSer.Get( &obj->pMapEntries ) << ";\n";
	result << indent << name << ".dataSize = " << IntToString(obj->dataSize) << ";\n";
	result << indent << name << ".pData = " << nameSer.Get( &obj->pData ) << ";\n";
}

void  Serialize2_VkPipelineExecutableStatisticKHR (const VkPipelineExecutableStatisticKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR );
	result << indent << name << ".name = " << '"' << obj->name << '"' << ";\n";
	result << indent << name << ".description = " << '"' << obj->description << '"' << ";\n";
	result << indent << name << ".format = " << Serialize_VkPipelineExecutableStatisticFormatKHR(obj->format) << ";\n";
	Serialize2_VkPipelineExecutableStatisticValueKHR( &obj->value, String(name) << ".value", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPipelineShaderStageCreateInfo (const VkPipelineShaderStageCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO );
	if ( obj->pSpecializationInfo ) {
		before << Serialize_VkSpecializationInfo( obj->pSpecializationInfo, nameSer, remapper, indent );
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineShaderStageCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".stage = " << Serialize_VkShaderStageFlagBits(obj->stage) << ";\n";
	result << indent << name << ".module = " << remapper( VK_OBJECT_TYPE_SHADER_MODULE, obj->module ) << ";\n";
	result << indent << name << ".pName = app.GetShaderEntry(" << remapper.GetResourceName( VK_OBJECT_TYPE_SHADER_MODULE, VkResourceID(obj->module) ) << ");\n";
	result << indent << name << ".pSpecializationInfo = " << nameSer.GetPtr(obj->pSpecializationInfo) << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkImportMemoryWin32HandleInfoNV (const VkImportMemoryWin32HandleInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV );
	result << indent << name << ".handleType = " << Serialize_VkExternalMemoryHandleTypeFlagsNV(obj->handleType) << ";\n";
	result << indent << name << ".handle = " << "BitCast<HANDLE>(" << HexToString(obj->handle) << ")" << ";\n";
}
#endif

void  Serialize2_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT (const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT );
	result << indent << name << ".fragmentShaderSampleInterlock = " << BoolToString(obj->fragmentShaderSampleInterlock) << ";\n";
	result << indent << name << ".fragmentShaderPixelInterlock = " << BoolToString(obj->fragmentShaderPixelInterlock) << ";\n";
	result << indent << name << ".fragmentShaderShadingRateInterlock = " << BoolToString(obj->fragmentShaderShadingRateInterlock) << ";\n";
}

ND_ String  Serialize_VkVertexInputBindingDescription (const VkVertexInputBindingDescription *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "vertexInputBindingDescription"s );
	result << indent << "VkVertexInputBindingDescription  " << name << " = {};\n";
	Serialize2_VkVertexInputBindingDescription( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkVertexInputBindingDescription (const VkVertexInputBindingDescription *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".binding = " << IntToString(obj->binding) << ";\n";
	result << indent << name << ".stride = " << IntToString(obj->stride) << ";\n";
	result << indent << name << ".inputRate = " << Serialize_VkVertexInputRate(obj->inputRate) << ";\n";
}

ND_ String  Serialize_VkImageCopy (const VkImageCopy *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "imageCopy"s );
	result << indent << "VkImageCopy  " << name << " = {};\n";
	Serialize2_VkImageCopy( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkImageCopy (const VkImageCopy *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	Serialize2_VkImageSubresourceLayers( &obj->srcSubresource, String(name) << ".srcSubresource", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkOffset3D( &obj->srcOffset, String(name) << ".srcOffset", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkImageSubresourceLayers( &obj->dstSubresource, String(name) << ".dstSubresource", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkOffset3D( &obj->dstOffset, String(name) << ".dstOffset", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent3D( &obj->extent, String(name) << ".extent", nameSer, remapper, indent, INOUT result, INOUT before );
}

ND_ String  Serialize_VkVertexInputAttributeDescription (const VkVertexInputAttributeDescription *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "vertexInputAttributeDescription"s );
	result << indent << "VkVertexInputAttributeDescription  " << name << " = {};\n";
	Serialize2_VkVertexInputAttributeDescription( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkVertexInputAttributeDescription (const VkVertexInputAttributeDescription *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".location = " << IntToString(obj->location) << ";\n";
	result << indent << name << ".binding = " << IntToString(obj->binding) << ";\n";
	result << indent << name << ".format = " << Serialize_VkFormat(obj->format) << ";\n";
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
}

void  Serialize2_VkPhysicalDeviceExternalBufferInfo (const VkPhysicalDeviceExternalBufferInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO );
	result << indent << name << ".flags = " << Serialize_VkBufferCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".usage = " << Serialize_VkBufferUsageFlags(obj->usage) << ";\n";
	result << indent << name << ".handleType = " << Serialize_VkExternalMemoryHandleTypeFlagBits(obj->handleType) << ";\n";
}

void  Serialize2_VkPipelineRasterizationStateCreateInfo (const VkPipelineRasterizationStateCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkPipelineRasterizationStateCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".depthClampEnable = " << BoolToString(obj->depthClampEnable) << ";\n";
	result << indent << name << ".rasterizerDiscardEnable = " << BoolToString(obj->rasterizerDiscardEnable) << ";\n";
	result << indent << name << ".polygonMode = " << Serialize_VkPolygonMode(obj->polygonMode) << ";\n";
	result << indent << name << ".cullMode = " << Serialize_VkCullModeFlags(obj->cullMode) << ";\n";
	result << indent << name << ".frontFace = " << Serialize_VkFrontFace(obj->frontFace) << ";\n";
	result << indent << name << ".depthBiasEnable = " << BoolToString(obj->depthBiasEnable) << ";\n";
	result << indent << name << ".depthBiasConstantFactor = " << FloatToString(obj->depthBiasConstantFactor) << ";\n";
	result << indent << name << ".depthBiasClamp = " << FloatToString(obj->depthBiasClamp) << ";\n";
	result << indent << name << ".depthBiasSlopeFactor = " << FloatToString(obj->depthBiasSlopeFactor) << ";\n";
	result << indent << name << ".lineWidth = " << FloatToString(obj->lineWidth) << ";\n";
}

void  Serialize2_VkMemoryHostPointerPropertiesEXT (const VkMemoryHostPointerPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT );
	result << indent << name << ".memoryTypeBits = " << IntToString(obj->memoryTypeBits) << ";\n";
}

void  Serialize2_VkDeviceGeneratedCommandsFeaturesNVX (const VkDeviceGeneratedCommandsFeaturesNVX *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX );
	result << indent << name << ".computeBindingPointSupport = " << BoolToString(obj->computeBindingPointSupport) << ";\n";
}

ND_ String  Serialize_VkExtent2D (const VkExtent2D *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "extent2D"s );
	result << indent << "VkExtent2D  " << name << " = {};\n";
	Serialize2_VkExtent2D( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkExtent2D (const VkExtent2D *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << " = { " << IntToString(obj->width) << ", " << IntToString(obj->height) << " };\n";
}

void  Serialize2_VkPresentTimesInfoGOOGLE (const VkPresentTimesInfoGOOGLE *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE );
	if ( obj->pTimes ) {
		CHECK( obj->swapchainCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pTimes, "times"s, "presentTimeGOOGLE"s );
		before << indent << "VkPresentTimeGOOGLE  " << arr_name << "[" << IntToString(obj->swapchainCount) << "] = {};\n";
		for (uint i = 0; i < obj->swapchainCount; ++i) {
			Serialize2_VkPresentTimeGOOGLE( obj->pTimes + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".swapchainCount = " << IntToString(obj->swapchainCount) << ";\n";
	result << indent << name << ".pTimes = " << nameSer.Get( &obj->pTimes ) << ";\n";
}

ND_ String  Serialize_VkRect2D (const VkRect2D *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "rect2D"s );
	result << indent << "VkRect2D  " << name << " = {};\n";
	Serialize2_VkRect2D( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkRect2D (const VkRect2D *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	Serialize2_VkOffset2D( &obj->offset, String(name) << ".offset", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->extent, String(name) << ".extent", nameSer, remapper, indent, INOUT result, INOUT before );
}

ND_ String  Serialize_VkStencilOpState (const VkStencilOpState *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "stencilOpState"s );
	result << indent << "VkStencilOpState  " << name << " = {};\n";
	Serialize2_VkStencilOpState( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkStencilOpState (const VkStencilOpState *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".failOp = " << Serialize_VkStencilOp(obj->failOp) << ";\n";
	result << indent << name << ".passOp = " << Serialize_VkStencilOp(obj->passOp) << ";\n";
	result << indent << name << ".depthFailOp = " << Serialize_VkStencilOp(obj->depthFailOp) << ";\n";
	result << indent << name << ".compareOp = " << Serialize_VkCompareOp(obj->compareOp) << ";\n";
	result << indent << name << ".compareMask = " << IntToString(obj->compareMask) << ";\n";
	result << indent << name << ".writeMask = " << IntToString(obj->writeMask) << ";\n";
	result << indent << name << ".reference = " << IntToString(obj->reference) << ";\n";
}

void  Serialize2_VkPipelineDepthStencilStateCreateInfo (const VkPipelineDepthStencilStateCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkPipelineDepthStencilStateCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".depthTestEnable = " << BoolToString(obj->depthTestEnable) << ";\n";
	result << indent << name << ".depthWriteEnable = " << BoolToString(obj->depthWriteEnable) << ";\n";
	result << indent << name << ".depthCompareOp = " << Serialize_VkCompareOp(obj->depthCompareOp) << ";\n";
	result << indent << name << ".depthBoundsTestEnable = " << BoolToString(obj->depthBoundsTestEnable) << ";\n";
	result << indent << name << ".stencilTestEnable = " << BoolToString(obj->stencilTestEnable) << ";\n";
	Serialize2_VkStencilOpState( &obj->front, String(name) << ".front", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkStencilOpState( &obj->back, String(name) << ".back", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".minDepthBounds = " << FloatToString(obj->minDepthBounds) << ";\n";
	result << indent << name << ".maxDepthBounds = " << FloatToString(obj->maxDepthBounds) << ";\n";
}

#ifdef VULKAN_ANDROID_H_
void  Serialize2_VkAndroidSurfaceCreateInfoKHR (const VkAndroidSurfaceCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR );
	result << indent << name << ".flags = " << Serialize_VkAndroidSurfaceCreateFlagsKHR(obj->flags) << ";\n";
	result << indent << name << ".window = " << "BitCast<ANativeWindow*>(" << HexToString(obj->window) << ")" << ";\n";
}
#endif

ND_ String  Serialize_VkXYColorEXT (const VkXYColorEXT *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "xYColor"s );
	result << indent << "VkXYColorEXT  " << name << " = {};\n";
	Serialize2_VkXYColorEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkXYColorEXT (const VkXYColorEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".x = " << FloatToString(obj->x) << ";\n";
	result << indent << name << ".y = " << FloatToString(obj->y) << ";\n";
}

void  Serialize2_VkPipelineExecutableInfoKHR (const VkPipelineExecutableInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR );
	result << indent << name << ".pipeline = " << remapper( VK_OBJECT_TYPE_PIPELINE, obj->pipeline ) << ";\n";
	result << indent << name << ".executableIndex = " << IntToString(obj->executableIndex) << ";\n";
}

void  Serialize2_VkCommandBufferInheritanceInfo (const VkCommandBufferInheritanceInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO );
	result << indent << name << ".renderPass = " << remapper( VK_OBJECT_TYPE_RENDER_PASS, obj->renderPass ) << ";\n";
	result << indent << name << ".subpass = " << IntToString(obj->subpass) << ";\n";
	result << indent << name << ".framebuffer = " << remapper( VK_OBJECT_TYPE_FRAMEBUFFER, obj->framebuffer ) << ";\n";
	result << indent << name << ".occlusionQueryEnable = " << BoolToString(obj->occlusionQueryEnable) << ";\n";
	result << indent << name << ".queryFlags = " << Serialize_VkQueryControlFlags(obj->queryFlags) << ";\n";
	result << indent << name << ".pipelineStatistics = " << Serialize_VkQueryPipelineStatisticFlags(obj->pipelineStatistics) << ";\n";
}

void  Serialize2_VkPipelineColorBlendStateCreateInfo (const VkPipelineColorBlendStateCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO );
	if ( obj->pAttachments ) {
		CHECK( obj->attachmentCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pAttachments, "attachments"s, "pipelineColorBlendAttachmentState"s );
		before << indent << "VkPipelineColorBlendAttachmentState  " << arr_name << "[" << IntToString(obj->attachmentCount) << "] = {};\n";
		for (uint i = 0; i < obj->attachmentCount; ++i) {
			Serialize2_VkPipelineColorBlendAttachmentState( obj->pAttachments + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineColorBlendStateCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".logicOpEnable = " << BoolToString(obj->logicOpEnable) << ";\n";
	result << indent << name << ".logicOp = " << Serialize_VkLogicOp(obj->logicOp) << ";\n";
	result << indent << name << ".attachmentCount = " << IntToString(obj->attachmentCount) << ";\n";
	result << indent << name << ".pAttachments = " << nameSer.Get( &obj->pAttachments ) << ";\n";
	result << indent << name << ".blendConstants << " << "StaticArray<float, " << IntToString(CountOf(obj->blendConstants)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->blendConstants); ++i) {
		result << (i ? ", " : "") << FloatToString(obj->blendConstants[i]);
	}
	result << " }" << ";\n";
}

void  Serialize2_VkImportFenceFdInfoKHR (const VkImportFenceFdInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR );
	result << indent << name << ".fence = " << remapper( VK_OBJECT_TYPE_FENCE, obj->fence ) << ";\n";
	result << indent << name << ".flags = " << Serialize_VkFenceImportFlags(obj->flags) << ";\n";
	result << indent << name << ".handleType = " << Serialize_VkExternalFenceHandleTypeFlagBits(obj->handleType) << ";\n";
	result << indent << name << ".fd = " << IntToString(obj->fd) << ";\n";
}

void  Serialize2_VkGraphicsPipelineCreateInfo (const VkGraphicsPipelineCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO );
	if ( obj->pStages ) {
		CHECK( obj->stageCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pStages, "stages"s, "pipelineShaderStageCreateInfo"s, "createInfo"s );
		before << indent << "VkPipelineShaderStageCreateInfo  " << arr_name << "[" << IntToString(obj->stageCount) << "] = {};\n";
		for (uint i = 0; i < obj->stageCount; ++i) {
			Serialize2_VkPipelineShaderStageCreateInfo( obj->pStages + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pVertexInputState ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pVertexInputState), nameSer, remapper, indent );
	}
	if ( obj->pInputAssemblyState ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pInputAssemblyState), nameSer, remapper, indent );
	}
	if ( obj->pTessellationState ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pTessellationState), nameSer, remapper, indent );
	}
	if ( obj->pViewportState ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pViewportState), nameSer, remapper, indent );
	}
	if ( obj->pRasterizationState ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pRasterizationState), nameSer, remapper, indent );
	}
	if ( obj->pMultisampleState ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pMultisampleState), nameSer, remapper, indent );
	}
	if ( obj->pDepthStencilState ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pDepthStencilState), nameSer, remapper, indent );
	}
	if ( obj->pColorBlendState ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pColorBlendState), nameSer, remapper, indent );
	}
	if ( obj->pDynamicState ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pDynamicState), nameSer, remapper, indent );
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".stageCount = " << IntToString(obj->stageCount) << ";\n";
	result << indent << name << ".pStages = " << nameSer.Get( &obj->pStages ) << ";\n";
	result << indent << name << ".pVertexInputState = " << nameSer.GetPtr(obj->pVertexInputState) << ";\n";
	result << indent << name << ".pInputAssemblyState = " << nameSer.GetPtr(obj->pInputAssemblyState) << ";\n";
	result << indent << name << ".pTessellationState = " << nameSer.GetPtr(obj->pTessellationState) << ";\n";
	result << indent << name << ".pViewportState = " << nameSer.GetPtr(obj->pViewportState) << ";\n";
	result << indent << name << ".pRasterizationState = " << nameSer.GetPtr(obj->pRasterizationState) << ";\n";
	result << indent << name << ".pMultisampleState = " << nameSer.GetPtr(obj->pMultisampleState) << ";\n";
	result << indent << name << ".pDepthStencilState = " << nameSer.GetPtr(obj->pDepthStencilState) << ";\n";
	result << indent << name << ".pColorBlendState = " << nameSer.GetPtr(obj->pColorBlendState) << ";\n";
	result << indent << name << ".pDynamicState = " << nameSer.GetPtr(obj->pDynamicState) << ";\n";
	result << indent << name << ".layout = " << remapper( VK_OBJECT_TYPE_PIPELINE_LAYOUT, obj->layout ) << ";\n";
	result << indent << name << ".renderPass = " << remapper( VK_OBJECT_TYPE_RENDER_PASS, obj->renderPass ) << ";\n";
	result << indent << name << ".subpass = " << IntToString(obj->subpass) << ";\n";
	result << indent << name << ".basePipelineHandle = " << remapper( VK_OBJECT_TYPE_PIPELINE, obj->basePipelineHandle ) << ";\n";
	result << indent << name << ".basePipelineIndex = " << IntToString(obj->basePipelineIndex) << ";\n";
}

void  Serialize2_VkSamplerYcbcrConversionInfo (const VkSamplerYcbcrConversionInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO );
	result << indent << name << ".conversion = " << remapper( VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION, obj->conversion ) << ";\n";
}

void  Serialize2_VkComputePipelineCreateInfo (const VkComputePipelineCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO );
	before << SerializeStruct( BitCast<VkBaseInStructure const*>(&obj->stage), nameSer, remapper, indent );
	result << indent << name << ".flags = " << Serialize_VkPipelineCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".stage = " << nameSer.Get( &obj->stage ) << ";\n";
	result << indent << name << ".layout = " << remapper( VK_OBJECT_TYPE_PIPELINE_LAYOUT, obj->layout ) << ";\n";
	result << indent << name << ".basePipelineHandle = " << remapper( VK_OBJECT_TYPE_PIPELINE, obj->basePipelineHandle ) << ";\n";
	result << indent << name << ".basePipelineIndex = " << IntToString(obj->basePipelineIndex) << ";\n";
}

ND_ String  Serialize_VkPushConstantRange (const VkPushConstantRange *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "pushConstantRange"s );
	result << indent << "VkPushConstantRange  " << name << " = {};\n";
	Serialize2_VkPushConstantRange( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkPushConstantRange (const VkPushConstantRange *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".stageFlags = " << Serialize_VkShaderStageFlags(obj->stageFlags) << ";\n";
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
	result << indent << name << ".size = " << IntToString(obj->size) << ";\n";
}

void  Serialize2_VkPipelineLayoutCreateInfo (const VkPipelineLayoutCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO );
	if ( obj->pSetLayouts ) {
		CHECK( obj->setLayoutCount > 0 );
		before << indent << "const VkDescriptorSetLayout  " << nameSer.MakeUnique( &obj->pSetLayouts, "setLayouts"s, "descriptorSetLayout"s ) << "[] = {";
		for (uint i = 0; i < obj->setLayoutCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT, obj->pSetLayouts[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pSetLayouts ) << ") == " << IntToString(obj->setLayoutCount) << " );\n\n";
	}
	if ( obj->pPushConstantRanges ) {
		CHECK( obj->pushConstantRangeCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pPushConstantRanges, "pushConstantRanges"s, "pushConstantRange"s );
		before << indent << "VkPushConstantRange  " << arr_name << "[" << IntToString(obj->pushConstantRangeCount) << "] = {};\n";
		for (uint i = 0; i < obj->pushConstantRangeCount; ++i) {
			Serialize2_VkPushConstantRange( obj->pPushConstantRanges + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineLayoutCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".setLayoutCount = " << IntToString(obj->setLayoutCount) << ";\n";
	result << indent << name << ".pSetLayouts = " << nameSer.Get( &obj->pSetLayouts ) << ";\n";
	result << indent << name << ".pushConstantRangeCount = " << IntToString(obj->pushConstantRangeCount) << ";\n";
	result << indent << name << ".pPushConstantRanges = " << nameSer.Get( &obj->pPushConstantRanges ) << ";\n";
}

void  Serialize2_VkDisplayPlaneProperties2KHR (const VkDisplayPlaneProperties2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR );
	Serialize2_VkDisplayPlanePropertiesKHR( &obj->displayPlaneProperties, String(name) << ".displayPlaneProperties", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkDisplayPresentInfoKHR (const VkDisplayPresentInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR );
	Serialize2_VkRect2D( &obj->srcRect, String(name) << ".srcRect", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkRect2D( &obj->dstRect, String(name) << ".dstRect", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".persistent = " << BoolToString(obj->persistent) << ";\n";
}

ND_ String  Serialize_VkDisplayPlanePropertiesKHR (const VkDisplayPlanePropertiesKHR *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "displayPlaneProperties"s, "properties"s );
	result << indent << "VkDisplayPlanePropertiesKHR  " << name << " = {};\n";
	Serialize2_VkDisplayPlanePropertiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkDisplayPlanePropertiesKHR (const VkDisplayPlanePropertiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".currentDisplay = " << remapper( VK_OBJECT_TYPE_DISPLAY_KHR, obj->currentDisplay ) << ";\n";
	result << indent << name << ".currentStackIndex = " << IntToString(obj->currentStackIndex) << ";\n";
}

void  Serialize2_VkSamplerCreateInfo (const VkSamplerCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkSamplerCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".magFilter = " << Serialize_VkFilter(obj->magFilter) << ";\n";
	result << indent << name << ".minFilter = " << Serialize_VkFilter(obj->minFilter) << ";\n";
	result << indent << name << ".mipmapMode = " << Serialize_VkSamplerMipmapMode(obj->mipmapMode) << ";\n";
	result << indent << name << ".addressModeU = " << Serialize_VkSamplerAddressMode(obj->addressModeU) << ";\n";
	result << indent << name << ".addressModeV = " << Serialize_VkSamplerAddressMode(obj->addressModeV) << ";\n";
	result << indent << name << ".addressModeW = " << Serialize_VkSamplerAddressMode(obj->addressModeW) << ";\n";
	result << indent << name << ".mipLodBias = " << FloatToString(obj->mipLodBias) << ";\n";
	result << indent << name << ".anisotropyEnable = " << BoolToString(obj->anisotropyEnable) << ";\n";
	result << indent << name << ".maxAnisotropy = " << FloatToString(obj->maxAnisotropy) << ";\n";
	result << indent << name << ".compareEnable = " << BoolToString(obj->compareEnable) << ";\n";
	result << indent << name << ".compareOp = " << Serialize_VkCompareOp(obj->compareOp) << ";\n";
	result << indent << name << ".minLod = " << FloatToString(obj->minLod) << ";\n";
	result << indent << name << ".maxLod = " << FloatToString(obj->maxLod) << ";\n";
	result << indent << name << ".borderColor = " << Serialize_VkBorderColor(obj->borderColor) << ";\n";
	result << indent << name << ".unnormalizedCoordinates = " << BoolToString(obj->unnormalizedCoordinates) << ";\n";
}

ND_ String  Serialize_VkDescriptorSetLayoutBinding (const VkDescriptorSetLayoutBinding *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "descriptorSetLayoutBinding"s );
	result << indent << "VkDescriptorSetLayoutBinding  " << name << " = {};\n";
	Serialize2_VkDescriptorSetLayoutBinding( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkDescriptorSetLayoutBinding (const VkDescriptorSetLayoutBinding *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	if ( obj->pImmutableSamplers ) {
		CHECK( obj->descriptorCount > 0 );
		before << indent << "const VkSampler  " << nameSer.MakeUnique( &obj->pImmutableSamplers, "immutableSamplers"s, "sampler"s ) << "[] = {";
		for (uint i = 0; i < obj->descriptorCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_SAMPLER, obj->pImmutableSamplers[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pImmutableSamplers ) << ") == " << IntToString(obj->descriptorCount) << " );\n\n";
	}
	result << indent << name << ".binding = " << IntToString(obj->binding) << ";\n";
	result << indent << name << ".descriptorType = " << Serialize_VkDescriptorType(obj->descriptorType) << ";\n";
	result << indent << name << ".descriptorCount = " << IntToString(obj->descriptorCount) << ";\n";
	result << indent << name << ".stageFlags = " << Serialize_VkShaderStageFlags(obj->stageFlags) << ";\n";
	result << indent << name << ".pImmutableSamplers = " << nameSer.Get( &obj->pImmutableSamplers ) << ";\n";
}

void  Serialize2_VkDescriptorSetLayoutCreateInfo (const VkDescriptorSetLayoutCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO );
	if ( obj->pBindings ) {
		CHECK( obj->bindingCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pBindings, "bindings"s, "descriptorSetLayoutBinding"s );
		before << indent << "VkDescriptorSetLayoutBinding  " << arr_name << "[" << IntToString(obj->bindingCount) << "] = {};\n";
		for (uint i = 0; i < obj->bindingCount; ++i) {
			Serialize2_VkDescriptorSetLayoutBinding( obj->pBindings + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkDescriptorSetLayoutCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".bindingCount = " << IntToString(obj->bindingCount) << ";\n";
	result << indent << name << ".pBindings = " << nameSer.Get( &obj->pBindings ) << ";\n";
}

ND_ String  Serialize_VkDescriptorPoolSize (const VkDescriptorPoolSize *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "descriptorPoolSize"s );
	result << indent << "VkDescriptorPoolSize  " << name << " = {};\n";
	Serialize2_VkDescriptorPoolSize( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkDescriptorPoolSize (const VkDescriptorPoolSize *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".type = " << Serialize_VkDescriptorType(obj->type) << ";\n";
	result << indent << name << ".descriptorCount = " << IntToString(obj->descriptorCount) << ";\n";
}

void  Serialize2_VkDescriptorPoolCreateInfo (const VkDescriptorPoolCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO );
	if ( obj->pPoolSizes ) {
		CHECK( obj->poolSizeCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pPoolSizes, "poolSizes"s, "descriptorPoolSize"s );
		before << indent << "VkDescriptorPoolSize  " << arr_name << "[" << IntToString(obj->poolSizeCount) << "] = {};\n";
		for (uint i = 0; i < obj->poolSizeCount; ++i) {
			Serialize2_VkDescriptorPoolSize( obj->pPoolSizes + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkDescriptorPoolCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".maxSets = " << IntToString(obj->maxSets) << ";\n";
	result << indent << name << ".poolSizeCount = " << IntToString(obj->poolSizeCount) << ";\n";
	result << indent << name << ".pPoolSizes = " << nameSer.Get( &obj->pPoolSizes ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceRayTracingPropertiesNV (const VkPhysicalDeviceRayTracingPropertiesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV );
	result << indent << name << ".shaderGroupHandleSize = " << IntToString(obj->shaderGroupHandleSize) << ";\n";
	result << indent << name << ".maxRecursionDepth = " << IntToString(obj->maxRecursionDepth) << ";\n";
	result << indent << name << ".maxShaderGroupStride = " << IntToString(obj->maxShaderGroupStride) << ";\n";
	result << indent << name << ".shaderGroupBaseAlignment = " << IntToString(obj->shaderGroupBaseAlignment) << ";\n";
	result << indent << name << ".maxGeometryCount = " << IntToString(obj->maxGeometryCount) << ";\n";
	result << indent << name << ".maxInstanceCount = " << IntToString(obj->maxInstanceCount) << ";\n";
	result << indent << name << ".maxTriangleCount = " << IntToString(obj->maxTriangleCount) << ";\n";
	result << indent << name << ".maxDescriptorSetAccelerationStructures = " << IntToString(obj->maxDescriptorSetAccelerationStructures) << ";\n";
}

void  Serialize2_VkImageMemoryRequirementsInfo2 (const VkImageMemoryRequirementsInfo2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2 );
	result << indent << name << ".image = " << remapper( VK_OBJECT_TYPE_IMAGE, obj->image ) << ";\n";
}

void  Serialize2_VkDescriptorSetAllocateInfo (const VkDescriptorSetAllocateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO );
	if ( obj->pSetLayouts ) {
		CHECK( obj->descriptorSetCount > 0 );
		before << indent << "const VkDescriptorSetLayout  " << nameSer.MakeUnique( &obj->pSetLayouts, "setLayouts"s, "descriptorSetLayout"s ) << "[] = {";
		for (uint i = 0; i < obj->descriptorSetCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT, obj->pSetLayouts[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pSetLayouts ) << ") == " << IntToString(obj->descriptorSetCount) << " );\n\n";
	}
	result << indent << name << ".descriptorPool = " << remapper( VK_OBJECT_TYPE_DESCRIPTOR_POOL, obj->descriptorPool ) << ";\n";
	result << indent << name << ".descriptorSetCount = " << IntToString(obj->descriptorSetCount) << ";\n";
	result << indent << name << ".pSetLayouts = " << nameSer.Get( &obj->pSetLayouts ) << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkExportMemoryWin32HandleInfoNV (const VkExportMemoryWin32HandleInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV );
	result << indent << name << ".pAttributes = " << "BitCast<SECURITY_ATTRIBUTES*>(" << HexToString(obj->pAttributes) << ")" << ";\n";
	result << indent << name << ".dwAccess = " << IntToString(obj->dwAccess) << ";\n";
}
#endif

void  Serialize2_VkHdrMetadataEXT (const VkHdrMetadataEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_HDR_METADATA_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_HDR_METADATA_EXT );
	Serialize2_VkXYColorEXT( &obj->displayPrimaryRed, String(name) << ".displayPrimaryRed", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkXYColorEXT( &obj->displayPrimaryGreen, String(name) << ".displayPrimaryGreen", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkXYColorEXT( &obj->displayPrimaryBlue, String(name) << ".displayPrimaryBlue", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkXYColorEXT( &obj->whitePoint, String(name) << ".whitePoint", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".maxLuminance = " << FloatToString(obj->maxLuminance) << ";\n";
	result << indent << name << ".minLuminance = " << FloatToString(obj->minLuminance) << ";\n";
	result << indent << name << ".maxContentLightLevel = " << FloatToString(obj->maxContentLightLevel) << ";\n";
	result << indent << name << ".maxFrameAverageLightLevel = " << FloatToString(obj->maxFrameAverageLightLevel) << ";\n";
}

void  Serialize2_VkPhysicalDeviceExternalSemaphoreInfo (const VkPhysicalDeviceExternalSemaphoreInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO );
	result << indent << name << ".handleType = " << Serialize_VkExternalSemaphoreHandleTypeFlagBits(obj->handleType) << ";\n";
}

ND_ String  Serialize_VkClearValue (const VkClearValue *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "clearValue"s );
	result << indent << "VkClearValue  " << name << " = {};\n";
	Serialize2_VkClearValue( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkClearValue (const VkClearValue *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << "// current clear value depends on render pass\n";
	result << indent << "// .depthStencil = { " << FloatToString(obj->depthStencil.depth) << ", " << IntToString(obj->depthStencil.stencil) << " }\n";
	result << indent << "// .color.float32 = { " << FloatToString(obj->color.float32[0]) << ", " << FloatToString(obj->color.float32[1]) << ", " << FloatToString(obj->color.float32[2]) << ", " << FloatToString(obj->color.float32[3]) << " };\n";
	result << indent << name << ".color.uint32 << StaticArray<uint32_t, 4>{ " << IntToString(obj->color.uint32[0]) << ", " << IntToString(obj->color.uint32[1]) << ", " << IntToString(obj->color.uint32[2]) << ", " << IntToString(obj->color.uint32[3]) << " };\n";
}

ND_ String  Serialize_VkDescriptorImageInfo (const VkDescriptorImageInfo *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "descriptorImageInfo"s, "info"s );
	result << indent << "VkDescriptorImageInfo  " << name << " = {};\n";
	Serialize2_VkDescriptorImageInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkDescriptorImageInfo (const VkDescriptorImageInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".sampler = " << remapper( VK_OBJECT_TYPE_SAMPLER, obj->sampler ) << ";\n";
	result << indent << name << ".imageView = " << remapper( VK_OBJECT_TYPE_IMAGE_VIEW, obj->imageView ) << ";\n";
	result << indent << name << ".imageLayout = " << Serialize_VkImageLayout(obj->imageLayout) << ";\n";
}

ND_ String  Serialize_VkDescriptorBufferInfo (const VkDescriptorBufferInfo *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "descriptorBufferInfo"s, "info"s );
	result << indent << "VkDescriptorBufferInfo  " << name << " = {};\n";
	Serialize2_VkDescriptorBufferInfo( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkDescriptorBufferInfo (const VkDescriptorBufferInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".buffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->buffer ) << ";\n";
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
	result << indent << name << ".range = " << IntToString(obj->range) << ";\n";
}

void  Serialize2_VkWriteDescriptorSet (const VkWriteDescriptorSet *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET );
	if ( obj->pImageInfo ) {
		CHECK( obj->descriptorCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pImageInfo, "imageInfo"s, "descriptorImageInfo"s, "info"s );
		before << indent << "VkDescriptorImageInfo  " << arr_name << "[" << IntToString(obj->descriptorCount) << "] = {};\n";
		for (uint i = 0; i < obj->descriptorCount; ++i) {
			Serialize2_VkDescriptorImageInfo( obj->pImageInfo + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pBufferInfo ) {
		CHECK( obj->descriptorCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pBufferInfo, "bufferInfo"s, "descriptorBufferInfo"s, "info"s );
		before << indent << "VkDescriptorBufferInfo  " << arr_name << "[" << IntToString(obj->descriptorCount) << "] = {};\n";
		for (uint i = 0; i < obj->descriptorCount; ++i) {
			Serialize2_VkDescriptorBufferInfo( obj->pBufferInfo + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pTexelBufferView ) {
		CHECK( obj->descriptorCount > 0 );
		before << indent << "const VkBufferView  " << nameSer.MakeUnique( &obj->pTexelBufferView, "texelBufferView"s, "bufferView"s ) << "[] = {";
		for (uint i = 0; i < obj->descriptorCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_BUFFER_VIEW, obj->pTexelBufferView[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pTexelBufferView ) << ") == " << IntToString(obj->descriptorCount) << " );\n\n";
	}
	result << indent << name << ".dstSet = " << remapper( VK_OBJECT_TYPE_DESCRIPTOR_SET, obj->dstSet ) << ";\n";
	result << indent << name << ".dstBinding = " << IntToString(obj->dstBinding) << ";\n";
	result << indent << name << ".dstArrayElement = " << IntToString(obj->dstArrayElement) << ";\n";
	result << indent << name << ".descriptorCount = " << IntToString(obj->descriptorCount) << ";\n";
	result << indent << name << ".descriptorType = " << Serialize_VkDescriptorType(obj->descriptorType) << ";\n";
	result << indent << name << ".pImageInfo = " << nameSer.Get( &obj->pImageInfo ) << ";\n";
	result << indent << name << ".pBufferInfo = " << nameSer.Get( &obj->pBufferInfo ) << ";\n";
	result << indent << name << ".pTexelBufferView = " << nameSer.Get( &obj->pTexelBufferView ) << ";\n";
}

void  Serialize2_VkCopyDescriptorSet (const VkCopyDescriptorSet *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET );
	result << indent << name << ".srcSet = " << remapper( VK_OBJECT_TYPE_DESCRIPTOR_SET, obj->srcSet ) << ";\n";
	result << indent << name << ".srcBinding = " << IntToString(obj->srcBinding) << ";\n";
	result << indent << name << ".srcArrayElement = " << IntToString(obj->srcArrayElement) << ";\n";
	result << indent << name << ".dstSet = " << remapper( VK_OBJECT_TYPE_DESCRIPTOR_SET, obj->dstSet ) << ";\n";
	result << indent << name << ".dstBinding = " << IntToString(obj->dstBinding) << ";\n";
	result << indent << name << ".dstArrayElement = " << IntToString(obj->dstArrayElement) << ";\n";
	result << indent << name << ".descriptorCount = " << IntToString(obj->descriptorCount) << ";\n";
}

void  Serialize2_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT (const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT );
	result << indent << name << ".filterMinmaxSingleComponentFormats = " << BoolToString(obj->filterMinmaxSingleComponentFormats) << ";\n";
	result << indent << name << ".filterMinmaxImageComponentMapping = " << BoolToString(obj->filterMinmaxImageComponentMapping) << ";\n";
}

void  Serialize2_VkFramebufferCreateInfo (const VkFramebufferCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO );
	if ( obj->pAttachments ) {
		CHECK( obj->attachmentCount > 0 );
		before << indent << "const VkImageView  " << nameSer.MakeUnique( &obj->pAttachments, "attachments"s, "imageView"s ) << "[] = {";
		for (uint i = 0; i < obj->attachmentCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_IMAGE_VIEW, obj->pAttachments[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pAttachments ) << ") == " << IntToString(obj->attachmentCount) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkFramebufferCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".renderPass = " << remapper( VK_OBJECT_TYPE_RENDER_PASS, obj->renderPass ) << ";\n";
	result << indent << name << ".attachmentCount = " << IntToString(obj->attachmentCount) << ";\n";
	result << indent << name << ".pAttachments = " << nameSer.Get( &obj->pAttachments ) << ";\n";
	result << indent << name << ".width = " << IntToString(obj->width) << ";\n";
	result << indent << name << ".height = " << IntToString(obj->height) << ";\n";
	result << indent << name << ".layers = " << IntToString(obj->layers) << ";\n";
}

ND_ String  Serialize_VkAttachmentDescription (const VkAttachmentDescription *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "attachmentDescription"s );
	result << indent << "VkAttachmentDescription  " << name << " = {};\n";
	Serialize2_VkAttachmentDescription( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkAttachmentDescription (const VkAttachmentDescription *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".flags = " << Serialize_VkAttachmentDescriptionFlags(obj->flags) << ";\n";
	result << indent << name << ".format = " << Serialize_VkFormat(obj->format) << ";\n";
	result << indent << name << ".samples = " << Serialize_VkSampleCountFlagBits(obj->samples) << ";\n";
	result << indent << name << ".loadOp = " << Serialize_VkAttachmentLoadOp(obj->loadOp) << ";\n";
	result << indent << name << ".storeOp = " << Serialize_VkAttachmentStoreOp(obj->storeOp) << ";\n";
	result << indent << name << ".stencilLoadOp = " << Serialize_VkAttachmentLoadOp(obj->stencilLoadOp) << ";\n";
	result << indent << name << ".stencilStoreOp = " << Serialize_VkAttachmentStoreOp(obj->stencilStoreOp) << ";\n";
	result << indent << name << ".initialLayout = " << Serialize_VkImageLayout(obj->initialLayout) << ";\n";
	result << indent << name << ".finalLayout = " << Serialize_VkImageLayout(obj->finalLayout) << ";\n";
}

void  Serialize2_VkPhysicalDeviceImagelessFramebufferFeaturesKHR (const VkPhysicalDeviceImagelessFramebufferFeaturesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR );
	result << indent << name << ".imagelessFramebuffer = " << BoolToString(obj->imagelessFramebuffer) << ";\n";
}

ND_ String  Serialize_VkAttachmentReference (const VkAttachmentReference *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "attachmentReference"s );
	result << indent << "VkAttachmentReference  " << name << " = {};\n";
	Serialize2_VkAttachmentReference( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkAttachmentReference (const VkAttachmentReference *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".attachment = " << IntToString(obj->attachment) << ";\n";
	result << indent << name << ".layout = " << Serialize_VkImageLayout(obj->layout) << ";\n";
}

void  Serialize2_VkBufferDeviceAddressInfoEXT (const VkBufferDeviceAddressInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT );
	result << indent << name << ".buffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->buffer ) << ";\n";
}

ND_ String  Serialize_VkSubpassDescription (const VkSubpassDescription *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "subpassDescription"s );
	result << indent << "VkSubpassDescription  " << name << " = {};\n";
	Serialize2_VkSubpassDescription( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSubpassDescription (const VkSubpassDescription *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	if ( obj->pInputAttachments ) {
		CHECK( obj->inputAttachmentCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pInputAttachments, "inputAttachments"s, "attachmentReference"s );
		before << indent << "VkAttachmentReference  " << arr_name << "[" << IntToString(obj->inputAttachmentCount) << "] = {};\n";
		for (uint i = 0; i < obj->inputAttachmentCount; ++i) {
			Serialize2_VkAttachmentReference( obj->pInputAttachments + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pColorAttachments ) {
		CHECK( obj->colorAttachmentCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pColorAttachments, "colorAttachments"s, "attachmentReference"s );
		before << indent << "VkAttachmentReference  " << arr_name << "[" << IntToString(obj->colorAttachmentCount) << "] = {};\n";
		for (uint i = 0; i < obj->colorAttachmentCount; ++i) {
			Serialize2_VkAttachmentReference( obj->pColorAttachments + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pResolveAttachments ) {
		CHECK( obj->colorAttachmentCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pResolveAttachments, "resolveAttachments"s, "attachmentReference"s );
		before << indent << "VkAttachmentReference  " << arr_name << "[" << IntToString(obj->colorAttachmentCount) << "] = {};\n";
		for (uint i = 0; i < obj->colorAttachmentCount; ++i) {
			Serialize2_VkAttachmentReference( obj->pResolveAttachments + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pDepthStencilAttachment ) {
		before << Serialize_VkAttachmentReference( obj->pDepthStencilAttachment, nameSer, remapper, indent );
	}
	if ( obj->pPreserveAttachments ) {
		CHECK( obj->preserveAttachmentCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pPreserveAttachments, "preserveAttachments"s ) << "[] = { ";
		for (uint i = 0; i < obj->preserveAttachmentCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pPreserveAttachments[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pPreserveAttachments ) << ") == " << IntToString(obj->preserveAttachmentCount) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkSubpassDescriptionFlags(obj->flags) << ";\n";
	result << indent << name << ".pipelineBindPoint = " << Serialize_VkPipelineBindPoint(obj->pipelineBindPoint) << ";\n";
	result << indent << name << ".inputAttachmentCount = " << IntToString(obj->inputAttachmentCount) << ";\n";
	result << indent << name << ".pInputAttachments = " << nameSer.Get( &obj->pInputAttachments ) << ";\n";
	result << indent << name << ".colorAttachmentCount = " << IntToString(obj->colorAttachmentCount) << ";\n";
	result << indent << name << ".pColorAttachments = " << nameSer.Get( &obj->pColorAttachments ) << ";\n";
	result << indent << name << ".pResolveAttachments = " << nameSer.Get( &obj->pResolveAttachments ) << ";\n";
	result << indent << name << ".pDepthStencilAttachment = " << nameSer.GetPtr(obj->pDepthStencilAttachment) << ";\n";
	result << indent << name << ".preserveAttachmentCount = " << IntToString(obj->preserveAttachmentCount) << ";\n";
	result << indent << name << ".pPreserveAttachments = " << nameSer.Get( &obj->pPreserveAttachments ) << ";\n";
}

ND_ String  Serialize_VkSubpassDependency (const VkSubpassDependency *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "subpassDependency"s );
	result << indent << "VkSubpassDependency  " << name << " = {};\n";
	Serialize2_VkSubpassDependency( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSubpassDependency (const VkSubpassDependency *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".srcSubpass = " << IntToString(obj->srcSubpass) << ";\n";
	result << indent << name << ".dstSubpass = " << IntToString(obj->dstSubpass) << ";\n";
	result << indent << name << ".srcStageMask = " << Serialize_VkPipelineStageFlags(obj->srcStageMask) << ";\n";
	result << indent << name << ".dstStageMask = " << Serialize_VkPipelineStageFlags(obj->dstStageMask) << ";\n";
	result << indent << name << ".srcAccessMask = " << Serialize_VkAccessFlags(obj->srcAccessMask) << ";\n";
	result << indent << name << ".dstAccessMask = " << Serialize_VkAccessFlags(obj->dstAccessMask) << ";\n";
	result << indent << name << ".dependencyFlags = " << Serialize_VkDependencyFlags(obj->dependencyFlags) << ";\n";
}

void  Serialize2_VkRenderPassCreateInfo (const VkRenderPassCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO );
	if ( obj->pAttachments ) {
		CHECK( obj->attachmentCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pAttachments, "attachments"s, "attachmentDescription"s );
		before << indent << "VkAttachmentDescription  " << arr_name << "[" << IntToString(obj->attachmentCount) << "] = {};\n";
		for (uint i = 0; i < obj->attachmentCount; ++i) {
			Serialize2_VkAttachmentDescription( obj->pAttachments + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pSubpasses ) {
		CHECK( obj->subpassCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pSubpasses, "subpasses"s, "subpassDescription"s );
		before << indent << "VkSubpassDescription  " << arr_name << "[" << IntToString(obj->subpassCount) << "] = {};\n";
		for (uint i = 0; i < obj->subpassCount; ++i) {
			Serialize2_VkSubpassDescription( obj->pSubpasses + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pDependencies ) {
		CHECK( obj->dependencyCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pDependencies, "dependencies"s, "subpassDependency"s );
		before << indent << "VkSubpassDependency  " << arr_name << "[" << IntToString(obj->dependencyCount) << "] = {};\n";
		for (uint i = 0; i < obj->dependencyCount; ++i) {
			Serialize2_VkSubpassDependency( obj->pDependencies + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkRenderPassCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".attachmentCount = " << IntToString(obj->attachmentCount) << ";\n";
	result << indent << name << ".pAttachments = " << nameSer.Get( &obj->pAttachments ) << ";\n";
	result << indent << name << ".subpassCount = " << IntToString(obj->subpassCount) << ";\n";
	result << indent << name << ".pSubpasses = " << nameSer.Get( &obj->pSubpasses ) << ";\n";
	result << indent << name << ".dependencyCount = " << IntToString(obj->dependencyCount) << ";\n";
	result << indent << name << ".pDependencies = " << nameSer.Get( &obj->pDependencies ) << ";\n";
}

void  Serialize2_VkCommandPoolCreateInfo (const VkCommandPoolCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO );
	result << indent << name << ".flags = " << Serialize_VkCommandPoolCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".queueFamilyIndex = " << IntToString(obj->queueFamilyIndex) << ";\n";
}

void  Serialize2_VkCommandBufferAllocateInfo (const VkCommandBufferAllocateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO );
	result << indent << name << ".commandPool = " << remapper( VK_OBJECT_TYPE_COMMAND_POOL, obj->commandPool ) << ";\n";
	result << indent << name << ".level = " << Serialize_VkCommandBufferLevel(obj->level) << ";\n";
	result << indent << name << ".commandBufferCount = " << IntToString(obj->commandBufferCount) << ";\n";
}

void  Serialize2_VkCommandBufferBeginInfo (const VkCommandBufferBeginInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO );
	if ( obj->pInheritanceInfo ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pInheritanceInfo), nameSer, remapper, indent );
	}
	result << indent << name << ".flags = " << Serialize_VkCommandBufferUsageFlags(obj->flags) << ";\n";
	result << indent << name << ".pInheritanceInfo = " << nameSer.GetPtr(obj->pInheritanceInfo) << ";\n";
}

ND_ String  Serialize_VkBufferCopy (const VkBufferCopy *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "bufferCopy"s );
	result << indent << "VkBufferCopy  " << name << " = {};\n";
	Serialize2_VkBufferCopy( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkBufferCopy (const VkBufferCopy *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".srcOffset = " << IntToString(obj->srcOffset) << ";\n";
	result << indent << name << ".dstOffset = " << IntToString(obj->dstOffset) << ";\n";
	result << indent << name << ".size = " << IntToString(obj->size) << ";\n";
}

ND_ String  Serialize_VkDisplayModePropertiesKHR (const VkDisplayModePropertiesKHR *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "displayModeProperties"s, "properties"s );
	result << indent << "VkDisplayModePropertiesKHR  " << name << " = {};\n";
	Serialize2_VkDisplayModePropertiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkDisplayModePropertiesKHR (const VkDisplayModePropertiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".displayMode = " << remapper( VK_OBJECT_TYPE_DISPLAY_MODE_KHR, obj->displayMode ) << ";\n";
	Serialize2_VkDisplayModeParametersKHR( &obj->parameters, String(name) << ".parameters", nameSer, remapper, indent, INOUT result, INOUT before );
}

ND_ String  Serialize_VkImageSubresourceLayers (const VkImageSubresourceLayers *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "imageSubresourceLayers"s );
	result << indent << "VkImageSubresourceLayers  " << name << " = {};\n";
	Serialize2_VkImageSubresourceLayers( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkImageSubresourceLayers (const VkImageSubresourceLayers *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".aspectMask = " << Serialize_VkImageAspectFlags(obj->aspectMask) << ";\n";
	result << indent << name << ".mipLevel = " << IntToString(obj->mipLevel) << ";\n";
	result << indent << name << ".baseArrayLayer = " << IntToString(obj->baseArrayLayer) << ";\n";
	result << indent << name << ".layerCount = " << IntToString(obj->layerCount) << ";\n";
}

void  Serialize2_VkFramebufferAttachmentsCreateInfoKHR (const VkFramebufferAttachmentsCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR );
	if ( obj->pAttachmentImageInfos ) {
		CHECK( obj->attachmentImageInfoCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pAttachmentImageInfos, "attachmentImageInfos"s, "framebufferAttachmentImageInfo"s, "info"s );
		before << indent << "VkFramebufferAttachmentImageInfoKHR  " << arr_name << "[" << IntToString(obj->attachmentImageInfoCount) << "] = {};\n";
		for (uint i = 0; i < obj->attachmentImageInfoCount; ++i) {
			Serialize2_VkFramebufferAttachmentImageInfoKHR( obj->pAttachmentImageInfos + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".attachmentImageInfoCount = " << IntToString(obj->attachmentImageInfoCount) << ";\n";
	result << indent << name << ".pAttachmentImageInfos = " << nameSer.Get( &obj->pAttachmentImageInfos ) << ";\n";
}

ND_ String  Serialize_VkImageBlit (const VkImageBlit *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "imageBlit"s );
	result << indent << "VkImageBlit  " << name << " = {};\n";
	Serialize2_VkImageBlit( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkImageBlit (const VkImageBlit *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	if ( obj->srcOffsets ) {
		CHECK( CountOf(obj->srcOffsets) > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->srcOffsets, "srcOffsets"s, "offset3D"s );
		before << indent << "VkOffset3D  " << arr_name << "[" << IntToString(CountOf(obj->srcOffsets)) << "] = {};\n";
		for (uint i = 0; i < CountOf(obj->srcOffsets); ++i) {
			Serialize2_VkOffset3D( obj->srcOffsets + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->dstOffsets ) {
		CHECK( CountOf(obj->dstOffsets) > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->dstOffsets, "dstOffsets"s, "offset3D"s );
		before << indent << "VkOffset3D  " << arr_name << "[" << IntToString(CountOf(obj->dstOffsets)) << "] = {};\n";
		for (uint i = 0; i < CountOf(obj->dstOffsets); ++i) {
			Serialize2_VkOffset3D( obj->dstOffsets + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	Serialize2_VkImageSubresourceLayers( &obj->srcSubresource, String(name) << ".srcSubresource", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".srcOffsets = " << nameSer.Get( &obj->srcOffsets ) << ";\n";
	Serialize2_VkImageSubresourceLayers( &obj->dstSubresource, String(name) << ".dstSubresource", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".dstOffsets = " << nameSer.Get( &obj->dstOffsets ) << ";\n";
}

ND_ String  Serialize_VkBufferImageCopy (const VkBufferImageCopy *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "bufferImageCopy"s );
	result << indent << "VkBufferImageCopy  " << name << " = {};\n";
	Serialize2_VkBufferImageCopy( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkBufferImageCopy (const VkBufferImageCopy *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".bufferOffset = " << IntToString(obj->bufferOffset) << ";\n";
	result << indent << name << ".bufferRowLength = " << IntToString(obj->bufferRowLength) << ";\n";
	result << indent << name << ".bufferImageHeight = " << IntToString(obj->bufferImageHeight) << ";\n";
	Serialize2_VkImageSubresourceLayers( &obj->imageSubresource, String(name) << ".imageSubresource", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkOffset3D( &obj->imageOffset, String(name) << ".imageOffset", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent3D( &obj->imageExtent, String(name) << ".imageExtent", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT (const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT );
	result << indent << name << ".maxVariableDescriptorCount = " << IntToString(obj->maxVariableDescriptorCount) << ";\n";
}

ND_ String  Serialize_VkClearColorValue (const VkClearColorValue *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "clearColorValue"s );
	result << indent << "VkClearColorValue  " << name << " = {};\n";
	Serialize2_VkClearColorValue( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkClearColorValue (const VkClearColorValue *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << "// current clear value depends on render pass\n";
	result << indent << "// float32 << { " << FloatToString(obj->float32[0]) << ", " << FloatToString(obj->float32[1]) << ", " << FloatToString(obj->float32[2]) << ", " << FloatToString(obj->float32[3]) << " };\n";
	result << indent << name << ".uint32 << StaticArray<uint32_t, 4>{ " << IntToString(obj->uint32[0]) << ", " << IntToString(obj->uint32[1]) << ", " << IntToString(obj->uint32[2]) << ", " << IntToString(obj->uint32[3]) << " };\n";
}

ND_ String  Serialize_VkClearDepthStencilValue (const VkClearDepthStencilValue *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "clearDepthStencilValue"s );
	result << indent << "VkClearDepthStencilValue  " << name << " = {};\n";
	Serialize2_VkClearDepthStencilValue( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkClearDepthStencilValue (const VkClearDepthStencilValue *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".depth = " << FloatToString(obj->depth) << ";\n";
	result << indent << name << ".stencil = " << IntToString(obj->stencil) << ";\n";
}

ND_ String  Serialize_VkClearAttachment (const VkClearAttachment *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "clearAttachment"s );
	result << indent << "VkClearAttachment  " << name << " = {};\n";
	Serialize2_VkClearAttachment( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkClearAttachment (const VkClearAttachment *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".aspectMask = " << Serialize_VkImageAspectFlags(obj->aspectMask) << ";\n";
	result << indent << name << ".colorAttachment = " << IntToString(obj->colorAttachment) << ";\n";
	Serialize2_VkClearValue( &obj->clearValue, String(name) << ".clearValue", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkDeviceGeneratedCommandsLimitsNVX (const VkDeviceGeneratedCommandsLimitsNVX *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX );
	result << indent << name << ".maxIndirectCommandsLayoutTokenCount = " << IntToString(obj->maxIndirectCommandsLayoutTokenCount) << ";\n";
	result << indent << name << ".maxObjectEntryCounts = " << IntToString(obj->maxObjectEntryCounts) << ";\n";
	result << indent << name << ".minSequenceCountBufferOffsetAlignment = " << IntToString(obj->minSequenceCountBufferOffsetAlignment) << ";\n";
	result << indent << name << ".minSequenceIndexBufferOffsetAlignment = " << IntToString(obj->minSequenceIndexBufferOffsetAlignment) << ";\n";
	result << indent << name << ".minCommandsTokenBufferOffsetAlignment = " << IntToString(obj->minCommandsTokenBufferOffsetAlignment) << ";\n";
}

ND_ String  Serialize_VkClearRect (const VkClearRect *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "clearRect"s );
	result << indent << "VkClearRect  " << name << " = {};\n";
	Serialize2_VkClearRect( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkClearRect (const VkClearRect *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	Serialize2_VkRect2D( &obj->rect, String(name) << ".rect", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".baseArrayLayer = " << IntToString(obj->baseArrayLayer) << ";\n";
	result << indent << name << ".layerCount = " << IntToString(obj->layerCount) << ";\n";
}

ND_ String  Serialize_VkViewportSwizzleNV (const VkViewportSwizzleNV *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "viewportSwizzleNV"s );
	result << indent << "VkViewportSwizzleNV  " << name << " = {};\n";
	Serialize2_VkViewportSwizzleNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkViewportSwizzleNV (const VkViewportSwizzleNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".x = " << Serialize_VkViewportCoordinateSwizzleNV(obj->x) << ";\n";
	result << indent << name << ".y = " << Serialize_VkViewportCoordinateSwizzleNV(obj->y) << ";\n";
	result << indent << name << ".z = " << Serialize_VkViewportCoordinateSwizzleNV(obj->z) << ";\n";
	result << indent << name << ".w = " << Serialize_VkViewportCoordinateSwizzleNV(obj->w) << ";\n";
}

void  Serialize2_VkBufferMemoryBarrier (const VkBufferMemoryBarrier *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER );
	result << indent << name << ".srcAccessMask = " << Serialize_VkAccessFlags(obj->srcAccessMask) << ";\n";
	result << indent << name << ".dstAccessMask = " << Serialize_VkAccessFlags(obj->dstAccessMask) << ";\n";
	result << indent << name << ".srcQueueFamilyIndex = " << (obj->srcQueueFamilyIndex == VK_QUEUE_FAMILY_IGNORED ? "VK_QUEUE_FAMILY_IGNORED" : IntToString(obj->srcQueueFamilyIndex)) << ";\n";
	result << indent << name << ".dstQueueFamilyIndex = " << (obj->dstQueueFamilyIndex == VK_QUEUE_FAMILY_IGNORED ? "VK_QUEUE_FAMILY_IGNORED" : IntToString(obj->dstQueueFamilyIndex)) << ";\n";
	result << indent << name << ".buffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->buffer ) << ";\n";
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
	result << indent << name << ".size = " << IntToString(obj->size) << ";\n";
}

void  Serialize2_VkImageMemoryBarrier (const VkImageMemoryBarrier *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER );
	result << indent << name << ".srcAccessMask = " << Serialize_VkAccessFlags(obj->srcAccessMask) << ";\n";
	result << indent << name << ".dstAccessMask = " << Serialize_VkAccessFlags(obj->dstAccessMask) << ";\n";
	result << indent << name << ".oldLayout = " << Serialize_VkImageLayout(obj->oldLayout) << ";\n";
	result << indent << name << ".newLayout = " << Serialize_VkImageLayout(obj->newLayout) << ";\n";
	result << indent << name << ".srcQueueFamilyIndex = " << (obj->srcQueueFamilyIndex == VK_QUEUE_FAMILY_IGNORED ? "VK_QUEUE_FAMILY_IGNORED" : IntToString(obj->srcQueueFamilyIndex)) << ";\n";
	result << indent << name << ".dstQueueFamilyIndex = " << (obj->dstQueueFamilyIndex == VK_QUEUE_FAMILY_IGNORED ? "VK_QUEUE_FAMILY_IGNORED" : IntToString(obj->dstQueueFamilyIndex)) << ";\n";
	result << indent << name << ".image = " << remapper( VK_OBJECT_TYPE_IMAGE, obj->image ) << ";\n";
	Serialize2_VkImageSubresourceRange( &obj->subresourceRange, String(name) << ".subresourceRange", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPipelineCoverageToColorStateCreateInfoNV (const VkPipelineCoverageToColorStateCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV );
	result << indent << name << ".flags = " << Serialize_VkPipelineCoverageToColorStateCreateFlagsNV(obj->flags) << ";\n";
	result << indent << name << ".coverageToColorEnable = " << BoolToString(obj->coverageToColorEnable) << ";\n";
	result << indent << name << ".coverageToColorLocation = " << IntToString(obj->coverageToColorLocation) << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkImportFenceWin32HandleInfoKHR (const VkImportFenceWin32HandleInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR );
	result << indent << name << ".fence = " << remapper( VK_OBJECT_TYPE_FENCE, obj->fence ) << ";\n";
	result << indent << name << ".flags = " << Serialize_VkFenceImportFlags(obj->flags) << ";\n";
	result << indent << name << ".handleType = " << Serialize_VkExternalFenceHandleTypeFlagBits(obj->handleType) << ";\n";
	result << indent << name << ".handle = " << "BitCast<HANDLE>(" << HexToString(obj->handle) << ")" << ";\n";
	result << indent << name << ".name = " << WCharToString(obj->name) << ";\n";
}
#endif

void  Serialize2_VkPhysicalDevicePointClippingProperties (const VkPhysicalDevicePointClippingProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES );
	result << indent << name << ".pointClippingBehavior = " << Serialize_VkPointClippingBehavior(obj->pointClippingBehavior) << ";\n";
}

ND_ String  Serialize_VkShadingRatePaletteNV (const VkShadingRatePaletteNV *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "shadingRatePaletteNV"s );
	result << indent << "VkShadingRatePaletteNV  " << name << " = {};\n";
	Serialize2_VkShadingRatePaletteNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkShadingRatePaletteNV (const VkShadingRatePaletteNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	if ( obj->pShadingRatePaletteEntries ) {
		CHECK( obj->shadingRatePaletteEntryCount > 0 );
		before << indent << "const VkShadingRatePaletteEntryNV  " << nameSer.MakeUnique( &obj->pShadingRatePaletteEntries, "shadingRatePaletteEntries"s ) << "[] = {";
		for (uint i = 0; i < obj->shadingRatePaletteEntryCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkShadingRatePaletteEntryNV( obj->pShadingRatePaletteEntries[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pShadingRatePaletteEntries ) << ") == " << IntToString(obj->shadingRatePaletteEntryCount) << " );\n\n";
	}
	result << indent << name << ".shadingRatePaletteEntryCount = " << IntToString(obj->shadingRatePaletteEntryCount) << ";\n";
	result << indent << name << ".pShadingRatePaletteEntries = " << nameSer.Get( &obj->pShadingRatePaletteEntries ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceSubgroupProperties (const VkPhysicalDeviceSubgroupProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES );
	result << indent << name << ".subgroupSize = " << IntToString(obj->subgroupSize) << ";\n";
	result << indent << name << ".supportedStages = " << Serialize_VkShaderStageFlags(obj->supportedStages) << ";\n";
	result << indent << name << ".supportedOperations = " << Serialize_VkSubgroupFeatureFlags(obj->supportedOperations) << ";\n";
	result << indent << name << ".quadOperationsInAllStages = " << BoolToString(obj->quadOperationsInAllStages) << ";\n";
}

void  Serialize2_VkPipelineCompilerControlCreateInfoAMD (const VkPipelineCompilerControlCreateInfoAMD *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD );
	result << indent << name << ".compilerControlFlags = " << Serialize_VkPipelineCompilerControlFlagsAMD(obj->compilerControlFlags) << ";\n";
}

void  Serialize2_VkBindBufferMemoryInfo (const VkBindBufferMemoryInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO );
	result << indent << name << ".buffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->buffer ) << ";\n";
	result << indent << name << ".memory = " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->memory ) << ";\n";
	result << indent << name << ".memoryOffset = " << IntToString(obj->memoryOffset) << ";\n";
}

void  Serialize2_VkBindImageMemoryInfo (const VkBindImageMemoryInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO );
	result << indent << name << ".image = " << remapper( VK_OBJECT_TYPE_IMAGE, obj->image ) << ";\n";
	result << indent << name << ".memory = " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->memory ) << ";\n";
	result << indent << name << ".memoryOffset = " << IntToString(obj->memoryOffset) << ";\n";
}

void  Serialize2_VkSubpassEndInfoKHR (const VkSubpassEndInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR );
}

void  Serialize2_VkPhysicalDevice16BitStorageFeatures (const VkPhysicalDevice16BitStorageFeatures *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES );
	result << indent << name << ".storageBuffer16BitAccess = " << BoolToString(obj->storageBuffer16BitAccess) << ";\n";
	result << indent << name << ".uniformAndStorageBuffer16BitAccess = " << BoolToString(obj->uniformAndStorageBuffer16BitAccess) << ";\n";
	result << indent << name << ".storagePushConstant16 = " << BoolToString(obj->storagePushConstant16) << ";\n";
	result << indent << name << ".storageInputOutput16 = " << BoolToString(obj->storageInputOutput16) << ";\n";
}

void  Serialize2_VkMemoryDedicatedRequirements (const VkMemoryDedicatedRequirements *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS );
	result << indent << name << ".prefersDedicatedAllocation = " << BoolToString(obj->prefersDedicatedAllocation) << ";\n";
	result << indent << name << ".requiresDedicatedAllocation = " << BoolToString(obj->requiresDedicatedAllocation) << ";\n";
}

void  Serialize2_VkPhysicalDeviceShadingRateImagePropertiesNV (const VkPhysicalDeviceShadingRateImagePropertiesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV );
	Serialize2_VkExtent2D( &obj->shadingRateTexelSize, String(name) << ".shadingRateTexelSize", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".shadingRatePaletteSize = " << IntToString(obj->shadingRatePaletteSize) << ";\n";
	result << indent << name << ".shadingRateMaxCoarseSamples = " << IntToString(obj->shadingRateMaxCoarseSamples) << ";\n";
}

void  Serialize2_VkImageDrmFormatModifierExplicitCreateInfoEXT (const VkImageDrmFormatModifierExplicitCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT );
	if ( obj->pPlaneLayouts ) {
		CHECK( obj->drmFormatModifierPlaneCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pPlaneLayouts, "planeLayouts"s, "subresourceLayout"s );
		before << indent << "VkSubresourceLayout  " << arr_name << "[" << IntToString(obj->drmFormatModifierPlaneCount) << "] = {};\n";
		for (uint i = 0; i < obj->drmFormatModifierPlaneCount; ++i) {
			Serialize2_VkSubresourceLayout( obj->pPlaneLayouts + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".drmFormatModifier = " << IntToString(obj->drmFormatModifier) << ";\n";
	result << indent << name << ".drmFormatModifierPlaneCount = " << IntToString(obj->drmFormatModifierPlaneCount) << ";\n";
	result << indent << name << ".pPlaneLayouts = " << nameSer.Get( &obj->pPlaneLayouts ) << ";\n";
}

void  Serialize2_VkMemoryDedicatedAllocateInfo (const VkMemoryDedicatedAllocateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO );
	result << indent << name << ".image = " << remapper( VK_OBJECT_TYPE_IMAGE, obj->image ) << ";\n";
	result << indent << name << ".buffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->buffer ) << ";\n";
}

void  Serialize2_VkMemoryAllocateFlagsInfo (const VkMemoryAllocateFlagsInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO );
	result << indent << name << ".flags = " << Serialize_VkMemoryAllocateFlags(obj->flags) << ";\n";
	result << indent << name << ".deviceMask = " << IntToString(obj->deviceMask) << ";\n";
}

void  Serialize2_VkDeviceGroupRenderPassBeginInfo (const VkDeviceGroupRenderPassBeginInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO );
	if ( obj->pDeviceRenderAreas ) {
		CHECK( obj->deviceRenderAreaCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pDeviceRenderAreas, "deviceRenderAreas"s, "rect2D"s );
		before << indent << "VkRect2D  " << arr_name << "[" << IntToString(obj->deviceRenderAreaCount) << "] = {};\n";
		for (uint i = 0; i < obj->deviceRenderAreaCount; ++i) {
			Serialize2_VkRect2D( obj->pDeviceRenderAreas + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".deviceMask = " << IntToString(obj->deviceMask) << ";\n";
	result << indent << name << ".deviceRenderAreaCount = " << IntToString(obj->deviceRenderAreaCount) << ";\n";
	result << indent << name << ".pDeviceRenderAreas = " << nameSer.Get( &obj->pDeviceRenderAreas ) << ";\n";
}

void  Serialize2_VkDeviceGroupCommandBufferBeginInfo (const VkDeviceGroupCommandBufferBeginInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO );
	result << indent << name << ".deviceMask = " << IntToString(obj->deviceMask) << ";\n";
}

void  Serialize2_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT (const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT );
	result << indent << name << ".ycbcrImageArrays = " << BoolToString(obj->ycbcrImageArrays) << ";\n";
}

void  Serialize2_VkDeviceGroupSubmitInfo (const VkDeviceGroupSubmitInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO );
	if ( obj->pWaitSemaphoreDeviceIndices ) {
		CHECK( obj->waitSemaphoreCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pWaitSemaphoreDeviceIndices, "waitSemaphoreDeviceIndices"s ) << "[] = { ";
		for (uint i = 0; i < obj->waitSemaphoreCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pWaitSemaphoreDeviceIndices[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pWaitSemaphoreDeviceIndices ) << ") == " << IntToString(obj->waitSemaphoreCount) << " );\n\n";
	}
	if ( obj->pCommandBufferDeviceMasks ) {
		CHECK( obj->commandBufferCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pCommandBufferDeviceMasks, "commandBufferDeviceMasks"s ) << "[] = { ";
		for (uint i = 0; i < obj->commandBufferCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pCommandBufferDeviceMasks[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pCommandBufferDeviceMasks ) << ") == " << IntToString(obj->commandBufferCount) << " );\n\n";
	}
	if ( obj->pSignalSemaphoreDeviceIndices ) {
		CHECK( obj->signalSemaphoreCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pSignalSemaphoreDeviceIndices, "signalSemaphoreDeviceIndices"s ) << "[] = { ";
		for (uint i = 0; i < obj->signalSemaphoreCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pSignalSemaphoreDeviceIndices[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pSignalSemaphoreDeviceIndices ) << ") == " << IntToString(obj->signalSemaphoreCount) << " );\n\n";
	}
	result << indent << name << ".waitSemaphoreCount = " << IntToString(obj->waitSemaphoreCount) << ";\n";
	result << indent << name << ".pWaitSemaphoreDeviceIndices = " << nameSer.Get( &obj->pWaitSemaphoreDeviceIndices ) << ";\n";
	result << indent << name << ".commandBufferCount = " << IntToString(obj->commandBufferCount) << ";\n";
	result << indent << name << ".pCommandBufferDeviceMasks = " << nameSer.Get( &obj->pCommandBufferDeviceMasks ) << ";\n";
	result << indent << name << ".signalSemaphoreCount = " << IntToString(obj->signalSemaphoreCount) << ";\n";
	result << indent << name << ".pSignalSemaphoreDeviceIndices = " << nameSer.Get( &obj->pSignalSemaphoreDeviceIndices ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR (const VkPhysicalDeviceShaderFloat16Int8FeaturesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR );
	result << indent << name << ".shaderFloat16 = " << BoolToString(obj->shaderFloat16) << ";\n";
	result << indent << name << ".shaderInt8 = " << BoolToString(obj->shaderInt8) << ";\n";
}

void  Serialize2_VkDeviceGroupBindSparseInfo (const VkDeviceGroupBindSparseInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO );
	result << indent << name << ".resourceDeviceIndex = " << IntToString(obj->resourceDeviceIndex) << ";\n";
	result << indent << name << ".memoryDeviceIndex = " << IntToString(obj->memoryDeviceIndex) << ";\n";
}

void  Serialize2_VkBindBufferMemoryDeviceGroupInfo (const VkBindBufferMemoryDeviceGroupInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO );
	if ( obj->pDeviceIndices ) {
		CHECK( obj->deviceIndexCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pDeviceIndices, "deviceIndices"s ) << "[] = { ";
		for (uint i = 0; i < obj->deviceIndexCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pDeviceIndices[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pDeviceIndices ) << ") == " << IntToString(obj->deviceIndexCount) << " );\n\n";
	}
	result << indent << name << ".deviceIndexCount = " << IntToString(obj->deviceIndexCount) << ";\n";
	result << indent << name << ".pDeviceIndices = " << nameSer.Get( &obj->pDeviceIndices ) << ";\n";
}

void  Serialize2_VkBindImageMemoryDeviceGroupInfo (const VkBindImageMemoryDeviceGroupInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO );
	if ( obj->pDeviceIndices ) {
		CHECK( obj->deviceIndexCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pDeviceIndices, "deviceIndices"s ) << "[] = { ";
		for (uint i = 0; i < obj->deviceIndexCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pDeviceIndices[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pDeviceIndices ) << ") == " << IntToString(obj->deviceIndexCount) << " );\n\n";
	}
	if ( obj->pSplitInstanceBindRegions ) {
		CHECK( obj->splitInstanceBindRegionCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pSplitInstanceBindRegions, "splitInstanceBindRegions"s, "rect2D"s );
		before << indent << "VkRect2D  " << arr_name << "[" << IntToString(obj->splitInstanceBindRegionCount) << "] = {};\n";
		for (uint i = 0; i < obj->splitInstanceBindRegionCount; ++i) {
			Serialize2_VkRect2D( obj->pSplitInstanceBindRegions + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".deviceIndexCount = " << IntToString(obj->deviceIndexCount) << ";\n";
	result << indent << name << ".pDeviceIndices = " << nameSer.Get( &obj->pDeviceIndices ) << ";\n";
	result << indent << name << ".splitInstanceBindRegionCount = " << IntToString(obj->splitInstanceBindRegionCount) << ";\n";
	result << indent << name << ".pSplitInstanceBindRegions = " << nameSer.Get( &obj->pSplitInstanceBindRegions ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceGroupProperties (const VkPhysicalDeviceGroupProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES );
	if ( obj->physicalDevices ) {
		CHECK( CountOf(obj->physicalDevices) > 0 );
		before << indent << "const VkPhysicalDevice  " << nameSer.MakeUnique( &obj->physicalDevices, "physicalDevices"s, "physicalDevice"s ) << "[] = {";
		for (uint i = 0; i < CountOf(obj->physicalDevices); ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_PHYSICAL_DEVICE, obj->physicalDevices[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->physicalDevices ) << ") == " << IntToString(CountOf(obj->physicalDevices)) << " );\n\n";
	}
	result << indent << name << ".physicalDeviceCount = " << IntToString(obj->physicalDeviceCount) << ";\n";
	result << indent << name << ".physicalDevices = " << nameSer.Get( &obj->physicalDevices ) << ";\n";
	result << indent << name << ".subsetAllocation = " << BoolToString(obj->subsetAllocation) << ";\n";
}

void  Serialize2_VkDeviceGroupDeviceCreateInfo (const VkDeviceGroupDeviceCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO );
	if ( obj->pPhysicalDevices ) {
		CHECK( obj->physicalDeviceCount > 0 );
		before << indent << "const VkPhysicalDevice  " << nameSer.MakeUnique( &obj->pPhysicalDevices, "physicalDevices"s, "physicalDevice"s ) << "[] = {";
		for (uint i = 0; i < obj->physicalDeviceCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_PHYSICAL_DEVICE, obj->pPhysicalDevices[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pPhysicalDevices ) << ") == " << IntToString(obj->physicalDeviceCount) << " );\n\n";
	}
	result << indent << name << ".physicalDeviceCount = " << IntToString(obj->physicalDeviceCount) << ";\n";
	result << indent << name << ".pPhysicalDevices = " << nameSer.Get( &obj->pPhysicalDevices ) << ";\n";
}

void  Serialize2_VkSamplerReductionModeCreateInfoEXT (const VkSamplerReductionModeCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT );
	result << indent << name << ".reductionMode = " << Serialize_VkSamplerReductionModeEXT(obj->reductionMode) << ";\n";
}

void  Serialize2_VkBufferMemoryRequirementsInfo2 (const VkBufferMemoryRequirementsInfo2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2 );
	result << indent << name << ".buffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->buffer ) << ";\n";
}

void  Serialize2_VkImageSparseMemoryRequirementsInfo2 (const VkImageSparseMemoryRequirementsInfo2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2 );
	result << indent << name << ".image = " << remapper( VK_OBJECT_TYPE_IMAGE, obj->image ) << ";\n";
}

void  Serialize2_VkAttachmentReference2KHR (const VkAttachmentReference2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR );
	result << indent << name << ".attachment = " << IntToString(obj->attachment) << ";\n";
	result << indent << name << ".layout = " << Serialize_VkImageLayout(obj->layout) << ";\n";
	result << indent << name << ".aspectMask = " << Serialize_VkImageAspectFlags(obj->aspectMask) << ";\n";
}

void  Serialize2_VkMemoryRequirements2 (const VkMemoryRequirements2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2 );
	Serialize2_VkMemoryRequirements( &obj->memoryRequirements, String(name) << ".memoryRequirements", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkDescriptorSetLayoutSupport (const VkDescriptorSetLayoutSupport *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT );
	result << indent << name << ".supported = " << BoolToString(obj->supported) << ";\n";
}

void  Serialize2_VkSparseImageMemoryRequirements2 (const VkSparseImageMemoryRequirements2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2 );
	Serialize2_VkSparseImageMemoryRequirements( &obj->memoryRequirements, String(name) << ".memoryRequirements", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPhysicalDeviceFeatures2 (const VkPhysicalDeviceFeatures2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 );
	Serialize2_VkPhysicalDeviceFeatures( &obj->features, String(name) << ".features", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPhysicalDeviceProperties2 (const VkPhysicalDeviceProperties2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 );
	Serialize2_VkPhysicalDeviceProperties( &obj->properties, String(name) << ".properties", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkRenderPassAttachmentBeginInfoKHR (const VkRenderPassAttachmentBeginInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR );
	if ( obj->pAttachments ) {
		CHECK( obj->attachmentCount > 0 );
		before << indent << "const VkImageView  " << nameSer.MakeUnique( &obj->pAttachments, "attachments"s, "imageView"s ) << "[] = {";
		for (uint i = 0; i < obj->attachmentCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_IMAGE_VIEW, obj->pAttachments[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pAttachments ) << ") == " << IntToString(obj->attachmentCount) << " );\n\n";
	}
	result << indent << name << ".attachmentCount = " << IntToString(obj->attachmentCount) << ";\n";
	result << indent << name << ".pAttachments = " << nameSer.Get( &obj->pAttachments ) << ";\n";
}

void  Serialize2_VkFormatProperties2 (const VkFormatProperties2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2 );
	Serialize2_VkFormatProperties( &obj->formatProperties, String(name) << ".formatProperties", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkImageFormatProperties2 (const VkImageFormatProperties2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2 );
	Serialize2_VkImageFormatProperties( &obj->imageFormatProperties, String(name) << ".imageFormatProperties", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkQueueFamilyProperties2 (const VkQueueFamilyProperties2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2 );
	Serialize2_VkQueueFamilyProperties( &obj->queueFamilyProperties, String(name) << ".queueFamilyProperties", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPhysicalDeviceMemoryProperties2 (const VkPhysicalDeviceMemoryProperties2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2 );
	Serialize2_VkPhysicalDeviceMemoryProperties( &obj->memoryProperties, String(name) << ".memoryProperties", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkSparseImageFormatProperties2 (const VkSparseImageFormatProperties2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2 );
	Serialize2_VkSparseImageFormatProperties( &obj->properties, String(name) << ".properties", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPhysicalDeviceSparseImageFormatInfo2 (const VkPhysicalDeviceSparseImageFormatInfo2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2 );
	result << indent << name << ".format = " << Serialize_VkFormat(obj->format) << ";\n";
	result << indent << name << ".type = " << Serialize_VkImageType(obj->type) << ";\n";
	result << indent << name << ".samples = " << Serialize_VkSampleCountFlagBits(obj->samples) << ";\n";
	result << indent << name << ".usage = " << Serialize_VkImageUsageFlags(obj->usage) << ";\n";
	result << indent << name << ".tiling = " << Serialize_VkImageTiling(obj->tiling) << ";\n";
}

void  Serialize2_VkPhysicalDeviceASTCDecodeFeaturesEXT (const VkPhysicalDeviceASTCDecodeFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT );
	result << indent << name << ".decodeModeSharedExponent = " << BoolToString(obj->decodeModeSharedExponent) << ";\n";
}

ND_ String  Serialize_VkInputAttachmentAspectReference (const VkInputAttachmentAspectReference *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "inputAttachmentAspectReference"s );
	result << indent << "VkInputAttachmentAspectReference  " << name << " = {};\n";
	Serialize2_VkInputAttachmentAspectReference( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkInputAttachmentAspectReference (const VkInputAttachmentAspectReference *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".subpass = " << IntToString(obj->subpass) << ";\n";
	result << indent << name << ".inputAttachmentIndex = " << IntToString(obj->inputAttachmentIndex) << ";\n";
	result << indent << name << ".aspectMask = " << Serialize_VkImageAspectFlags(obj->aspectMask) << ";\n";
}

void  Serialize2_VkRenderPassInputAttachmentAspectCreateInfo (const VkRenderPassInputAttachmentAspectCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO );
	if ( obj->pAspectReferences ) {
		CHECK( obj->aspectReferenceCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pAspectReferences, "aspectReferences"s, "inputAttachmentAspectReference"s );
		before << indent << "VkInputAttachmentAspectReference  " << arr_name << "[" << IntToString(obj->aspectReferenceCount) << "] = {};\n";
		for (uint i = 0; i < obj->aspectReferenceCount; ++i) {
			Serialize2_VkInputAttachmentAspectReference( obj->pAspectReferences + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".aspectReferenceCount = " << IntToString(obj->aspectReferenceCount) << ";\n";
	result << indent << name << ".pAspectReferences = " << nameSer.Get( &obj->pAspectReferences ) << ";\n";
}

void  Serialize2_VkImageViewUsageCreateInfo (const VkImageViewUsageCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO );
	result << indent << name << ".usage = " << Serialize_VkImageUsageFlags(obj->usage) << ";\n";
}

void  Serialize2_VkRenderPassMultiviewCreateInfo (const VkRenderPassMultiviewCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO );
	if ( obj->pViewMasks ) {
		CHECK( obj->subpassCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pViewMasks, "viewMasks"s ) << "[] = { ";
		for (uint i = 0; i < obj->subpassCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pViewMasks[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pViewMasks ) << ") == " << IntToString(obj->subpassCount) << " );\n\n";
	}
	if ( obj->pViewOffsets ) {
		CHECK( obj->dependencyCount > 0 );
		before << indent << "const int32_t  " << nameSer.MakeUnique( &obj->pViewOffsets, "viewOffsets"s ) << "[] = { ";
		for (uint i = 0; i < obj->dependencyCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pViewOffsets[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pViewOffsets ) << ") == " << IntToString(obj->dependencyCount) << " );\n\n";
	}
	if ( obj->pCorrelationMasks ) {
		CHECK( obj->correlationMaskCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pCorrelationMasks, "correlationMasks"s ) << "[] = { ";
		for (uint i = 0; i < obj->correlationMaskCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pCorrelationMasks[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pCorrelationMasks ) << ") == " << IntToString(obj->correlationMaskCount) << " );\n\n";
	}
	result << indent << name << ".subpassCount = " << IntToString(obj->subpassCount) << ";\n";
	result << indent << name << ".pViewMasks = " << nameSer.Get( &obj->pViewMasks ) << ";\n";
	result << indent << name << ".dependencyCount = " << IntToString(obj->dependencyCount) << ";\n";
	result << indent << name << ".pViewOffsets = " << nameSer.Get( &obj->pViewOffsets ) << ";\n";
	result << indent << name << ".correlationMaskCount = " << IntToString(obj->correlationMaskCount) << ";\n";
	result << indent << name << ".pCorrelationMasks = " << nameSer.Get( &obj->pCorrelationMasks ) << ";\n";
}

void  Serialize2_VkFilterCubicImageViewImageFormatPropertiesEXT (const VkFilterCubicImageViewImageFormatPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT );
	result << indent << name << ".filterCubic = " << BoolToString(obj->filterCubic) << ";\n";
	result << indent << name << ".filterCubicMinmax = " << BoolToString(obj->filterCubicMinmax) << ";\n";
}

void  Serialize2_VkPhysicalDeviceMultiviewFeatures (const VkPhysicalDeviceMultiviewFeatures *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES );
	result << indent << name << ".multiview = " << BoolToString(obj->multiview) << ";\n";
	result << indent << name << ".multiviewGeometryShader = " << BoolToString(obj->multiviewGeometryShader) << ";\n";
	result << indent << name << ".multiviewTessellationShader = " << BoolToString(obj->multiviewTessellationShader) << ";\n";
}

void  Serialize2_VkDisplayModeCreateInfoKHR (const VkDisplayModeCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR );
	result << indent << name << ".flags = " << Serialize_VkDisplayModeCreateFlagsKHR(obj->flags) << ";\n";
	Serialize2_VkDisplayModeParametersKHR( &obj->parameters, String(name) << ".parameters", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPhysicalDeviceMultiviewProperties (const VkPhysicalDeviceMultiviewProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES );
	result << indent << name << ".maxMultiviewViewCount = " << IntToString(obj->maxMultiviewViewCount) << ";\n";
	result << indent << name << ".maxMultiviewInstanceIndex = " << IntToString(obj->maxMultiviewInstanceIndex) << ";\n";
}

void  Serialize2_VkDisplayProperties2KHR (const VkDisplayProperties2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR );
	Serialize2_VkDisplayPropertiesKHR( &obj->displayProperties, String(name) << ".displayProperties", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPhysicalDeviceVariablePointersFeatures (const VkPhysicalDeviceVariablePointersFeatures *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES );
	result << indent << name << ".variablePointersStorageBuffer = " << BoolToString(obj->variablePointersStorageBuffer) << ";\n";
	result << indent << name << ".variablePointers = " << BoolToString(obj->variablePointers) << ";\n";
}

void  Serialize2_VkPhysicalDeviceProtectedMemoryFeatures (const VkPhysicalDeviceProtectedMemoryFeatures *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES );
	result << indent << name << ".protectedMemory = " << BoolToString(obj->protectedMemory) << ";\n";
}

void  Serialize2_VkRenderPassSampleLocationsBeginInfoEXT (const VkRenderPassSampleLocationsBeginInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT );
	if ( obj->pAttachmentInitialSampleLocations ) {
		CHECK( obj->attachmentInitialSampleLocationsCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pAttachmentInitialSampleLocations, "attachmentInitialSampleLocations"s, "attachmentSampleLocations"s );
		before << indent << "VkAttachmentSampleLocationsEXT  " << arr_name << "[" << IntToString(obj->attachmentInitialSampleLocationsCount) << "] = {};\n";
		for (uint i = 0; i < obj->attachmentInitialSampleLocationsCount; ++i) {
			Serialize2_VkAttachmentSampleLocationsEXT( obj->pAttachmentInitialSampleLocations + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pPostSubpassSampleLocations ) {
		CHECK( obj->postSubpassSampleLocationsCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pPostSubpassSampleLocations, "postSubpassSampleLocations"s, "subpassSampleLocations"s );
		before << indent << "VkSubpassSampleLocationsEXT  " << arr_name << "[" << IntToString(obj->postSubpassSampleLocationsCount) << "] = {};\n";
		for (uint i = 0; i < obj->postSubpassSampleLocationsCount; ++i) {
			Serialize2_VkSubpassSampleLocationsEXT( obj->pPostSubpassSampleLocations + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".attachmentInitialSampleLocationsCount = " << IntToString(obj->attachmentInitialSampleLocationsCount) << ";\n";
	result << indent << name << ".pAttachmentInitialSampleLocations = " << nameSer.Get( &obj->pAttachmentInitialSampleLocations ) << ";\n";
	result << indent << name << ".postSubpassSampleLocationsCount = " << IntToString(obj->postSubpassSampleLocationsCount) << ";\n";
	result << indent << name << ".pPostSubpassSampleLocations = " << nameSer.Get( &obj->pPostSubpassSampleLocations ) << ";\n";
}

void  Serialize2_VkDeviceQueueInfo2 (const VkDeviceQueueInfo2 *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2 );
	result << indent << name << ".flags = " << Serialize_VkDeviceQueueCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".queueFamilyIndex = " << IntToString(obj->queueFamilyIndex) << ";\n";
	result << indent << name << ".queueIndex = " << IntToString(obj->queueIndex) << ";\n";
}

void  Serialize2_VkProtectedSubmitInfo (const VkProtectedSubmitInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO );
	result << indent << name << ".protectedSubmit = " << BoolToString(obj->protectedSubmit) << ";\n";
}

void  Serialize2_VkSamplerYcbcrConversionCreateInfo (const VkSamplerYcbcrConversionCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO );
	result << indent << name << ".format = " << Serialize_VkFormat(obj->format) << ";\n";
	result << indent << name << ".ycbcrModel = " << Serialize_VkSamplerYcbcrModelConversion(obj->ycbcrModel) << ";\n";
	result << indent << name << ".ycbcrRange = " << Serialize_VkSamplerYcbcrRange(obj->ycbcrRange) << ";\n";
	Serialize2_VkComponentMapping( &obj->components, String(name) << ".components", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".xChromaOffset = " << Serialize_VkChromaLocation(obj->xChromaOffset) << ";\n";
	result << indent << name << ".yChromaOffset = " << Serialize_VkChromaLocation(obj->yChromaOffset) << ";\n";
	result << indent << name << ".chromaFilter = " << Serialize_VkFilter(obj->chromaFilter) << ";\n";
	result << indent << name << ".forceExplicitReconstruction = " << BoolToString(obj->forceExplicitReconstruction) << ";\n";
}

void  Serialize2_VkBindImagePlaneMemoryInfo (const VkBindImagePlaneMemoryInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO );
	result << indent << name << ".planeAspect = " << Serialize_VkImageAspectFlagBits(obj->planeAspect) << ";\n";
}

void  Serialize2_VkPhysicalDeviceCooperativeMatrixPropertiesNV (const VkPhysicalDeviceCooperativeMatrixPropertiesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV );
	result << indent << name << ".cooperativeMatrixSupportedStages = " << Serialize_VkShaderStageFlags(obj->cooperativeMatrixSupportedStages) << ";\n";
}

void  Serialize2_VkImagePlaneMemoryRequirementsInfo (const VkImagePlaneMemoryRequirementsInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO );
	result << indent << name << ".planeAspect = " << Serialize_VkImageAspectFlagBits(obj->planeAspect) << ";\n";
}

void  Serialize2_VkPhysicalDeviceFragmentDensityMapPropertiesEXT (const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT );
	Serialize2_VkExtent2D( &obj->minFragmentDensityTexelSize, String(name) << ".minFragmentDensityTexelSize", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->maxFragmentDensityTexelSize, String(name) << ".maxFragmentDensityTexelSize", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".fragmentDensityInvocations = " << BoolToString(obj->fragmentDensityInvocations) << ";\n";
}

void  Serialize2_VkPhysicalDeviceSamplerYcbcrConversionFeatures (const VkPhysicalDeviceSamplerYcbcrConversionFeatures *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES );
	result << indent << name << ".samplerYcbcrConversion = " << BoolToString(obj->samplerYcbcrConversion) << ";\n";
}

void  Serialize2_VkSamplerYcbcrConversionImageFormatProperties (const VkSamplerYcbcrConversionImageFormatProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES );
	result << indent << name << ".combinedImageSamplerDescriptorCount = " << IntToString(obj->combinedImageSamplerDescriptorCount) << ";\n";
}

void  Serialize2_VkDescriptorUpdateTemplateCreateInfo (const VkDescriptorUpdateTemplateCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO );
	if ( obj->pDescriptorUpdateEntries ) {
		CHECK( obj->descriptorUpdateEntryCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pDescriptorUpdateEntries, "descriptorUpdateEntries"s, "descriptorUpdateTemplateEntry"s );
		before << indent << "VkDescriptorUpdateTemplateEntry  " << arr_name << "[" << IntToString(obj->descriptorUpdateEntryCount) << "] = {};\n";
		for (uint i = 0; i < obj->descriptorUpdateEntryCount; ++i) {
			Serialize2_VkDescriptorUpdateTemplateEntry( obj->pDescriptorUpdateEntries + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkDescriptorUpdateTemplateCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".descriptorUpdateEntryCount = " << IntToString(obj->descriptorUpdateEntryCount) << ";\n";
	result << indent << name << ".pDescriptorUpdateEntries = " << nameSer.Get( &obj->pDescriptorUpdateEntries ) << ";\n";
	result << indent << name << ".templateType = " << Serialize_VkDescriptorUpdateTemplateType(obj->templateType) << ";\n";
	result << indent << name << ".descriptorSetLayout = " << remapper( VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT, obj->descriptorSetLayout ) << ";\n";
	result << indent << name << ".pipelineBindPoint = " << Serialize_VkPipelineBindPoint(obj->pipelineBindPoint) << ";\n";
	result << indent << name << ".pipelineLayout = " << remapper( VK_OBJECT_TYPE_PIPELINE_LAYOUT, obj->pipelineLayout ) << ";\n";
	result << indent << name << ".set = " << IntToString(obj->set) << ";\n";
}

ND_ String  Serialize_VkExternalMemoryProperties (const VkExternalMemoryProperties *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "externalMemoryProperties"s, "properties"s );
	result << indent << "VkExternalMemoryProperties  " << name << " = {};\n";
	Serialize2_VkExternalMemoryProperties( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkExternalMemoryProperties (const VkExternalMemoryProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".externalMemoryFeatures = " << Serialize_VkExternalMemoryFeatureFlags(obj->externalMemoryFeatures) << ";\n";
	result << indent << name << ".exportFromImportedHandleTypes = " << Serialize_VkExternalMemoryHandleTypeFlags(obj->exportFromImportedHandleTypes) << ";\n";
	result << indent << name << ".compatibleHandleTypes = " << Serialize_VkExternalMemoryHandleTypeFlags(obj->compatibleHandleTypes) << ";\n";
}

void  Serialize2_VkPhysicalDeviceExternalImageFormatInfo (const VkPhysicalDeviceExternalImageFormatInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO );
	result << indent << name << ".handleType = " << Serialize_VkExternalMemoryHandleTypeFlagBits(obj->handleType) << ";\n";
}

void  Serialize2_VkExternalBufferProperties (const VkExternalBufferProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES );
	Serialize2_VkExternalMemoryProperties( &obj->externalMemoryProperties, String(name) << ".externalMemoryProperties", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT (const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT );
	result << indent << name << ".advancedBlendMaxColorAttachments = " << IntToString(obj->advancedBlendMaxColorAttachments) << ";\n";
	result << indent << name << ".advancedBlendIndependentBlend = " << BoolToString(obj->advancedBlendIndependentBlend) << ";\n";
	result << indent << name << ".advancedBlendNonPremultipliedSrcColor = " << BoolToString(obj->advancedBlendNonPremultipliedSrcColor) << ";\n";
	result << indent << name << ".advancedBlendNonPremultipliedDstColor = " << BoolToString(obj->advancedBlendNonPremultipliedDstColor) << ";\n";
	result << indent << name << ".advancedBlendCorrelatedOverlap = " << BoolToString(obj->advancedBlendCorrelatedOverlap) << ";\n";
	result << indent << name << ".advancedBlendAllOperations = " << BoolToString(obj->advancedBlendAllOperations) << ";\n";
}

void  Serialize2_VkPhysicalDeviceIDProperties (const VkPhysicalDeviceIDProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES );
	result << indent << name << ".deviceUUID << " << "StaticArray<uint8_t, " << IntToString(CountOf(obj->deviceUUID)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->deviceUUID); ++i) {
		result << (i ? ", " : "") << IntToString(obj->deviceUUID[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".driverUUID << " << "StaticArray<uint8_t, " << IntToString(CountOf(obj->driverUUID)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->driverUUID); ++i) {
		result << (i ? ", " : "") << IntToString(obj->driverUUID[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".deviceLUID << " << "StaticArray<uint8_t, " << IntToString(CountOf(obj->deviceLUID)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->deviceLUID); ++i) {
		result << (i ? ", " : "") << IntToString(obj->deviceLUID[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".deviceNodeMask = " << IntToString(obj->deviceNodeMask) << ";\n";
	result << indent << name << ".deviceLUIDValid = " << BoolToString(obj->deviceLUIDValid) << ";\n";
}

void  Serialize2_VkExternalMemoryImageCreateInfo (const VkExternalMemoryImageCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO );
	result << indent << name << ".handleTypes = " << Serialize_VkExternalMemoryHandleTypeFlags(obj->handleTypes) << ";\n";
}

void  Serialize2_VkGeometryAABBNV (const VkGeometryAABBNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV );
	result << indent << name << ".aabbData = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->aabbData ) << ";\n";
	result << indent << name << ".numAABBs = " << IntToString(obj->numAABBs) << ";\n";
	result << indent << name << ".stride = " << IntToString(obj->stride) << ";\n";
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
}

void  Serialize2_VkPhysicalDeviceCornerSampledImageFeaturesNV (const VkPhysicalDeviceCornerSampledImageFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV );
	result << indent << name << ".cornerSampledImage = " << BoolToString(obj->cornerSampledImage) << ";\n";
}

void  Serialize2_VkExportMemoryAllocateInfo (const VkExportMemoryAllocateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO );
	result << indent << name << ".handleTypes = " << Serialize_VkExternalMemoryHandleTypeFlags(obj->handleTypes) << ";\n";
}

void  Serialize2_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV (const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV );
	result << indent << name << ".representativeFragmentTest = " << BoolToString(obj->representativeFragmentTest) << ";\n";
}

void  Serialize2_VkPhysicalDeviceExternalFenceInfo (const VkPhysicalDeviceExternalFenceInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO );
	result << indent << name << ".handleType = " << Serialize_VkExternalFenceHandleTypeFlagBits(obj->handleType) << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkExportMemoryWin32HandleInfoKHR (const VkExportMemoryWin32HandleInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR );
	result << indent << name << ".pAttributes = " << "BitCast<SECURITY_ATTRIBUTES*>(" << HexToString(obj->pAttributes) << ")" << ";\n";
	result << indent << name << ".dwAccess = " << IntToString(obj->dwAccess) << ";\n";
	result << indent << name << ".name = " << WCharToString(obj->name) << ";\n";
}
#endif

void  Serialize2_VkPhysicalDeviceCoherentMemoryFeaturesAMD (const VkPhysicalDeviceCoherentMemoryFeaturesAMD *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD );
	result << indent << name << ".deviceCoherentMemory = " << BoolToString(obj->deviceCoherentMemory) << ";\n";
}

void  Serialize2_VkExternalFenceProperties (const VkExternalFenceProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES );
	result << indent << name << ".exportFromImportedHandleTypes = " << Serialize_VkExternalFenceHandleTypeFlags(obj->exportFromImportedHandleTypes) << ";\n";
	result << indent << name << ".compatibleHandleTypes = " << Serialize_VkExternalFenceHandleTypeFlags(obj->compatibleHandleTypes) << ";\n";
	result << indent << name << ".externalFenceFeatures = " << Serialize_VkExternalFenceFeatureFlags(obj->externalFenceFeatures) << ";\n";
}

void  Serialize2_VkPipelineRasterizationLineStateCreateInfoEXT (const VkPipelineRasterizationLineStateCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT );
	result << indent << name << ".lineRasterizationMode = " << Serialize_VkLineRasterizationModeEXT(obj->lineRasterizationMode) << ";\n";
	result << indent << name << ".stippledLineEnable = " << BoolToString(obj->stippledLineEnable) << ";\n";
	result << indent << name << ".lineStippleFactor = " << IntToString(obj->lineStippleFactor) << ";\n";
	result << indent << name << ".lineStipplePattern = " << IntToString(obj->lineStipplePattern) << ";\n";
}

void  Serialize2_VkExportFenceCreateInfo (const VkExportFenceCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO );
	result << indent << name << ".handleTypes = " << Serialize_VkExternalFenceHandleTypeFlags(obj->handleTypes) << ";\n";
}

void  Serialize2_VkPerformanceMarkerInfoINTEL (const VkPerformanceMarkerInfoINTEL *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL );
	result << indent << name << ".marker = " << IntToString(obj->marker) << ";\n";
}

ND_ String  Serialize_VkCoarseSampleLocationNV (const VkCoarseSampleLocationNV *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "coarseSampleLocationNV"s );
	result << indent << "VkCoarseSampleLocationNV  " << name << " = {};\n";
	Serialize2_VkCoarseSampleLocationNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkCoarseSampleLocationNV (const VkCoarseSampleLocationNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".pixelX = " << IntToString(obj->pixelX) << ";\n";
	result << indent << name << ".pixelY = " << IntToString(obj->pixelY) << ";\n";
	result << indent << name << ".sample = " << IntToString(obj->sample) << ";\n";
}

void  Serialize2_VkExportSemaphoreCreateInfo (const VkExportSemaphoreCreateInfo *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO );
	result << indent << name << ".handleTypes = " << Serialize_VkExternalSemaphoreHandleTypeFlags(obj->handleTypes) << ";\n";
}

void  Serialize2_VkExportMemoryAllocateInfoNV (const VkExportMemoryAllocateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV );
	result << indent << name << ".handleTypes = " << Serialize_VkExternalMemoryHandleTypeFlagsNV(obj->handleTypes) << ";\n";
}

void  Serialize2_VkExternalSemaphoreProperties (const VkExternalSemaphoreProperties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES );
	result << indent << name << ".exportFromImportedHandleTypes = " << Serialize_VkExternalSemaphoreHandleTypeFlags(obj->exportFromImportedHandleTypes) << ";\n";
	result << indent << name << ".compatibleHandleTypes = " << Serialize_VkExternalSemaphoreHandleTypeFlags(obj->compatibleHandleTypes) << ";\n";
	result << indent << name << ".externalSemaphoreFeatures = " << Serialize_VkExternalSemaphoreFeatureFlags(obj->externalSemaphoreFeatures) << ";\n";
}

void  Serialize2_VkPhysicalDeviceMaintenance3Properties (const VkPhysicalDeviceMaintenance3Properties *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES );
	result << indent << name << ".maxPerSetDescriptors = " << IntToString(obj->maxPerSetDescriptors) << ";\n";
	result << indent << name << ".maxMemoryAllocationSize = " << IntToString(obj->maxMemoryAllocationSize) << ";\n";
}

void  Serialize2_VkPhysicalDeviceShaderDrawParametersFeatures (const VkPhysicalDeviceShaderDrawParametersFeatures *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES );
	result << indent << name << ".shaderDrawParameters = " << BoolToString(obj->shaderDrawParameters) << ";\n";
}

ND_ String  Serialize_VkDisplayModeParametersKHR (const VkDisplayModeParametersKHR *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "displayModeParameters"s );
	result << indent << "VkDisplayModeParametersKHR  " << name << " = {};\n";
	Serialize2_VkDisplayModeParametersKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkDisplayModeParametersKHR (const VkDisplayModeParametersKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	Serialize2_VkExtent2D( &obj->visibleRegion, String(name) << ".visibleRegion", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".refreshRate = " << IntToString(obj->refreshRate) << ";\n";
}

ND_ String  Serialize_VkSurfaceCapabilitiesKHR (const VkSurfaceCapabilitiesKHR *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "surfaceCapabilities"s );
	result << indent << "VkSurfaceCapabilitiesKHR  " << name << " = {};\n";
	Serialize2_VkSurfaceCapabilitiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSurfaceCapabilitiesKHR (const VkSurfaceCapabilitiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".minImageCount = " << IntToString(obj->minImageCount) << ";\n";
	result << indent << name << ".maxImageCount = " << IntToString(obj->maxImageCount) << ";\n";
	Serialize2_VkExtent2D( &obj->currentExtent, String(name) << ".currentExtent", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->minImageExtent, String(name) << ".minImageExtent", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->maxImageExtent, String(name) << ".maxImageExtent", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".maxImageArrayLayers = " << IntToString(obj->maxImageArrayLayers) << ";\n";
	result << indent << name << ".supportedTransforms = " << Serialize_VkSurfaceTransformFlagsKHR(obj->supportedTransforms) << ";\n";
	result << indent << name << ".currentTransform = " << Serialize_VkSurfaceTransformFlagBitsKHR(obj->currentTransform) << ";\n";
	result << indent << name << ".supportedCompositeAlpha = " << Serialize_VkCompositeAlphaFlagsKHR(obj->supportedCompositeAlpha) << ";\n";
	result << indent << name << ".supportedUsageFlags = " << Serialize_VkImageUsageFlags(obj->supportedUsageFlags) << ";\n";
}

void  Serialize2_VkPhysicalDeviceConditionalRenderingFeaturesEXT (const VkPhysicalDeviceConditionalRenderingFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT );
	result << indent << name << ".conditionalRendering = " << BoolToString(obj->conditionalRendering) << ";\n";
	result << indent << name << ".inheritedConditionalRendering = " << BoolToString(obj->inheritedConditionalRendering) << ";\n";
}

ND_ String  Serialize_VkSurfaceFormatKHR (const VkSurfaceFormatKHR *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "surfaceFormat"s );
	result << indent << "VkSurfaceFormatKHR  " << name << " = {};\n";
	Serialize2_VkSurfaceFormatKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSurfaceFormatKHR (const VkSurfaceFormatKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".format = " << Serialize_VkFormat(obj->format) << ";\n";
	result << indent << name << ".colorSpace = " << Serialize_VkColorSpaceKHR(obj->colorSpace) << ";\n";
}

void  Serialize2_VkImportMemoryFdInfoKHR (const VkImportMemoryFdInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR );
	result << indent << name << ".handleType = " << Serialize_VkExternalMemoryHandleTypeFlagBits(obj->handleType) << ";\n";
	result << indent << name << ".fd = " << IntToString(obj->fd) << ";\n";
}

void  Serialize2_VkSwapchainCreateInfoKHR (const VkSwapchainCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR );
	if ( obj->pQueueFamilyIndices ) {
		CHECK( obj->queueFamilyIndexCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pQueueFamilyIndices, "queueFamilyIndices"s ) << "[] = { ";
		for (uint i = 0; i < obj->queueFamilyIndexCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pQueueFamilyIndices[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pQueueFamilyIndices ) << ") == " << IntToString(obj->queueFamilyIndexCount) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkSwapchainCreateFlagsKHR(obj->flags) << ";\n";
	result << indent << name << ".surface = " << remapper( VK_OBJECT_TYPE_SURFACE_KHR, obj->surface ) << ";\n";
	result << indent << name << ".minImageCount = " << IntToString(obj->minImageCount) << ";\n";
	result << indent << name << ".imageFormat = " << Serialize_VkFormat(obj->imageFormat) << ";\n";
	result << indent << name << ".imageColorSpace = " << Serialize_VkColorSpaceKHR(obj->imageColorSpace) << ";\n";
	Serialize2_VkExtent2D( &obj->imageExtent, String(name) << ".imageExtent", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".imageArrayLayers = " << IntToString(obj->imageArrayLayers) << ";\n";
	result << indent << name << ".imageUsage = " << Serialize_VkImageUsageFlags(obj->imageUsage) << ";\n";
	result << indent << name << ".imageSharingMode = " << Serialize_VkSharingMode(obj->imageSharingMode) << ";\n";
	result << indent << name << ".queueFamilyIndexCount = " << IntToString(obj->queueFamilyIndexCount) << ";\n";
	result << indent << name << ".pQueueFamilyIndices = " << nameSer.Get( &obj->pQueueFamilyIndices ) << ";\n";
	result << indent << name << ".preTransform = " << Serialize_VkSurfaceTransformFlagBitsKHR(obj->preTransform) << ";\n";
	result << indent << name << ".compositeAlpha = " << Serialize_VkCompositeAlphaFlagBitsKHR(obj->compositeAlpha) << ";\n";
	result << indent << name << ".presentMode = " << Serialize_VkPresentModeKHR(obj->presentMode) << ";\n";
	result << indent << name << ".clipped = " << BoolToString(obj->clipped) << ";\n";
	result << indent << name << ".oldSwapchain = " << remapper( VK_OBJECT_TYPE_SWAPCHAIN_KHR, obj->oldSwapchain ) << ";\n";
}

void  Serialize2_VkPresentInfoKHR (const VkPresentInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PRESENT_INFO_KHR );
	if ( obj->pWaitSemaphores ) {
		CHECK( obj->waitSemaphoreCount > 0 );
		before << indent << "const VkSemaphore  " << nameSer.MakeUnique( &obj->pWaitSemaphores, "waitSemaphores"s, "semaphore"s ) << "[] = {";
		for (uint i = 0; i < obj->waitSemaphoreCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_SEMAPHORE, obj->pWaitSemaphores[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pWaitSemaphores ) << ") == " << IntToString(obj->waitSemaphoreCount) << " );\n\n";
	}
	if ( obj->pSwapchains ) {
		CHECK( obj->swapchainCount > 0 );
		before << indent << "const VkSwapchainKHR  " << nameSer.MakeUnique( &obj->pSwapchains, "swapchains"s, "swapchain"s ) << "[] = {";
		for (uint i = 0; i < obj->swapchainCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_SWAPCHAIN_KHR, obj->pSwapchains[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pSwapchains ) << ") == " << IntToString(obj->swapchainCount) << " );\n\n";
	}
	if ( obj->pImageIndices ) {
		CHECK( obj->swapchainCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pImageIndices, "imageIndices"s ) << "[] = { ";
		for (uint i = 0; i < obj->swapchainCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pImageIndices[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pImageIndices ) << ") == " << IntToString(obj->swapchainCount) << " );\n\n";
	}
	if ( obj->pResults ) {
		CHECK( obj->swapchainCount > 0 );
		before << indent << "const VkResult  " << nameSer.MakeUnique( &obj->pResults, "results"s ) << "[] = {";
		for (uint i = 0; i < obj->swapchainCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkResult( obj->pResults[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pResults ) << ") == " << IntToString(obj->swapchainCount) << " );\n\n";
	}
	result << indent << name << ".waitSemaphoreCount = " << IntToString(obj->waitSemaphoreCount) << ";\n";
	result << indent << name << ".pWaitSemaphores = " << nameSer.Get( &obj->pWaitSemaphores ) << ";\n";
	result << indent << name << ".swapchainCount = " << IntToString(obj->swapchainCount) << ";\n";
	result << indent << name << ".pSwapchains = " << nameSer.Get( &obj->pSwapchains ) << ";\n";
	result << indent << name << ".pImageIndices = " << nameSer.Get( &obj->pImageIndices ) << ";\n";
	result << indent << name << ".pResults = " << nameSer.Get( &obj->pResults ) << ";\n";
}

void  Serialize2_VkImageSwapchainCreateInfoKHR (const VkImageSwapchainCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR );
	result << indent << name << ".swapchain = " << remapper( VK_OBJECT_TYPE_SWAPCHAIN_KHR, obj->swapchain ) << ";\n";
}

void  Serialize2_VkBindImageMemorySwapchainInfoKHR (const VkBindImageMemorySwapchainInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR );
	result << indent << name << ".swapchain = " << remapper( VK_OBJECT_TYPE_SWAPCHAIN_KHR, obj->swapchain ) << ";\n";
	result << indent << name << ".imageIndex = " << IntToString(obj->imageIndex) << ";\n";
}

ND_ String  Serialize_VkIndirectCommandsLayoutTokenNVX (const VkIndirectCommandsLayoutTokenNVX *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "indirectCommandsLayoutTokenNVX"s );
	result << indent << "VkIndirectCommandsLayoutTokenNVX  " << name << " = {};\n";
	Serialize2_VkIndirectCommandsLayoutTokenNVX( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkIndirectCommandsLayoutTokenNVX (const VkIndirectCommandsLayoutTokenNVX *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".tokenType = " << Serialize_VkIndirectCommandsTokenTypeNVX(obj->tokenType) << ";\n";
	result << indent << name << ".bindingUnit = " << IntToString(obj->bindingUnit) << ";\n";
	result << indent << name << ".dynamicCount = " << IntToString(obj->dynamicCount) << ";\n";
	result << indent << name << ".divisor = " << IntToString(obj->divisor) << ";\n";
}

void  Serialize2_VkDeviceGroupPresentCapabilitiesKHR (const VkDeviceGroupPresentCapabilitiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR );
	result << indent << name << ".presentMask << " << "StaticArray<uint32_t, " << IntToString(CountOf(obj->presentMask)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->presentMask); ++i) {
		result << (i ? ", " : "") << IntToString(obj->presentMask[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".modes = " << Serialize_VkDeviceGroupPresentModeFlagsKHR(obj->modes) << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkWin32KeyedMutexAcquireReleaseInfoNV (const VkWin32KeyedMutexAcquireReleaseInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV );
	if ( obj->pAcquireSyncs ) {
		CHECK( obj->acquireCount > 0 );
		before << indent << "const VkDeviceMemory  " << nameSer.MakeUnique( &obj->pAcquireSyncs, "acquireSyncs"s, "deviceMemory"s ) << "[] = {";
		for (uint i = 0; i < obj->acquireCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->pAcquireSyncs[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pAcquireSyncs ) << ") == " << IntToString(obj->acquireCount) << " );\n\n";
	}
	if ( obj->pAcquireKeys ) {
		CHECK( obj->acquireCount > 0 );
		before << indent << "const uint64_t  " << nameSer.MakeUnique( &obj->pAcquireKeys, "acquireKeys"s ) << "[] = { ";
		for (uint i = 0; i < obj->acquireCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pAcquireKeys[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pAcquireKeys ) << ") == " << IntToString(obj->acquireCount) << " );\n\n";
	}
	if ( obj->pAcquireTimeoutMilliseconds ) {
		CHECK( obj->acquireCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pAcquireTimeoutMilliseconds, "acquireTimeoutMilliseconds"s ) << "[] = { ";
		for (uint i = 0; i < obj->acquireCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pAcquireTimeoutMilliseconds[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pAcquireTimeoutMilliseconds ) << ") == " << IntToString(obj->acquireCount) << " );\n\n";
	}
	if ( obj->pReleaseSyncs ) {
		CHECK( obj->releaseCount > 0 );
		before << indent << "const VkDeviceMemory  " << nameSer.MakeUnique( &obj->pReleaseSyncs, "releaseSyncs"s, "deviceMemory"s ) << "[] = {";
		for (uint i = 0; i < obj->releaseCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->pReleaseSyncs[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pReleaseSyncs ) << ") == " << IntToString(obj->releaseCount) << " );\n\n";
	}
	if ( obj->pReleaseKeys ) {
		CHECK( obj->releaseCount > 0 );
		before << indent << "const uint64_t  " << nameSer.MakeUnique( &obj->pReleaseKeys, "releaseKeys"s ) << "[] = { ";
		for (uint i = 0; i < obj->releaseCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pReleaseKeys[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pReleaseKeys ) << ") == " << IntToString(obj->releaseCount) << " );\n\n";
	}
	result << indent << name << ".acquireCount = " << IntToString(obj->acquireCount) << ";\n";
	result << indent << name << ".pAcquireSyncs = " << nameSer.Get( &obj->pAcquireSyncs ) << ";\n";
	result << indent << name << ".pAcquireKeys = " << nameSer.Get( &obj->pAcquireKeys ) << ";\n";
	result << indent << name << ".pAcquireTimeoutMilliseconds = " << nameSer.Get( &obj->pAcquireTimeoutMilliseconds ) << ";\n";
	result << indent << name << ".releaseCount = " << IntToString(obj->releaseCount) << ";\n";
	result << indent << name << ".pReleaseSyncs = " << nameSer.Get( &obj->pReleaseSyncs ) << ";\n";
	result << indent << name << ".pReleaseKeys = " << nameSer.Get( &obj->pReleaseKeys ) << ";\n";
}
#endif

void  Serialize2_VkDeviceGroupPresentInfoKHR (const VkDeviceGroupPresentInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR );
	if ( obj->pDeviceMasks ) {
		CHECK( obj->swapchainCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pDeviceMasks, "deviceMasks"s ) << "[] = { ";
		for (uint i = 0; i < obj->swapchainCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pDeviceMasks[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pDeviceMasks ) << ") == " << IntToString(obj->swapchainCount) << " );\n\n";
	}
	result << indent << name << ".swapchainCount = " << IntToString(obj->swapchainCount) << ";\n";
	result << indent << name << ".pDeviceMasks = " << nameSer.Get( &obj->pDeviceMasks ) << ";\n";
	result << indent << name << ".mode = " << Serialize_VkDeviceGroupPresentModeFlagBitsKHR(obj->mode) << ";\n";
}

ND_ String  Serialize_VkVertexInputBindingDivisorDescriptionEXT (const VkVertexInputBindingDivisorDescriptionEXT *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "vertexInputBindingDivisorDescription"s );
	result << indent << "VkVertexInputBindingDivisorDescriptionEXT  " << name << " = {};\n";
	Serialize2_VkVertexInputBindingDivisorDescriptionEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkVertexInputBindingDivisorDescriptionEXT (const VkVertexInputBindingDivisorDescriptionEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".binding = " << IntToString(obj->binding) << ";\n";
	result << indent << name << ".divisor = " << IntToString(obj->divisor) << ";\n";
}

void  Serialize2_VkDeviceGroupSwapchainCreateInfoKHR (const VkDeviceGroupSwapchainCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR );
	result << indent << name << ".modes = " << Serialize_VkDeviceGroupPresentModeFlagsKHR(obj->modes) << ";\n";
}

ND_ String  Serialize_VkDisplayPropertiesKHR (const VkDisplayPropertiesKHR *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "displayProperties"s, "properties"s );
	result << indent << "VkDisplayPropertiesKHR  " << name << " = {};\n";
	Serialize2_VkDisplayPropertiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkDisplayPropertiesKHR (const VkDisplayPropertiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".display = " << remapper( VK_OBJECT_TYPE_DISPLAY_KHR, obj->display ) << ";\n";
	result << indent << name << ".displayName = " << '"' << obj->displayName << '"' << ";\n";
	Serialize2_VkExtent2D( &obj->physicalDimensions, String(name) << ".physicalDimensions", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->physicalResolution, String(name) << ".physicalResolution", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".supportedTransforms = " << Serialize_VkSurfaceTransformFlagsKHR(obj->supportedTransforms) << ";\n";
	result << indent << name << ".planeReorderPossible = " << BoolToString(obj->planeReorderPossible) << ";\n";
	result << indent << name << ".persistentContent = " << BoolToString(obj->persistentContent) << ";\n";
}

ND_ String  Serialize_VkDisplayPlaneCapabilitiesKHR (const VkDisplayPlaneCapabilitiesKHR *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "displayPlaneCapabilities"s );
	result << indent << "VkDisplayPlaneCapabilitiesKHR  " << name << " = {};\n";
	Serialize2_VkDisplayPlaneCapabilitiesKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkDisplayPlaneCapabilitiesKHR (const VkDisplayPlaneCapabilitiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".supportedAlpha = " << Serialize_VkDisplayPlaneAlphaFlagsKHR(obj->supportedAlpha) << ";\n";
	Serialize2_VkOffset2D( &obj->minSrcPosition, String(name) << ".minSrcPosition", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkOffset2D( &obj->maxSrcPosition, String(name) << ".maxSrcPosition", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->minSrcExtent, String(name) << ".minSrcExtent", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->maxSrcExtent, String(name) << ".maxSrcExtent", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkOffset2D( &obj->minDstPosition, String(name) << ".minDstPosition", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkOffset2D( &obj->maxDstPosition, String(name) << ".maxDstPosition", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->minDstExtent, String(name) << ".minDstExtent", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->maxDstExtent, String(name) << ".maxDstExtent", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkDisplaySurfaceCreateInfoKHR (const VkDisplaySurfaceCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR );
	result << indent << name << ".flags = " << Serialize_VkDisplaySurfaceCreateFlagsKHR(obj->flags) << ";\n";
	result << indent << name << ".displayMode = " << remapper( VK_OBJECT_TYPE_DISPLAY_MODE_KHR, obj->displayMode ) << ";\n";
	result << indent << name << ".planeIndex = " << IntToString(obj->planeIndex) << ";\n";
	result << indent << name << ".planeStackIndex = " << IntToString(obj->planeStackIndex) << ";\n";
	result << indent << name << ".transform = " << Serialize_VkSurfaceTransformFlagBitsKHR(obj->transform) << ";\n";
	result << indent << name << ".globalAlpha = " << FloatToString(obj->globalAlpha) << ";\n";
	result << indent << name << ".alphaMode = " << Serialize_VkDisplayPlaneAlphaFlagBitsKHR(obj->alphaMode) << ";\n";
	Serialize2_VkExtent2D( &obj->imageExtent, String(name) << ".imageExtent", nameSer, remapper, indent, INOUT result, INOUT before );
}

#ifdef VULKAN_XCB_H_
void  Serialize2_VkXcbSurfaceCreateInfoKHR (const VkXcbSurfaceCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR );
	result << indent << name << ".flags = " << Serialize_VkXcbSurfaceCreateFlagsKHR(obj->flags) << ";\n";
	result << indent << name << ".connection = " << "BitCast<xcb_connection_t*>(" << HexToString(obj->connection) << ")" << ";\n";
	result << indent << name << ".window = " << "BitCast<xcb_window_t>(" << HexToString(obj->window) << ")" << ";\n";
}
#endif

void  Serialize2_VkMemoryFdPropertiesKHR (const VkMemoryFdPropertiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR );
	result << indent << name << ".memoryTypeBits = " << IntToString(obj->memoryTypeBits) << ";\n";
}

ND_ String  Serialize_VkSubpassSampleLocationsEXT (const VkSubpassSampleLocationsEXT *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "subpassSampleLocations"s );
	result << indent << "VkSubpassSampleLocationsEXT  " << name << " = {};\n";
	Serialize2_VkSubpassSampleLocationsEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSubpassSampleLocationsEXT (const VkSubpassSampleLocationsEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const*>(&obj->sampleLocationsInfo), nameSer, remapper, indent );
	result << indent << name << ".subpassIndex = " << IntToString(obj->subpassIndex) << ";\n";
	result << indent << name << ".sampleLocationsInfo = " << nameSer.Get( &obj->sampleLocationsInfo ) << ";\n";
}

void  Serialize2_VkMemoryGetFdInfoKHR (const VkMemoryGetFdInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR );
	result << indent << name << ".memory = " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->memory ) << ";\n";
	result << indent << name << ".handleType = " << Serialize_VkExternalMemoryHandleTypeFlagBits(obj->handleType) << ";\n";
}

void  Serialize2_VkImportSemaphoreFdInfoKHR (const VkImportSemaphoreFdInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR );
	result << indent << name << ".semaphore = " << remapper( VK_OBJECT_TYPE_SEMAPHORE, obj->semaphore ) << ";\n";
	result << indent << name << ".flags = " << Serialize_VkSemaphoreImportFlags(obj->flags) << ";\n";
	result << indent << name << ".handleType = " << Serialize_VkExternalSemaphoreHandleTypeFlagBits(obj->handleType) << ";\n";
	result << indent << name << ".fd = " << IntToString(obj->fd) << ";\n";
}

void  Serialize2_VkSemaphoreGetFdInfoKHR (const VkSemaphoreGetFdInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR );
	result << indent << name << ".semaphore = " << remapper( VK_OBJECT_TYPE_SEMAPHORE, obj->semaphore ) << ";\n";
	result << indent << name << ".handleType = " << Serialize_VkExternalSemaphoreHandleTypeFlagBits(obj->handleType) << ";\n";
}

void  Serialize2_VkPhysicalDevicePushDescriptorPropertiesKHR (const VkPhysicalDevicePushDescriptorPropertiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR );
	result << indent << name << ".maxPushDescriptors = " << IntToString(obj->maxPushDescriptors) << ";\n";
}

ND_ String  Serialize_VkRectLayerKHR (const VkRectLayerKHR *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "rectLayer"s );
	result << indent << "VkRectLayerKHR  " << name << " = {};\n";
	Serialize2_VkRectLayerKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkRectLayerKHR (const VkRectLayerKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	Serialize2_VkOffset2D( &obj->offset, String(name) << ".offset", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->extent, String(name) << ".extent", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".layer = " << IntToString(obj->layer) << ";\n";
}

void  Serialize2_VkPipelineColorBlendAdvancedStateCreateInfoEXT (const VkPipelineColorBlendAdvancedStateCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT );
	result << indent << name << ".srcPremultiplied = " << BoolToString(obj->srcPremultiplied) << ";\n";
	result << indent << name << ".dstPremultiplied = " << BoolToString(obj->dstPremultiplied) << ";\n";
	result << indent << name << ".blendOverlap = " << Serialize_VkBlendOverlapEXT(obj->blendOverlap) << ";\n";
}

ND_ String  Serialize_VkPresentRegionKHR (const VkPresentRegionKHR *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "presentRegion"s );
	result << indent << "VkPresentRegionKHR  " << name << " = {};\n";
	Serialize2_VkPresentRegionKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkPresentRegionKHR (const VkPresentRegionKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	if ( obj->pRectangles ) {
		CHECK( obj->rectangleCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pRectangles, "rectangles"s, "rectLayer"s );
		before << indent << "VkRectLayerKHR  " << arr_name << "[" << IntToString(obj->rectangleCount) << "] = {};\n";
		for (uint i = 0; i < obj->rectangleCount; ++i) {
			Serialize2_VkRectLayerKHR( obj->pRectangles + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".rectangleCount = " << IntToString(obj->rectangleCount) << ";\n";
	result << indent << name << ".pRectangles = " << nameSer.Get( &obj->pRectangles ) << ";\n";
}

void  Serialize2_VkPresentRegionsKHR (const VkPresentRegionsKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR );
	if ( obj->pRegions ) {
		CHECK( obj->swapchainCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pRegions, "regions"s, "presentRegion"s );
		before << indent << "VkPresentRegionKHR  " << arr_name << "[" << IntToString(obj->swapchainCount) << "] = {};\n";
		for (uint i = 0; i < obj->swapchainCount; ++i) {
			Serialize2_VkPresentRegionKHR( obj->pRegions + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".swapchainCount = " << IntToString(obj->swapchainCount) << ";\n";
	result << indent << name << ".pRegions = " << nameSer.Get( &obj->pRegions ) << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkImportMemoryWin32HandleInfoKHR (const VkImportMemoryWin32HandleInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR );
	result << indent << name << ".handleType = " << Serialize_VkExternalMemoryHandleTypeFlagBits(obj->handleType) << ";\n";
	result << indent << name << ".handle = " << "BitCast<HANDLE>(" << HexToString(obj->handle) << ")" << ";\n";
	result << indent << name << ".name = " << WCharToString(obj->name) << ";\n";
}
#endif

void  Serialize2_VkFramebufferAttachmentImageInfoKHR (const VkFramebufferAttachmentImageInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR );
	if ( obj->pViewFormats ) {
		CHECK( obj->viewFormatCount > 0 );
		before << indent << "const VkFormat  " << nameSer.MakeUnique( &obj->pViewFormats, "viewFormats"s ) << "[] = {";
		for (uint i = 0; i < obj->viewFormatCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkFormat( obj->pViewFormats[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pViewFormats ) << ") == " << IntToString(obj->viewFormatCount) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkImageCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".usage = " << Serialize_VkImageUsageFlags(obj->usage) << ";\n";
	result << indent << name << ".width = " << IntToString(obj->width) << ";\n";
	result << indent << name << ".height = " << IntToString(obj->height) << ";\n";
	result << indent << name << ".layerCount = " << IntToString(obj->layerCount) << ";\n";
	result << indent << name << ".viewFormatCount = " << IntToString(obj->viewFormatCount) << ";\n";
	result << indent << name << ".pViewFormats = " << nameSer.Get( &obj->pViewFormats ) << ";\n";
}

void  Serialize2_VkAttachmentDescription2KHR (const VkAttachmentDescription2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR );
	result << indent << name << ".flags = " << Serialize_VkAttachmentDescriptionFlags(obj->flags) << ";\n";
	result << indent << name << ".format = " << Serialize_VkFormat(obj->format) << ";\n";
	result << indent << name << ".samples = " << Serialize_VkSampleCountFlagBits(obj->samples) << ";\n";
	result << indent << name << ".loadOp = " << Serialize_VkAttachmentLoadOp(obj->loadOp) << ";\n";
	result << indent << name << ".storeOp = " << Serialize_VkAttachmentStoreOp(obj->storeOp) << ";\n";
	result << indent << name << ".stencilLoadOp = " << Serialize_VkAttachmentLoadOp(obj->stencilLoadOp) << ";\n";
	result << indent << name << ".stencilStoreOp = " << Serialize_VkAttachmentStoreOp(obj->stencilStoreOp) << ";\n";
	result << indent << name << ".initialLayout = " << Serialize_VkImageLayout(obj->initialLayout) << ";\n";
	result << indent << name << ".finalLayout = " << Serialize_VkImageLayout(obj->finalLayout) << ";\n";
}

ND_ String  Serialize_VkConformanceVersionKHR (const VkConformanceVersionKHR *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "conformanceVersion"s );
	result << indent << "VkConformanceVersionKHR  " << name << " = {};\n";
	Serialize2_VkConformanceVersionKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkConformanceVersionKHR (const VkConformanceVersionKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".major = " << IntToString(obj->major) << ";\n";
	result << indent << name << ".minor = " << IntToString(obj->minor) << ";\n";
	result << indent << name << ".subminor = " << IntToString(obj->subminor) << ";\n";
	result << indent << name << ".patch = " << IntToString(obj->patch) << ";\n";
}

void  Serialize2_VkSubpassDescription2KHR (const VkSubpassDescription2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR );
	if ( obj->pInputAttachments ) {
		CHECK( obj->inputAttachmentCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pInputAttachments, "inputAttachments"s, "attachmentReference2"s );
		before << indent << "VkAttachmentReference2KHR  " << arr_name << "[" << IntToString(obj->inputAttachmentCount) << "] = {};\n";
		for (uint i = 0; i < obj->inputAttachmentCount; ++i) {
			Serialize2_VkAttachmentReference2KHR( obj->pInputAttachments + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pColorAttachments ) {
		CHECK( obj->colorAttachmentCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pColorAttachments, "colorAttachments"s, "attachmentReference2"s );
		before << indent << "VkAttachmentReference2KHR  " << arr_name << "[" << IntToString(obj->colorAttachmentCount) << "] = {};\n";
		for (uint i = 0; i < obj->colorAttachmentCount; ++i) {
			Serialize2_VkAttachmentReference2KHR( obj->pColorAttachments + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pResolveAttachments ) {
		CHECK( obj->colorAttachmentCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pResolveAttachments, "resolveAttachments"s, "attachmentReference2"s );
		before << indent << "VkAttachmentReference2KHR  " << arr_name << "[" << IntToString(obj->colorAttachmentCount) << "] = {};\n";
		for (uint i = 0; i < obj->colorAttachmentCount; ++i) {
			Serialize2_VkAttachmentReference2KHR( obj->pResolveAttachments + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pDepthStencilAttachment ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pDepthStencilAttachment), nameSer, remapper, indent );
	}
	if ( obj->pPreserveAttachments ) {
		CHECK( obj->preserveAttachmentCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pPreserveAttachments, "preserveAttachments"s ) << "[] = { ";
		for (uint i = 0; i < obj->preserveAttachmentCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pPreserveAttachments[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pPreserveAttachments ) << ") == " << IntToString(obj->preserveAttachmentCount) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkSubpassDescriptionFlags(obj->flags) << ";\n";
	result << indent << name << ".pipelineBindPoint = " << Serialize_VkPipelineBindPoint(obj->pipelineBindPoint) << ";\n";
	result << indent << name << ".viewMask = " << IntToString(obj->viewMask) << ";\n";
	result << indent << name << ".inputAttachmentCount = " << IntToString(obj->inputAttachmentCount) << ";\n";
	result << indent << name << ".pInputAttachments = " << nameSer.Get( &obj->pInputAttachments ) << ";\n";
	result << indent << name << ".colorAttachmentCount = " << IntToString(obj->colorAttachmentCount) << ";\n";
	result << indent << name << ".pColorAttachments = " << nameSer.Get( &obj->pColorAttachments ) << ";\n";
	result << indent << name << ".pResolveAttachments = " << nameSer.Get( &obj->pResolveAttachments ) << ";\n";
	result << indent << name << ".pDepthStencilAttachment = " << nameSer.GetPtr(obj->pDepthStencilAttachment) << ";\n";
	result << indent << name << ".preserveAttachmentCount = " << IntToString(obj->preserveAttachmentCount) << ";\n";
	result << indent << name << ".pPreserveAttachments = " << nameSer.Get( &obj->pPreserveAttachments ) << ";\n";
}

void  Serialize2_VkSubpassDependency2KHR (const VkSubpassDependency2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR );
	result << indent << name << ".srcSubpass = " << IntToString(obj->srcSubpass) << ";\n";
	result << indent << name << ".dstSubpass = " << IntToString(obj->dstSubpass) << ";\n";
	result << indent << name << ".srcStageMask = " << Serialize_VkPipelineStageFlags(obj->srcStageMask) << ";\n";
	result << indent << name << ".dstStageMask = " << Serialize_VkPipelineStageFlags(obj->dstStageMask) << ";\n";
	result << indent << name << ".srcAccessMask = " << Serialize_VkAccessFlags(obj->srcAccessMask) << ";\n";
	result << indent << name << ".dstAccessMask = " << Serialize_VkAccessFlags(obj->dstAccessMask) << ";\n";
	result << indent << name << ".dependencyFlags = " << Serialize_VkDependencyFlags(obj->dependencyFlags) << ";\n";
	result << indent << name << ".viewOffset = " << IntToString(obj->viewOffset) << ";\n";
}

void  Serialize2_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT (const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT );
	result << indent << name << ".minSubgroupSize = " << IntToString(obj->minSubgroupSize) << ";\n";
	result << indent << name << ".maxSubgroupSize = " << IntToString(obj->maxSubgroupSize) << ";\n";
	result << indent << name << ".maxComputeWorkgroupSubgroups = " << IntToString(obj->maxComputeWorkgroupSubgroups) << ";\n";
	result << indent << name << ".requiredSubgroupSizeStages = " << Serialize_VkShaderStageFlags(obj->requiredSubgroupSizeStages) << ";\n";
}

void  Serialize2_VkQueueFamilyCheckpointPropertiesNV (const VkQueueFamilyCheckpointPropertiesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV );
	result << indent << name << ".checkpointExecutionStageMask = " << Serialize_VkPipelineStageFlags(obj->checkpointExecutionStageMask) << ";\n";
}

void  Serialize2_VkRenderPassCreateInfo2KHR (const VkRenderPassCreateInfo2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR );
	if ( obj->pAttachments ) {
		CHECK( obj->attachmentCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pAttachments, "attachments"s, "attachmentDescription2"s );
		before << indent << "VkAttachmentDescription2KHR  " << arr_name << "[" << IntToString(obj->attachmentCount) << "] = {};\n";
		for (uint i = 0; i < obj->attachmentCount; ++i) {
			Serialize2_VkAttachmentDescription2KHR( obj->pAttachments + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pSubpasses ) {
		CHECK( obj->subpassCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pSubpasses, "subpasses"s, "subpassDescription2"s );
		before << indent << "VkSubpassDescription2KHR  " << arr_name << "[" << IntToString(obj->subpassCount) << "] = {};\n";
		for (uint i = 0; i < obj->subpassCount; ++i) {
			Serialize2_VkSubpassDescription2KHR( obj->pSubpasses + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pDependencies ) {
		CHECK( obj->dependencyCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pDependencies, "dependencies"s, "subpassDependency2"s );
		before << indent << "VkSubpassDependency2KHR  " << arr_name << "[" << IntToString(obj->dependencyCount) << "] = {};\n";
		for (uint i = 0; i < obj->dependencyCount; ++i) {
			Serialize2_VkSubpassDependency2KHR( obj->pDependencies + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pCorrelatedViewMasks ) {
		CHECK( obj->correlatedViewMaskCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pCorrelatedViewMasks, "correlatedViewMasks"s ) << "[] = { ";
		for (uint i = 0; i < obj->correlatedViewMaskCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pCorrelatedViewMasks[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pCorrelatedViewMasks ) << ") == " << IntToString(obj->correlatedViewMaskCount) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkRenderPassCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".attachmentCount = " << IntToString(obj->attachmentCount) << ";\n";
	result << indent << name << ".pAttachments = " << nameSer.Get( &obj->pAttachments ) << ";\n";
	result << indent << name << ".subpassCount = " << IntToString(obj->subpassCount) << ";\n";
	result << indent << name << ".pSubpasses = " << nameSer.Get( &obj->pSubpasses ) << ";\n";
	result << indent << name << ".dependencyCount = " << IntToString(obj->dependencyCount) << ";\n";
	result << indent << name << ".pDependencies = " << nameSer.Get( &obj->pDependencies ) << ";\n";
	result << indent << name << ".correlatedViewMaskCount = " << IntToString(obj->correlatedViewMaskCount) << ";\n";
	result << indent << name << ".pCorrelatedViewMasks = " << nameSer.Get( &obj->pCorrelatedViewMasks ) << ";\n";
}

void  Serialize2_VkSubpassBeginInfoKHR (const VkSubpassBeginInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR );
	result << indent << name << ".contents = " << Serialize_VkSubpassContents(obj->contents) << ";\n";
}

void  Serialize2_VkPhysicalDeviceHostQueryResetFeaturesEXT (const VkPhysicalDeviceHostQueryResetFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT );
	result << indent << name << ".hostQueryReset = " << BoolToString(obj->hostQueryReset) << ";\n";
}

void  Serialize2_VkSharedPresentSurfaceCapabilitiesKHR (const VkSharedPresentSurfaceCapabilitiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR );
	result << indent << name << ".sharedPresentSupportedUsageFlags = " << Serialize_VkImageUsageFlags(obj->sharedPresentSupportedUsageFlags) << ";\n";
}

void  Serialize2_VkSurfaceCapabilities2EXT (const VkSurfaceCapabilities2EXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT );
	result << indent << name << ".minImageCount = " << IntToString(obj->minImageCount) << ";\n";
	result << indent << name << ".maxImageCount = " << IntToString(obj->maxImageCount) << ";\n";
	Serialize2_VkExtent2D( &obj->currentExtent, String(name) << ".currentExtent", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->minImageExtent, String(name) << ".minImageExtent", nameSer, remapper, indent, INOUT result, INOUT before );
	Serialize2_VkExtent2D( &obj->maxImageExtent, String(name) << ".maxImageExtent", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".maxImageArrayLayers = " << IntToString(obj->maxImageArrayLayers) << ";\n";
	result << indent << name << ".supportedTransforms = " << Serialize_VkSurfaceTransformFlagsKHR(obj->supportedTransforms) << ";\n";
	result << indent << name << ".currentTransform = " << Serialize_VkSurfaceTransformFlagBitsKHR(obj->currentTransform) << ";\n";
	result << indent << name << ".supportedCompositeAlpha = " << Serialize_VkCompositeAlphaFlagsKHR(obj->supportedCompositeAlpha) << ";\n";
	result << indent << name << ".supportedUsageFlags = " << Serialize_VkImageUsageFlags(obj->supportedUsageFlags) << ";\n";
	result << indent << name << ".supportedSurfaceCounters = " << Serialize_VkSurfaceCounterFlagsEXT(obj->supportedSurfaceCounters) << ";\n";
}

void  Serialize2_VkFenceGetFdInfoKHR (const VkFenceGetFdInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR );
	result << indent << name << ".fence = " << remapper( VK_OBJECT_TYPE_FENCE, obj->fence ) << ";\n";
	result << indent << name << ".handleType = " << Serialize_VkExternalFenceHandleTypeFlagBits(obj->handleType) << ";\n";
}

void  Serialize2_VkPhysicalDeviceSurfaceInfo2KHR (const VkPhysicalDeviceSurfaceInfo2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR );
	result << indent << name << ".surface = " << remapper( VK_OBJECT_TYPE_SURFACE_KHR, obj->surface ) << ";\n";
}

void  Serialize2_VkSurfaceCapabilities2KHR (const VkSurfaceCapabilities2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR );
	Serialize2_VkSurfaceCapabilitiesKHR( &obj->surfaceCapabilities, String(name) << ".surfaceCapabilities", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkSurfaceFormat2KHR (const VkSurfaceFormat2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR );
	Serialize2_VkSurfaceFormatKHR( &obj->surfaceFormat, String(name) << ".surfaceFormat", nameSer, remapper, indent, INOUT result, INOUT before );
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkImportSemaphoreWin32HandleInfoKHR (const VkImportSemaphoreWin32HandleInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR );
	result << indent << name << ".semaphore = " << remapper( VK_OBJECT_TYPE_SEMAPHORE, obj->semaphore ) << ";\n";
	result << indent << name << ".flags = " << Serialize_VkSemaphoreImportFlags(obj->flags) << ";\n";
	result << indent << name << ".handleType = " << Serialize_VkExternalSemaphoreHandleTypeFlagBits(obj->handleType) << ";\n";
	result << indent << name << ".handle = " << "BitCast<HANDLE>(" << HexToString(obj->handle) << ")" << ";\n";
	result << indent << name << ".name = " << WCharToString(obj->name) << ";\n";
}
#endif

void  Serialize2_VkDisplayModeProperties2KHR (const VkDisplayModeProperties2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR );
	Serialize2_VkDisplayModePropertiesKHR( &obj->displayModeProperties, String(name) << ".displayModeProperties", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkDisplayPlaneCapabilities2KHR (const VkDisplayPlaneCapabilities2KHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR );
	Serialize2_VkDisplayPlaneCapabilitiesKHR( &obj->capabilities, String(name) << ".capabilities", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT (const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT );
	if ( obj->pDescriptorCounts ) {
		CHECK( obj->descriptorSetCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pDescriptorCounts, "descriptorCounts"s ) << "[] = { ";
		for (uint i = 0; i < obj->descriptorSetCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pDescriptorCounts[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pDescriptorCounts ) << ") == " << IntToString(obj->descriptorSetCount) << " );\n\n";
	}
	result << indent << name << ".descriptorSetCount = " << IntToString(obj->descriptorSetCount) << ";\n";
	result << indent << name << ".pDescriptorCounts = " << nameSer.Get( &obj->pDescriptorCounts ) << ";\n";
}

void  Serialize2_VkPhysicalDevice8BitStorageFeaturesKHR (const VkPhysicalDevice8BitStorageFeaturesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR );
	result << indent << name << ".storageBuffer8BitAccess = " << BoolToString(obj->storageBuffer8BitAccess) << ";\n";
	result << indent << name << ".uniformAndStorageBuffer8BitAccess = " << BoolToString(obj->uniformAndStorageBuffer8BitAccess) << ";\n";
	result << indent << name << ".storagePushConstant8 = " << BoolToString(obj->storagePushConstant8) << ";\n";
}

void  Serialize2_VkInitializePerformanceApiInfoINTEL (const VkInitializePerformanceApiInfoINTEL *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL );
	result << indent << name << ".pUserData = " << "null" << ";\n";
}

void  Serialize2_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR (const VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR );
	result << indent << name << ".shaderBufferInt64Atomics = " << BoolToString(obj->shaderBufferInt64Atomics) << ";\n";
	result << indent << name << ".shaderSharedInt64Atomics = " << BoolToString(obj->shaderSharedInt64Atomics) << ";\n";
}

#ifdef VULKAN_ANDROID_H_
void  Serialize2_VkExternalFormatANDROID (const VkExternalFormatANDROID *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID );
	result << indent << name << ".externalFormat = " << IntToString(obj->externalFormat) << ";\n";
}
#endif

void  Serialize2_VkDedicatedAllocationMemoryAllocateInfoNV (const VkDedicatedAllocationMemoryAllocateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV );
	result << indent << name << ".image = " << remapper( VK_OBJECT_TYPE_IMAGE, obj->image ) << ";\n";
	result << indent << name << ".buffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->buffer ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceDriverPropertiesKHR (const VkPhysicalDeviceDriverPropertiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR );
	result << indent << name << ".driverID = " << Serialize_VkDriverIdKHR(obj->driverID) << ";\n";
	result << indent << name << ".driverName = " << '"' << obj->driverName << '"' << ";\n";
	result << indent << name << ".driverInfo = " << '"' << obj->driverInfo << '"' << ";\n";
	Serialize2_VkConformanceVersionKHR( &obj->conformanceVersion, String(name) << ".conformanceVersion", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPhysicalDeviceFloatControlsPropertiesKHR (const VkPhysicalDeviceFloatControlsPropertiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR );
	result << indent << name << ".denormBehaviorIndependence = " << Serialize_VkShaderFloatControlsIndependenceKHR(obj->denormBehaviorIndependence) << ";\n";
	result << indent << name << ".roundingModeIndependence = " << Serialize_VkShaderFloatControlsIndependenceKHR(obj->roundingModeIndependence) << ";\n";
	result << indent << name << ".shaderSignedZeroInfNanPreserveFloat16 = " << BoolToString(obj->shaderSignedZeroInfNanPreserveFloat16) << ";\n";
	result << indent << name << ".shaderSignedZeroInfNanPreserveFloat32 = " << BoolToString(obj->shaderSignedZeroInfNanPreserveFloat32) << ";\n";
	result << indent << name << ".shaderSignedZeroInfNanPreserveFloat64 = " << BoolToString(obj->shaderSignedZeroInfNanPreserveFloat64) << ";\n";
	result << indent << name << ".shaderDenormPreserveFloat16 = " << BoolToString(obj->shaderDenormPreserveFloat16) << ";\n";
	result << indent << name << ".shaderDenormPreserveFloat32 = " << BoolToString(obj->shaderDenormPreserveFloat32) << ";\n";
	result << indent << name << ".shaderDenormPreserveFloat64 = " << BoolToString(obj->shaderDenormPreserveFloat64) << ";\n";
	result << indent << name << ".shaderDenormFlushToZeroFloat16 = " << BoolToString(obj->shaderDenormFlushToZeroFloat16) << ";\n";
	result << indent << name << ".shaderDenormFlushToZeroFloat32 = " << BoolToString(obj->shaderDenormFlushToZeroFloat32) << ";\n";
	result << indent << name << ".shaderDenormFlushToZeroFloat64 = " << BoolToString(obj->shaderDenormFlushToZeroFloat64) << ";\n";
	result << indent << name << ".shaderRoundingModeRTEFloat16 = " << BoolToString(obj->shaderRoundingModeRTEFloat16) << ";\n";
	result << indent << name << ".shaderRoundingModeRTEFloat32 = " << BoolToString(obj->shaderRoundingModeRTEFloat32) << ";\n";
	result << indent << name << ".shaderRoundingModeRTEFloat64 = " << BoolToString(obj->shaderRoundingModeRTEFloat64) << ";\n";
	result << indent << name << ".shaderRoundingModeRTZFloat16 = " << BoolToString(obj->shaderRoundingModeRTZFloat16) << ";\n";
	result << indent << name << ".shaderRoundingModeRTZFloat32 = " << BoolToString(obj->shaderRoundingModeRTZFloat32) << ";\n";
	result << indent << name << ".shaderRoundingModeRTZFloat64 = " << BoolToString(obj->shaderRoundingModeRTZFloat64) << ";\n";
}

void  Serialize2_VkPhysicalDeviceMemoryBudgetPropertiesEXT (const VkPhysicalDeviceMemoryBudgetPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT );
	result << indent << name << ".heapBudget << " << "StaticArray<VkDeviceSize, " << IntToString(CountOf(obj->heapBudget)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->heapBudget); ++i) {
		result << (i ? ", " : "") << IntToString(obj->heapBudget[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".heapUsage << " << "StaticArray<VkDeviceSize, " << IntToString(CountOf(obj->heapUsage)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->heapUsage); ++i) {
		result << (i ? ", " : "") << IntToString(obj->heapUsage[i]);
	}
	result << " }" << ";\n";
}

void  Serialize2_VkSubpassDescriptionDepthStencilResolveKHR (const VkSubpassDescriptionDepthStencilResolveKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR );
	if ( obj->pDepthStencilResolveAttachment ) {
		before << SerializeStruct( BitCast<VkBaseInStructure const*>(obj->pDepthStencilResolveAttachment), nameSer, remapper, indent );
	}
	result << indent << name << ".depthResolveMode = " << Serialize_VkResolveModeFlagBitsKHR(obj->depthResolveMode) << ";\n";
	result << indent << name << ".stencilResolveMode = " << Serialize_VkResolveModeFlagBitsKHR(obj->stencilResolveMode) << ";\n";
	result << indent << name << ".pDepthStencilResolveAttachment = " << nameSer.GetPtr(obj->pDepthStencilResolveAttachment) << ";\n";
}

void  Serialize2_VkPhysicalDeviceDepthStencilResolvePropertiesKHR (const VkPhysicalDeviceDepthStencilResolvePropertiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR );
	result << indent << name << ".supportedDepthResolveModes = " << Serialize_VkResolveModeFlagsKHR(obj->supportedDepthResolveModes) << ";\n";
	result << indent << name << ".supportedStencilResolveModes = " << Serialize_VkResolveModeFlagsKHR(obj->supportedStencilResolveModes) << ";\n";
	result << indent << name << ".independentResolveNone = " << BoolToString(obj->independentResolveNone) << ";\n";
	result << indent << name << ".independentResolve = " << BoolToString(obj->independentResolve) << ";\n";
}

void  Serialize2_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR (const VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR );
	result << indent << name << ".vulkanMemoryModel = " << BoolToString(obj->vulkanMemoryModel) << ";\n";
	result << indent << name << ".vulkanMemoryModelDeviceScope = " << BoolToString(obj->vulkanMemoryModelDeviceScope) << ";\n";
	result << indent << name << ".vulkanMemoryModelAvailabilityVisibilityChains = " << BoolToString(obj->vulkanMemoryModelAvailabilityVisibilityChains) << ";\n";
}

void  Serialize2_VkSurfaceProtectedCapabilitiesKHR (const VkSurfaceProtectedCapabilitiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR );
	result << indent << name << ".supportsProtected = " << BoolToString(obj->supportsProtected) << ";\n";
}

void  Serialize2_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR (const VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR );
	result << indent << name << ".uniformBufferStandardLayout = " << BoolToString(obj->uniformBufferStandardLayout) << ";\n";
}

void  Serialize2_VkPhysicalDeviceCoverageReductionModeFeaturesNV (const VkPhysicalDeviceCoverageReductionModeFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV );
	result << indent << name << ".coverageReductionMode = " << BoolToString(obj->coverageReductionMode) << ";\n";
}

void  Serialize2_VkRenderPassFragmentDensityMapCreateInfoEXT (const VkRenderPassFragmentDensityMapCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT );
	Serialize2_VkAttachmentReference( &obj->fragmentDensityMapAttachment, String(name) << ".fragmentDensityMapAttachment", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkAccelerationStructureMemoryRequirementsInfoNV (const VkAccelerationStructureMemoryRequirementsInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV );
	result << indent << name << ".type = " << Serialize_VkAccelerationStructureMemoryRequirementsTypeNV(obj->type) << ";\n";
	result << indent << name << ".accelerationStructure = " << remapper( VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV, obj->accelerationStructure ) << ";\n";
}

void  Serialize2_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR (const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR );
	result << indent << name << ".pipelineExecutableInfo = " << BoolToString(obj->pipelineExecutableInfo) << ";\n";
}

void  Serialize2_VkPipelineExecutablePropertiesKHR (const VkPipelineExecutablePropertiesKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR );
	result << indent << name << ".stages = " << Serialize_VkShaderStageFlags(obj->stages) << ";\n";
	result << indent << name << ".name = " << '"' << obj->name << '"' << ";\n";
	result << indent << name << ".description = " << '"' << obj->description << '"' << ";\n";
	result << indent << name << ".subgroupSize = " << IntToString(obj->subgroupSize) << ";\n";
}

void  Serialize2_VkDebugUtilsObjectTagInfoEXT (const VkDebugUtilsObjectTagInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT );
	result << indent << name << ".objectType = " << Serialize_VkObjectType(obj->objectType) << ";\n";
	result << indent << name << ".objectHandle = " << IntToString(obj->objectHandle) << ";\n";
	result << indent << name << ".tagName = " << IntToString(obj->tagName) << ";\n";
	result << indent << name << ".tagSize = " << IntToString(obj->tagSize) << ";\n";
	result << indent << name << ".pTag = " << "null" << ";\n";
}

ND_ String  Serialize_VkPipelineExecutableStatisticValueKHR (const VkPipelineExecutableStatisticValueKHR *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "pipelineExecutableStatisticValue"s );
	result << indent << "VkPipelineExecutableStatisticValueKHR  " << name << " = {};\n";
	Serialize2_VkPipelineExecutableStatisticValueKHR( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkPipelineExecutableStatisticValueKHR (const VkPipelineExecutableStatisticValueKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".b32 = " << BoolToString(obj->b32) << ";\n";
	result << indent << name << ".i64 = " << IntToString(obj->i64) << ";\n";
	result << indent << name << ".u64 = " << IntToString(obj->u64) << ";\n";
	result << indent << name << ".f64 = " << DoubleToString(obj->f64) << ";\n";
}

void  Serialize2_VkDebugReportCallbackCreateInfoEXT (const VkDebugReportCallbackCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT );
	result << indent << name << ".flags = " << Serialize_VkDebugReportFlagsEXT(obj->flags) << ";\n";
	result << indent << name << ".pfnCallback = " << "BitCast<PFN_vkDebugReportCallbackEXT>(" << HexToString(obj->pfnCallback) << ")" << ";\n";
	result << indent << name << ".pUserData = " << "null" << ";\n";
}

void  Serialize2_VkPipelineCreationFeedbackCreateInfoEXT (const VkPipelineCreationFeedbackCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT );
	if ( obj->pPipelineCreationFeedback ) {
		before << Serialize_VkPipelineCreationFeedbackEXT( obj->pPipelineCreationFeedback, nameSer, remapper, indent );
	}
	if ( obj->pPipelineStageCreationFeedbacks ) {
		CHECK( obj->pipelineStageCreationFeedbackCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pPipelineStageCreationFeedbacks, "pipelineStageCreationFeedbacks"s, "pipelineCreationFeedback"s );
		before << indent << "VkPipelineCreationFeedbackEXT  " << arr_name << "[" << IntToString(obj->pipelineStageCreationFeedbackCount) << "] = {};\n";
		for (uint i = 0; i < obj->pipelineStageCreationFeedbackCount; ++i) {
			Serialize2_VkPipelineCreationFeedbackEXT( obj->pPipelineStageCreationFeedbacks + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".pPipelineCreationFeedback = " << nameSer.GetPtr(obj->pPipelineCreationFeedback) << ";\n";
	result << indent << name << ".pipelineStageCreationFeedbackCount = " << IntToString(obj->pipelineStageCreationFeedbackCount) << ";\n";
	result << indent << name << ".pPipelineStageCreationFeedbacks = " << nameSer.Get( &obj->pPipelineStageCreationFeedbacks ) << ";\n";
}

void  Serialize2_VkPipelineRasterizationStateRasterizationOrderAMD (const VkPipelineRasterizationStateRasterizationOrderAMD *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD );
	result << indent << name << ".rasterizationOrder = " << Serialize_VkRasterizationOrderAMD(obj->rasterizationOrder) << ";\n";
}

void  Serialize2_VkDebugMarkerObjectNameInfoEXT (const VkDebugMarkerObjectNameInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT );
	result << indent << name << ".objectType = " << Serialize_VkDebugReportObjectTypeEXT(obj->objectType) << ";\n";
	result << indent << name << ".object = " << IntToString(obj->object) << ";\n";
	result << indent << name << ".pObjectName = " << '"' << obj->pObjectName << '"' << ";\n";
}

void  Serialize2_VkDebugMarkerObjectTagInfoEXT (const VkDebugMarkerObjectTagInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT );
	CHECK( (obj->tagSize > 0) and (obj->tagSize % 4 == 0) );
	before << indent << "const FIValue " << nameSer.MakeUnique( &obj->pTag, "tag"s ) << "[] = {";
	for (uint i = 0; i < obj->tagSize; ++i) {
		before << (i ? "," : "") << (i%8 == 0 ? "\n\t"s << indent : " ") << VoidToFIValueString( obj->pTag, i*sizeof(FIValue) );
	}
	before << '\n' << indent << "};\n";
	before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pTag ) << ") == " << IntToString(obj->tagSize) << " );\n\n";
	result << indent << name << ".objectType = " << Serialize_VkDebugReportObjectTypeEXT(obj->objectType) << ";\n";
	result << indent << name << ".object = " << IntToString(obj->object) << ";\n";
	result << indent << name << ".tagName = " << IntToString(obj->tagName) << ";\n";
	result << indent << name << ".tagSize = " << IntToString(obj->tagSize) << ";\n";
	result << indent << name << ".pTag = " << nameSer.Get( &obj->pTag ) << ";\n";
}

void  Serialize2_VkDebugMarkerMarkerInfoEXT (const VkDebugMarkerMarkerInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT );
	result << indent << name << ".pMarkerName = " << '"' << obj->pMarkerName << '"' << ";\n";
	result << indent << name << ".color << " << "StaticArray<float, " << IntToString(CountOf(obj->color)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->color); ++i) {
		result << (i ? ", " : "") << FloatToString(obj->color[i]);
	}
	result << " }" << ";\n";
}

void  Serialize2_VkDedicatedAllocationImageCreateInfoNV (const VkDedicatedAllocationImageCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV );
	result << indent << name << ".dedicatedAllocation = " << BoolToString(obj->dedicatedAllocation) << ";\n";
}

void  Serialize2_VkDedicatedAllocationBufferCreateInfoNV (const VkDedicatedAllocationBufferCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV );
	result << indent << name << ".dedicatedAllocation = " << BoolToString(obj->dedicatedAllocation) << ";\n";
}

void  Serialize2_VkPhysicalDeviceTransformFeedbackPropertiesEXT (const VkPhysicalDeviceTransformFeedbackPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT );
	result << indent << name << ".maxTransformFeedbackStreams = " << IntToString(obj->maxTransformFeedbackStreams) << ";\n";
	result << indent << name << ".maxTransformFeedbackBuffers = " << IntToString(obj->maxTransformFeedbackBuffers) << ";\n";
	result << indent << name << ".maxTransformFeedbackBufferSize = " << IntToString(obj->maxTransformFeedbackBufferSize) << ";\n";
	result << indent << name << ".maxTransformFeedbackStreamDataSize = " << IntToString(obj->maxTransformFeedbackStreamDataSize) << ";\n";
	result << indent << name << ".maxTransformFeedbackBufferDataSize = " << IntToString(obj->maxTransformFeedbackBufferDataSize) << ";\n";
	result << indent << name << ".maxTransformFeedbackBufferDataStride = " << IntToString(obj->maxTransformFeedbackBufferDataStride) << ";\n";
	result << indent << name << ".transformFeedbackQueries = " << BoolToString(obj->transformFeedbackQueries) << ";\n";
	result << indent << name << ".transformFeedbackStreamsLinesTriangles = " << BoolToString(obj->transformFeedbackStreamsLinesTriangles) << ";\n";
	result << indent << name << ".transformFeedbackRasterizationStreamSelect = " << BoolToString(obj->transformFeedbackRasterizationStreamSelect) << ";\n";
	result << indent << name << ".transformFeedbackDraw = " << BoolToString(obj->transformFeedbackDraw) << ";\n";
}

void  Serialize2_VkPhysicalDeviceIndexTypeUint8FeaturesEXT (const VkPhysicalDeviceIndexTypeUint8FeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT );
	result << indent << name << ".indexTypeUint8 = " << BoolToString(obj->indexTypeUint8) << ";\n";
}

void  Serialize2_VkShaderModuleValidationCacheCreateInfoEXT (const VkShaderModuleValidationCacheCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT );
	result << indent << name << ".validationCache = " << remapper( VK_OBJECT_TYPE_VALIDATION_CACHE_EXT, obj->validationCache ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceConservativeRasterizationPropertiesEXT (const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT );
	result << indent << name << ".primitiveOverestimationSize = " << FloatToString(obj->primitiveOverestimationSize) << ";\n";
	result << indent << name << ".maxExtraPrimitiveOverestimationSize = " << FloatToString(obj->maxExtraPrimitiveOverestimationSize) << ";\n";
	result << indent << name << ".extraPrimitiveOverestimationSizeGranularity = " << FloatToString(obj->extraPrimitiveOverestimationSizeGranularity) << ";\n";
	result << indent << name << ".primitiveUnderestimation = " << BoolToString(obj->primitiveUnderestimation) << ";\n";
	result << indent << name << ".conservativePointAndLineRasterization = " << BoolToString(obj->conservativePointAndLineRasterization) << ";\n";
	result << indent << name << ".degenerateTrianglesRasterized = " << BoolToString(obj->degenerateTrianglesRasterized) << ";\n";
	result << indent << name << ".degenerateLinesRasterized = " << BoolToString(obj->degenerateLinesRasterized) << ";\n";
	result << indent << name << ".fullyCoveredFragmentShaderInputVariable = " << BoolToString(obj->fullyCoveredFragmentShaderInputVariable) << ";\n";
	result << indent << name << ".conservativeRasterizationPostDepthCoverage = " << BoolToString(obj->conservativeRasterizationPostDepthCoverage) << ";\n";
}

void  Serialize2_VkTextureLODGatherFormatPropertiesAMD (const VkTextureLODGatherFormatPropertiesAMD *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD );
	result << indent << name << ".supportsTextureGatherLODBiasAMD = " << BoolToString(obj->supportsTextureGatherLODBiasAMD) << ";\n";
}

void  Serialize2_VkQueryPoolCreateInfoINTEL (const VkQueryPoolCreateInfoINTEL *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL );
	result << indent << name << ".performanceCountersSampling = " << Serialize_VkQueryPoolSamplingModeINTEL(obj->performanceCountersSampling) << ";\n";
}

ND_ String  Serialize_VkCoarseSampleOrderCustomNV (const VkCoarseSampleOrderCustomNV *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "coarseSampleOrderCustomNV"s );
	result << indent << "VkCoarseSampleOrderCustomNV  " << name << " = {};\n";
	Serialize2_VkCoarseSampleOrderCustomNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkCoarseSampleOrderCustomNV (const VkCoarseSampleOrderCustomNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	if ( obj->pSampleLocations ) {
		CHECK( obj->sampleLocationCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pSampleLocations, "sampleLocations"s, "coarseSampleLocationNV"s );
		before << indent << "VkCoarseSampleLocationNV  " << arr_name << "[" << IntToString(obj->sampleLocationCount) << "] = {};\n";
		for (uint i = 0; i < obj->sampleLocationCount; ++i) {
			Serialize2_VkCoarseSampleLocationNV( obj->pSampleLocations + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".shadingRate = " << Serialize_VkShadingRatePaletteEntryNV(obj->shadingRate) << ";\n";
	result << indent << name << ".sampleCount = " << IntToString(obj->sampleCount) << ";\n";
	result << indent << name << ".sampleLocationCount = " << IntToString(obj->sampleLocationCount) << ";\n";
	result << indent << name << ".pSampleLocations = " << nameSer.Get( &obj->pSampleLocations ) << ";\n";
}

void  Serialize2_VkDisplayNativeHdrSurfaceCapabilitiesAMD (const VkDisplayNativeHdrSurfaceCapabilitiesAMD *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD );
	result << indent << name << ".localDimmingSupport = " << BoolToString(obj->localDimmingSupport) << ";\n";
}

void  Serialize2_VkExternalMemoryImageCreateInfoNV (const VkExternalMemoryImageCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV );
	result << indent << name << ".handleTypes = " << Serialize_VkExternalMemoryHandleTypeFlagsNV(obj->handleTypes) << ";\n";
}

void  Serialize2_VkValidationFlagsEXT (const VkValidationFlagsEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT );
	if ( obj->pDisabledValidationChecks ) {
		CHECK( obj->disabledValidationCheckCount > 0 );
		before << indent << "const VkValidationCheckEXT  " << nameSer.MakeUnique( &obj->pDisabledValidationChecks, "disabledValidationChecks"s ) << "[] = {";
		for (uint i = 0; i < obj->disabledValidationCheckCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkValidationCheckEXT( obj->pDisabledValidationChecks[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pDisabledValidationChecks ) << ") == " << IntToString(obj->disabledValidationCheckCount) << " );\n\n";
	}
	result << indent << name << ".disabledValidationCheckCount = " << IntToString(obj->disabledValidationCheckCount) << ";\n";
	result << indent << name << ".pDisabledValidationChecks = " << nameSer.Get( &obj->pDisabledValidationChecks ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT (const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT );
	result << indent << name << ".textureCompressionASTC_HDR = " << BoolToString(obj->textureCompressionASTC_HDR) << ";\n";
}

void  Serialize2_VkImageViewASTCDecodeModeEXT (const VkImageViewASTCDecodeModeEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT );
	result << indent << name << ".decodeMode = " << Serialize_VkFormat(obj->decodeMode) << ";\n";
}

void  Serialize2_VkConditionalRenderingBeginInfoEXT (const VkConditionalRenderingBeginInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT );
	result << indent << name << ".buffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->buffer ) << ";\n";
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
	result << indent << name << ".flags = " << Serialize_VkConditionalRenderingFlagsEXT(obj->flags) << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkD3D12FenceSubmitInfoKHR (const VkD3D12FenceSubmitInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR );
	if ( obj->pWaitSemaphoreValues ) {
		CHECK( obj->waitSemaphoreValuesCount > 0 );
		before << indent << "const uint64_t  " << nameSer.MakeUnique( &obj->pWaitSemaphoreValues, "waitSemaphoreValues"s ) << "[] = { ";
		for (uint i = 0; i < obj->waitSemaphoreValuesCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pWaitSemaphoreValues[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pWaitSemaphoreValues ) << ") == " << IntToString(obj->waitSemaphoreValuesCount) << " );\n\n";
	}
	if ( obj->pSignalSemaphoreValues ) {
		CHECK( obj->signalSemaphoreValuesCount > 0 );
		before << indent << "const uint64_t  " << nameSer.MakeUnique( &obj->pSignalSemaphoreValues, "signalSemaphoreValues"s ) << "[] = { ";
		for (uint i = 0; i < obj->signalSemaphoreValuesCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pSignalSemaphoreValues[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pSignalSemaphoreValues ) << ") == " << IntToString(obj->signalSemaphoreValuesCount) << " );\n\n";
	}
	result << indent << name << ".waitSemaphoreValuesCount = " << IntToString(obj->waitSemaphoreValuesCount) << ";\n";
	result << indent << name << ".pWaitSemaphoreValues = " << nameSer.Get( &obj->pWaitSemaphoreValues ) << ";\n";
	result << indent << name << ".signalSemaphoreValuesCount = " << IntToString(obj->signalSemaphoreValuesCount) << ";\n";
	result << indent << name << ".pSignalSemaphoreValues = " << nameSer.Get( &obj->pSignalSemaphoreValues ) << ";\n";
}
#endif

void  Serialize2_VkPhysicalDeviceDiscardRectanglePropertiesEXT (const VkPhysicalDeviceDiscardRectanglePropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT );
	result << indent << name << ".maxDiscardRectangles = " << IntToString(obj->maxDiscardRectangles) << ";\n";
}

void  Serialize2_VkCommandBufferInheritanceConditionalRenderingInfoEXT (const VkCommandBufferInheritanceConditionalRenderingInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT );
	result << indent << name << ".conditionalRenderingEnable = " << BoolToString(obj->conditionalRenderingEnable) << ";\n";
}

ND_ String  Serialize_VkIndirectCommandsTokenNVX (const VkIndirectCommandsTokenNVX *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "indirectCommandsTokenNVX"s );
	result << indent << "VkIndirectCommandsTokenNVX  " << name << " = {};\n";
	Serialize2_VkIndirectCommandsTokenNVX( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkIndirectCommandsTokenNVX (const VkIndirectCommandsTokenNVX *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".tokenType = " << Serialize_VkIndirectCommandsTokenTypeNVX(obj->tokenType) << ";\n";
	result << indent << name << ".buffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->buffer ) << ";\n";
	result << indent << name << ".offset = " << IntToString(obj->offset) << ";\n";
}

void  Serialize2_VkIndirectCommandsLayoutCreateInfoNVX (const VkIndirectCommandsLayoutCreateInfoNVX *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX );
	if ( obj->pTokens ) {
		CHECK( obj->tokenCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pTokens, "tokens"s, "indirectCommandsLayoutTokenNVX"s );
		before << indent << "VkIndirectCommandsLayoutTokenNVX  " << arr_name << "[" << IntToString(obj->tokenCount) << "] = {};\n";
		for (uint i = 0; i < obj->tokenCount; ++i) {
			Serialize2_VkIndirectCommandsLayoutTokenNVX( obj->pTokens + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".pipelineBindPoint = " << Serialize_VkPipelineBindPoint(obj->pipelineBindPoint) << ";\n";
	result << indent << name << ".flags = " << Serialize_VkIndirectCommandsLayoutUsageFlagsNVX(obj->flags) << ";\n";
	result << indent << name << ".tokenCount = " << IntToString(obj->tokenCount) << ";\n";
	result << indent << name << ".pTokens = " << nameSer.Get( &obj->pTokens ) << ";\n";
}

void  Serialize2_VkDisplayEventInfoEXT (const VkDisplayEventInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT );
	result << indent << name << ".displayEvent = " << Serialize_VkDisplayEventTypeEXT(obj->displayEvent) << ";\n";
}

void  Serialize2_VkCmdProcessCommandsInfoNVX (const VkCmdProcessCommandsInfoNVX *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX );
	if ( obj->pIndirectCommandsTokens ) {
		CHECK( obj->indirectCommandsTokenCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pIndirectCommandsTokens, "indirectCommandsTokens"s, "indirectCommandsTokenNVX"s );
		before << indent << "VkIndirectCommandsTokenNVX  " << arr_name << "[" << IntToString(obj->indirectCommandsTokenCount) << "] = {};\n";
		for (uint i = 0; i < obj->indirectCommandsTokenCount; ++i) {
			Serialize2_VkIndirectCommandsTokenNVX( obj->pIndirectCommandsTokens + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".objectTable = " << remapper( VK_OBJECT_TYPE_OBJECT_TABLE_NVX, obj->objectTable ) << ";\n";
	result << indent << name << ".indirectCommandsLayout = " << remapper( VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX, obj->indirectCommandsLayout ) << ";\n";
	result << indent << name << ".indirectCommandsTokenCount = " << IntToString(obj->indirectCommandsTokenCount) << ";\n";
	result << indent << name << ".pIndirectCommandsTokens = " << nameSer.Get( &obj->pIndirectCommandsTokens ) << ";\n";
	result << indent << name << ".maxSequencesCount = " << IntToString(obj->maxSequencesCount) << ";\n";
	result << indent << name << ".targetCommandBuffer = " << remapper( VK_OBJECT_TYPE_COMMAND_BUFFER, obj->targetCommandBuffer ) << ";\n";
	result << indent << name << ".sequencesCountBuffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->sequencesCountBuffer ) << ";\n";
	result << indent << name << ".sequencesCountOffset = " << IntToString(obj->sequencesCountOffset) << ";\n";
	result << indent << name << ".sequencesIndexBuffer = " << remapper( VK_OBJECT_TYPE_BUFFER, obj->sequencesIndexBuffer ) << ";\n";
	result << indent << name << ".sequencesIndexOffset = " << IntToString(obj->sequencesIndexOffset) << ";\n";
}

void  Serialize2_VkCmdReserveSpaceForCommandsInfoNVX (const VkCmdReserveSpaceForCommandsInfoNVX *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX );
	result << indent << name << ".objectTable = " << remapper( VK_OBJECT_TYPE_OBJECT_TABLE_NVX, obj->objectTable ) << ";\n";
	result << indent << name << ".indirectCommandsLayout = " << remapper( VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX, obj->indirectCommandsLayout ) << ";\n";
	result << indent << name << ".maxSequencesCount = " << IntToString(obj->maxSequencesCount) << ";\n";
}

void  Serialize2_VkObjectTableCreateInfoNVX (const VkObjectTableCreateInfoNVX *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX );
	if ( obj->pObjectEntryTypes ) {
		CHECK( obj->objectCount > 0 );
		before << indent << "const VkObjectEntryTypeNVX  " << nameSer.MakeUnique( &obj->pObjectEntryTypes, "objectEntryTypes"s ) << "[] = {";
		for (uint i = 0; i < obj->objectCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkObjectEntryTypeNVX( obj->pObjectEntryTypes[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pObjectEntryTypes ) << ") == " << IntToString(obj->objectCount) << " );\n\n";
	}
	if ( obj->pObjectEntryCounts ) {
		CHECK( obj->objectCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pObjectEntryCounts, "objectEntryCounts"s ) << "[] = { ";
		for (uint i = 0; i < obj->objectCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pObjectEntryCounts[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pObjectEntryCounts ) << ") == " << IntToString(obj->objectCount) << " );\n\n";
	}
	if ( obj->pObjectEntryUsageFlags ) {
		CHECK( obj->objectCount > 0 );
		before << indent << "const VkObjectEntryUsageFlagsNVX  " << nameSer.MakeUnique( &obj->pObjectEntryUsageFlags, "objectEntryUsageFlags"s ) << "[] = {";
		for (uint i = 0; i < obj->objectCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkObjectEntryUsageFlagsNVX( obj->pObjectEntryUsageFlags[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pObjectEntryUsageFlags ) << ") == " << IntToString(obj->objectCount) << " );\n\n";
	}
	result << indent << name << ".objectCount = " << IntToString(obj->objectCount) << ";\n";
	result << indent << name << ".pObjectEntryTypes = " << nameSer.Get( &obj->pObjectEntryTypes ) << ";\n";
	result << indent << name << ".pObjectEntryCounts = " << nameSer.Get( &obj->pObjectEntryCounts ) << ";\n";
	result << indent << name << ".pObjectEntryUsageFlags = " << nameSer.Get( &obj->pObjectEntryUsageFlags ) << ";\n";
	result << indent << name << ".maxUniformBuffersPerDescriptor = " << IntToString(obj->maxUniformBuffersPerDescriptor) << ";\n";
	result << indent << name << ".maxStorageBuffersPerDescriptor = " << IntToString(obj->maxStorageBuffersPerDescriptor) << ";\n";
	result << indent << name << ".maxStorageImagesPerDescriptor = " << IntToString(obj->maxStorageImagesPerDescriptor) << ";\n";
	result << indent << name << ".maxSampledImagesPerDescriptor = " << IntToString(obj->maxSampledImagesPerDescriptor) << ";\n";
	result << indent << name << ".maxPipelineLayouts = " << IntToString(obj->maxPipelineLayouts) << ";\n";
}

void  Serialize2_VkHeadlessSurfaceCreateInfoEXT (const VkHeadlessSurfaceCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT );
	result << indent << name << ".flags = " << Serialize_VkHeadlessSurfaceCreateFlagsEXT(obj->flags) << ";\n";
}

ND_ String  Serialize_VkViewportWScalingNV (const VkViewportWScalingNV *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "viewportWScalingNV"s );
	result << indent << "VkViewportWScalingNV  " << name << " = {};\n";
	Serialize2_VkViewportWScalingNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkViewportWScalingNV (const VkViewportWScalingNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".xcoeff = " << FloatToString(obj->xcoeff) << ";\n";
	result << indent << name << ".ycoeff = " << FloatToString(obj->ycoeff) << ";\n";
}

void  Serialize2_VkPipelineViewportExclusiveScissorStateCreateInfoNV (const VkPipelineViewportExclusiveScissorStateCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV );
	if ( obj->pExclusiveScissors ) {
		CHECK( obj->exclusiveScissorCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pExclusiveScissors, "exclusiveScissors"s, "rect2D"s );
		before << indent << "VkRect2D  " << arr_name << "[" << IntToString(obj->exclusiveScissorCount) << "] = {};\n";
		for (uint i = 0; i < obj->exclusiveScissorCount; ++i) {
			Serialize2_VkRect2D( obj->pExclusiveScissors + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".exclusiveScissorCount = " << IntToString(obj->exclusiveScissorCount) << ";\n";
	result << indent << name << ".pExclusiveScissors = " << nameSer.Get( &obj->pExclusiveScissors ) << ";\n";
}

void  Serialize2_VkPipelineViewportWScalingStateCreateInfoNV (const VkPipelineViewportWScalingStateCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV );
	if ( obj->pViewportWScalings ) {
		CHECK( obj->viewportCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pViewportWScalings, "viewportWScalings"s, "viewportWScalingNV"s );
		before << indent << "VkViewportWScalingNV  " << arr_name << "[" << IntToString(obj->viewportCount) << "] = {};\n";
		for (uint i = 0; i < obj->viewportCount; ++i) {
			Serialize2_VkViewportWScalingNV( obj->pViewportWScalings + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".viewportWScalingEnable = " << BoolToString(obj->viewportWScalingEnable) << ";\n";
	result << indent << name << ".viewportCount = " << IntToString(obj->viewportCount) << ";\n";
	result << indent << name << ".pViewportWScalings = " << nameSer.Get( &obj->pViewportWScalings ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT (const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT );
	result << indent << name << ".texelBufferAlignment = " << BoolToString(obj->texelBufferAlignment) << ";\n";
}

void  Serialize2_VkPhysicalDeviceExclusiveScissorFeaturesNV (const VkPhysicalDeviceExclusiveScissorFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV );
	result << indent << name << ".exclusiveScissor = " << BoolToString(obj->exclusiveScissor) << ";\n";
}

void  Serialize2_VkDisplayPowerInfoEXT (const VkDisplayPowerInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT );
	result << indent << name << ".powerState = " << Serialize_VkDisplayPowerStateEXT(obj->powerState) << ";\n";
}

void  Serialize2_VkSwapchainCounterCreateInfoEXT (const VkSwapchainCounterCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT );
	result << indent << name << ".surfaceCounters = " << Serialize_VkSurfaceCounterFlagsEXT(obj->surfaceCounters) << ";\n";
}

ND_ String  Serialize_VkDrmFormatModifierPropertiesEXT (const VkDrmFormatModifierPropertiesEXT *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "drmFormatModifierProperties"s, "properties"s );
	result << indent << "VkDrmFormatModifierPropertiesEXT  " << name << " = {};\n";
	Serialize2_VkDrmFormatModifierPropertiesEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkDrmFormatModifierPropertiesEXT (const VkDrmFormatModifierPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".drmFormatModifier = " << IntToString(obj->drmFormatModifier) << ";\n";
	result << indent << name << ".drmFormatModifierPlaneCount = " << IntToString(obj->drmFormatModifierPlaneCount) << ";\n";
	result << indent << name << ".drmFormatModifierTilingFeatures = " << Serialize_VkFormatFeatureFlags(obj->drmFormatModifierTilingFeatures) << ";\n";
}

ND_ String  Serialize_VkPresentTimeGOOGLE (const VkPresentTimeGOOGLE *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "presentTimeGOOGLE"s );
	result << indent << "VkPresentTimeGOOGLE  " << name << " = {};\n";
	Serialize2_VkPresentTimeGOOGLE( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkPresentTimeGOOGLE (const VkPresentTimeGOOGLE *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".presentID = " << IntToString(obj->presentID) << ";\n";
	result << indent << name << ".desiredPresentTime = " << IntToString(obj->desiredPresentTime) << ";\n";
}

void  Serialize2_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX (const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX );
	result << indent << name << ".perViewPositionAllComponents = " << BoolToString(obj->perViewPositionAllComponents) << ";\n";
}

void  Serialize2_VkPipelineViewportSwizzleStateCreateInfoNV (const VkPipelineViewportSwizzleStateCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV );
	if ( obj->pViewportSwizzles ) {
		CHECK( obj->viewportCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pViewportSwizzles, "viewportSwizzles"s, "viewportSwizzleNV"s );
		before << indent << "VkViewportSwizzleNV  " << arr_name << "[" << IntToString(obj->viewportCount) << "] = {};\n";
		for (uint i = 0; i < obj->viewportCount; ++i) {
			Serialize2_VkViewportSwizzleNV( obj->pViewportSwizzles + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineViewportSwizzleStateCreateFlagsNV(obj->flags) << ";\n";
	result << indent << name << ".viewportCount = " << IntToString(obj->viewportCount) << ";\n";
	result << indent << name << ".pViewportSwizzles = " << nameSer.Get( &obj->pViewportSwizzles ) << ";\n";
}

void  Serialize2_VkPipelineDiscardRectangleStateCreateInfoEXT (const VkPipelineDiscardRectangleStateCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT );
	if ( obj->pDiscardRectangles ) {
		CHECK( obj->discardRectangleCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pDiscardRectangles, "discardRectangles"s, "rect2D"s );
		before << indent << "VkRect2D  " << arr_name << "[" << IntToString(obj->discardRectangleCount) << "] = {};\n";
		for (uint i = 0; i < obj->discardRectangleCount; ++i) {
			Serialize2_VkRect2D( obj->pDiscardRectangles + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineDiscardRectangleStateCreateFlagsEXT(obj->flags) << ";\n";
	result << indent << name << ".discardRectangleMode = " << Serialize_VkDiscardRectangleModeEXT(obj->discardRectangleMode) << ";\n";
	result << indent << name << ".discardRectangleCount = " << IntToString(obj->discardRectangleCount) << ";\n";
	result << indent << name << ".pDiscardRectangles = " << nameSer.Get( &obj->pDiscardRectangles ) << ";\n";
}

void  Serialize2_VkPipelineRasterizationConservativeStateCreateInfoEXT (const VkPipelineRasterizationConservativeStateCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT );
	result << indent << name << ".flags = " << Serialize_VkPipelineRasterizationConservativeStateCreateFlagsEXT(obj->flags) << ";\n";
	result << indent << name << ".conservativeRasterizationMode = " << Serialize_VkConservativeRasterizationModeEXT(obj->conservativeRasterizationMode) << ";\n";
	result << indent << name << ".extraPrimitiveOverestimationSize = " << FloatToString(obj->extraPrimitiveOverestimationSize) << ";\n";
}

void  Serialize2_VkPhysicalDeviceDepthClipEnableFeaturesEXT (const VkPhysicalDeviceDepthClipEnableFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT );
	result << indent << name << ".depthClipEnable = " << BoolToString(obj->depthClipEnable) << ";\n";
}

void  Serialize2_VkPipelineRasterizationDepthClipStateCreateInfoEXT (const VkPipelineRasterizationDepthClipStateCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT );
	result << indent << name << ".flags = " << Serialize_VkPipelineRasterizationDepthClipStateCreateFlagsEXT(obj->flags) << ";\n";
	result << indent << name << ".depthClipEnable = " << BoolToString(obj->depthClipEnable) << ";\n";
}

void  Serialize2_VkDebugUtilsLabelEXT (const VkDebugUtilsLabelEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT );
	result << indent << name << ".pLabelName = " << '"' << obj->pLabelName << '"' << ";\n";
	result << indent << name << ".color << " << "StaticArray<float, " << IntToString(CountOf(obj->color)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->color); ++i) {
		result << (i ? ", " : "") << FloatToString(obj->color[i]);
	}
	result << " }" << ";\n";
}

void  Serialize2_VkPhysicalDeviceExternalMemoryHostPropertiesEXT (const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT );
	result << indent << name << ".minImportedHostPointerAlignment = " << IntToString(obj->minImportedHostPointerAlignment) << ";\n";
}

void  Serialize2_VkDebugUtilsMessengerCallbackDataEXT (const VkDebugUtilsMessengerCallbackDataEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT );
	if ( obj->pQueueLabels ) {
		CHECK( obj->queueLabelCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pQueueLabels, "queueLabels"s, "debugUtilsLabel"s );
		before << indent << "VkDebugUtilsLabelEXT  " << arr_name << "[" << IntToString(obj->queueLabelCount) << "] = {};\n";
		for (uint i = 0; i < obj->queueLabelCount; ++i) {
			Serialize2_VkDebugUtilsLabelEXT( obj->pQueueLabels + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pCmdBufLabels ) {
		CHECK( obj->cmdBufLabelCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pCmdBufLabels, "cmdBufLabels"s, "debugUtilsLabel"s );
		before << indent << "VkDebugUtilsLabelEXT  " << arr_name << "[" << IntToString(obj->cmdBufLabelCount) << "] = {};\n";
		for (uint i = 0; i < obj->cmdBufLabelCount; ++i) {
			Serialize2_VkDebugUtilsLabelEXT( obj->pCmdBufLabels + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pObjects ) {
		CHECK( obj->objectCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pObjects, "objects"s, "debugUtilsObjectNameInfo"s, "info"s );
		before << indent << "VkDebugUtilsObjectNameInfoEXT  " << arr_name << "[" << IntToString(obj->objectCount) << "] = {};\n";
		for (uint i = 0; i < obj->objectCount; ++i) {
			Serialize2_VkDebugUtilsObjectNameInfoEXT( obj->pObjects + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkDebugUtilsMessengerCallbackDataFlagsEXT(obj->flags) << ";\n";
	result << indent << name << ".pMessageIdName = " << '"' << obj->pMessageIdName << '"' << ";\n";
	result << indent << name << ".messageIdNumber = " << IntToString(obj->messageIdNumber) << ";\n";
	result << indent << name << ".pMessage = " << '"' << obj->pMessage << '"' << ";\n";
	result << indent << name << ".queueLabelCount = " << IntToString(obj->queueLabelCount) << ";\n";
	result << indent << name << ".pQueueLabels = " << nameSer.Get( &obj->pQueueLabels ) << ";\n";
	result << indent << name << ".cmdBufLabelCount = " << IntToString(obj->cmdBufLabelCount) << ";\n";
	result << indent << name << ".pCmdBufLabels = " << nameSer.Get( &obj->pCmdBufLabels ) << ";\n";
	result << indent << name << ".objectCount = " << IntToString(obj->objectCount) << ";\n";
	result << indent << name << ".pObjects = " << nameSer.Get( &obj->pObjects ) << ";\n";
}

void  Serialize2_VkDebugUtilsMessengerCreateInfoEXT (const VkDebugUtilsMessengerCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT );
	result << indent << name << ".flags = " << Serialize_VkDebugUtilsMessengerCreateFlagsEXT(obj->flags) << ";\n";
	result << indent << name << ".messageSeverity = " << Serialize_VkDebugUtilsMessageSeverityFlagsEXT(obj->messageSeverity) << ";\n";
	result << indent << name << ".messageType = " << Serialize_VkDebugUtilsMessageTypeFlagsEXT(obj->messageType) << ";\n";
	result << indent << name << ".pfnUserCallback = " << "BitCast<PFN_vkDebugUtilsMessengerCallbackEXT>(" << HexToString(obj->pfnUserCallback) << ")" << ";\n";
	result << indent << name << ".pUserData = " << "null" << ";\n";
}

void  Serialize2_VkPhysicalDeviceInlineUniformBlockFeaturesEXT (const VkPhysicalDeviceInlineUniformBlockFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT );
	result << indent << name << ".inlineUniformBlock = " << BoolToString(obj->inlineUniformBlock) << ";\n";
	result << indent << name << ".descriptorBindingInlineUniformBlockUpdateAfterBind = " << BoolToString(obj->descriptorBindingInlineUniformBlockUpdateAfterBind) << ";\n";
}

void  Serialize2_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT (const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT );
	result << indent << name << ".shaderDemoteToHelperInvocation = " << BoolToString(obj->shaderDemoteToHelperInvocation) << ";\n";
}

void  Serialize2_VkPhysicalDeviceInlineUniformBlockPropertiesEXT (const VkPhysicalDeviceInlineUniformBlockPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT );
	result << indent << name << ".maxInlineUniformBlockSize = " << IntToString(obj->maxInlineUniformBlockSize) << ";\n";
	result << indent << name << ".maxPerStageDescriptorInlineUniformBlocks = " << IntToString(obj->maxPerStageDescriptorInlineUniformBlocks) << ";\n";
	result << indent << name << ".maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = " << IntToString(obj->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks) << ";\n";
	result << indent << name << ".maxDescriptorSetInlineUniformBlocks = " << IntToString(obj->maxDescriptorSetInlineUniformBlocks) << ";\n";
	result << indent << name << ".maxDescriptorSetUpdateAfterBindInlineUniformBlocks = " << IntToString(obj->maxDescriptorSetUpdateAfterBindInlineUniformBlocks) << ";\n";
}

void  Serialize2_VkWriteDescriptorSetInlineUniformBlockEXT (const VkWriteDescriptorSetInlineUniformBlockEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT );
	CHECK( (obj->dataSize > 0) and (obj->dataSize % 4 == 0) );
	before << indent << "const FIValue " << nameSer.MakeUnique( &obj->pData, "data"s ) << "[] = {";
	for (uint i = 0; i < obj->dataSize; ++i) {
		before << (i ? "," : "") << (i%8 == 0 ? "\n\t"s << indent : " ") << VoidToFIValueString( obj->pData, i*sizeof(FIValue) );
	}
	before << '\n' << indent << "};\n";
	before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pData ) << ") == " << IntToString(obj->dataSize) << " );\n\n";
	result << indent << name << ".dataSize = " << IntToString(obj->dataSize) << ";\n";
	result << indent << name << ".pData = " << nameSer.Get( &obj->pData ) << ";\n";
}

void  Serialize2_VkPipelineViewportShadingRateImageStateCreateInfoNV (const VkPipelineViewportShadingRateImageStateCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV );
	if ( obj->pShadingRatePalettes ) {
		before << Serialize_VkShadingRatePaletteNV( obj->pShadingRatePalettes, nameSer, remapper, indent );
	}
	result << indent << name << ".shadingRateImageEnable = " << BoolToString(obj->shadingRateImageEnable) << ";\n";
	result << indent << name << ".viewportCount = " << IntToString(obj->viewportCount) << ";\n";
	result << indent << name << ".pShadingRatePalettes = " << nameSer.GetPtr(obj->pShadingRatePalettes) << ";\n";
}

void  Serialize2_VkDescriptorPoolInlineUniformBlockCreateInfoEXT (const VkDescriptorPoolInlineUniformBlockCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT );
	result << indent << name << ".maxInlineUniformBlockBindings = " << IntToString(obj->maxInlineUniformBlockBindings) << ";\n";
}

ND_ String  Serialize_VkSampleLocationEXT (const VkSampleLocationEXT *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "sampleLocation"s );
	result << indent << "VkSampleLocationEXT  " << name << " = {};\n";
	Serialize2_VkSampleLocationEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkSampleLocationEXT (const VkSampleLocationEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".x = " << FloatToString(obj->x) << ";\n";
	result << indent << name << ".y = " << FloatToString(obj->y) << ";\n";
}

void  Serialize2_VkPhysicalDeviceShadingRateImageFeaturesNV (const VkPhysicalDeviceShadingRateImageFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV );
	result << indent << name << ".shadingRateImage = " << BoolToString(obj->shadingRateImage) << ";\n";
	result << indent << name << ".shadingRateCoarseSampleOrder = " << BoolToString(obj->shadingRateCoarseSampleOrder) << ";\n";
}

void  Serialize2_VkSampleLocationsInfoEXT (const VkSampleLocationsInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT );
	if ( obj->pSampleLocations ) {
		CHECK( obj->sampleLocationsCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pSampleLocations, "sampleLocations"s, "sampleLocation"s );
		before << indent << "VkSampleLocationEXT  " << arr_name << "[" << IntToString(obj->sampleLocationsCount) << "] = {};\n";
		for (uint i = 0; i < obj->sampleLocationsCount; ++i) {
			Serialize2_VkSampleLocationEXT( obj->pSampleLocations + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".sampleLocationsPerPixel = " << Serialize_VkSampleCountFlagBits(obj->sampleLocationsPerPixel) << ";\n";
	Serialize2_VkExtent2D( &obj->sampleLocationGridSize, String(name) << ".sampleLocationGridSize", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".sampleLocationsCount = " << IntToString(obj->sampleLocationsCount) << ";\n";
	result << indent << name << ".pSampleLocations = " << nameSer.Get( &obj->pSampleLocations ) << ";\n";
}

ND_ String  Serialize_VkAttachmentSampleLocationsEXT (const VkAttachmentSampleLocationsEXT *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "attachmentSampleLocations"s );
	result << indent << "VkAttachmentSampleLocationsEXT  " << name << " = {};\n";
	Serialize2_VkAttachmentSampleLocationsEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkAttachmentSampleLocationsEXT (const VkAttachmentSampleLocationsEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const*>(&obj->sampleLocationsInfo), nameSer, remapper, indent );
	result << indent << name << ".attachmentIndex = " << IntToString(obj->attachmentIndex) << ";\n";
	result << indent << name << ".sampleLocationsInfo = " << nameSer.Get( &obj->sampleLocationsInfo ) << ";\n";
}

void  Serialize2_VkPipelineSampleLocationsStateCreateInfoEXT (const VkPipelineSampleLocationsStateCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT );
	before << SerializeStruct( BitCast<VkBaseInStructure const*>(&obj->sampleLocationsInfo), nameSer, remapper, indent );
	result << indent << name << ".sampleLocationsEnable = " << BoolToString(obj->sampleLocationsEnable) << ";\n";
	result << indent << name << ".sampleLocationsInfo = " << nameSer.Get( &obj->sampleLocationsInfo ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceSampleLocationsPropertiesEXT (const VkPhysicalDeviceSampleLocationsPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT );
	result << indent << name << ".sampleLocationSampleCounts = " << Serialize_VkSampleCountFlags(obj->sampleLocationSampleCounts) << ";\n";
	Serialize2_VkExtent2D( &obj->maxSampleLocationGridSize, String(name) << ".maxSampleLocationGridSize", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".sampleLocationCoordinateRange << " << "StaticArray<float, " << IntToString(CountOf(obj->sampleLocationCoordinateRange)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->sampleLocationCoordinateRange); ++i) {
		result << (i ? ", " : "") << FloatToString(obj->sampleLocationCoordinateRange[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".sampleLocationSubPixelBits = " << IntToString(obj->sampleLocationSubPixelBits) << ";\n";
	result << indent << name << ".variableSampleLocations = " << BoolToString(obj->variableSampleLocations) << ";\n";
}

void  Serialize2_VkMultisamplePropertiesEXT (const VkMultisamplePropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT );
	Serialize2_VkExtent2D( &obj->maxSampleLocationGridSize, String(name) << ".maxSampleLocationGridSize", nameSer, remapper, indent, INOUT result, INOUT before );
}

void  Serialize2_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT (const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT );
	result << indent << name << ".advancedBlendCoherentOperations = " << BoolToString(obj->advancedBlendCoherentOperations) << ";\n";
}

void  Serialize2_VkPipelineCoverageModulationStateCreateInfoNV (const VkPipelineCoverageModulationStateCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV );
	if ( obj->pCoverageModulationTable ) {
		CHECK( obj->coverageModulationTableCount > 0 );
		before << indent << "const float  " << nameSer.MakeUnique( &obj->pCoverageModulationTable, "coverageModulationTable"s ) << "[] = { ";
		for (uint i = 0; i < obj->coverageModulationTableCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << FloatToString(obj->pCoverageModulationTable[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pCoverageModulationTable ) << ") == " << IntToString(obj->coverageModulationTableCount) << " );\n\n";
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineCoverageModulationStateCreateFlagsNV(obj->flags) << ";\n";
	result << indent << name << ".coverageModulationMode = " << Serialize_VkCoverageModulationModeNV(obj->coverageModulationMode) << ";\n";
	result << indent << name << ".coverageModulationTableEnable = " << BoolToString(obj->coverageModulationTableEnable) << ";\n";
	result << indent << name << ".coverageModulationTableCount = " << IntToString(obj->coverageModulationTableCount) << ";\n";
	result << indent << name << ".pCoverageModulationTable = " << nameSer.Get( &obj->pCoverageModulationTable ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV (const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV );
	result << indent << name << ".shaderSMCount = " << IntToString(obj->shaderSMCount) << ";\n";
	result << indent << name << ".shaderWarpsPerSM = " << IntToString(obj->shaderWarpsPerSM) << ";\n";
}

void  Serialize2_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV (const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV );
	result << indent << name << ".shaderSMBuiltins = " << BoolToString(obj->shaderSMBuiltins) << ";\n";
}

void  Serialize2_VkDrmFormatModifierPropertiesListEXT (const VkDrmFormatModifierPropertiesListEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT );
	if ( obj->pDrmFormatModifierProperties ) {
		CHECK( obj->drmFormatModifierCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pDrmFormatModifierProperties, "drmFormatModifierProperties"s, "drmFormatModifierProperties"s, "properties"s );
		before << indent << "VkDrmFormatModifierPropertiesEXT  " << arr_name << "[" << IntToString(obj->drmFormatModifierCount) << "] = {};\n";
		for (uint i = 0; i < obj->drmFormatModifierCount; ++i) {
			Serialize2_VkDrmFormatModifierPropertiesEXT( obj->pDrmFormatModifierProperties + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".drmFormatModifierCount = " << IntToString(obj->drmFormatModifierCount) << ";\n";
	result << indent << name << ".pDrmFormatModifierProperties = " << nameSer.Get( &obj->pDrmFormatModifierProperties ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceImageDrmFormatModifierInfoEXT (const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT );
	if ( obj->pQueueFamilyIndices ) {
		CHECK( obj->queueFamilyIndexCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pQueueFamilyIndices, "queueFamilyIndices"s ) << "[] = { ";
		for (uint i = 0; i < obj->queueFamilyIndexCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pQueueFamilyIndices[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pQueueFamilyIndices ) << ") == " << IntToString(obj->queueFamilyIndexCount) << " );\n\n";
	}
	result << indent << name << ".drmFormatModifier = " << IntToString(obj->drmFormatModifier) << ";\n";
	result << indent << name << ".sharingMode = " << Serialize_VkSharingMode(obj->sharingMode) << ";\n";
	result << indent << name << ".queueFamilyIndexCount = " << IntToString(obj->queueFamilyIndexCount) << ";\n";
	result << indent << name << ".pQueueFamilyIndices = " << nameSer.Get( &obj->pQueueFamilyIndices ) << ";\n";
}

void  Serialize2_VkImageDrmFormatModifierListCreateInfoEXT (const VkImageDrmFormatModifierListCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT );
	if ( obj->pDrmFormatModifiers ) {
		CHECK( obj->drmFormatModifierCount > 0 );
		before << indent << "const uint64_t  " << nameSer.MakeUnique( &obj->pDrmFormatModifiers, "drmFormatModifiers"s ) << "[] = { ";
		for (uint i = 0; i < obj->drmFormatModifierCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pDrmFormatModifiers[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pDrmFormatModifiers ) << ") == " << IntToString(obj->drmFormatModifierCount) << " );\n\n";
	}
	result << indent << name << ".drmFormatModifierCount = " << IntToString(obj->drmFormatModifierCount) << ";\n";
	result << indent << name << ".pDrmFormatModifiers = " << nameSer.Get( &obj->pDrmFormatModifiers ) << ";\n";
}

void  Serialize2_VkImageDrmFormatModifierPropertiesEXT (const VkImageDrmFormatModifierPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT );
	result << indent << name << ".drmFormatModifier = " << IntToString(obj->drmFormatModifier) << ";\n";
}

void  Serialize2_VkPhysicalDeviceDescriptorIndexingFeaturesEXT (const VkPhysicalDeviceDescriptorIndexingFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT );
	result << indent << name << ".shaderInputAttachmentArrayDynamicIndexing = " << BoolToString(obj->shaderInputAttachmentArrayDynamicIndexing) << ";\n";
	result << indent << name << ".shaderUniformTexelBufferArrayDynamicIndexing = " << BoolToString(obj->shaderUniformTexelBufferArrayDynamicIndexing) << ";\n";
	result << indent << name << ".shaderStorageTexelBufferArrayDynamicIndexing = " << BoolToString(obj->shaderStorageTexelBufferArrayDynamicIndexing) << ";\n";
	result << indent << name << ".shaderUniformBufferArrayNonUniformIndexing = " << BoolToString(obj->shaderUniformBufferArrayNonUniformIndexing) << ";\n";
	result << indent << name << ".shaderSampledImageArrayNonUniformIndexing = " << BoolToString(obj->shaderSampledImageArrayNonUniformIndexing) << ";\n";
	result << indent << name << ".shaderStorageBufferArrayNonUniformIndexing = " << BoolToString(obj->shaderStorageBufferArrayNonUniformIndexing) << ";\n";
	result << indent << name << ".shaderStorageImageArrayNonUniformIndexing = " << BoolToString(obj->shaderStorageImageArrayNonUniformIndexing) << ";\n";
	result << indent << name << ".shaderInputAttachmentArrayNonUniformIndexing = " << BoolToString(obj->shaderInputAttachmentArrayNonUniformIndexing) << ";\n";
	result << indent << name << ".shaderUniformTexelBufferArrayNonUniformIndexing = " << BoolToString(obj->shaderUniformTexelBufferArrayNonUniformIndexing) << ";\n";
	result << indent << name << ".shaderStorageTexelBufferArrayNonUniformIndexing = " << BoolToString(obj->shaderStorageTexelBufferArrayNonUniformIndexing) << ";\n";
	result << indent << name << ".descriptorBindingUniformBufferUpdateAfterBind = " << BoolToString(obj->descriptorBindingUniformBufferUpdateAfterBind) << ";\n";
	result << indent << name << ".descriptorBindingSampledImageUpdateAfterBind = " << BoolToString(obj->descriptorBindingSampledImageUpdateAfterBind) << ";\n";
	result << indent << name << ".descriptorBindingStorageImageUpdateAfterBind = " << BoolToString(obj->descriptorBindingStorageImageUpdateAfterBind) << ";\n";
	result << indent << name << ".descriptorBindingStorageBufferUpdateAfterBind = " << BoolToString(obj->descriptorBindingStorageBufferUpdateAfterBind) << ";\n";
	result << indent << name << ".descriptorBindingUniformTexelBufferUpdateAfterBind = " << BoolToString(obj->descriptorBindingUniformTexelBufferUpdateAfterBind) << ";\n";
	result << indent << name << ".descriptorBindingStorageTexelBufferUpdateAfterBind = " << BoolToString(obj->descriptorBindingStorageTexelBufferUpdateAfterBind) << ";\n";
	result << indent << name << ".descriptorBindingUpdateUnusedWhilePending = " << BoolToString(obj->descriptorBindingUpdateUnusedWhilePending) << ";\n";
	result << indent << name << ".descriptorBindingPartiallyBound = " << BoolToString(obj->descriptorBindingPartiallyBound) << ";\n";
	result << indent << name << ".descriptorBindingVariableDescriptorCount = " << BoolToString(obj->descriptorBindingVariableDescriptorCount) << ";\n";
	result << indent << name << ".runtimeDescriptorArray = " << BoolToString(obj->runtimeDescriptorArray) << ";\n";
}

#ifdef VULKAN_ANDROID_H_
void  Serialize2_VkAndroidHardwareBufferFormatPropertiesANDROID (const VkAndroidHardwareBufferFormatPropertiesANDROID *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID );
	result << indent << name << ".format = " << Serialize_VkFormat(obj->format) << ";\n";
	result << indent << name << ".externalFormat = " << IntToString(obj->externalFormat) << ";\n";
	result << indent << name << ".formatFeatures = " << Serialize_VkFormatFeatureFlags(obj->formatFeatures) << ";\n";
	Serialize2_VkComponentMapping( &obj->samplerYcbcrConversionComponents, String(name) << ".samplerYcbcrConversionComponents", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".suggestedYcbcrModel = " << Serialize_VkSamplerYcbcrModelConversion(obj->suggestedYcbcrModel) << ";\n";
	result << indent << name << ".suggestedYcbcrRange = " << Serialize_VkSamplerYcbcrRange(obj->suggestedYcbcrRange) << ";\n";
	result << indent << name << ".suggestedXChromaOffset = " << Serialize_VkChromaLocation(obj->suggestedXChromaOffset) << ";\n";
	result << indent << name << ".suggestedYChromaOffset = " << Serialize_VkChromaLocation(obj->suggestedYChromaOffset) << ";\n";
}
#endif

void  Serialize2_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL (const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL );
	result << indent << name << ".shaderIntegerFunctions2 = " << BoolToString(obj->shaderIntegerFunctions2) << ";\n";
}

void  Serialize2_VkPhysicalDeviceDescriptorIndexingPropertiesEXT (const VkPhysicalDeviceDescriptorIndexingPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT );
	result << indent << name << ".maxUpdateAfterBindDescriptorsInAllPools = " << IntToString(obj->maxUpdateAfterBindDescriptorsInAllPools) << ";\n";
	result << indent << name << ".shaderUniformBufferArrayNonUniformIndexingNative = " << BoolToString(obj->shaderUniformBufferArrayNonUniformIndexingNative) << ";\n";
	result << indent << name << ".shaderSampledImageArrayNonUniformIndexingNative = " << BoolToString(obj->shaderSampledImageArrayNonUniformIndexingNative) << ";\n";
	result << indent << name << ".shaderStorageBufferArrayNonUniformIndexingNative = " << BoolToString(obj->shaderStorageBufferArrayNonUniformIndexingNative) << ";\n";
	result << indent << name << ".shaderStorageImageArrayNonUniformIndexingNative = " << BoolToString(obj->shaderStorageImageArrayNonUniformIndexingNative) << ";\n";
	result << indent << name << ".shaderInputAttachmentArrayNonUniformIndexingNative = " << BoolToString(obj->shaderInputAttachmentArrayNonUniformIndexingNative) << ";\n";
	result << indent << name << ".robustBufferAccessUpdateAfterBind = " << BoolToString(obj->robustBufferAccessUpdateAfterBind) << ";\n";
	result << indent << name << ".quadDivergentImplicitLod = " << BoolToString(obj->quadDivergentImplicitLod) << ";\n";
	result << indent << name << ".maxPerStageDescriptorUpdateAfterBindSamplers = " << IntToString(obj->maxPerStageDescriptorUpdateAfterBindSamplers) << ";\n";
	result << indent << name << ".maxPerStageDescriptorUpdateAfterBindUniformBuffers = " << IntToString(obj->maxPerStageDescriptorUpdateAfterBindUniformBuffers) << ";\n";
	result << indent << name << ".maxPerStageDescriptorUpdateAfterBindStorageBuffers = " << IntToString(obj->maxPerStageDescriptorUpdateAfterBindStorageBuffers) << ";\n";
	result << indent << name << ".maxPerStageDescriptorUpdateAfterBindSampledImages = " << IntToString(obj->maxPerStageDescriptorUpdateAfterBindSampledImages) << ";\n";
	result << indent << name << ".maxPerStageDescriptorUpdateAfterBindStorageImages = " << IntToString(obj->maxPerStageDescriptorUpdateAfterBindStorageImages) << ";\n";
	result << indent << name << ".maxPerStageDescriptorUpdateAfterBindInputAttachments = " << IntToString(obj->maxPerStageDescriptorUpdateAfterBindInputAttachments) << ";\n";
	result << indent << name << ".maxPerStageUpdateAfterBindResources = " << IntToString(obj->maxPerStageUpdateAfterBindResources) << ";\n";
	result << indent << name << ".maxDescriptorSetUpdateAfterBindSamplers = " << IntToString(obj->maxDescriptorSetUpdateAfterBindSamplers) << ";\n";
	result << indent << name << ".maxDescriptorSetUpdateAfterBindUniformBuffers = " << IntToString(obj->maxDescriptorSetUpdateAfterBindUniformBuffers) << ";\n";
	result << indent << name << ".maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = " << IntToString(obj->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic) << ";\n";
	result << indent << name << ".maxDescriptorSetUpdateAfterBindStorageBuffers = " << IntToString(obj->maxDescriptorSetUpdateAfterBindStorageBuffers) << ";\n";
	result << indent << name << ".maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = " << IntToString(obj->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic) << ";\n";
	result << indent << name << ".maxDescriptorSetUpdateAfterBindSampledImages = " << IntToString(obj->maxDescriptorSetUpdateAfterBindSampledImages) << ";\n";
	result << indent << name << ".maxDescriptorSetUpdateAfterBindStorageImages = " << IntToString(obj->maxDescriptorSetUpdateAfterBindStorageImages) << ";\n";
	result << indent << name << ".maxDescriptorSetUpdateAfterBindInputAttachments = " << IntToString(obj->maxDescriptorSetUpdateAfterBindInputAttachments) << ";\n";
}

void  Serialize2_VkRayTracingShaderGroupCreateInfoNV (const VkRayTracingShaderGroupCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV );
	result << indent << name << ".type = " << Serialize_VkRayTracingShaderGroupTypeNV(obj->type) << ";\n";
	result << indent << name << ".generalShader = " << IntToString(obj->generalShader) << ";\n";
	result << indent << name << ".closestHitShader = " << IntToString(obj->closestHitShader) << ";\n";
	result << indent << name << ".anyHitShader = " << IntToString(obj->anyHitShader) << ";\n";
	result << indent << name << ".intersectionShader = " << IntToString(obj->intersectionShader) << ";\n";
}

void  Serialize2_VkRayTracingPipelineCreateInfoNV (const VkRayTracingPipelineCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV );
	if ( obj->pStages ) {
		CHECK( obj->stageCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pStages, "stages"s, "pipelineShaderStageCreateInfo"s, "createInfo"s );
		before << indent << "VkPipelineShaderStageCreateInfo  " << arr_name << "[" << IntToString(obj->stageCount) << "] = {};\n";
		for (uint i = 0; i < obj->stageCount; ++i) {
			Serialize2_VkPipelineShaderStageCreateInfo( obj->pStages + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	if ( obj->pGroups ) {
		CHECK( obj->groupCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pGroups, "groups"s, "rayTracingShaderGroupCreateInfoNV"s, "createInfo"s );
		before << indent << "VkRayTracingShaderGroupCreateInfoNV  " << arr_name << "[" << IntToString(obj->groupCount) << "] = {};\n";
		for (uint i = 0; i < obj->groupCount; ++i) {
			Serialize2_VkRayTracingShaderGroupCreateInfoNV( obj->pGroups + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".flags = " << Serialize_VkPipelineCreateFlags(obj->flags) << ";\n";
	result << indent << name << ".stageCount = " << IntToString(obj->stageCount) << ";\n";
	result << indent << name << ".pStages = " << nameSer.Get( &obj->pStages ) << ";\n";
	result << indent << name << ".groupCount = " << IntToString(obj->groupCount) << ";\n";
	result << indent << name << ".pGroups = " << nameSer.Get( &obj->pGroups ) << ";\n";
	result << indent << name << ".maxRecursionDepth = " << IntToString(obj->maxRecursionDepth) << ";\n";
	result << indent << name << ".layout = " << remapper( VK_OBJECT_TYPE_PIPELINE_LAYOUT, obj->layout ) << ";\n";
	result << indent << name << ".basePipelineHandle = " << remapper( VK_OBJECT_TYPE_PIPELINE, obj->basePipelineHandle ) << ";\n";
	result << indent << name << ".basePipelineIndex = " << IntToString(obj->basePipelineIndex) << ";\n";
}

ND_ String  Serialize_VkGeometryDataNV (const VkGeometryDataNV *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "geometryDataNV"s );
	result << indent << "VkGeometryDataNV  " << name << " = {};\n";
	Serialize2_VkGeometryDataNV( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkGeometryDataNV (const VkGeometryDataNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const*>(&obj->triangles), nameSer, remapper, indent );
	before << SerializeStruct( BitCast<VkBaseInStructure const*>(&obj->aabbs), nameSer, remapper, indent );
	result << indent << name << ".triangles = " << nameSer.Get( &obj->triangles ) << ";\n";
	result << indent << name << ".aabbs = " << nameSer.Get( &obj->aabbs ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceCooperativeMatrixFeaturesNV (const VkPhysicalDeviceCooperativeMatrixFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV );
	result << indent << name << ".cooperativeMatrix = " << BoolToString(obj->cooperativeMatrix) << ";\n";
	result << indent << name << ".cooperativeMatrixRobustBufferAccess = " << BoolToString(obj->cooperativeMatrixRobustBufferAccess) << ";\n";
}

void  Serialize2_VkGeometryNV (const VkGeometryNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_GEOMETRY_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_GEOMETRY_NV );
	result << indent << name << ".geometryType = " << Serialize_VkGeometryTypeNV(obj->geometryType) << ";\n";
	Serialize2_VkGeometryDataNV( &obj->geometry, String(name) << ".geometry", nameSer, remapper, indent, INOUT result, INOUT before );
	result << indent << name << ".flags = " << Serialize_VkGeometryFlagsNV(obj->flags) << ";\n";
}

void  Serialize2_VkAccelerationStructureCreateInfoNV (const VkAccelerationStructureCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV );
	before << SerializeStruct( BitCast<VkBaseInStructure const*>(&obj->info), nameSer, remapper, indent );
	result << indent << name << ".compactedSize = " << IntToString(obj->compactedSize) << ";\n";
	result << indent << name << ".info = " << nameSer.Get( &obj->info ) << ";\n";
}

void  Serialize2_VkValidationFeaturesEXT (const VkValidationFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT );
	if ( obj->pEnabledValidationFeatures ) {
		CHECK( obj->enabledValidationFeatureCount > 0 );
		before << indent << "const VkValidationFeatureEnableEXT  " << nameSer.MakeUnique( &obj->pEnabledValidationFeatures, "enabledValidationFeatures"s ) << "[] = {";
		for (uint i = 0; i < obj->enabledValidationFeatureCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkValidationFeatureEnableEXT( obj->pEnabledValidationFeatures[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pEnabledValidationFeatures ) << ") == " << IntToString(obj->enabledValidationFeatureCount) << " );\n\n";
	}
	if ( obj->pDisabledValidationFeatures ) {
		CHECK( obj->disabledValidationFeatureCount > 0 );
		before << indent << "const VkValidationFeatureDisableEXT  " << nameSer.MakeUnique( &obj->pDisabledValidationFeatures, "disabledValidationFeatures"s ) << "[] = {";
		for (uint i = 0; i < obj->disabledValidationFeatureCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << Serialize_VkValidationFeatureDisableEXT( obj->pDisabledValidationFeatures[i] );
		}
		before << "\n" << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pDisabledValidationFeatures ) << ") == " << IntToString(obj->disabledValidationFeatureCount) << " );\n\n";
	}
	result << indent << name << ".enabledValidationFeatureCount = " << IntToString(obj->enabledValidationFeatureCount) << ";\n";
	result << indent << name << ".pEnabledValidationFeatures = " << nameSer.Get( &obj->pEnabledValidationFeatures ) << ";\n";
	result << indent << name << ".disabledValidationFeatureCount = " << IntToString(obj->disabledValidationFeatureCount) << ";\n";
	result << indent << name << ".pDisabledValidationFeatures = " << nameSer.Get( &obj->pDisabledValidationFeatures ) << ";\n";
}

void  Serialize2_VkBindAccelerationStructureMemoryInfoNV (const VkBindAccelerationStructureMemoryInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV );
	if ( obj->pDeviceIndices ) {
		CHECK( obj->deviceIndexCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pDeviceIndices, "deviceIndices"s ) << "[] = { ";
		for (uint i = 0; i < obj->deviceIndexCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pDeviceIndices[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pDeviceIndices ) << ") == " << IntToString(obj->deviceIndexCount) << " );\n\n";
	}
	result << indent << name << ".accelerationStructure = " << remapper( VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV, obj->accelerationStructure ) << ";\n";
	result << indent << name << ".memory = " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->memory ) << ";\n";
	result << indent << name << ".memoryOffset = " << IntToString(obj->memoryOffset) << ";\n";
	result << indent << name << ".deviceIndexCount = " << IntToString(obj->deviceIndexCount) << ";\n";
	result << indent << name << ".pDeviceIndices = " << nameSer.Get( &obj->pDeviceIndices ) << ";\n";
}

void  Serialize2_VkWriteDescriptorSetAccelerationStructureNV (const VkWriteDescriptorSetAccelerationStructureNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV );
	if ( obj->pAccelerationStructures ) {
		CHECK( obj->accelerationStructureCount > 0 );
		before << indent << "const VkAccelerationStructureNV  " << nameSer.MakeUnique( &obj->pAccelerationStructures, "accelerationStructures"s, "accelerationStructureNV"s ) << "[] = {";
		for (uint i = 0; i < obj->accelerationStructureCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV, obj->pAccelerationStructures[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pAccelerationStructures ) << ") == " << IntToString(obj->accelerationStructureCount) << " );\n\n";
	}
	result << indent << name << ".accelerationStructureCount = " << IntToString(obj->accelerationStructureCount) << ";\n";
	result << indent << name << ".pAccelerationStructures = " << nameSer.Get( &obj->pAccelerationStructures ) << ";\n";
}

void  Serialize2_VkPhysicalDeviceLineRasterizationPropertiesEXT (const VkPhysicalDeviceLineRasterizationPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT );
	result << indent << name << ".lineSubPixelPrecisionBits = " << IntToString(obj->lineSubPixelPrecisionBits) << ";\n";
}

void  Serialize2_VkPipelineRepresentativeFragmentTestStateCreateInfoNV (const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV );
	result << indent << name << ".representativeFragmentTestEnable = " << BoolToString(obj->representativeFragmentTestEnable) << ";\n";
}

void  Serialize2_VkDeviceQueueGlobalPriorityCreateInfoEXT (const VkDeviceQueueGlobalPriorityCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT );
	result << indent << name << ".globalPriority = " << Serialize_VkQueueGlobalPriorityEXT(obj->globalPriority) << ";\n";
}

void  Serialize2_VkCalibratedTimestampInfoEXT (const VkCalibratedTimestampInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT );
	result << indent << name << ".timeDomain = " << Serialize_VkTimeDomainEXT(obj->timeDomain) << ";\n";
}

void  Serialize2_VkPhysicalDeviceShaderCorePropertiesAMD (const VkPhysicalDeviceShaderCorePropertiesAMD *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD );
	result << indent << name << ".shaderEngineCount = " << IntToString(obj->shaderEngineCount) << ";\n";
	result << indent << name << ".shaderArraysPerEngineCount = " << IntToString(obj->shaderArraysPerEngineCount) << ";\n";
	result << indent << name << ".computeUnitsPerShaderArray = " << IntToString(obj->computeUnitsPerShaderArray) << ";\n";
	result << indent << name << ".simdPerComputeUnit = " << IntToString(obj->simdPerComputeUnit) << ";\n";
	result << indent << name << ".wavefrontsPerSimd = " << IntToString(obj->wavefrontsPerSimd) << ";\n";
	result << indent << name << ".wavefrontSize = " << IntToString(obj->wavefrontSize) << ";\n";
	result << indent << name << ".sgprsPerSimd = " << IntToString(obj->sgprsPerSimd) << ";\n";
	result << indent << name << ".minSgprAllocation = " << IntToString(obj->minSgprAllocation) << ";\n";
	result << indent << name << ".maxSgprAllocation = " << IntToString(obj->maxSgprAllocation) << ";\n";
	result << indent << name << ".sgprAllocationGranularity = " << IntToString(obj->sgprAllocationGranularity) << ";\n";
	result << indent << name << ".vgprsPerSimd = " << IntToString(obj->vgprsPerSimd) << ";\n";
	result << indent << name << ".minVgprAllocation = " << IntToString(obj->minVgprAllocation) << ";\n";
	result << indent << name << ".maxVgprAllocation = " << IntToString(obj->maxVgprAllocation) << ";\n";
	result << indent << name << ".vgprAllocationGranularity = " << IntToString(obj->vgprAllocationGranularity) << ";\n";
}

void  Serialize2_VkDeviceMemoryOverallocationCreateInfoAMD (const VkDeviceMemoryOverallocationCreateInfoAMD *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD );
	result << indent << name << ".overallocationBehavior = " << Serialize_VkMemoryOverallocationBehaviorAMD(obj->overallocationBehavior) << ";\n";
}

void  Serialize2_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT (const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT );
	result << indent << name << ".maxVertexAttribDivisor = " << IntToString(obj->maxVertexAttribDivisor) << ";\n";
}

void  Serialize2_VkPipelineVertexInputDivisorStateCreateInfoEXT (const VkPipelineVertexInputDivisorStateCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT );
	if ( obj->pVertexBindingDivisors ) {
		CHECK( obj->vertexBindingDivisorCount > 0 );
		const String arr_name = nameSer.MakeUnique( &obj->pVertexBindingDivisors, "vertexBindingDivisors"s, "vertexInputBindingDivisorDescription"s );
		before << indent << "VkVertexInputBindingDivisorDescriptionEXT  " << arr_name << "[" << IntToString(obj->vertexBindingDivisorCount) << "] = {};\n";
		for (uint i = 0; i < obj->vertexBindingDivisorCount; ++i) {
			Serialize2_VkVertexInputBindingDivisorDescriptionEXT( obj->pVertexBindingDivisors + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}
	}
	result << indent << name << ".vertexBindingDivisorCount = " << IntToString(obj->vertexBindingDivisorCount) << ";\n";
	result << indent << name << ".pVertexBindingDivisors = " << nameSer.Get( &obj->pVertexBindingDivisors ) << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkFenceGetWin32HandleInfoKHR (const VkFenceGetWin32HandleInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR );
	result << indent << name << ".fence = " << remapper( VK_OBJECT_TYPE_FENCE, obj->fence ) << ";\n";
	result << indent << name << ".handleType = " << Serialize_VkExternalFenceHandleTypeFlagBits(obj->handleType) << ";\n";
}
#endif

void  Serialize2_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT (const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT );
	result << indent << name << ".vertexAttributeInstanceRateDivisor = " << BoolToString(obj->vertexAttributeInstanceRateDivisor) << ";\n";
	result << indent << name << ".vertexAttributeInstanceRateZeroDivisor = " << BoolToString(obj->vertexAttributeInstanceRateZeroDivisor) << ";\n";
}

ND_ String  Serialize_VkPipelineCreationFeedbackEXT (const VkPipelineCreationFeedbackEXT *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)
{
	String	result, before;
	if ( obj == null ) return result;
	const String  name = nameSer.MakeUnique( obj, "pipelineCreationFeedback"s );
	result << indent << "VkPipelineCreationFeedbackEXT  " << name << " = {};\n";
	Serialize2_VkPipelineCreationFeedbackEXT( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );
	return before + result;
}

void  Serialize2_VkPipelineCreationFeedbackEXT (const VkPipelineCreationFeedbackEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	result << indent << name << ".flags = " << Serialize_VkPipelineCreationFeedbackFlagsEXT(obj->flags) << ";\n";
	result << indent << name << ".duration = " << IntToString(obj->duration) << ";\n";
}

void  Serialize2_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV (const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV );
	result << indent << name << ".computeDerivativeGroupQuads = " << BoolToString(obj->computeDerivativeGroupQuads) << ";\n";
	result << indent << name << ".computeDerivativeGroupLinear = " << BoolToString(obj->computeDerivativeGroupLinear) << ";\n";
}

void  Serialize2_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT (const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT );
	result << indent << name << ".storageTexelBufferOffsetAlignmentBytes = " << IntToString(obj->storageTexelBufferOffsetAlignmentBytes) << ";\n";
	result << indent << name << ".storageTexelBufferOffsetSingleTexelAlignment = " << BoolToString(obj->storageTexelBufferOffsetSingleTexelAlignment) << ";\n";
	result << indent << name << ".uniformTexelBufferOffsetAlignmentBytes = " << IntToString(obj->uniformTexelBufferOffsetAlignmentBytes) << ";\n";
	result << indent << name << ".uniformTexelBufferOffsetSingleTexelAlignment = " << BoolToString(obj->uniformTexelBufferOffsetSingleTexelAlignment) << ";\n";
}

void  Serialize2_VkPhysicalDeviceMeshShaderFeaturesNV (const VkPhysicalDeviceMeshShaderFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV );
	result << indent << name << ".taskShader = " << BoolToString(obj->taskShader) << ";\n";
	result << indent << name << ".meshShader = " << BoolToString(obj->meshShader) << ";\n";
}

void  Serialize2_VkPhysicalDeviceMeshShaderPropertiesNV (const VkPhysicalDeviceMeshShaderPropertiesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV );
	result << indent << name << ".maxDrawMeshTasksCount = " << IntToString(obj->maxDrawMeshTasksCount) << ";\n";
	result << indent << name << ".maxTaskWorkGroupInvocations = " << IntToString(obj->maxTaskWorkGroupInvocations) << ";\n";
	result << indent << name << ".maxTaskWorkGroupSize << " << "StaticArray<uint32_t, " << IntToString(CountOf(obj->maxTaskWorkGroupSize)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->maxTaskWorkGroupSize); ++i) {
		result << (i ? ", " : "") << IntToString(obj->maxTaskWorkGroupSize[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".maxTaskTotalMemorySize = " << IntToString(obj->maxTaskTotalMemorySize) << ";\n";
	result << indent << name << ".maxTaskOutputCount = " << IntToString(obj->maxTaskOutputCount) << ";\n";
	result << indent << name << ".maxMeshWorkGroupInvocations = " << IntToString(obj->maxMeshWorkGroupInvocations) << ";\n";
	result << indent << name << ".maxMeshWorkGroupSize << " << "StaticArray<uint32_t, " << IntToString(CountOf(obj->maxMeshWorkGroupSize)) << ">{ ";
	for (uint i = 0; i < CountOf(obj->maxMeshWorkGroupSize); ++i) {
		result << (i ? ", " : "") << IntToString(obj->maxMeshWorkGroupSize[i]);
	}
	result << " }" << ";\n";
	result << indent << name << ".maxMeshTotalMemorySize = " << IntToString(obj->maxMeshTotalMemorySize) << ";\n";
	result << indent << name << ".maxMeshOutputVertices = " << IntToString(obj->maxMeshOutputVertices) << ";\n";
	result << indent << name << ".maxMeshOutputPrimitives = " << IntToString(obj->maxMeshOutputPrimitives) << ";\n";
	result << indent << name << ".maxMeshMultiviewViewCount = " << IntToString(obj->maxMeshMultiviewViewCount) << ";\n";
	result << indent << name << ".meshOutputPerVertexGranularity = " << IntToString(obj->meshOutputPerVertexGranularity) << ";\n";
	result << indent << name << ".meshOutputPerPrimitiveGranularity = " << IntToString(obj->meshOutputPerPrimitiveGranularity) << ";\n";
}

void  Serialize2_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV (const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV );
	result << indent << name << ".fragmentShaderBarycentric = " << BoolToString(obj->fragmentShaderBarycentric) << ";\n";
}

void  Serialize2_VkPhysicalDeviceShaderImageFootprintFeaturesNV (const VkPhysicalDeviceShaderImageFootprintFeaturesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV );
	result << indent << name << ".imageFootprint = " << BoolToString(obj->imageFootprint) << ";\n";
}

void  Serialize2_VkCheckpointDataNV (const VkCheckpointDataNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV );
	result << indent << name << ".stage = " << Serialize_VkPipelineStageFlagBits(obj->stage) << ";\n";
	result << indent << name << ".pCheckpointMarker = " << "null" << ";\n";
}

void  Serialize2_VkPhysicalDeviceShaderCoreProperties2AMD (const VkPhysicalDeviceShaderCoreProperties2AMD *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD );
	result << indent << name << ".shaderCoreFeatures = " << Serialize_VkShaderCorePropertiesFlagsAMD(obj->shaderCoreFeatures) << ";\n";
	result << indent << name << ".activeComputeUnitCount = " << IntToString(obj->activeComputeUnitCount) << ";\n";
}

void  Serialize2_VkPerformanceStreamMarkerInfoINTEL (const VkPerformanceStreamMarkerInfoINTEL *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL );
	result << indent << name << ".marker = " << IntToString(obj->marker) << ";\n";
}

void  Serialize2_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT (const VkPhysicalDeviceScalarBlockLayoutFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT );
	result << indent << name << ".scalarBlockLayout = " << BoolToString(obj->scalarBlockLayout) << ";\n";
}

void  Serialize2_VkPerformanceConfigurationAcquireInfoINTEL (const VkPerformanceConfigurationAcquireInfoINTEL *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL );
	result << indent << name << ".type = " << Serialize_VkPerformanceConfigurationTypeINTEL(obj->type) << ";\n";
}

void  Serialize2_VkPhysicalDevicePCIBusInfoPropertiesEXT (const VkPhysicalDevicePCIBusInfoPropertiesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT );
	result << indent << name << ".pciDomain = " << IntToString(obj->pciDomain) << ";\n";
	result << indent << name << ".pciBus = " << IntToString(obj->pciBus) << ";\n";
	result << indent << name << ".pciDevice = " << IntToString(obj->pciDevice) << ";\n";
	result << indent << name << ".pciFunction = " << IntToString(obj->pciFunction) << ";\n";
}

void  Serialize2_VkSwapchainDisplayNativeHdrCreateInfoAMD (const VkSwapchainDisplayNativeHdrCreateInfoAMD *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD );
	result << indent << name << ".localDimmingEnable = " << BoolToString(obj->localDimmingEnable) << ";\n";
}

void  Serialize2_VkPhysicalDeviceFragmentDensityMapFeaturesEXT (const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT );
	result << indent << name << ".fragmentDensityMap = " << BoolToString(obj->fragmentDensityMap) << ";\n";
	result << indent << name << ".fragmentDensityMapDynamic = " << BoolToString(obj->fragmentDensityMapDynamic) << ";\n";
	result << indent << name << ".fragmentDensityMapNonSubsampledImages = " << BoolToString(obj->fragmentDensityMapNonSubsampledImages) << ";\n";
}

void  Serialize2_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT (const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT );
	result << indent << name << ".subgroupSizeControl = " << BoolToString(obj->subgroupSizeControl) << ";\n";
	result << indent << name << ".computeFullSubgroups = " << BoolToString(obj->computeFullSubgroups) << ";\n";
}

void  Serialize2_VkMemoryPriorityAllocateInfoEXT (const VkMemoryPriorityAllocateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT );
	result << indent << name << ".priority = " << FloatToString(obj->priority) << ";\n";
}

void  Serialize2_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT (const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT );
	result << indent << name << ".bufferDeviceAddress = " << BoolToString(obj->bufferDeviceAddress) << ";\n";
	result << indent << name << ".bufferDeviceAddressCaptureReplay = " << BoolToString(obj->bufferDeviceAddressCaptureReplay) << ";\n";
	result << indent << name << ".bufferDeviceAddressMultiDevice = " << BoolToString(obj->bufferDeviceAddressMultiDevice) << ";\n";
}

void  Serialize2_VkImageStencilUsageCreateInfoEXT (const VkImageStencilUsageCreateInfoEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT );
	result << indent << name << ".stencilUsage = " << Serialize_VkImageUsageFlags(obj->stencilUsage) << ";\n";
}

void  Serialize2_VkCooperativeMatrixPropertiesNV (const VkCooperativeMatrixPropertiesNV *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV );
	result << indent << name << ".MSize = " << IntToString(obj->MSize) << ";\n";
	result << indent << name << ".NSize = " << IntToString(obj->NSize) << ";\n";
	result << indent << name << ".KSize = " << IntToString(obj->KSize) << ";\n";
	result << indent << name << ".AType = " << Serialize_VkComponentTypeNV(obj->AType) << ";\n";
	result << indent << name << ".BType = " << Serialize_VkComponentTypeNV(obj->BType) << ";\n";
	result << indent << name << ".CType = " << Serialize_VkComponentTypeNV(obj->CType) << ";\n";
	result << indent << name << ".DType = " << Serialize_VkComponentTypeNV(obj->DType) << ";\n";
	result << indent << name << ".scope = " << Serialize_VkScopeNV(obj->scope) << ";\n";
}

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkWin32SurfaceCreateInfoKHR (const VkWin32SurfaceCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR );
	result << indent << name << ".flags = " << Serialize_VkWin32SurfaceCreateFlagsKHR(obj->flags) << ";\n";
	result << indent << name << ".hinstance = " << "BitCast<HINSTANCE>(" << HexToString(obj->hinstance) << ")" << ";\n";
	result << indent << name << ".hwnd = " << "BitCast<HWND>(" << HexToString(obj->hwnd) << ")" << ";\n";
}
#endif

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkMemoryGetWin32HandleInfoKHR (const VkMemoryGetWin32HandleInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR );
	result << indent << name << ".memory = " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->memory ) << ";\n";
	result << indent << name << ".handleType = " << Serialize_VkExternalMemoryHandleTypeFlagBits(obj->handleType) << ";\n";
}
#endif

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkWin32KeyedMutexAcquireReleaseInfoKHR (const VkWin32KeyedMutexAcquireReleaseInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR );
	if ( obj->pAcquireSyncs ) {
		CHECK( obj->acquireCount > 0 );
		before << indent << "const VkDeviceMemory  " << nameSer.MakeUnique( &obj->pAcquireSyncs, "acquireSyncs"s, "deviceMemory"s ) << "[] = {";
		for (uint i = 0; i < obj->acquireCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->pAcquireSyncs[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pAcquireSyncs ) << ") == " << IntToString(obj->acquireCount) << " );\n\n";
	}
	if ( obj->pAcquireKeys ) {
		CHECK( obj->acquireCount > 0 );
		before << indent << "const uint64_t  " << nameSer.MakeUnique( &obj->pAcquireKeys, "acquireKeys"s ) << "[] = { ";
		for (uint i = 0; i < obj->acquireCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pAcquireKeys[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pAcquireKeys ) << ") == " << IntToString(obj->acquireCount) << " );\n\n";
	}
	if ( obj->pAcquireTimeouts ) {
		CHECK( obj->acquireCount > 0 );
		before << indent << "const uint32_t  " << nameSer.MakeUnique( &obj->pAcquireTimeouts, "acquireTimeouts"s ) << "[] = { ";
		for (uint i = 0; i < obj->acquireCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pAcquireTimeouts[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pAcquireTimeouts ) << ") == " << IntToString(obj->acquireCount) << " );\n\n";
	}
	if ( obj->pReleaseSyncs ) {
		CHECK( obj->releaseCount > 0 );
		before << indent << "const VkDeviceMemory  " << nameSer.MakeUnique( &obj->pReleaseSyncs, "releaseSyncs"s, "deviceMemory"s ) << "[] = {";
		for (uint i = 0; i < obj->releaseCount; ++i) {
			before << (i ? "," : "") << (i%4 == 0 ? "\n\t"s << indent : " ") << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->pReleaseSyncs[i] );
		}
		before << "\n" << indent << "};\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pReleaseSyncs ) << ") == " << IntToString(obj->releaseCount) << " );\n\n";
	}
	if ( obj->pReleaseKeys ) {
		CHECK( obj->releaseCount > 0 );
		before << indent << "const uint64_t  " << nameSer.MakeUnique( &obj->pReleaseKeys, "releaseKeys"s ) << "[] = { ";
		for (uint i = 0; i < obj->releaseCount; ++i) {
			before << (i ? ", " : "") << (i%16 == 0 ? "\n\t"s << indent : " ") << IntToString(obj->pReleaseKeys[i]);
		}
		before << indent << " };\n";
		before << indent << "STATIC_ASSERT( CountOf(" << nameSer.Get( &obj->pReleaseKeys ) << ") == " << IntToString(obj->releaseCount) << " );\n\n";
	}
	result << indent << name << ".acquireCount = " << IntToString(obj->acquireCount) << ";\n";
	result << indent << name << ".pAcquireSyncs = " << nameSer.Get( &obj->pAcquireSyncs ) << ";\n";
	result << indent << name << ".pAcquireKeys = " << nameSer.Get( &obj->pAcquireKeys ) << ";\n";
	result << indent << name << ".pAcquireTimeouts = " << nameSer.Get( &obj->pAcquireTimeouts ) << ";\n";
	result << indent << name << ".releaseCount = " << IntToString(obj->releaseCount) << ";\n";
	result << indent << name << ".pReleaseSyncs = " << nameSer.Get( &obj->pReleaseSyncs ) << ";\n";
	result << indent << name << ".pReleaseKeys = " << nameSer.Get( &obj->pReleaseKeys ) << ";\n";
}
#endif

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkExportFenceWin32HandleInfoKHR (const VkExportFenceWin32HandleInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR );
	result << indent << name << ".pAttributes = " << "BitCast<SECURITY_ATTRIBUTES*>(" << HexToString(obj->pAttributes) << ")" << ";\n";
	result << indent << name << ".dwAccess = " << IntToString(obj->dwAccess) << ";\n";
	result << indent << name << ".name = " << WCharToString(obj->name) << ";\n";
}
#endif

#ifdef VULKAN_WIN32_H_
void  Serialize2_VkSurfaceCapabilitiesFullScreenExclusiveEXT (const VkSurfaceCapabilitiesFullScreenExclusiveEXT *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT );
	result << indent << name << ".fullScreenExclusiveSupported = " << BoolToString(obj->fullScreenExclusiveSupported) << ";\n";
}
#endif

#ifdef VULKAN_ANDROID_H_
void  Serialize2_VkAndroidHardwareBufferPropertiesANDROID (const VkAndroidHardwareBufferPropertiesANDROID *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID );
	result << indent << name << ".allocationSize = " << IntToString(obj->allocationSize) << ";\n";
	result << indent << name << ".memoryTypeBits = " << IntToString(obj->memoryTypeBits) << ";\n";
}
#endif

#ifdef VULKAN_ANDROID_H_
void  Serialize2_VkImportAndroidHardwareBufferInfoANDROID (const VkImportAndroidHardwareBufferInfoANDROID *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID );
	result << indent << name << ".buffer = " << "BitCast<AHardwareBuffer*>(" << HexToString(obj->buffer) << ")" << ";\n";
}
#endif

#ifdef VULKAN_ANDROID_H_
void  Serialize2_VkMemoryGetAndroidHardwareBufferInfoANDROID (const VkMemoryGetAndroidHardwareBufferInfoANDROID *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID );
	result << indent << name << ".memory = " << remapper( VK_OBJECT_TYPE_DEVICE_MEMORY, obj->memory ) << ";\n";
}
#endif

#ifdef VULKAN_XLIB_H_
void  Serialize2_VkXlibSurfaceCreateInfoKHR (const VkXlibSurfaceCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR );
	result << indent << name << ".flags = " << Serialize_VkXlibSurfaceCreateFlagsKHR(obj->flags) << ";\n";
	result << indent << name << ".dpy = " << "BitCast<Display*>(" << HexToString(obj->dpy) << ")" << ";\n";
	result << indent << name << ".window = " << "BitCast<Window>(" << HexToString(obj->window) << ")" << ";\n";
}
#endif

#ifdef VULKAN_WAYLAND_H_
void  Serialize2_VkWaylandSurfaceCreateInfoKHR (const VkWaylandSurfaceCreateInfoKHR *obj, StringView name, NameSerializer &nameSer, ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)
{
	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );
	result << indent << name << ".pNext = " << nameSer.GetPtr( obj->pNext ) << ";\n";
	result << indent << name << ".sType = VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR;\n";
	CHECK( obj->sType == VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR );
	result << indent << name << ".flags = " << Serialize_VkWaylandSurfaceCreateFlagsKHR(obj->flags) << ";\n";
	result << indent << name << ".display = " << "BitCast<wl_display*>(" << HexToString(obj->display) << ")" << ";\n";
	result << indent << name << ".surface = " << "BitCast<wl_surface*>(" << HexToString(obj->surface) << ")" << ";\n";
}
#endif

