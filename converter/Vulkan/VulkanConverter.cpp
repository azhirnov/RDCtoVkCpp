// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "Utils/BasicTypesConverter.h"
#include "Utils/NameSerializer.h"
#include "Vulkan/ResRemapper.h"
#include "stl/Memory/LinearAllocator.h"
#include "stl/Algorithms/StringParser.h"
#include "stl/Platforms/WindowsHeader.h"

namespace RDE
{
#	include "Generated/VkStructToString.h"
#	include "Generated/VkEnumToString.h"
}	// RDE

#include "Vulkan/VulkanConverter.h"
#include "Vulkan/VulkanFnToCpp.h"

#include "spirv_cross/spirv_glsl.hpp"

namespace RDE
{

	class VulkanFnToCpp2 final : public VulkanFnToCpp
	{
	// types
	private:
		enum class EQueueFamily : uint { Unknown = ~0u };

		struct QueueFamilyData
		{
			VkDevice	dev					= VK_NULL_HANDLE;
			uint		familyIndex			= UMax;
		};

		using Devices_t			= HashMap< VkDevice, String >;
		using Queues_t			= HashMap< VkQueue, EQueueFamily >;		// queue family index
		using QueueFamilies_t	= HashMap< EQueueFamily, QueueFamilyData >;
		using CmdPools_t		= HashMap< VkCommandPool, EQueueFamily >;
		
		using SignaledFences_t		= HashSet< VkResourceID >;
		using SignaledSemaphores_t	= HashSet< VkResourceID >;
		using SignaledEvents_t		= HashSet< VkResourceID >;

		struct CmdBufferData
		{
			VkRenderPass		currRenderPass	= VK_NULL_HANDLE;
			EQueueFamily		familyIndex		= Default;
			String				str;
			String				before;
			uint				renderPassCount	= 0;
			size_t				renderPassBegin	= UMax;
			SignaledEvents_t	waitingEvents;
			SignaledEvents_t	signaledEvents;
		};
		using CmdBuffers_t	= HashMap< VkCommandBuffer, CmdBufferData >;
		
		struct ImageInfo
		{
			VkImage					handle				= VK_NULL_HANDLE;
			VkImageCreateInfo		createInfo;
			FixedArray<uint, 8>		queueFamilies;
			VkImageAspectFlags		aspectMask			= 0;
			EQueueFamily			initialQueue		= Default;
			EQueueFamily			lastQueue			= Default;
			ContentID				initialContent		= Default;
			bool					firstUse			= true;
		};
		using ImageMap_t	= HashMap< uint64_t, ImageInfo >;

		struct BufferInfo
		{
			VkBuffer				handle				= VK_NULL_HANDLE;
			VkBufferCreateInfo		createInfo;
			FixedArray<uint, 8>		queueFamilies;
			VkDeviceSize			memOffset			= 0;
			EQueueFamily			initialQueue		= Default;
			EQueueFamily			lastQueue			= Default;
			ContentID				initialContent		= Default;
			bool					firstUse			= true;
		};
		using BufferMap_t	= HashMap< uint64_t, BufferInfo >;

		struct MemoryInfo
		{
			VkDeviceMemory			handle				= VK_NULL_HANDLE;
			VkMemoryAllocateInfo	allocInfo;
			VkMemoryPropertyFlags	propertyFlags		= 0;
			ContentID				initialContent		= Default;
			Array<BufferInfo*>		buffers;
		};
		using MemoryMap_t	= HashMap< uint64_t, MemoryInfo >;

		using Allocator_t	= LinearAllocator<>;

		struct DeviceInfo
		{
			Array<VkQueueFamilyProperties>		queueProps;
			uint32_t							memIdxMap [VK_MAX_MEMORY_TYPES] = {};
			VkPhysicalDeviceMemoryProperties	memProps		= {};
			VkPhysicalDeviceProperties			physProps		= {};
			VkPhysicalDeviceFeatures			physFeatures	= {};
		};

		using DeviceProps_t			= HashMap< VkPhysicalDevice, DeviceInfo >;

		using ImageLayouts_t		= HashMap< VkResourceID, ImageLayouts >;
		using SwapchainImages_t		= FixedArray< VkResourceID, 8 >;

		struct DescriptorSetInfo
		{
			Array<VkWriteDescriptorSet>		write;
			uint							bindCount = 0;
		};
		using DescriptorInit_t		= HashMap< VkDescriptorSet, DescriptorSetInfo >;

		struct DescriptorTemplateInfo
		{
			Array<VkDescriptorUpdateTemplateEntry>	entries;
		};
		using DSTemplateMap_t		= HashMap< VkDescriptorUpdateTemplate, DescriptorTemplateInfo >;


	// variables
	private:
		QueueFamilies_t			_queueFamilies;
		Queues_t				_queues;
		CmdPools_t				_cmdPools;
		CmdBuffers_t			_cmdBuffers;
		ImageMap_t				_imageMap;
		BufferMap_t				_bufferMap;
		MemoryMap_t				_memoryMap;
		ImageLayouts_t			_initialLayouts;
		DescriptorInit_t		_initialDS;
		DSTemplateMap_t			_dsTemplates;

		String					_initSrc;
		String					_initFrameSrc;

		String					_globalSrcBefore;
		String					_globalSrcAfter;
		
		SwapchainImages_t		_swapchainImages;
		VkResourceID			_presentedImage		= 0;
		VkFormat				_swapchainFormat	= VK_FORMAT_UNDEFINED;
		VkImageUsageFlags		_swapchainUsage		= 0;
		uint2					_swapchainDim;

		SignaledFences_t		_signaledFences;
		SignaledFences_t		_initialySignaledFences;
		SignaledSemaphores_t	_signaledSemaphores;
		SignaledEvents_t		_signaledEvents;

		String					_frameSrcBefore;
		String					_frameSrc;
		String					_frameResetSrc;

		VkInstance				_vkInstance			= VK_NULL_HANDLE;
		VkPhysicalDevice		_vkPhysicalDevice	= VK_NULL_HANDLE;
		VkDevice				_vkLogicalDevice	= VK_NULL_HANDLE;
		uint32_t				_apiVersion			= 0;
		EQueueFamily			_graphicsQueue		= Default;

		DeviceProps_t			_deviceProps;

		FS::path				_folder;
		FS::path				_shaderFolder;
		FS::path				_contentFolder;

		bool					_group;
		bool					_captureStarted	= false;
		bool					_compileConvertedCode;

		Allocator_t				_allocator;
		Allocator_t				_initialDSAllocator;


	// methods
	public:
		VulkanFnToCpp2 (const FS::path &outputFolder, const ConverterConfig &cfg);
		~VulkanFnToCpp2 ();

		void FlushCommandBuffer (VkCommandBuffer) override;
		void FlushQueue (VkQueue) override;
		void FlushGlobal () override;
		void Flush ();

		void RemoveUnusedSwapchainImages ();
		void AddInitialLayouts ();
		void InitDescriptorSets ();
		void ResetToInitial ();
		
		void OnOpenCapture (const FS::path &filename) override;
		void InitialImageContent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkImage imageId,
								  bool isSparse, BytesU contentSize, ContentID contentId) override;
		void InitialMemoryContent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDeviceMemory memId,
								   bool isSparse, BytesU contentSize, ContentID contentId) override;
		void InitialDescriptorSetContent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, ArrayView<VkWriteDescriptorSet> slots) override;
		void BeginningOfCapture (uint chunkIndex, uint64_t threadID, uint64_t timestamp, ArrayView<ImageLayouts> imageLayouts) override;
		void EndOfCapture (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkResourceID presentedImage) override;
		void EnumeratePhysicalDevices (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkInstance instance, uint32_t PhysicalDeviceIndex, VkPhysicalDevice PhysicalDevice,
										uint32_t memIdxMap[VK_MAX_MEMORY_TYPES], const VkPhysicalDeviceProperties &physProps,
										const VkPhysicalDeviceMemoryProperties &memProps, const VkPhysicalDeviceFeatures &physFeatures,
										uint32_t queueCount, VkQueueFamilyProperties queueProps[]) override;
		void CreateDevice (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDevice * pDevice) override;
		void CreateSwapchainKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSwapchainCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain) override;
		void GetDeviceQueue (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue) override;
		void GetDeviceQueue2 (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue) override;
		void BeginCommandBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo * pBeginInfo) override;
		void EndCommandBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) override;
		void QueueSubmit (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, uint32_t submitCount, const VkSubmitInfo * pSubmits, VkFence fence) override;
		void QueueBindSparse (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo * pBindInfo, VkFence fence) override;
		void CmdBeginRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents) override;
		void CmdEndRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer) override;
		void CmdBeginRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfoKHR * pSubpassBeginInfo) override;
		void CmdEndRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkSubpassEndInfoKHR * pSubpassEndInfo) override;
		void CreateCommandPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkCommandPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks *, VkCommandPool * pCommandPool) override;
		void CreateImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkImageCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImage * pImage) override;
		void CreateBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkBufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer) override;
		void CreateShaderModule (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo, const VkAllocationCallbacks *, VkShaderModule * pShaderModule) override;
		void GetSwapchainImagesKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages) override;
		void SetDebugUtilsObjectNameEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDebugUtilsObjectNameInfoEXT * pNameInfo) override;
		void AllocateCommandBuffers (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers) override;
		void AllocateMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkMemoryAllocateInfo * pAllocateInfo, const VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory) override;
		void UpdateDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet * pDescriptorCopies) override;
		void CmdPipelineBarrier (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers) override;
		void BindBufferMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) override;
		void BindBufferMemory2 (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos) override;
		void CreateFence (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkFenceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) override;
		void ResetFences (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t fenceCount, const VkFence * pFences) override;
		void GetFenceStatus (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkFence fence) override;
		void WaitForFences (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t fenceCount, const VkFence * pFences, VkBool32 waitAll, uint64_t timeout) override;
		void RegisterDeviceEventEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDeviceEventInfoEXT * pDeviceEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) override;
		void RegisterDisplayEventEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT * pDisplayEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) override;
		void CreateSemaphore (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSemaphoreCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore) override;
		void CreateFramebuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkFramebufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer) override;
		void CreateRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkRenderPassCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) override;
		void CreateDescriptorPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool) override;
		void CreateDescriptorSetLayout (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout) override;
		void CreateBufferView (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkBufferViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferView * pView) override;
		void CreateImageView (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkImageViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImageView * pView) override;
		void CreateSampler (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSamplerCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSampler * pSampler) override;
		void CreatePipelineLayout (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkPipelineLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout) override;
		void CreatePipelineCache (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkPipelineCacheCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache) override;
		void CreateGraphicsPipelines (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) override;
		void CreateComputePipelines (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) override;
		void CreateEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkEventCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkEvent * pEvent) override;
		void SetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event) override;
		void ResetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event) override;
		void GetEventStatus (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event) override;
		void CmdSetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) override;
		void CmdResetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) override;
		void CmdWaitEvents (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers) override;
		void CreateQueryPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkQueryPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool) override;
		void CreateSamplerYcbcrConversion (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion) override;
		void CreateRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkRenderPassCreateInfo2KHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) override;
		void AllocateDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets) override;
		void FlushMappedMemoryRanges (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges, BytesU mappedDataSize, ContentID mappedData) override;
		void CmdBindDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t * pDynamicOffsets) override;
		void DebugMarkerSetObjectNameEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkResourceID resId, StringView name) override;
		void CreateDescriptorUpdateTemplate (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate) override;
		void UpdateDescriptorSetWithTemplate (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, ArrayView<VkWriteDescriptorSet> data) override;
		
		ND_ String _ConvertLayouts (const ImageLayouts &layouts);

		ND_ bool _IsSwapchainImage (VkResourceID id) const;

		bool _CompileSource () const;
	};
	
	
/*
=================================================
	constructor
=================================================
*/
	VulkanFnToCpp2::VulkanFnToCpp2 (const FS::path &outputFolder, const ConverterConfig &cfg) :
		_folder{ outputFolder },
		_shaderFolder{ FS::path{outputFolder}.append("shaders") },
		_group{ cfg.divideByCmdBuffers },
		_compileConvertedCode{ cfg.compile }
	{
		if ( cfg.cleanOutputFolder )
		{
			FS::remove_all( _folder );
		}

		FS::create_directories( _folder );
		FS::create_directories( _shaderFolder );
	}

/*
=================================================
	destructor
=================================================
*/
	VulkanFnToCpp2::~VulkanFnToCpp2 ()
	{
	}
	
/*
=================================================
	_IsSwapchainImage
=================================================
*/
	bool  VulkanFnToCpp2::_IsSwapchainImage (VkResourceID id) const
	{
		for (auto img : _swapchainImages)
		{
			if ( img == id )
				return true;
		}
		return false;
	}

/*
=================================================
	Flush
=================================================
*/
	void VulkanFnToCpp2::Flush ()
	{
		CHECK( before.empty() );
		CHECK( result.empty() );

		for (auto& cmdbuf : _cmdBuffers)
		{
			CHECK( cmdbuf.second.before.empty() );
			CHECK( cmdbuf.second.str.empty() );
		}

		_cmdBuffers.clear();
		_cmdPools.clear();
		_queues.clear();
		_queueFamilies.clear();

		// resource ids
		{
			String	str;
			str << "#include \"VApp.h\"\n\n"
				<< "struct R\n{\n";
			remapper.GetResourceIDs( "\t", INOUT str );
			str << "};\n";
			
			remapper.ReplaceNames( INOUT str );

			FileWStream  file{ FS::path{_folder}.append( "Resources.h" )};
			CHECK( file.IsOpen() );
			CHECK( file.Write( str ));
			
			FG_LOGI( "file 'Resources.h' has been saved" );
		}

		// initialization
		{
			_initSrc =
				"#include \"Resources.h\"\n\n"s +
				"extern void Initialize (const VApp &app)\n{\n"s +
					_initSrc + "\n\n" +
					"\t// all upload and layout transition commands recorded here and will be executed in 'BeginFrame()' method\n" +
					_initFrameSrc + "\n}\n";
			
			remapper.ReplaceNames( INOUT _initSrc );

			FileWStream  file{ FS::path{_folder}.append( "Initialization.cpp" )};
			CHECK( file.IsOpen() );
			CHECK( file.Write( _initSrc ));
			
			FG_LOGI( "file 'Initialization.cpp' has been saved" );
		}

		// frame
		{
			_frameSrc =
				"#include \"Resources.h\"\n\n" +
				_frameSrcBefore + "\n\n" +
				"extern void Frame (const VApp &app)\n{\n" +
					_frameSrc + "}\n\n" +
				"extern void ResetFrame (const VApp &app)\n{\n" +
					_frameResetSrc + "}\n";
			
			remapper.ReplaceNames( INOUT _frameSrc );

			FileWStream  file{ FS::path{_folder}.append( "Frame.cpp" )};
			CHECK( file.IsOpen() );
			CHECK( file.Write( _frameSrc ));
			
			FG_LOGI( "file 'Frame.cpp' has been saved" );
		}

		// main
		{
			String	content_folder = FS::path{_contentFolder}.replace_extension("zip").string();
			FindAndReplace( INOUT content_folder, "\\", "/" );

			String	shader_folder = _shaderFolder.string();
			FindAndReplace( INOUT shader_folder, "\\", "/" );

			uint64_t	img_uid		= remapper.GetAliveResourceUID( VK_OBJECT_TYPE_IMAGE, _presentedImage );
			const auto&	img_info	= _imageMap[img_uid];

			_globalSrcBefore
				<< "\nint main ()\n{\n\tVApp  app;\n\n"
				<< "\tapp.SetShaderFolder( \"" << shader_folder << "\" );\n"
				<< "\tapp.SetContentFolder( \"" << content_folder << "\" );\n\n"
				<< remapper.GetResourceCount() << '\n';

			_globalSrcAfter
				<< "\tInitialize( app );\n\n"
				<< "\tfor (uint i = 0;; ++i)\n"
				<< "\t{\n"
				<< "\t	FG_LOGI( \"frame: \" + std::to_string(i) );\n"
				<< "\t	if ( not app.BeginFrame() )\n"
				<< "\t		break;\n"
				<< "\t	Frame( app );\n"
				<< "\t	app.EndFrame( EQueueFamily(" << ToString(img_info.lastQueue) << ") );\n"	// TODO: remap queue family
				<< "\t	ResetFrame( app );\n"
				<< "\t}\n\n"
				<< "\tFG_LOGI( \"finished, press any key to exit...\" );\n"
				<< "\tstd::cin.ignore();\n"
				<< "\tapp.Destroy();\n"
				<< "}\n";
			
			remapper.ReplaceNames( INOUT _globalSrcAfter );

			FileWStream  file{ FS::path{_folder}.append( "main.cpp" )};
			CHECK( file.IsOpen() );
			CHECK( file.Write( _globalSrcBefore ));
			CHECK( file.Write( _globalSrcAfter ));
			
			FG_LOGI( "file 'main.cpp' has been saved" );
		}

		// cmake
		{
			String	str;
			String	app_name = "\"VkPlayer\"";

			str << "cmake_minimum_required( VERSION 3.10.0 FATAL_ERROR )\n\n"
				<< "file( GLOB CPP_SOURCES \"*.*\" )\n"
				<< "file( GLOB SHADER_SOURCES \"shaders/*.*\" )\n"
				<< "source_group( TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${CPP_SOURCES} )\n"
				<< "source_group( TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SHADER_SOURCES} )\n"
				<< "add_executable( " << app_name << " ${CPP_SOURCES} ${SHADER_SOURCES} )\n";
			
			str << "set( RDE_FRAMEGRAPH_PATH \"" << RDE_FRAMEGRAPH_PATH << "\" CACHE \"\" INTERNAL FORCE )\n"
				<< "include( \"" << RDE_SOURCE_PATH << "/cmake/attach_fg.cmake\" )\n"
				<< "add_subdirectory( \"" << RDE_SOURCE_PATH << "/external/miniz\" \"miniz\" )\n"
				<< "add_subdirectory( \"" << RDE_SOURCE_PATH << "/application\" \"application\" )\n"
				<< "target_link_libraries( " << app_name << " \"STL\" \"VulkanLoader\" \"Framework\" \"Application\" )\n"
				<< "if (MSVC)\n"
				<< "	set_property( DIRECTORY PROPERTY VS_STARTUP_PROJECT \"VkPlayer\" )\n"
				<< "	set_target_properties( " << app_name << " PROPERTIES LINK_FLAGS \"/STACK:10000000,10000000\" )\n"
				<< "endif ()\n";
			
			FileWStream  file{ FS::path{_folder}.append( "CMakeLists.txt" )};
			CHECK( file.IsOpen() );
			CHECK( file.Write( str ));

			FG_LOGI( "file 'CMakeLists.txt' has been saved" );
		}

		_initSrc.clear();
		_initFrameSrc.clear();
		_globalSrcBefore.clear();
		_globalSrcAfter.clear();
		_frameSrcBefore.clear();
		_frameSrc.clear();
		_frameResetSrc.clear();

		_captureStarted = false;

		if ( _compileConvertedCode )
		{
			_CompileSource();
		}
	}
	
/*
=================================================
	Execute
=================================================
*/
	static bool Execute (StringView command, uint timeoutMS)
	{
		char	buf[MAX_PATH] = {};
		::GetSystemDirectoryA( buf, UINT(CountOf(buf)) );
		
		String		command_line;
		command_line << '"' << buf << "\\cmd.exe\" /C " << command;

		STARTUPINFOA			startup_info = {};
		PROCESS_INFORMATION		proc_info	 = {};
		
		bool process_created = ::CreateProcessA(
			NULL,
			command_line.data(),
			NULL,
			NULL,
			FALSE,
			CREATE_NO_WINDOW,
			NULL,
			NULL,
			OUT &startup_info,
			OUT &proc_info
		);

		if ( not process_created )
			return false;

		if ( ::WaitForSingleObject( proc_info.hThread, timeoutMS ) != WAIT_OBJECT_0 )
			return false;
		
		DWORD process_exit;
		::GetExitCodeProcess( proc_info.hProcess, OUT &process_exit );
		return true;
	}
	
/*
=================================================
	_CompileSource
=================================================
*/
	bool VulkanFnToCpp2::_CompileSource () const
	{
#	ifdef PLATFORM_WINDOWS
		// find VS version
		const String	vs_devenv{ RDE_VS_DEVENV_EXE };
		String			vs_ver;

		if ( vs_devenv.find( "/2019/" ) != String::npos )
			vs_ver = "\"Visual Studio 16 2019\"";
		else
		if ( vs_devenv.find( "/2017/" ) != String::npos )
			vs_ver = "\"Visual Studio 15 2017 Win64\"";
		else
		{
			FG_LOGI( "Can't find Visual Studio compiler, cancel building" );
			return false;
		}

		FS::path	build_folder = FS::path{_folder}.append("build");

		FS::create_directories( build_folder );

		FG_LOGI( "Build source..." );

		CHECK_ERR( Execute( "cd \""s << build_folder.string() << "\" && cmake -G " << vs_ver << " .. && cmake --build . --config Debug", 60*60'000 ));

		const FS::path	exe_path = FS::path{_folder}.append("build").append("Debug").append("VkPlayer.exe");

		if ( FS::exists( exe_path ))
		{
			FG_LOGI( "Successfully builded to '"s << exe_path.string() << "'" );
		}
		else
		{
			FG_LOGI( "Failed to build exported source." );
		}

		return true;
#	else
		return false;
#	endif
	}

/*
=================================================
	ResetToInitial
=================================================
*/
	void VulkanFnToCpp2::ResetToInitial ()
	{
		// reset fences
		{
			for (auto initial : _initialySignaledFences)
			{
				if ( _signaledFences.erase( initial ))
					continue;

				// TODO: set signaled state
				CHECK(false);
			}

			String	str;
			for (auto fence : _signaledFences)
			{
				str << indent << "\t" << remapper.GetAliveResource( VK_OBJECT_TYPE_FENCE, fence )
					<< (fence == *(--_signaledFences.end()) ? "\n" : ",\n");
			}

			if ( str.size() )
			{
				_frameResetSrc << "\t{\n"
					<< indent << "const VkFence fences[] = {\n" << str
					<< indent << "};\n\n"
					<< indent << "VK_CALL( app.vkWaitForFences( \n"
					<< indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, _vkLogicalDevice ) << ",\n"
					<< indent << "		/*fenceCount*/ " << IntToString(uint(_signaledFences.size())) << ",\n"
					<< indent << "		/*pFences*/ fences,\n"
					<< indent << "		/*waitAll*/ true,\n"
					<< indent << "		/*timeout*/ " << IntToString(uint64_t(UMax)) << " ));\n"
					<< "\t}\n";
			}
		
			_signaledFences = _initialySignaledFences;
		}

		// reset semaphores
		if ( _signaledSemaphores.size() )
		{
			_frameResetSrc
				<< "\t{\n"
				<< indent << "const VkSemaphore wait_semaphores[] = {\n";

			for (auto& sem : _signaledSemaphores)
			{
				_frameResetSrc
					<< indent << "\t" << remapper.GetAliveResource( VK_OBJECT_TYPE_SEMAPHORE, sem )
					<< (sem == *(--_signaledSemaphores.end()) ? "\n" : ",\n");
			}
			_frameResetSrc << indent << "};\n\n";

			_frameResetSrc << indent << "const VkPipelineStageFlags wait_dst_stages[] = {\n";
			for (size_t i = 0; i < _signaledSemaphores.size(); ++i)
			{
				_frameResetSrc
					<< indent << "\tVK_PIPELINE_STAGE_ALL_COMMANDS_BIT"
					<< (i+1 == _signaledSemaphores.size() ? "\n" : ",\n");
			}
			_frameResetSrc << indent << "};\n\n";
			
			VkQueue	queue = VK_NULL_HANDLE;
			for (auto& q : _queues)
			{
				if ( q.second == _graphicsQueue )
				{
					queue = q.first;
					break;
				}
			}
			CHECK_ERR( queue, void());

			_frameResetSrc
				<< indent << "VkSubmitInfo submit_info = {};\n"
				<< indent << "submit_info.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;\n"
				<< indent << "submit_info.waitSemaphoreCount = " << IntToString(uint(_signaledSemaphores.size())) << ";\n"
				<< indent << "submit_info.pWaitSemaphores = wait_semaphores;\n"
				<< indent << "submit_info.pWaitDstStageMask = wait_dst_stages;\n"

				<< indent << "VK_CALL( app.vkQueueSubmit( \n"
				<< indent << "		/*queue*/ " << remapper.GetAliveResource( VK_OBJECT_TYPE_QUEUE, VkResourceID(queue) ) << ",\n"
				<< indent << "		/*submitCount*/ 1,\n"
				<< indent << "		/*pSubmits*/ &submit_info,\n"
				<< indent << "		/*fence*/ VK_NULL_HANDLE ));\n"
				<< "\t}\n";

			_signaledSemaphores.clear();
		}

		// reset events
		if ( _signaledEvents.size() )
		{
			_frameResetSrc << "\t{\n";

			for (auto& ev : _signaledEvents)
			{
				_frameResetSrc
					<< indent << "VK_CALL( app.vkResetEvent( \n"
					<< indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, _vkLogicalDevice ) << ",\n"
					<< indent << "		/*event*/ " << remapper( VK_OBJECT_TYPE_EVENT, ev ) << " ));\n";
			}

			_frameResetSrc << "\t}\n";

			_signaledEvents.clear();
		}
	}
	
/*
=================================================
	RemoveUnusedSwapchainImages
=================================================
*/
	void VulkanFnToCpp2::RemoveUnusedSwapchainImages ()
	{
		for (auto& img : _swapchainImages)
		{
			if ( _presentedImage == img )
				continue;

			const String	name = remapper.GetResourceName( VK_OBJECT_TYPE_IMAGE, img );

			size_t	pos = _initSrc.find( name );

			if ( pos == String::npos )
				continue;

			StringParser::ToBeginOfLine( _initSrc, INOUT pos );

			_initSrc.insert( pos, "//" );

			StringParser::ToEndOfLine( _initSrc, INOUT pos );

			_initSrc.insert( pos, "  // unused" );
		}
	}

/*
=================================================
	FlushCommandBuffer
=================================================
*/
	void VulkanFnToCpp2::FlushCommandBuffer (VkCommandBuffer cmdbuf)
	{
		if ( _group )
			_cmdBuffers[cmdbuf].str << before << result;
		else
			_frameSrc << before << result;

		before.clear();
		result.clear();
	}
	
/*
=================================================
	FlushQueue
=================================================
*/
	void VulkanFnToCpp2::FlushQueue (VkQueue)
	{
		_frameSrc << before << result;
		
		before.clear();
		result.clear();
	}

/*
=================================================
	FlushGlobal
=================================================
*/
	void VulkanFnToCpp2::FlushGlobal ()
	{
		if ( not _captureStarted )
			_initSrc << before << result;
		else
			_frameSrc << before << result;

		before.clear();
		result.clear();
	}
	
/*
=================================================
	OnOpenCapture
=================================================
*/
	void VulkanFnToCpp2::OnOpenCapture (const FS::path &filename)
	{
		_contentFolder = filename;
	}
	
/*
=================================================
	InitialImageContent
=================================================
*/
	static String  ContentIDtoName (ContentID contentId)
	{
		const size_t	len = 6;
		String			str = ToString( uint(contentId) );

		for (size_t i = str.length(); i < len; ++i) {
			str = "0" + str;
		}
		return '"' + str + '"';
	}
	
/*
=================================================
	AddInitialLayouts
=================================================
*/
	void VulkanFnToCpp2::AddInitialLayouts ()
	{
		for (auto& layout : _initialLayouts)
		{
			const auto	img = VkResourceID(layout.second.imageId);

			if ( not remapper.IsResourceAlive( VK_OBJECT_TYPE_IMAGE, img, UMax ))
			{
				FG_LOGD( "AddInitialLayouts: skip unknown image "s << ToString(uint64_t(layout.second.imageId)) );
				continue;
			}

			uint2		range = remapper.GetResourceLiveRange( VK_OBJECT_TYPE_IMAGE, img, UMax );

			if ( range.x == range.y )
			{
				FG_LOGD( "AddInitialLayouts: skip unused image "s << ToString(uint64_t(layout.second.imageId)) );
				continue;
			}

			if ( _IsSwapchainImage( img ) and _presentedImage != img )
				continue;

			uint64_t	index	= remapper.GetAliveResourceUID( VK_OBJECT_TYPE_IMAGE, img );
			CHECK_ERR( index != UMax, void());
			
			auto&		info	= _imageMap[index];

			if ( info.initialContent != Default )
			{
				CHECK( info.handle );

				_initFrameSrc
					<< "\t{\n"
					<< _ConvertLayouts( layout.second )
					<< "\t	app.UploadImage( " << remapper.GetResourceName( VK_OBJECT_TYPE_IMAGE, img ) << ", "
						<< "EQueueFamily(" << IntToString(layout.second.queueFamilyIndex) << "), "
						<< "barriers, CountOf(barriers), "
						<< ContentIDtoName( info.initialContent ) << " );\n"
					<< "\t}\n";
			}
			else
			{
				_initFrameSrc
					<< "\t{\n"
					<< _ConvertLayouts( layout.second )
					<< "\t	app.SetImageInitialLayout( " << remapper.GetResourceName( VK_OBJECT_TYPE_IMAGE, img ) << ", "
						<< "EQueueFamily(" << IntToString(layout.second.queueFamilyIndex) << "), "
						<< "barriers, CountOf(barriers) );\n"
					<< "\t}\n";
			}
		}
		_initialLayouts.clear();
	}
	
/*
=================================================
	InitDescriptorSets
=================================================
*/
	void VulkanFnToCpp2::InitDescriptorSets ()
	{
		for (auto&[ds, info] : _initialDS)
		{
			if ( info.bindCount == 0 )
				continue;

			auto&	slots = info.write;

			nameSer.Clear();
			remapper.SetCurrentPos( UMax );
			before << "\t{\n";
		
			const String arr_name = nameSer.MakeUnique( slots.data(), "descriptorWrites"s, "writeDescriptorSet"s );
			before << indent << "VkWriteDescriptorSet  " << arr_name << "[" << IntToString(uint(slots.size())) << "] = {};\n";
		
			for (size_t i = 0; i < slots.size(); ++i) {
				Serialize2_VkWriteDescriptorSet( &slots[i], String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
			}

			result << indent << "app.vkUpdateDescriptorSets( \n";
			result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, _vkLogicalDevice ) << ",\n";
			result << indent << "		/*descriptorWriteCount*/ " << IntToString(uint(slots.size())) << ",\n";
			result << indent << "		/*pDescriptorWrites*/ " << nameSer.Get( slots.data() ) << ",\n";
			result << indent << "		/*descriptorCopyCount*/ 0,\n";
			result << indent << "		/*pDescriptorCopies*/ null );\n";
			result << "\t}\n";
			
			_initSrc << before << result;
			before.clear();
			result.clear();
		}

		_initialDS.clear();
		_initialDSAllocator.Discard();
	}

/*
=================================================
	InitialImageContent
=================================================
*/
	void VulkanFnToCpp2::InitialImageContent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkImage imageId,
											  bool isSparse, BytesU contentSize, ContentID contentId)
	{
		CHECK( not _captureStarted );
		CHECK( not isSparse );

		uint64_t	index	= remapper.GetAliveResourceUID( VK_OBJECT_TYPE_IMAGE, VkResourceID(imageId) );
		CHECK_ERR( index != UMax, void());

		auto&		info	= _imageMap[index];
		CHECK( info.handle );

		info.initialContent = contentId;

		_initSrc << "\tapp.LoadImage( " << ContentIDtoName( contentId ) << ", "
			<< "{" << IntToString(info.createInfo.extent.width) << ", " << IntToString(info.createInfo.extent.height) << ", " << IntToString(info.createInfo.extent.depth) << "}, "
			<< IntToString( info.createInfo.arrayLayers ) << ", "
			<< Serialize_VkSampleCountFlagBits( info.createInfo.samples ) << ", "
			<< IntToString( info.createInfo.mipLevels ) << ", "
			<< Serialize_VkFormat( info.createInfo.format ) << ", "
			<< Serialize_VkImageAspectFlags( info.aspectMask ) << ", "
			<< ToString( size_t(contentSize) ) << "_b );\n";
		
		CHECK( info.initialQueue != Default );
		CHECK( EnumEq( info.createInfo.usage, VK_IMAGE_USAGE_TRANSFER_DST_BIT ));
	}
	
/*
=================================================
	_ConvertLayouts
=================================================
*/
	String  VulkanFnToCpp2::_ConvertLayouts (const ImageLayouts &layouts)
	{
		String	str, str1, str2;

		str << indent << "VkImageMemoryBarrier barriers[" << ToString(layouts.subresourceStates.size()) << "];\n";

		for (size_t i = 0; i < layouts.subresourceStates.size(); ++i)
		{
			const auto&				src	= layouts.subresourceStates[i];
			VkImageMemoryBarrier	dst = {};

			CHECK( src.dstQueueFamilyIndex == VK_QUEUE_FAMILY_IGNORED or src.dstQueueFamilyIndex == layouts.queueFamilyIndex );

			dst.sType				= VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
			dst.srcQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
			dst.dstQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
			dst.image				= VkImage(layouts.imageId);
			dst.oldLayout			= VK_IMAGE_LAYOUT_UNDEFINED;
			dst.newLayout			= src.newLayout;
			dst.subresourceRange	= src.subresourceRange;

			if ( dst.newLayout == VK_IMAGE_LAYOUT_PRESENT_SRC_KHR or dst.newLayout == VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR )
				dst.newLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;

			Serialize2_VkImageMemoryBarrier( &dst, "barriers["s << ToString(i) << "]", nameSer, remapper, indent, OUT str1, OUT str2 );

			str << str2 << str1;
			str1.clear();
			str2.clear();
		}

		return str;
	}

/*
=================================================
	InitialMemoryContent
=================================================
*/
	void VulkanFnToCpp2::InitialMemoryContent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDeviceMemory memId,
											   bool isSparse, BytesU contentSize, ContentID contentId)
	{
		CHECK( not _captureStarted );
		CHECK( not isSparse );
		
		uint64_t	index	= remapper.GetAliveResourceUID( VK_OBJECT_TYPE_DEVICE_MEMORY, VkResourceID(memId) );
		CHECK_ERR( index != UMax, void());

		auto&		info	= _memoryMap[index];
		String		name	= remapper.GetAliveResource( VK_OBJECT_TYPE_DEVICE_MEMORY, VkResourceID(memId) );
		
		CHECK( info.handle );

		info.initialContent = contentId;
		
		if ( info.buffers.empty() )
			return;

		_initSrc << "\tapp.LoadBuffer( " << ContentIDtoName( contentId ) << ", " << ToString( size_t(contentSize) ) << "_b );\n";

		for (auto* buf : info.buffers)
		{
			CHECK( buf->initialQueue != Default );
			CHECK( EnumEq( buf->createInfo.usage, VK_BUFFER_USAGE_TRANSFER_DST_BIT ));

			buf->initialContent = contentId;

			_initFrameSrc
				<< "\tapp.UploadBuffer( " << remapper.GetResourceName( VK_OBJECT_TYPE_BUFFER, VkResourceID(buf->handle) ) << ", "
				<< ToString( buf->memOffset ) << "_b, "
				<< ToString( buf->createInfo.size ) << "_b, "
				<< "EQueueFamily(" << IntToString( uint(buf->initialQueue) ) << "), "
				<< ContentIDtoName( contentId ) << " );\n";
		}
	}

/*
=================================================
	InitialDescriptorSetContent
=================================================
*/
	void VulkanFnToCpp2::InitialDescriptorSetContent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, ArrayView<VkWriteDescriptorSet> slots)
	{
		CHECK( not _captureStarted );

		auto&	dst_slots = _initialDS[ slots.front().dstSet ];

		for (auto& src : slots)
		{
			CHECK( src.dstSet == slots.front().dstSet );

			auto&	dst = dst_slots.write.emplace_back();
			dst = src;

			if ( src.pBufferInfo )
			{
				dst.pBufferInfo = _initialDSAllocator.Alloc<VkDescriptorBufferInfo>( dst.descriptorCount );
				std::memcpy( const_cast<VkDescriptorBufferInfo *>(dst.pBufferInfo), src.pBufferInfo, sizeof(VkDescriptorBufferInfo)*dst.descriptorCount );
			}

			if ( src.pImageInfo )
			{
				dst.pImageInfo = _initialDSAllocator.Alloc<VkDescriptorImageInfo>( dst.descriptorCount );
				std::memcpy( const_cast<VkDescriptorImageInfo *>(dst.pImageInfo), src.pImageInfo, sizeof(VkDescriptorImageInfo)*dst.descriptorCount );
			}

			if ( src.pTexelBufferView )
			{
				dst.pTexelBufferView = _initialDSAllocator.Alloc<VkBufferView>( dst.descriptorCount );
				std::memcpy( const_cast<VkBufferView *>(dst.pTexelBufferView), src.pTexelBufferView, sizeof(VkBufferView)*dst.descriptorCount );
			}
		}
	}
	
/*
=================================================
	BeginningOfCapture
=================================================
*/
	void VulkanFnToCpp2::BeginningOfCapture (uint chunkIndex, uint64_t threadID, uint64_t timestamp, ArrayView<ImageLayouts> imageLayouts)
	{
		_captureStarted = true;

		_globalSrcBefore
			<< "#include \"Resources.h\"\n\n"
			<< "extern void Initialize (const VApp &app);\n"
			<< "extern void Frame (const VApp &app);\n"
			<< "extern void ResetFrame (const VApp &app);\n";

		_initialLayouts.clear();

		for (auto& layout : imageLayouts) {
			_initialLayouts[ VkResourceID(layout.imageId) ] = layout;
		}
	}
	
/*
=================================================
	EndOfCapture
=================================================
*/
	void VulkanFnToCpp2::EndOfCapture (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkResourceID presentedImage)
	{
		CHECK( _captureStarted );
		CHECK( _IsSwapchainImage( presentedImage ));

		_presentedImage = presentedImage;

		RemoveUnusedSwapchainImages();
		AddInitialLayouts();
		InitDescriptorSets();
		ResetToInitial();
		Flush();
	}

/*
=================================================
	EnumeratePhysicalDevices
=================================================
*/
	void VulkanFnToCpp2::EnumeratePhysicalDevices (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkInstance instance, uint32_t PhysicalDeviceIndex, VkPhysicalDevice PhysicalDevice,
													uint32_t memIdxMap[VK_MAX_MEMORY_TYPES], const VkPhysicalDeviceProperties &physProps,
													const VkPhysicalDeviceMemoryProperties &memProps, const VkPhysicalDeviceFeatures &physFeatures,
													uint32_t queueCount, VkQueueFamilyProperties queueProps[])
	{
		_vkInstance	= instance;
		_apiVersion	= VK_MAKE_VERSION( VK_VERSION_MAJOR(physProps.apiVersion), VK_VERSION_MINOR(physProps.apiVersion), 0 );

		auto&	props = _deviceProps[PhysicalDevice];

		props.memProps		= memProps;
		props.physProps		= physProps;
		props.physFeatures	= physFeatures;

		std::memcpy( OUT props.memIdxMap, memIdxMap, sizeof(props.memIdxMap) );

		if ( not remapper.IsResourceAlive( VK_OBJECT_TYPE_INSTANCE, VkResourceID(instance), chunkIndex ))
			CHECK( remapper.CreateResource( VK_OBJECT_TYPE_INSTANCE, VkResourceID(instance), chunkIndex ));

		CHECK( remapper.CreateResource( VK_OBJECT_TYPE_PHYSICAL_DEVICE, VkResourceID(PhysicalDevice), chunkIndex ));

		props.queueProps.assign( &queueProps[0], &queueProps[queueCount] );
	}
	
/*
=================================================
	CreateDevice
=================================================
*/
	void VulkanFnToCpp2::CreateDevice (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkPhysicalDevice physicalDevice,
									   const VkDeviceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDevice * pDevice)
	{
		CHECK_FATAL( _vkInstance );
		CHECK_FATAL( not _vkPhysicalDevice );
		CHECK_FATAL( not _vkLogicalDevice );
		CHECK_FATAL( pDevice );

		_vkPhysicalDevice	= physicalDevice;
		_vkLogicalDevice	= *pDevice;

		auto&	dprops = _deviceProps[_vkPhysicalDevice];
		auto&	qprops = dprops.queueProps;

		CHECK( remapper.CreateResource( VK_OBJECT_TYPE_DEVICE, VkResourceID(*pDevice), chunkIndex ));
		
		_globalSrcAfter << "\tCHECK( app.CreateWindow( 1024, 768, \"Player\" ));\n\n";

		_globalSrcAfter << "\t{\n"
			<< "\t\tconst VApp::QueueInfo queues[] = {\n";

		_graphicsQueue = Default;
		for (uint i = 0; i < pCreateInfo->queueCreateInfoCount; ++i)
		{
			auto&	q = pCreateInfo->pQueueCreateInfos[i];

			for (uint j = 0; j < q.queueCount; ++j)
			{
				_globalSrcAfter << "\t\t\t{ "
					<< HexToString((q.queueFamilyIndex << 16) | j) << ", "
					<< Serialize_VkDeviceQueueCreateFlags( q.flags ) << ", "
					<< Serialize_VkQueueFlags( qprops[q.queueFamilyIndex].queueFlags ) << ", "
					<< FloatToString( q.pQueuePriorities[j] )
					<< " },\n";

				if ( _graphicsQueue == Default and EnumEq( qprops[q.queueFamilyIndex].queueFlags, VK_QUEUE_GRAPHICS_BIT ))
					_graphicsQueue = EQueueFamily(q.queueFamilyIndex);
			}
		}
		_globalSrcAfter.erase( _globalSrcAfter.end()-2, _globalSrcAfter.end() );	// remove ',\n'
		_globalSrcAfter << "\n\t\t};\n\n";

		_globalSrcAfter << "\t\tconst char* extensions[] = {\n";

		for (uint i = 0; i < pCreateInfo->enabledExtensionCount; ++i)
		{
			_globalSrcAfter << "\t\t\t\"" << pCreateInfo->ppEnabledExtensionNames[i] << '"' << ((i+1 < pCreateInfo->enabledExtensionCount) ? ", " : "") << '\n';
		}
		_globalSrcAfter << "\t\t};\n\n";

		_globalSrcAfter
			<< "\t\tCHECK( app.CreateDevice(\n"
			<< "\t\t\t" << remapper.GetResourceName( VK_OBJECT_TYPE_INSTANCE, VkResourceID(_vkInstance) ) << ",\n"
			<< "\t\t\t" << remapper.GetResourceName( VK_OBJECT_TYPE_PHYSICAL_DEVICE, VkResourceID(_vkPhysicalDevice) ) << ",\n"
			<< "\t\t\t" << remapper.GetResourceName( VK_OBJECT_TYPE_DEVICE, VkResourceID(_vkLogicalDevice) ) << ",\n"
			<< "\t\t	\"" << dprops.physProps.deviceName << "\",\n"
			<< "\t\t	VK_MAKE_VERSION( " << ToString(VK_VERSION_MAJOR(_apiVersion)) << ", " << ToString(VK_VERSION_MINOR(_apiVersion)) << ", 0 ),\n"
			<< "\t\t	queues,\n"
			<< "\t\t	VulkanDevice::GetRecomendedInstanceLayers(),\n"
			<< "\t\t	VulkanDevice::GetRecomendedInstanceExtensions(),\n"
			<< "\t\t	extensions ));\n"
			<< "\t}\n"
			<< "\tapp.SetObjectName( " << remapper.GetResourceName( VK_OBJECT_TYPE_DEVICE, VkResourceID(_vkLogicalDevice) )
				<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_DEVICE, VkResourceID(_vkLogicalDevice) ) << "\" );\n";
	}
	
/*
=================================================
	CreateSwapchainKHR
=================================================
*/
	void VulkanFnToCpp2::CreateSwapchainKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device,
											 const VkSwapchainCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain)
	{
		CHECK( remapper.CreateResource( VK_OBJECT_TYPE_SWAPCHAIN_KHR, VkResourceID(*pSwapchain), chunkIndex ));
		CHECK( pCreateInfo->imageArrayLayers == 1 );
		CHECK( pCreateInfo->flags == 0 );
		CHECK( pCreateInfo->imageSharingMode == VK_SHARING_MODE_EXCLUSIVE );
		CHECK( _swapchainImages.empty() );

		_swapchainFormat	= pCreateInfo->imageFormat;
		_swapchainUsage		= pCreateInfo->imageUsage;
		_swapchainDim		= { pCreateInfo->imageExtent.width, pCreateInfo->imageExtent.height };

		// validate 

		_globalSrcAfter
			<< "\t{\n"
			<< "\t\tCHECK( app.CreateSwapchain(\n"
			//<< "\t\t	" << remapper.GetResourceName( VK_OBJECT_TYPE_SWAPCHAIN_KHR, VkResourceID(*pSwapchain) ) << ",\n"
			//<< "\t\t	uint2{ " << IntToString( pCreateInfo->imageExtent.width ) << ", " << IntToString( pCreateInfo->imageExtent.height ) << " },\n"
			<< "\t\t	" << Serialize_VkFormat( pCreateInfo->imageFormat ) << ",\n"
			<< "\t\t	" << Serialize_VkColorSpaceKHR( pCreateInfo->imageColorSpace ) << ",\n"
			<< "\t\t	" << IntToString( pCreateInfo->minImageCount ) << ",\n"
			<< "\t\t	" << Serialize_VkSurfaceTransformFlagBitsKHR( pCreateInfo->preTransform ) << ",\n"
			<< "\t\t	" << Serialize_VkPresentModeKHR( pCreateInfo->presentMode ) << ",\n"
			<< "\t\t	" << Serialize_VkCompositeAlphaFlagBitsKHR( pCreateInfo->compositeAlpha ) << ",\n"
			<< "\t\t	" << Serialize_VkImageUsageFlags( VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT ) << " ));\n"
			<< "\t}\n\n";
	}

/*
=================================================
	GetDeviceQueue
=================================================
*/
	void VulkanFnToCpp2::GetDeviceQueue (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue)
	{
		CHECK( remapper.CreateResource( VK_OBJECT_TYPE_QUEUE, VkResourceID(*pQueue), chunkIndex ));

		{
			nameSer.Clear();
			remapper.SetCurrentPos( chunkIndex );

			result << "\tapp.MapQueueID( "
				<< HexToString( (queueFamilyIndex << 16) | queueIndex ) << ", "
				<< remapper.GetResourceName( VK_OBJECT_TYPE_QUEUE, VkResourceID(*pQueue) )
				<< " );\n";

			result << "\tapp.SetObjectName( "
				<< remapper.GetResourceName( VK_OBJECT_TYPE_QUEUE, VkResourceID(*pQueue) )
				<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_QUEUE, VkResourceID(*pQueue) )
				<< "\" );\n";

			FlushGlobal();
		}

		_queues.insert({ *pQueue, EQueueFamily(queueFamilyIndex) });

		auto[iter, inserted] = _queueFamilies.insert({ EQueueFamily(queueFamilyIndex), QueueFamilyData{} });

		if ( inserted ) {
			iter->second.familyIndex = queueFamilyIndex;
			iter->second.dev		 = device;
		}
	}
	
/*
=================================================
	GetDeviceQueue2
=================================================
*/
	void VulkanFnToCpp2::GetDeviceQueue2 (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue)
	{
		CHECK( remapper.CreateResource( VK_OBJECT_TYPE_QUEUE, VkResourceID(*pQueue), chunkIndex ));

		{
			nameSer.Clear();
			remapper.SetCurrentPos( chunkIndex );

			result << "\tapp.MapQueueID( "
				<< HexToString( (pQueueInfo->queueFamilyIndex << 16) | pQueueInfo->queueIndex ) << ", "
				<< remapper.GetResourceName( VK_OBJECT_TYPE_QUEUE, VkResourceID(*pQueue) )
				<< " );\n";
			
			result << "\tapp.SetObjectName( "
				<< remapper.GetResourceName( VK_OBJECT_TYPE_QUEUE, VkResourceID(*pQueue) )
				<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_QUEUE, VkResourceID(*pQueue) )
				<< "\" );\n";

			FlushGlobal();
		}

		_queues.insert({ *pQueue, EQueueFamily(pQueueInfo->queueFamilyIndex) });

		auto[iter, inserted] = _queueFamilies.insert({ EQueueFamily(pQueueInfo->queueFamilyIndex), QueueFamilyData{} });

		if ( inserted ) {
			iter->second.familyIndex = pQueueInfo->queueFamilyIndex;
			iter->second.dev		 = device;
		}
	}
	
/*
=================================================
	CreateCommandPool
=================================================
*/
	void VulkanFnToCpp2::CreateCommandPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkCommandPoolCreateInfo * pCreateInfo,
											const VkAllocationCallbacks *pAllocator, VkCommandPool * pCommandPool)
	{
		_cmdPools[*pCommandPool] = EQueueFamily(pCreateInfo->queueFamilyIndex);

		VulkanFnToCpp::CreateCommandPool( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pCommandPool );

		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_COMMAND_POOL, VkResourceID(*pCommandPool) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_COMMAND_POOL, VkResourceID(*pCommandPool) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	AllocateCommandBuffers
=================================================
*/
	void VulkanFnToCpp2::AllocateCommandBuffers (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device,
												 const VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers)
	{
		VulkanFnToCpp::AllocateCommandBuffers( chunkIndex, threadID, timestamp, device, pAllocateInfo, pCommandBuffers );
		
		for (uint i = 0; i < pAllocateInfo->commandBufferCount; ++i)
		{
			auto	iter = _cmdBuffers.insert_or_assign( pCommandBuffers[i], CmdBufferData{} ).first;

			iter->second.familyIndex = _cmdPools[pAllocateInfo->commandPool];
			
			result << "\tapp.SetObjectName( "
				<< remapper.GetResourceName( VK_OBJECT_TYPE_COMMAND_BUFFER, VkResourceID(pCommandBuffers[i]) )
				<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_COMMAND_BUFFER, VkResourceID(pCommandBuffers[i]) )
				<< "\" );\n";
		}
		FlushGlobal();
	}

/*
=================================================
	BeginCommandBuffer
=================================================
*/
	void VulkanFnToCpp2::BeginCommandBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo * pBeginInfo)
	{
		auto[iter, inserted] = _cmdBuffers.insert({ commandBuffer, CmdBufferData{} });

		const String	res_name = ToString(remapper.GetAliveResourceUID( VK_OBJECT_TYPE_COMMAND_BUFFER, VkResourceID(commandBuffer) ));

		iter->second.str << "extern void Queue" << ToString( iter->second.familyIndex ) << "_CmdBuffer"
						 << res_name << " (const VApp &app)\n{\n";
		
		_frameSrcBefore << "extern void Queue" << ToString( iter->second.familyIndex ) << "_CmdBuffer" << res_name << " (const VApp &app);\n";

		VulkanFnToCpp::BeginCommandBuffer( chunkIndex, threadID, timestamp, commandBuffer, pBeginInfo );
	}
	
/*
=================================================
	EndCommandBuffer
=================================================
*/
	void VulkanFnToCpp2::EndCommandBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer)
	{
		VulkanFnToCpp::EndCommandBuffer( chunkIndex, threadID, timestamp, commandBuffer );

		auto&	data = _cmdBuffers[commandBuffer];
		data.str << "}\n";
		
		const String	res_name = ToString(remapper.GetAliveResourceUID( VK_OBJECT_TYPE_COMMAND_BUFFER, VkResourceID(commandBuffer) ));

		const String	name	= "Queue"s << ToString( data.familyIndex ) << "_CmdBuffer" << res_name;

		_frameSrc << '\t' << name << "( app );\n\n";
		
		remapper.ReplaceNames( INOUT data.before );
		remapper.ReplaceNames( INOUT data.str );

		FileWStream  file{ FS::path{_folder}.append( name + ".cpp" )};
		CHECK_ERR( file.IsOpen(), void());
		CHECK_ERR( file.Write( StringView{"#include \"Resources.h\"\n\n"} ), void());
		CHECK_ERR( file.Write( data.before ), void());
		CHECK_ERR( file.Write( data.str ), void());

		FG_LOGI( "file '"s << name << ".cpp' has been saved" );

		data.str.clear();
		data.before.clear();
	}
	
/*
=================================================
	QueueSubmit
=================================================
*/
	void VulkanFnToCpp2::QueueSubmit (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, uint32_t submitCount, const VkSubmitInfo * pSubmits, VkFence fence)
	{
		if ( fence )
		{
			CHECK( not _signaledFences.erase( VkResourceID(fence) ));
			_signaledFences.insert( VkResourceID(fence) );
		}

		VkSubmitInfo*	new_submits = _allocator.Alloc<VkSubmitInfo>( submitCount );
		uint			count		= 0;

		for (uint i = 0; i < submitCount; ++i)
		{
			VkSemaphore*			wait_semaphores = pSubmits[i].waitSemaphoreCount ? _allocator.Alloc<VkSemaphore>( pSubmits[i].waitSemaphoreCount ) : null;
			VkPipelineStageFlags*	wait_dst_stages = pSubmits[i].waitSemaphoreCount ? _allocator.Alloc<VkPipelineStageFlags>( pSubmits[i].waitSemaphoreCount ) : null;
			uint					wait_count		= 0;

			for (uint j = 0; j < pSubmits[i].waitSemaphoreCount; ++j)
			{
				if ( _signaledSemaphores.erase( VkResourceID(pSubmits[i].pWaitSemaphores[j]) ))
				{
					wait_semaphores[wait_count] = pSubmits[i].pWaitSemaphores[j];
					wait_dst_stages[wait_count] = pSubmits[i].pWaitDstStageMask[j];
					++wait_count;
				}
				else
				{
					FG_LOGD( "QueueSubmit: removed semaphore "s << ToString( uint64_t(pSubmits[i].pWaitSemaphores[j]) ));
					result << indent << "// Removed semaphore "s << remapper.GetResourceName( VK_OBJECT_TYPE_SEMAPHORE, VkResourceID(pSubmits[i].pWaitSemaphores[j]) ) << "\n";
				}
			}
			
			for (uint j = 0; j < pSubmits[i].signalSemaphoreCount; ++j)
			{
				_signaledSemaphores.insert( VkResourceID(pSubmits[i].pSignalSemaphores[j]) );
			}

			new_submits[count] = pSubmits[i];
			new_submits[count].waitSemaphoreCount	= wait_count;
			new_submits[count].pWaitSemaphores		= wait_count ? wait_semaphores : null;
			new_submits[count].pWaitDstStageMask	= wait_count ? wait_dst_stages : null;
			++count;

			for (uint j = 0; j < pSubmits[i].commandBufferCount; ++j)
			{
				auto&	cmdbuf = _cmdBuffers[ pSubmits[i].pCommandBuffers[j] ];

				for (auto& ev : cmdbuf.waitingEvents)
				{
					if ( not _signaledEvents.erase( ev ))
					{
						result << indent << "VK_CALL( app.vkSetEvent( \n";
						result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, _vkLogicalDevice ) << ",\n";
						result << indent << "		/*event*/ " << remapper( VK_OBJECT_TYPE_EVENT, ev ) << " ));\n";
					}
				}
				cmdbuf.waitingEvents.clear();

				for (auto& ev : cmdbuf.signaledEvents) {
					_signaledEvents.insert( ev );
				}
				cmdbuf.signaledEvents.clear();
			}
		}

		VulkanFnToCpp::QueueSubmit( chunkIndex, threadID, timestamp, queue, count, new_submits, fence );

		_allocator.Discard();
	}
	
/*
=================================================
	QueueBindSparse
=================================================
*/
	void VulkanFnToCpp2::QueueBindSparse (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo * pBindInfo, VkFence fence)
	{
		if ( fence )
		{
			CHECK( not _signaledFences.erase( VkResourceID(fence) ));
			_signaledFences.insert( VkResourceID(fence) );
		}
		
		VkBindSparseInfo*	new_bind = _allocator.Alloc<VkBindSparseInfo>( bindInfoCount );
		uint				count	 = 0;

		for (uint i = 0; i < bindInfoCount; ++i)
		{
			VkSemaphore*	wait_semaphores = pBindInfo[i].waitSemaphoreCount ? _allocator.Alloc<VkSemaphore>( pBindInfo[i].waitSemaphoreCount ) : null;
			uint			wait_count		= 0;

			for (uint j = 0; j < pBindInfo[i].waitSemaphoreCount; ++j)
			{
				if ( _signaledSemaphores.erase( VkResourceID(pBindInfo[i].pWaitSemaphores[j]) ))
				{
					wait_semaphores[wait_count] = pBindInfo[i].pWaitSemaphores[j];
					++wait_count;
				}
				else
				{
					FG_LOGD( "QueueBindSparse: removed semaphore "s << ToString( uint64_t(pBindInfo[i].pWaitSemaphores[j]) ));
					result << indent << "// Removed semaphore "s << remapper.GetResourceName( VK_OBJECT_TYPE_SEMAPHORE, VkResourceID(pBindInfo[i].pWaitSemaphores[j]) ) << "\n";
				}
			}
			
			for (uint j = 0; j < pBindInfo[i].signalSemaphoreCount; ++j)
			{
				_signaledSemaphores.insert( VkResourceID(pBindInfo[i].pSignalSemaphores[j]) );
			}

			new_bind[count] = pBindInfo[i];
			new_bind[count].waitSemaphoreCount	= wait_count;
			new_bind[count].pWaitSemaphores		= wait_count ? wait_semaphores : null;
			++count;
		}

		VulkanFnToCpp::QueueBindSparse( chunkIndex, threadID, timestamp, queue, count, new_bind, fence );
	}
	
/*
=================================================
	CmdBeginRenderPass
=================================================
*/
	void VulkanFnToCpp2::CmdBeginRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer,
											 const VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents)
	{
		auto&	cmdbuf = _cmdBuffers[commandBuffer];
		
		CHECK( not cmdbuf.currRenderPass );
		cmdbuf.currRenderPass = pRenderPassBegin->renderPass;

		cmdbuf.before << "static void RenderPass" << ToString(cmdbuf.renderPassCount) << " (const VApp &app)\n{\n";
		cmdbuf.renderPassBegin = cmdbuf.str.size();

		VulkanFnToCpp::CmdBeginRenderPass( chunkIndex, threadID, timestamp, commandBuffer, pRenderPassBegin, contents );
	}
	
/*
=================================================
	CmdEndRenderPass
=================================================
*/
	void VulkanFnToCpp2::CmdEndRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer)
	{
		VulkanFnToCpp::CmdEndRenderPass( chunkIndex, threadID, timestamp, commandBuffer );

		auto&	cmdbuf = _cmdBuffers[commandBuffer];

		cmdbuf.before.append( cmdbuf.str.c_str() + cmdbuf.renderPassBegin, cmdbuf.str.length() - cmdbuf.renderPassBegin );
		cmdbuf.str.resize( cmdbuf.renderPassBegin );

		cmdbuf.before << "}\n\n";
		cmdbuf.str << "\tRenderPass" << ToString(cmdbuf.renderPassCount) << "( app );\n";

		CHECK( cmdbuf.currRenderPass );
		cmdbuf.currRenderPass = VK_NULL_HANDLE;
		cmdbuf.renderPassCount++;
	}
	
/*
=================================================
	CmdBeginRenderPass2KHR
=================================================
*/
	void VulkanFnToCpp2::CmdBeginRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer,
												 const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfoKHR * pSubpassBeginInfo)
	{
		auto&	cmdbuf = _cmdBuffers[commandBuffer];
		
		CHECK( not cmdbuf.currRenderPass );
		cmdbuf.currRenderPass = pRenderPassBegin->renderPass;
		
		cmdbuf.before << "static void RenderPass" << ToString(cmdbuf.renderPassCount) << " (const VApp &app)\n{\n";

		VulkanFnToCpp::CmdBeginRenderPass2KHR( chunkIndex, threadID, timestamp, commandBuffer, pRenderPassBegin, pSubpassBeginInfo );
	}
	
/*
=================================================
	CmdEndRenderPass2KHR
=================================================
*/
	void VulkanFnToCpp2::CmdEndRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, const VkSubpassEndInfoKHR * pSubpassEndInfo)
	{
		VulkanFnToCpp::CmdEndRenderPass2KHR( chunkIndex, threadID, timestamp, commandBuffer, pSubpassEndInfo );

		auto&	cmdbuf = _cmdBuffers[commandBuffer];
		
		cmdbuf.before << "}\n\n";
		cmdbuf.str << "\tRenderPass" << ToString(cmdbuf.renderPassCount) << "( app );\n";

		CHECK( cmdbuf.currRenderPass );
		cmdbuf.currRenderPass = VK_NULL_HANDLE;
		cmdbuf.renderPassCount++;
	}
	
/*
=================================================
	CreateShaderModule
=================================================
*/
	void VulkanFnToCpp2::CreateShaderModule (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo,
											 const VkAllocationCallbacks *pAllocator, VkShaderModule * pShaderModule)
	{
		CHECK( remapper.CreateResource( VK_OBJECT_TYPE_SHADER_MODULE, VkResourceID(*pShaderModule), chunkIndex ));

		const String			shader_name = ToString( remapper.GetResourceUID( VK_OBJECT_TYPE_SHADER_MODULE, VkResourceID(*pShaderModule), chunkIndex )) << ".glsl";
		VkShaderStageFlagBits	stage		= VK_SHADER_STAGE_FLAG_BITS_MAX_ENUM;

		// save shader source
		{
			spirv_cross::CompilerGLSL			compiler{ pCreateInfo->pCode, pCreateInfo->codeSize/sizeof(uint) };
			spirv_cross::CompilerGLSL::Options	opt		= {};

			opt.version					= 460;
			opt.es						= false;
			opt.vulkan_semantics		= true;
			opt.separate_shader_objects	= true;
			opt.enable_420pack_extension= true;

			opt.vertex.fixup_clipspace				= false;
			opt.vertex.flip_vert_y					= false;
			opt.vertex.support_nonzero_base_instance= true;

			opt.fragment.default_float_precision	= spirv_cross::CompilerGLSL::Options::Precision::Highp;
			opt.fragment.default_int_precision		= spirv_cross::CompilerGLSL::Options::Precision::Highp;

			compiler.set_common_options( opt );
		
			BEGIN_ENUM_CHECKS();
			switch ( compiler.get_execution_model() )
			{
				case spv::ExecutionModelVertex :				stage = VK_SHADER_STAGE_VERTEX_BIT;						break;
				case spv::ExecutionModelTessellationControl :	stage = VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT;		break;
				case spv::ExecutionModelTessellationEvaluation:	stage = VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT;	break;
				case spv::ExecutionModelGeometry :				stage = VK_SHADER_STAGE_GEOMETRY_BIT;					break;
				case spv::ExecutionModelFragment :				stage = VK_SHADER_STAGE_FRAGMENT_BIT;					break;
				case spv::ExecutionModelGLCompute :				stage = VK_SHADER_STAGE_COMPUTE_BIT;					break;
				case spv::ExecutionModelTaskNV :				stage = VK_SHADER_STAGE_TASK_BIT_NV;					break;
				case spv::ExecutionModelMeshNV :				stage = VK_SHADER_STAGE_MESH_BIT_NV;					break;
				case spv::ExecutionModelRayGenerationNV :		stage = VK_SHADER_STAGE_RAYGEN_BIT_NV;					break;
				case spv::ExecutionModelIntersectionNV :		stage = VK_SHADER_STAGE_INTERSECTION_BIT_NV;			break;
				case spv::ExecutionModelAnyHitNV :				stage = VK_SHADER_STAGE_ANY_HIT_BIT_NV;					break;
				case spv::ExecutionModelClosestHitNV :			stage = VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV;				break;
				case spv::ExecutionModelMissNV :				stage = VK_SHADER_STAGE_MISS_BIT_NV;					break;
				case spv::ExecutionModelCallableNV :			stage = VK_SHADER_STAGE_CALLABLE_BIT_NV;				break;
				case spv::ExecutionModelKernel :
				case spv::ExecutionModelMax :					CHECK(false); break;
			}
			END_ENUM_CHECKS();

			const String	shader_src = compiler.compile();
		
			FileWStream		file{ FS::path{_shaderFolder}.append( shader_name )};
			CHECK_ERR( file.IsOpen(), void());
			CHECK_ERR( file.Write( shader_src ), void());
			
			FileWStream		file2{ FS::path{_shaderFolder}.append( shader_name ).replace_extension( "spv" )};
			CHECK_ERR( file2.IsOpen(), void());
			CHECK_ERR( file2.Write( pCreateInfo->pCode, BytesU{pCreateInfo->codeSize} ), void());
		}

		nameSer.Clear();
		remapper.SetCurrentPos( chunkIndex );

		result << "\tapp.CreateShaderModule( \"" << shader_name << "\", ";
		result << Serialize_VkShaderStageFlagBits( stage ) << ", ";
		result << "OUT " << remapper( VK_OBJECT_TYPE_SHADER_MODULE, *pShaderModule, true );
		result << " );\n";
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_SHADER_MODULE, VkResourceID(*pShaderModule) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_SHADER_MODULE, VkResourceID(*pShaderModule) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	GetSwapchainImagesKHR
=================================================
*/
	void VulkanFnToCpp2::GetSwapchainImagesKHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkSwapchainKHR swapchain,
												uint32_t * pSwapchainImageIndex, VkImage * pSwapchainImage)
	{
		ASSERT( pSwapchainImage and pSwapchainImageIndex );

		CHECK( remapper.CreateResource( VK_OBJECT_TYPE_IMAGE, VkResourceID(pSwapchainImage[0]), chunkIndex ));
		
		result
			<< "\tapp.CreateSwapchainImage( " << remapper.GetResourceName( VK_OBJECT_TYPE_IMAGE, VkResourceID(pSwapchainImage[0]) ) << ", "
			<< "uint2{" << IntToString( _swapchainDim.x ) << ", " << IntToString( _swapchainDim.y ) << "}, "
			<< Serialize_VkFormat( _swapchainFormat ) << ", "
			<< Serialize_VkImageUsageFlags( _swapchainUsage ) << " );\n";
		
		FlushGlobal();

		_swapchainImages.push_back( VkResourceID(pSwapchainImage[0]) );
	}
	
/*
=================================================
	SetDebugUtilsObjectNameEXT
=================================================
*/
	void VulkanFnToCpp2::SetDebugUtilsObjectNameEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice, const VkDebugUtilsObjectNameInfoEXT * pNameInfo)
	{
		if ( pNameInfo )
			remapper.SetDebugName( VkResourceID(pNameInfo->objectHandle), chunkIndex, pNameInfo->pObjectName );
	}
	
/*
=================================================
	AllocateMemory
=================================================
*/
	void VulkanFnToCpp2::AllocateMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkMemoryAllocateInfo * pAllocateInfo,
										 const VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory)
	{
		const auto	Validate = [this, &pAllocateInfo, chunkIndex] ()
		{
			for (auto* next = Cast<VkBaseInStructure>(pAllocateInfo->pNext); next; next = next->pNext)
			{
				if ( next->sType == VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV )
				{
					auto* info = Cast<VkDedicatedAllocationMemoryAllocateInfoNV>(const_cast<VkBaseInStructure *>(next));
					if ( info->image and not remapper.IsResourceAlive( VK_OBJECT_TYPE_IMAGE, VkResourceID(info->image), chunkIndex )) {
						const_cast<VkMemoryAllocateInfo *>(pAllocateInfo)->pNext = null;	// TODO
						return;
					}
					if ( info->buffer and not remapper.IsResourceAlive( VK_OBJECT_TYPE_BUFFER, VkResourceID(info->buffer), chunkIndex )) {
						const_cast<VkMemoryAllocateInfo *>(pAllocateInfo)->pNext = null;	// TODO
						return;
					}
				}
			}
		};

		Validate();
		VulkanFnToCpp::AllocateMemory( chunkIndex, threadID, timestamp, device, pAllocateInfo, pAllocator, pMemory );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_DEVICE_MEMORY, VkResourceID(*pMemory) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_DEVICE_MEMORY, VkResourceID(*pMemory) )
			<< "\" );\n";
		FlushGlobal();

		uint64_t	index	= remapper.GetResourceUID( VK_OBJECT_TYPE_DEVICE_MEMORY, VkResourceID(*pMemory), chunkIndex );
		auto&		info	= _memoryMap[index];
		auto&		props	= _deviceProps[_vkPhysicalDevice];

		info.handle		= *pMemory;
		info.allocInfo	= *pAllocateInfo;

		CHECK_ERR( pAllocateInfo->memoryTypeIndex < CountOf(props.memIdxMap), void());
		const uint	mem_idx = props.memIdxMap[ pAllocateInfo->memoryTypeIndex ];

		CHECK_ERR( mem_idx < props.memProps.memoryTypeCount, void());
		const auto&	mem_type = props.memProps.memoryTypes[mem_idx];

		info.propertyFlags = mem_type.propertyFlags;
	}
	
/*
=================================================
	UpdateDescriptorSets
=================================================
*/
	void VulkanFnToCpp2::UpdateDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device,
											   uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites,
											   uint32_t descriptorCopyCount, const VkCopyDescriptorSet * pDescriptorCopies)
	{
		_allocator.Discard();

		auto*	new_desc	= descriptorWriteCount ? _allocator.Alloc<VkWriteDescriptorSet>( descriptorWriteCount ) : null;
		uint	new_count	= 0;

		// copy and validate
		for (uint i = 0; i < descriptorWriteCount; ++i)
		{
			auto&	src_ds = pDescriptorWrites[i];
			auto&	dst_ds = new_desc[new_count];

			ASSERT( src_ds.pNext == null );

			dst_ds = src_ds;
			dst_ds.pNext			= null;
			dst_ds.pBufferInfo		= null;
			dst_ds.pImageInfo		= null;
			dst_ds.pTexelBufferView	= null;
			dst_ds.descriptorCount	= 0;

			BEGIN_ENUM_CHECKS();
			switch ( src_ds.descriptorType )
			{
				case VK_DESCRIPTOR_TYPE_SAMPLER :
				case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER :
				case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE :
				case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT :
				case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE :
				{
					dst_ds.pImageInfo = _allocator.Alloc<VkDescriptorImageInfo>( src_ds.descriptorCount );

					for (uint j = 0; j < src_ds.descriptorCount; ++j)
					{
						bool	has_img  = (src_ds.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER or
											remapper.IsResourceAlive( VK_OBJECT_TYPE_IMAGE_VIEW, VkResourceID(src_ds.pImageInfo[j].imageView), chunkIndex ));
						bool	has_samp = ((src_ds.descriptorType != VK_DESCRIPTOR_TYPE_SAMPLER and src_ds.descriptorType != VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER) or
											 remapper.IsResourceAlive( VK_OBJECT_TYPE_SAMPLER, VkResourceID(src_ds.pImageInfo[j].sampler), chunkIndex ));

						if ( has_img and has_samp )
							const_cast<VkDescriptorImageInfo*>(dst_ds.pImageInfo)[dst_ds.descriptorCount++] = src_ds.pImageInfo[j];
					}
					break;
				}

				case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER :
				case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER :
				{
					dst_ds.pTexelBufferView = _allocator.Alloc<VkBufferView>( src_ds.descriptorCount );

					for (uint j = 0; j < src_ds.descriptorCount; ++j) {
						if ( remapper.IsResourceAlive( VK_OBJECT_TYPE_BUFFER_VIEW, VkResourceID(src_ds.pTexelBufferView[j]), chunkIndex ))
							const_cast<VkBufferView*>(dst_ds.pTexelBufferView)[dst_ds.descriptorCount++] = src_ds.pTexelBufferView[j];
					}
					break;
				}

				case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER :
				case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER :
				case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC :
				case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC :
				{
					dst_ds.pBufferInfo = _allocator.Alloc<VkDescriptorBufferInfo>( src_ds.descriptorCount );

					for (uint j = 0; j < src_ds.descriptorCount; ++j) {
						if ( remapper.IsResourceAlive( VK_OBJECT_TYPE_BUFFER, VkResourceID(src_ds.pBufferInfo[j].buffer), chunkIndex ))
							const_cast<VkDescriptorBufferInfo*>(dst_ds.pBufferInfo)[dst_ds.descriptorCount++] = src_ds.pBufferInfo[j];
					}
					break;
				}

				case VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT :
				case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV :
				case VK_DESCRIPTOR_TYPE_RANGE_SIZE :
				case VK_DESCRIPTOR_TYPE_MAX_ENUM :
					ASSERT(false);
					break;
			}
			END_ENUM_CHECKS();

			if ( dst_ds.descriptorCount )
				++new_count;
		}

		if ( not new_count and not descriptorCopyCount )
			return;

		VulkanFnToCpp::UpdateDescriptorSets( chunkIndex, threadID, timestamp, device, new_count, new_desc, descriptorCopyCount, pDescriptorCopies );
	}
	
/*
=================================================
	CmdPipelineBarrier
=================================================
*/
	void VulkanFnToCpp2::CmdPipelineBarrier (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer,
											 VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags,
											 uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers,
											 uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers,
											 uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers)
	{
		_allocator.Discard();

		uint					new_bufbar_count	= 0;
		uint					new_imgbar_count	= 0;
		VkBufferMemoryBarrier*	new_bufbar			= bufferMemoryBarrierCount ? _allocator.Alloc<VkBufferMemoryBarrier>( bufferMemoryBarrierCount ) : null;
		VkImageMemoryBarrier*	new_imgbar			= imageMemoryBarrierCount ? _allocator.Alloc<VkImageMemoryBarrier>( imageMemoryBarrierCount ) : null;
		const auto&				cmdbuf				= _cmdBuffers[commandBuffer];

		for (uint i = 0; i < bufferMemoryBarrierCount; ++i)
		{
			auto&	dst = new_bufbar[new_bufbar_count];
			dst = pBufferMemoryBarriers[i];

			if ( remapper.IsResourceAlive( VK_OBJECT_TYPE_BUFFER, VkResourceID(dst.buffer), chunkIndex ))
			{
				++new_bufbar_count;

				// TODO
			}
		}
		
		for (uint i = 0; i < imageMemoryBarrierCount; ++i)
		{
			auto&	dst = new_imgbar[new_imgbar_count];
			dst = pImageMemoryBarriers[i];

			if ( remapper.IsResourceAlive( VK_OBJECT_TYPE_IMAGE, VkResourceID(dst.image), chunkIndex ))
			{
				if ( dst.newLayout == VK_IMAGE_LAYOUT_PRESENT_SRC_KHR or
					 dst.newLayout == VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR )
				{
					dst.dstAccessMask	= VK_ACCESS_TRANSFER_READ_BIT;
					dst.newLayout		= VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
					dstStageMask |= VK_PIPELINE_STAGE_TRANSFER_BIT;
				}

				++new_imgbar_count;

				uint64_t	img_uid		= remapper.GetAliveResourceUID( VK_OBJECT_TYPE_IMAGE, VkResourceID(dst.image) );
				auto&		img_info	= _imageMap[img_uid];

				img_info.lastQueue = cmdbuf.familyIndex;
			}
		}

		if ( (memoryBarrierCount + new_bufbar_count + new_imgbar_count) == 0 )
			return;

		VulkanFnToCpp::CmdPipelineBarrier( chunkIndex, threadID, timestamp, commandBuffer, srcStageMask, dstStageMask, dependencyFlags,
										   memoryBarrierCount, pMemoryBarriers,
										   new_bufbar_count, new_bufbar_count ? new_bufbar : null,
										   new_imgbar_count, new_imgbar_count ? new_imgbar : null );
	}
	
/*
=================================================
	CreateImage
=================================================
*/
	void VulkanFnToCpp2::CreateImage (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkImageCreateInfo * pCreateInfo,
									  const VkAllocationCallbacks * pAllocator, VkImage * pImage)
	{
		const_cast<VkImageCreateInfo *>(pCreateInfo)->usage |= VK_IMAGE_USAGE_TRANSFER_DST_BIT;

		VulkanFnToCpp::CreateImage( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pImage );

		uint64_t	index	= remapper.GetResourceUID( VK_OBJECT_TYPE_IMAGE, VkResourceID(*pImage), chunkIndex );
		auto&		info	= _imageMap[index];

		info.handle			= *pImage;
		info.createInfo		= *pCreateInfo;
		info.queueFamilies.clear();
		info.aspectMask		= 0;
		info.initialQueue	= Default;
		
		auto&	qprops = _deviceProps[_vkPhysicalDevice].queueProps;

		for (uint i = 0; i < pCreateInfo->queueFamilyIndexCount; ++i)
		{
			 info.queueFamilies.push_back( pCreateInfo->pQueueFamilyIndices[i] );

			 if ( _graphicsQueue == EQueueFamily(pCreateInfo->pQueueFamilyIndices[i]) )
				info.initialQueue = _graphicsQueue;

			 if ( info.initialQueue == Default and EnumEq( qprops[pCreateInfo->pQueueFamilyIndices[i]].queueFlags, VK_QUEUE_GRAPHICS_BIT ))
				info.initialQueue = EQueueFamily(pCreateInfo->pQueueFamilyIndices[i]);
			 
			 if ( info.initialQueue == Default and EnumEq( qprops[pCreateInfo->pQueueFamilyIndices[i]].queueFlags, VK_QUEUE_COMPUTE_BIT ))
				info.initialQueue = EQueueFamily(pCreateInfo->pQueueFamilyIndices[i]);
		}
		
		 if ( pCreateInfo->queueFamilyIndexCount == 0 )
			info.initialQueue = _graphicsQueue;

		 info.lastQueue = info.initialQueue;

		switch ( pCreateInfo->format )
		{
			case VK_FORMAT_D16_UNORM :
			case VK_FORMAT_X8_D24_UNORM_PACK32 :
			case VK_FORMAT_D32_SFLOAT :
				info.aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT;
				break;

			case VK_FORMAT_S8_UINT :
				info.aspectMask = VK_IMAGE_ASPECT_STENCIL_BIT;
				break;

			case VK_FORMAT_D16_UNORM_S8_UINT :
			case VK_FORMAT_D24_UNORM_S8_UINT :
			case VK_FORMAT_D32_SFLOAT_S8_UINT :
				info.aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT;
				break;

			default :
				info.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
				break;
		}

		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_IMAGE, VkResourceID(*pImage) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_IMAGE, VkResourceID(*pImage) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateBuffer
=================================================
*/
	void VulkanFnToCpp2::CreateBuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkBufferCreateInfo * pCreateInfo,
									   const VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer)
	{
		const_cast<VkBufferCreateInfo *>(pCreateInfo)->usage |= VK_BUFFER_USAGE_TRANSFER_DST_BIT;

		VulkanFnToCpp::CreateBuffer( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pBuffer );
		
		uint64_t	index	= remapper.GetResourceUID( VK_OBJECT_TYPE_BUFFER, VkResourceID(*pBuffer), chunkIndex );
		auto&		info	= _bufferMap[index];

		info.handle			= *pBuffer;
		info.createInfo		= *pCreateInfo;
		info.queueFamilies.clear();
		info.initialQueue	= Default;
		
		auto&	qprops = _deviceProps[_vkPhysicalDevice].queueProps;

		for (uint i = 0; i < pCreateInfo->queueFamilyIndexCount; ++i)
		{
			 info.queueFamilies.push_back( pCreateInfo->pQueueFamilyIndices[i] );

			 if ( _graphicsQueue == EQueueFamily(pCreateInfo->pQueueFamilyIndices[i]) )
				 info.initialQueue = _graphicsQueue;

			 if ( info.initialQueue == Default and EnumEq( qprops[pCreateInfo->pQueueFamilyIndices[i]].queueFlags, VK_QUEUE_GRAPHICS_BIT ))
				 info.initialQueue = EQueueFamily(pCreateInfo->pQueueFamilyIndices[i]);
			 
			 if ( info.initialQueue == Default and EnumEq( qprops[pCreateInfo->pQueueFamilyIndices[i]].queueFlags, VK_QUEUE_COMPUTE_BIT ))
				 info.initialQueue = EQueueFamily(pCreateInfo->pQueueFamilyIndices[i]);
		}
		
		if ( pCreateInfo->queueFamilyIndexCount == 0 )
			info.initialQueue = _graphicsQueue;
		 
		info.lastQueue = info.initialQueue;

		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_BUFFER, VkResourceID(*pBuffer) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_BUFFER, VkResourceID(*pBuffer) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	BindBufferMemory
=================================================
*/
	void VulkanFnToCpp2::BindBufferMemory (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset)
	{
		VulkanFnToCpp::BindBufferMemory( chunkIndex, threadID, timestamp, device, buffer, memory, memoryOffset );

		uint64_t	mem_uid	= remapper.GetAliveResourceUID( VK_OBJECT_TYPE_DEVICE_MEMORY, VkResourceID(memory) );
		
		if ( not _memoryMap.count( mem_uid ))
			return;

		uint64_t	buf_uid = remapper.GetAliveResourceUID( VK_OBJECT_TYPE_BUFFER, VkResourceID(buffer) );
		CHECK( _bufferMap.count( buf_uid ));
		
		auto&		mem_info = _memoryMap[ mem_uid ];
		auto&		buf_info = _bufferMap[ buf_uid ];

		buf_info.memOffset = memoryOffset;
		
		CHECK( mem_info.initialContent == Default );
		mem_info.buffers.push_back( &buf_info );
	}
	
/*
=================================================
	BindBufferMemory2
=================================================
*/
	void VulkanFnToCpp2::BindBufferMemory2 (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos)
	{
		VulkanFnToCpp::BindBufferMemory2( chunkIndex, threadID, timestamp, device, bindInfoCount, pBindInfos );

		for (uint i = 0; i < bindInfoCount; ++i)
		{
			uint64_t	mem_uid	= remapper.GetAliveResourceUID( VK_OBJECT_TYPE_DEVICE_MEMORY, VkResourceID(pBindInfos[i].memory) );
		
			if ( not _memoryMap.count( mem_uid ))
				return;

			uint64_t	buf_uid = remapper.GetAliveResourceUID( VK_OBJECT_TYPE_BUFFER, VkResourceID(pBindInfos[i].buffer) );
			CHECK( _bufferMap.count( buf_uid ));
		
			auto&		mem_info = _memoryMap[ mem_uid ];
			auto&		buf_info = _bufferMap[ buf_uid ];

			buf_info.memOffset = pBindInfos[i].memoryOffset;

			CHECK( mem_info.initialContent == Default );
			mem_info.buffers.push_back( &buf_info );
		}
	}
	
/*
=================================================
	CreateFence
=================================================
*/
	void VulkanFnToCpp2::CreateFence (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkFenceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence)
	{
		VulkanFnToCpp::CreateFence( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pFence );

		if ( pCreateInfo->flags & VK_FENCE_CREATE_SIGNALED_BIT )
		{
			_signaledFences.insert( VkResourceID(*pFence) );
			_initialySignaledFences.insert( VkResourceID(*pFence) );
		}

		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_FENCE, VkResourceID(*pFence) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_FENCE, VkResourceID(*pFence) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	ResetFences
=================================================
*/
	void VulkanFnToCpp2::ResetFences (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t fenceCount, const VkFence * pFences)
	{
		for (uint i = 0; i < fenceCount; ++i) {
			_signaledFences.erase( VkResourceID(pFences[i]) );
		}

		VulkanFnToCpp::ResetFences( chunkIndex, threadID, timestamp, device, fenceCount, pFences );
	}
	
/*
=================================================
	GetFenceStatus
----
	replace vkGetFenceStatus by the wkWaitForFences because
	capture doesn't save result of vkGetFenceStatus call, so
	we don't know what fence status is
=================================================
*/
	void VulkanFnToCpp2::GetFenceStatus (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkFence fence)
	{
		if ( _signaledFences.erase( VkResourceID(fence) ))
		{
			before << "\t// vkGetFenceStatus\n";
			VulkanFnToCpp::WaitForFences( chunkIndex, threadID, timestamp, device, 1, &fence, true, UMax );
		}
		else
		{
			result << "\t// skip vkGetFenceStatus\n";
			FlushGlobal();
		}
	}

/*
=================================================
	WaitForFences
=================================================
*/
	void VulkanFnToCpp2::WaitForFences (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t fenceCount, const VkFence * pFences, VkBool32 waitAll, uint64_t timeout)
	{
		if ( not waitAll )
			FG_LOGD( "WaitForFences: 'waitAll' was setted to true" );

		if ( timeout != UMax )
			FG_LOGD( "WaitForFences: 'timeout' was setted to max" );

		// set to max because capture doesn't save result of vkWaitForFences call,
		// so we don't know what fence status is
		timeout = UMax;
		waitAll = true;

		VkFence*	new_fences	= _allocator.Alloc<VkFence>( fenceCount );
		uint		fcount		= 0;

		for (uint i = 0; i < fenceCount; ++i)
		{
			if ( _signaledFences.erase( VkResourceID(pFences[i]) ))
			{
				new_fences[fcount++] = pFences[i];
			}
			else
			{
				FG_LOGD( "WaitForFences: removed fence "s << ToString( uint64_t(pFences[i]) ));
				result << indent << "// Removed fence " << remapper.GetResourceName( VK_OBJECT_TYPE_FENCE, VkResourceID(pFences[i]) ) << "\n";
			}
		}

		if ( fcount )
		{
			VulkanFnToCpp::WaitForFences( chunkIndex, threadID, timestamp, device, fcount, new_fences, waitAll, timeout );
		}
		else
		{
			result << "\t// skip vkWaitForFences\n\n";
			FlushGlobal();
		}

		_allocator.Discard();
	}
	
/*
=================================================
	RegisterDeviceEventEXT
=================================================
*/
	void VulkanFnToCpp2::RegisterDeviceEventEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDeviceEventInfoEXT * pDeviceEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence)
	{
		FG_UNUSED( chunkIndex, threadID, timestamp, device, pDeviceEventInfo, pAllocator, pFence );
		CHECK( !"TODO" );
	}
	
/*
=================================================
	RegisterDisplayEventEXT
=================================================
*/
	void VulkanFnToCpp2::RegisterDisplayEventEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT * pDisplayEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence)
	{
		FG_UNUSED( chunkIndex, threadID, timestamp, device, display, pDisplayEventInfo, pAllocator, pFence );
		CHECK( !"TODO" );
	}
	
/*
=================================================
	CreateSemaphore
=================================================
*/
	void VulkanFnToCpp2::CreateSemaphore (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSemaphoreCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore)
	{
		VulkanFnToCpp::CreateSemaphore( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pSemaphore );

		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_SEMAPHORE, VkResourceID(*pSemaphore) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_SEMAPHORE, VkResourceID(*pSemaphore) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateFramebuffer
=================================================
*/
	void VulkanFnToCpp2::CreateFramebuffer (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkFramebufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer)
	{
		VulkanFnToCpp::CreateFramebuffer( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pFramebuffer );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_FRAMEBUFFER, VkResourceID(*pFramebuffer) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_FRAMEBUFFER, VkResourceID(*pFramebuffer) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateRenderPass
=================================================
*/
	void VulkanFnToCpp2::CreateRenderPass (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkRenderPassCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass)
	{
		VulkanFnToCpp::CreateRenderPass( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pRenderPass );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_RENDER_PASS, VkResourceID(*pRenderPass) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_RENDER_PASS, VkResourceID(*pRenderPass) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateDescriptorPool
=================================================
*/
	void VulkanFnToCpp2::CreateDescriptorPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool)
	{
		VulkanFnToCpp::CreateDescriptorPool( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pDescriptorPool );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_DESCRIPTOR_POOL, VkResourceID(*pDescriptorPool) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_DESCRIPTOR_POOL, VkResourceID(*pDescriptorPool) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateDescriptorSetLayout
=================================================
*/
	void VulkanFnToCpp2::CreateDescriptorSetLayout (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout)
	{
		VulkanFnToCpp::CreateDescriptorSetLayout( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pSetLayout );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT, VkResourceID(*pSetLayout) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT, VkResourceID(*pSetLayout) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateBufferView
=================================================
*/
	void VulkanFnToCpp2::CreateBufferView (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkBufferViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferView * pView)
	{
		VulkanFnToCpp::CreateBufferView( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pView );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_BUFFER_VIEW, VkResourceID(*pView) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_BUFFER_VIEW, VkResourceID(*pView) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateImageView
=================================================
*/
	void VulkanFnToCpp2::CreateImageView (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkImageViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImageView * pView)
	{
		VulkanFnToCpp::CreateImageView( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pView );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_IMAGE_VIEW, VkResourceID(*pView) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_IMAGE_VIEW, VkResourceID(*pView) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateSampler
=================================================
*/
	void VulkanFnToCpp2::CreateSampler (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSamplerCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSampler * pSampler)
	{
		VulkanFnToCpp::CreateSampler( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pSampler );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_SAMPLER, VkResourceID(*pSampler) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_SAMPLER, VkResourceID(*pSampler) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreatePipelineLayout
=================================================
*/
	void VulkanFnToCpp2::CreatePipelineLayout (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkPipelineLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout)
	{
		VulkanFnToCpp::CreatePipelineLayout( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pPipelineLayout );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_PIPELINE_LAYOUT, VkResourceID(*pPipelineLayout) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_PIPELINE_LAYOUT, VkResourceID(*pPipelineLayout) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreatePipelineCache
=================================================
*/
	void VulkanFnToCpp2::CreatePipelineCache (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkPipelineCacheCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache)
	{
	}
	
/*
=================================================
	CreateGraphicsPipelines
=================================================
*/
	void VulkanFnToCpp2::CreateGraphicsPipelines (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkPipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines)
	{

		VulkanFnToCpp::CreateGraphicsPipelines( chunkIndex, threadID, timestamp, device, VK_NULL_HANDLE, createInfoCount, pCreateInfos, pAllocator, pPipelines );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_PIPELINE, VkResourceID(*pPipelines) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_PIPELINE, VkResourceID(*pPipelines) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateComputePipelines
=================================================
*/
	void VulkanFnToCpp2::CreateComputePipelines (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkPipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines)
	{
		VulkanFnToCpp::CreateComputePipelines( chunkIndex, threadID, timestamp, device, VK_NULL_HANDLE, createInfoCount, pCreateInfos, pAllocator, pPipelines );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_PIPELINE, VkResourceID(*pPipelines) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_PIPELINE, VkResourceID(*pPipelines) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateEvent
=================================================
*/
	void VulkanFnToCpp2::CreateEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkEventCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkEvent * pEvent)
	{
		VulkanFnToCpp::CreateEvent( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pEvent );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_EVENT, VkResourceID(*pEvent) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_EVENT, VkResourceID(*pEvent) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	SetEvent
=================================================
*/
	void VulkanFnToCpp2::SetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event)
	{
		VulkanFnToCpp::SetEvent( chunkIndex, threadID, timestamp, device, event );

		_signaledEvents.insert( VkResourceID(event) );
	}
		
/*
=================================================
	ResetEvent
=================================================
*/
	void VulkanFnToCpp2::ResetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event)
	{
		VulkanFnToCpp::ResetEvent( chunkIndex, threadID, timestamp, device, event );

		_signaledEvents.erase( VkResourceID(event) );
	}
	
/*
=================================================
	GetEventStatus
=================================================
*/
	void VulkanFnToCpp2::GetEventStatus (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkEvent event)
	{
		if ( not _signaledEvents.erase( VkResourceID(event) ))
		{
			result << "\t// skip vkGetEventStatus\n";
			FlushGlobal();
			return;
		}

		VulkanFnToCpp::GetEventStatus( chunkIndex, threadID, timestamp, device, event );
	}
	
/*
=================================================
	CmdSetEvent
=================================================
*/
	void VulkanFnToCpp2::CmdSetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
	{
		VulkanFnToCpp::CmdSetEvent( chunkIndex, threadID, timestamp, commandBuffer, event, stageMask );

		_cmdBuffers[commandBuffer].signaledEvents.insert( VkResourceID(event) );
	}
	
/*
=================================================
	CmdResetEvent
=================================================
*/
	void VulkanFnToCpp2::CmdResetEvent (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
	{
		VulkanFnToCpp::CmdResetEvent( chunkIndex, threadID, timestamp, commandBuffer, event, stageMask );
		
		_cmdBuffers[commandBuffer].signaledEvents.erase( VkResourceID(event) );
	}
	
/*
=================================================
	CmdWaitEvents
=================================================
*/
	void VulkanFnToCpp2::CmdWaitEvents (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents,
										VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers,
										uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers,
										uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers)
	{
		VulkanFnToCpp::CmdWaitEvents( chunkIndex, threadID, timestamp, commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask,
									  memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, 
									  imageMemoryBarrierCount, pImageMemoryBarriers );
		
		auto& cmdbuf = _cmdBuffers[commandBuffer];
		
		for (uint i = 0; i < eventCount; ++i)
		{
			if ( not cmdbuf.signaledEvents.erase( VkResourceID(pEvents[i]) ))
			{
				cmdbuf.waitingEvents.insert( VkResourceID(pEvents[i]) );
			}
		}
	}

/*
=================================================
	CreateQueryPool
=================================================
*/
	void VulkanFnToCpp2::CreateQueryPool (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkQueryPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool)
	{
		VulkanFnToCpp::CreateQueryPool( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pQueryPool );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_QUERY_POOL, VkResourceID(*pQueryPool) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_QUERY_POOL, VkResourceID(*pQueryPool) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateSamplerYcbcrConversion
=================================================
*/
	void VulkanFnToCpp2::CreateSamplerYcbcrConversion (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion)
	{
		VulkanFnToCpp::CreateSamplerYcbcrConversion( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pYcbcrConversion );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION, VkResourceID(*pYcbcrConversion) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION, VkResourceID(*pYcbcrConversion) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	CreateRenderPass2KHR
=================================================
*/
	void VulkanFnToCpp2::CreateRenderPass2KHR (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkRenderPassCreateInfo2KHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass)
	{
		VulkanFnToCpp::CreateRenderPass2KHR( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pRenderPass );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_RENDER_PASS, VkResourceID(*pRenderPass) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_RENDER_PASS, VkResourceID(*pRenderPass) )
			<< "\" );\n";
		FlushGlobal();
	}
	
/*
=================================================
	AllocateDescriptorSets
=================================================
*/
	void VulkanFnToCpp2::AllocateDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets)
	{
		VulkanFnToCpp::AllocateDescriptorSets( chunkIndex, threadID, timestamp, device, pAllocateInfo, pDescriptorSets );

		for (uint i = 0; i < pAllocateInfo->descriptorSetCount; ++i)
		{
			result << "\tapp.SetObjectName( "
				<< remapper.GetResourceName( VK_OBJECT_TYPE_DESCRIPTOR_SET, VkResourceID(pDescriptorSets[i]) )
				<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_DESCRIPTOR_SET, VkResourceID(pDescriptorSets[i]) )
				<< "\" );\n";
		}
		FlushGlobal();
	}
	
/*
=================================================
	FlushMappedMemoryRanges
=================================================
*/
	void VulkanFnToCpp2::FlushMappedMemoryRanges (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges,
												  BytesU mappedDataSize, ContentID mappedData)
	{
		CHECK_ERR( pMemoryRanges and memoryRangeCount > 0, void());

		for (uint i = 1; i < memoryRangeCount; ++i) {
			CHECK_ERR( pMemoryRanges[0].memory == pMemoryRanges[i].memory, void());
		}
		
		nameSer.Clear();
		remapper.SetCurrentPos( chunkIndex );

		before << "	{\n";
		before << indent << "app.CopyMemory( " << remapper.GetResourceName( VK_OBJECT_TYPE_DEVICE_MEMORY, VkResourceID(pMemoryRanges->memory) ) << ", "
			<< ContentIDtoName( mappedData ) << " );\n";

		const String arr_name = nameSer.MakeUnique( &pMemoryRanges, "memoryRanges"s, "mappedMemoryRange"s );
		before << indent << "VkMappedMemoryRange  " << arr_name << "[" << IntToString(memoryRangeCount) << "] = {};\n";
		for (uint i = 0; i < memoryRangeCount; ++i) {
			Serialize2_VkMappedMemoryRange( pMemoryRanges + i, String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}

		result << indent << "VK_CALL( app.vkFlushMappedMemoryRanges( \n";
		result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, device ) << ",\n";
		result << indent << "		/*memoryRangeCount*/ " << IntToString(memoryRangeCount) << ",\n";
		result << indent << "		/*pMemoryRanges*/ " << nameSer.Get( &pMemoryRanges ) << " ));\n";
		result << "	}\n";
		FlushGlobal();

		_initSrc << "\tapp.LoadHostMemory( " << ContentIDtoName( mappedData ) << ", " << ToString( size_t(mappedDataSize) ) << "_b );\n";
	}
	
/*
=================================================
	CmdBindDescriptorSets
=================================================
*/
	void VulkanFnToCpp2::CmdBindDescriptorSets (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
												VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets,
												uint32_t dynamicOffsetCount, const uint32_t * pDynamicOffsets)
	{
		VulkanFnToCpp::CmdBindDescriptorSets( chunkIndex, threadID, timestamp, commandBuffer, pipelineBindPoint, layout,
											  firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets );

		for (uint i = 0; i < descriptorSetCount; ++i)
		{
			auto&	ds	 = pDescriptorSets[i];
			auto	iter = _initialDS.find( ds );

			if ( iter != _initialDS.end() )
			{
				iter->second.bindCount++;
			}
		}
	}

/*
=================================================
	CmdBindDescriptorSets
=================================================
*/
	void VulkanFnToCpp2::DebugMarkerSetObjectNameEXT (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkResourceID resId, StringView name)
	{
		remapper.SetDebugName( resId, chunkIndex, name );
	}
	
/*
=================================================
	CreateDescriptorUpdateTemplate
=================================================
*/
	void VulkanFnToCpp2::CreateDescriptorUpdateTemplate (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate)
	{
		VulkanFnToCpp::CreateDescriptorUpdateTemplate( chunkIndex, threadID, timestamp, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate );
		
		result << "\tapp.SetObjectName( "
			<< remapper.GetResourceName( VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE, VkResourceID(*pDescriptorUpdateTemplate) )
			<< ", \"" << remapper.GetResourceName( VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE, VkResourceID(*pDescriptorUpdateTemplate) )
			<< "\" );\n";
		FlushGlobal();

		auto&	info = _dsTemplates[ *pDescriptorUpdateTemplate ];
		info.entries.assign( pCreateInfo->pDescriptorUpdateEntries, pCreateInfo->pDescriptorUpdateEntries + pCreateInfo->descriptorUpdateEntryCount );
	}
	
/*
=================================================
	UpdateDescriptorSetWithTemplate
=================================================
*/
	void VulkanFnToCpp2::UpdateDescriptorSetWithTemplate (uint chunkIndex, uint64_t threadID, uint64_t timestamp, VkDevice device, VkDescriptorSet descriptorSet,
														  VkDescriptorUpdateTemplate descriptorUpdateTemplate, ArrayView<VkWriteDescriptorSet> slots)
	{
	#if 1
		
		nameSer.Clear();
		remapper.SetCurrentPos( chunkIndex );
		before << "\t{\n";
		
		const String arr_name = nameSer.MakeUnique( slots.data(), "descriptorWrites"s, "writeDescriptorSet"s );
		before << indent << "VkWriteDescriptorSet  " << arr_name << "[" << IntToString(uint(slots.size())) << "] = {};\n";
		
		for (size_t i = 0; i < slots.size(); ++i) {
			Serialize2_VkWriteDescriptorSet( &slots[i], String(arr_name) << "[" << IntToString(i) << "]", nameSer, remapper, indent, INOUT result, INOUT before );
		}

		result << indent << "app.vkUpdateDescriptorSets( \n";
		result << indent << "		/*device*/ " << remapper( VK_OBJECT_TYPE_DEVICE, _vkLogicalDevice ) << ",\n";
		result << indent << "		/*descriptorWriteCount*/ " << IntToString(uint(slots.size())) << ",\n";
		result << indent << "		/*pDescriptorWrites*/ " << nameSer.Get( slots.data() ) << ",\n";
		result << indent << "		/*descriptorCopyCount*/ 0,\n";
		result << indent << "		/*pDescriptorCopies*/ null );\n";
		result << "\t}\n";

		FlushGlobal();

	#else
		nameSer.Clear();
		remapper.SetCurrentPos( chunkIndex );

		auto	iter = _dsTemplates.find( descriptorUpdateTemplate );
		CHECK_ERR( iter != _dsTemplates.end(), void());

		before << "\t{\n";

		size_t	data_size	= 0;
		size_t	data_align	= 0;

		for (auto& entry : iter->second.entries)
		{
			/*BEGIN_ENUM_CHECKS();
			switch ( entry.descriptorType )
			{
				case VK_DESCRIPTOR_TYPE_SAMPLER :
				case VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER :
				case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE :
				case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE :
				case VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT :
				{
					const size_t	stride = Max( entry.stride, sizeof(VkDescriptorImageInfo) );
					data_size	= Max( data_size, entry.offset + stride * entry.descriptorCount );
					data_align	= Max( data_align, alignof(VkDescriptorImageInfo) );

					for (uint i = 0; i < entry.descriptorCount; ++i)
					{
						auto*	data = static_cast<const VkDescriptorImageInfo *>( pData + BytesU{entry.offset + stride*i} );
						result << indent << "static_cast<VkDescriptorImageInfo *>(pData + " << ToString(entry.offset + stride*i) << "_b) = { "
							<< remapper.GetResource( VK_OBJECT_TYPE_SAMPLER, VkResourceID(data->sampler) ) << ", "
							<< remapper.GetResource( VK_OBJECT_TYPE_IMAGE_VIEW, VkResourceID(data->imageView) ) << ", "
							<< Serialize_VkImageLayout( data->imageLayout ) << " };\n";
					}
					break;
				}
				case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER :
				case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER :
				{
					const size_t	stride = Max( entry.stride, sizeof(VkBufferView) );
					data_size	= Max( data_size, entry.offset + stride * entry.descriptorCount );
					data_align	= Max( data_align, alignof(VkBufferView) );
					
					for (uint i = 0; i < entry.descriptorCount; ++i)
					{
						auto*	data = static_cast<const VkBufferView *>( pData + BytesU{entry.offset + stride*i} );
						result << indent << "static_cast<VkBufferView *>(pData + " << ToString(entry.offset + stride*i) << "_b) = "
							<< remapper.GetResource( VK_OBJECT_TYPE_BUFFER_VIEW, VkResourceID(*data) ) << ";\n";
					}
					break;
				}
				case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER :
				case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER :
				case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC :
				case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC :
				{
					const size_t	stride = Max( entry.stride, sizeof(VkDescriptorBufferInfo) );
					data_size	= Max( data_size, entry.offset + stride * entry.descriptorCount );
					data_align	= Max( data_align, alignof(VkDescriptorBufferInfo) );
					
					for (uint i = 0; i < entry.descriptorCount; ++i)
					{
						auto*	data = static_cast<const VkDescriptorBufferInfo *>( pData + BytesU{entry.offset + stride*i} );
						result << indent << "static_cast<VkDescriptorBufferInfo *>(pData + " << ToString(entry.offset + stride*i) << "_b) = { "
							<< remapper.GetResource( VK_OBJECT_TYPE_BUFFER, VkResourceID(data->buffer) ) << ", "
							<< IntToString(data->offset) << ", "
							<< IntToString(data->range)	<< "};\n";
					}
					break;
				}
				case VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT :
				case VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV :
				case VK_DESCRIPTOR_TYPE_RANGE_SIZE :
				case VK_DESCRIPTOR_TYPE_MAX_ENUM :
					CHECK( !"not supported" );
					break;
			}
			END_ENUM_CHECKS();*/
		}

		before << indent << "alignof(" << ToString(data_align) << ") uint64_t storage[(" << ToString(data_size) << " + sizeof(uint64_t)) / sizeof(uint64_t)];\n";
		before << indent << "void* pData = static_cast<void*>(storage);\n";

		result << indent <<  "app.vkUpdateDescriptorSetWithTemplate( " << remapper.GetResource( VK_OBJECT_TYPE_DEVICE, VkResourceID(device) ) << ", ";
		result << indent << remapper.GetResource( VK_OBJECT_TYPE_DESCRIPTOR_SET, VkResourceID(descriptorSet) ) << ", ";
		result << indent << remapper.GetResource( VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE, VkResourceID(descriptorUpdateTemplate) ) << ", ";
		result << indent << "pData ));\n";
		result << "\t}\n";

		FlushGlobal();
	#endif
	}
//-----------------------------------------------------------------------------



/*
=================================================
	constructor
=================================================
*/
	VulkanConverter::VulkanConverter (const FS::path &folder, const ConverterConfig &cfg)
	{
		_listener = MakeShared<VulkanFnToCpp2>( folder, cfg );
	}


#	include "Generated/VkStructToStringImpl.h"
#	include "Generated/VkEnumToStringImpl.h"

}	// RDE
