// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "VApp.h"
#include "framework/Window/WindowGLFW.h"
#include "framework/Window/WindowSDL2.h"
#include "stl/Stream/FileStream.h"
#include "stl/Algorithms/StringUtils.h"

#ifdef COMPILER_MSVC
#	pragma warning(push, 0)
#	include "miniz.h"
#	include "miniz_zip.h"
#	pragma warning(pop)
#else
#	include "miniz.h"
#	include "miniz_zip.h"
#endif

#define VMA_RECORDING_ENABLED		0
#define VMA_DEDICATED_ALLOCATION	0
#define VMA_IMPLEMENTATION			1
#define VMA_ASSERT(expr)			{}

#ifdef COMPILER_MSVC
#	pragma warning (push, 0)
#	pragma warning (disable: 4701)
#	include "vk_mem_alloc.h"
#	pragma warning(pop)
#else
#	include "vk_mem_alloc.h"
#endif

#define RDCERR( _msg_, _arg0_ ) FG_LOGE( _msg_ )

#include "vk_resources.h"


/*
=================================================
	constructor
=================================================
*/
VApp::VApp ()
{
#if defined(FG_ENABLE_GLFW)
	_window.reset( new WindowGLFW() );

#elif defined(FG_ENABLE_SDL2)
	_window.reset( new WindowSDL2() );

#else
#		error unknown window library!
#endif

	VulkanDeviceFn_Init( _vulkan );
}

/*
=================================================
	destructor
=================================================
*/
VApp::~VApp ()
{
	Destroy();
}

/*
=================================================
	OnResize
=================================================
*/
void VApp::OnResize (const uint2 &size)
{
	if ( _swapchain->GetVkSwapchain() and Any( _swapchain->GetSurfaceSize() != size ))
	{
		VK_CALL( vkDeviceWaitIdle( _vulkan.GetVkDevice() ));

		_swapchain->Recreate( size );
	}
}

/*
=================================================
	OnKey
=================================================
*/
void VApp::OnKey (StringView key, EKeyAction act)
{
	if ( act == EKeyAction::Down )
	{
		if ( key == "escape" and _window )
			_window->Quit();

		if ( key == "space" )
			_pauseRendering = not _pauseRendering;

		if ( key == "R" )
			_requireRebuildPipelines = true;
	}
}

/*
=================================================
	CreateWindow
=================================================
*/
bool VApp::CreateWindow (uint width, uint height, StringView title)
{
	CHECK_ERR( _window );

	CHECK_ERR( _window->Create( uint2{width, height}, title ));
	_window->AddListener( this );

	_windowTitle	= title;
	_surfaceSize	= uint2{width, height};
	return true;
}
	
/*
=================================================
	CreateDevice
=================================================
*/
bool VApp::CreateDevice (InstanceID				instance,
						 PhysicalDeviceID		physicalDevice,
						 DeviceID				logicalDevice,
						 StringView				gpuDeviceName,
						 uint					apiVersion,
						 ArrayView<QueueInfo>	queues,
						 ArrayView<const char*>	instanceLayers,
						 ArrayView<const char*>	instanceExtensions,
						 ArrayView<const char*>	deviceExtensions)
{
	FixedArray< VulkanDevice::QueueCreateInfo, 16 >		queue_ci;
	for (auto& q : queues)
	{
		_queueMap.insert_or_assign( q.uid, QueueMapping{ uint(queue_ci.size()), QueueID(~0u) });
		queue_ci.push_back({ q.familyFlags, q.priority });
	}

	CHECK_ERR( queue_ci.size() == _queueMap.size() );

	CHECK_ERR( _vulkan.Create( _window->GetVulkanSurface(), "RDCapturePlayer", "VApp", apiVersion, gpuDeviceName, queue_ci,
								instanceLayers, instanceExtensions, deviceExtensions ));

	CHECK_ERR( queues.size() == _vulkan.GetVkQueues().size() );

	_vulkan.CreateDebugUtilsCallback( DebugUtilsMessageSeverity_All );


	// map resource IDs
	EditResource( instance )		= _vulkan.GetVkInstance();
	EditResource( physicalDevice )	= _vulkan.GetVkPhysicalDevice();
	EditResource( logicalDevice )	= _vulkan.GetVkDevice();

	return true;
}

/*
=================================================
	CreateSwapchain
=================================================
*/
bool VApp::CreateSwapchain (VkFormat							colorFormat,
							VkColorSpaceKHR						colorSpace,
							const uint							minImageCount,
							const VkSurfaceTransformFlagBitsKHR	transform,
							const VkPresentModeKHR				presentMode,
							const VkCompositeAlphaFlagBitsKHR	compositeAlpha,
							const VkImageUsageFlags				colorImageUsage)
{
	CHECK_ERR( not _swapchain );
		
	_swapchain.reset( new VulkanSwapchain{ _vulkan });

	CHECK_ERR( _swapchain->ChooseColorFormat( INOUT colorFormat, INOUT colorSpace ));

	CHECK_ERR( _swapchain->Create( _surfaceSize, colorFormat, colorSpace, minImageCount, presentMode,
									transform, compositeAlpha, colorImageUsage, {} ));
		
		
	uint	count = 0;
	VK_CHECK( vkGetSwapchainImagesKHR( _vulkan.GetVkDevice(), _swapchain->GetVkSwapchain(), OUT &count, null ));
	CHECK_ERR( count > 0 );

	return true;
}

/*
=================================================
	MapQueueID
=================================================
*/
bool  VApp::MapQueueID (uint uid, QueueID id) const
{
	auto	iter = _queueMap.find( uid );
	CHECK_ERR( iter != _queueMap.end() );

	CHECK( iter->second.id == QueueID(~0u) or iter->second.id == id );

	iter->second.id = id;

	EditResource( id ) = _vulkan.GetVkQueues()[ iter->second.index ].handle;
	return true;
}

/*
=================================================
	GetQueueFamilyIndex
=================================================
*/
uint  VApp::GetQueueFamilyIndex (QueueID id) const
{
	VkQueue	queue_id = GetResource( id );
	CHECK_ERR( queue_id != VK_NULL_HANDLE );

	for (auto& queue : _vulkan.GetVkQueues())
	{
		if ( queue.handle == queue_id )
			return queue.familyIndex;
	}
	return ~0u;
}

/*
=================================================
	SetShaderFolder
=================================================
*/
void  VApp::SetShaderFolder (StringView folder)
{
	_shaderFolder = FS::path{folder};

	CHECK( FS::exists( _shaderFolder ));
}

/*
=================================================
	CreateShaderModule
=================================================
*/
bool  VApp::CreateShaderModule (StringView name, VkShaderStageFlagBits stage, OUT VkShaderModule &module) const
{
	// read shader source
	{
		FileRStream		file{ FS::path{_shaderFolder}.append( name )};
		CHECK_ERR( file.IsOpen() );

		_shaderSrc.clear();
		CHECK_ERR( file.Read( size_t(file.RemainingSize()), OUT _shaderSrc ));
	}

	// compile shader
	{
		EShLanguage	lang = EShLanguage::EShLangCount;

		BEGIN_ENUM_CHECKS();
		switch ( stage )
		{
			case VK_SHADER_STAGE_VERTEX_BIT :					lang = EShLanguage::EShLangVertex;			break;
			case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT :		lang = EShLanguage::EShLangTessControl;		break;
			case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT :	lang = EShLanguage::EShLangTessEvaluation;	break;
			case VK_SHADER_STAGE_GEOMETRY_BIT :					lang = EShLanguage::EShLangGeometry;		break;
			case VK_SHADER_STAGE_FRAGMENT_BIT :					lang = EShLanguage::EShLangFragment;		break;
			case VK_SHADER_STAGE_COMPUTE_BIT :					lang = EShLanguage::EShLangCompute;			break;
			// ray tracing shader
			case VK_SHADER_STAGE_RAYGEN_BIT_NV :				lang = EShLanguage::EShLangRayGenNV;		break;
			case VK_SHADER_STAGE_ANY_HIT_BIT_NV :				lang = EShLanguage::EShLangAnyHitNV;		break;
			case VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV :			lang = EShLanguage::EShLangClosestHitNV;	break;
			case VK_SHADER_STAGE_MISS_BIT_NV :					lang = EShLanguage::EShLangMissNV;			break;
			case VK_SHADER_STAGE_INTERSECTION_BIT_NV :			lang = EShLanguage::EShLangIntersectNV;		break;
			case VK_SHADER_STAGE_CALLABLE_BIT_NV :				lang = EShLanguage::EShLangCallableNV;		break;
			// mesh shader
			case VK_SHADER_STAGE_TASK_BIT_NV :					lang = EShLanguage::EShLangTaskNV;			break;
			case VK_SHADER_STAGE_MESH_BIT_NV :					lang = EShLanguage::EShLangMeshNV;			break;

			case VK_SHADER_STAGE_ALL_GRAPHICS :
			case VK_SHADER_STAGE_ALL :							CHECK(false);	break;
		}
		END_ENUM_CHECKS();

		if ( not _spvCompiler.Compile( OUT _spvBuffer, _shaderSrc.c_str(), lang ))
		{
			FG_LOGI( "Failed to compile shader: '"s << name << "'" );

			FileRStream		file{ FS::path{_shaderFolder}.append( name ).replace_extension( "spv" )};
			CHECK_ERR( file.IsOpen() );
			CHECK_ERR( file.Read( size_t(file.RemainingSize()) / sizeof(_spvBuffer[0]), OUT _spvBuffer ));
		}
	}

	// create module
	{
		VkShaderModuleCreateInfo	ci = {};
		ci.sType	= VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
		ci.pNext	= null;
		ci.flags	= 0;
		ci.codeSize	= _spvBuffer.size() * sizeof(_spvBuffer[0]);
		ci.pCode	= _spvBuffer.data();
		VK_CHECK( vkCreateShaderModule( _vulkan.GetVkDevice(), &ci, null, OUT &module ));
	}
	return true;
}

/*
=================================================
	SetContentFolder
=================================================
*/
void  VApp::SetContentFolder (StringView folder)
{
	_contentFolder = FS::path{folder};

	CHECK( FS::exists( _contentFolder ));
}

/*
=================================================
	LoadImage
=================================================
*/
bool  VApp::LoadImage (StringView name, uint3 dim, uint arrayLayers, VkSampleCountFlagBits samples, uint maxLevels,
					   VkFormat format, VkImageAspectFlags aspect, BytesU size) const
{
	CHECK( samples == VK_SAMPLE_COUNT_1_BIT );	// TODO

	auto&	info = _imageContent[ ContentName_t{name} ];
	info.size			= size;
	info.dim			= dim;
	info.arrayLayers	= arrayLayers;
	info.format			= format;
	info.samples		= samples;
	info.maxLevels		= maxLevels;
	info.aspect			= aspect;
	return true;
}

/*
=================================================
	LoadBuffer
=================================================
*/
bool  VApp::LoadBuffer (StringView name, BytesU size) const
{
	auto&	info = _bufferContent[ ContentName_t{name} ];
	info.size = size;
	return true;
}

/*
=================================================
	LoadHostMemory
=================================================
*/
bool  VApp::LoadHostMemory (StringView name, BytesU size) const
{
	auto&	info = _hostMemContent[ ContentName_t{name} ];
	info.resize( size_t(size) );
	return true;
}

/*
=================================================
	SetImageInitialLayout
=================================================
*/
bool  VApp::SetImageInitialLayout (ImageID image, EQueueFamily queue, const VkImageMemoryBarrier *barriers, size_t count) const
{
	auto&	qdata	= _InitQueue( queue );

	for (uint i = 0; i < count; ++i) {
		ASSERT( barriers[i].image == GetResource(image) );
	}
	
	vkCmdPipelineBarrier( qdata.cmdBuffer, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, 0,
						  0, null, 0, null, uint(count), barriers );
	return true;
}

/*
=================================================
	UploadImage
----
	based on RenderDoc code in 'WrappedVulkan::Apply_InitialState()'
=================================================
*/
bool  VApp::UploadImage (ImageID image, EQueueFamily queue, VkImageMemoryBarrier *barriers, size_t count, StringView contentName) const
{
	CHECK_ERR( _LoadContent() );
	
	auto&	qdata	= _InitQueue( queue );
	auto&	src		= _imageContent[ ContentName_t{contentName} ];
	
	// undefined -> transfer
	{
		VkImageMemoryBarrier	barrier = {};
		barrier.sType				= VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
		barrier.srcAccessMask		= 0;
		barrier.dstAccessMask		= VK_ACCESS_TRANSFER_WRITE_BIT;
		barrier.oldLayout			= VK_IMAGE_LAYOUT_UNDEFINED;
		barrier.newLayout			= VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
		barrier.srcQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
		barrier.dstQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
		barrier.image				= GetResource(image);
		barrier.subresourceRange	= { src.aspect, 0, src.maxLevels, 0, src.arrayLayers };

		vkCmdPipelineBarrier( qdata.cmdBuffer, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0,
							  0, null, 0, null, 1, &barrier );
	}

	// copy
	{
		uint				plane_count		= GetYUVPlaneCount( src.format );
		VkImageAspectFlags	aspect_flags	= src.aspect;

		CHECK_ERR( plane_count );
		
		if ( IsStencilOnlyFormat( src.format ))
			aspect_flags = VK_IMAGE_ASPECT_STENCIL_BIT;
		else
		if ( IsDepthOrStencilFormat( src.format ))
			aspect_flags = VK_IMAGE_ASPECT_DEPTH_BIT;
		
		Array<VkBufferImageCopy>	regions;
		VkDeviceSize				buf_offset	= 0;
		VkDeviceSize				buf_align	= 4;
		
		if( IsBlockFormat( src.format ))
			buf_align = GetByteSize( 1, 1, 1, src.format, 0 );

		for (uint layer = 0; layer < src.arrayLayers; ++layer)
		{
			uint3	dim = src.dim;

			for (uint level = 0; level < src.maxLevels; ++level)
			{
				buf_offset = AlignToLarger( buf_offset, buf_align );

				VkBufferImageCopy	reg = {};
				reg.bufferOffset		= buf_offset;
				reg.bufferRowLength		= 0;
				reg.bufferImageHeight	= 0;
				reg.imageSubresource	= { aspect_flags, level, layer, 1 };
				reg.imageOffset			= { 0, 0, 0 };
				reg.imageExtent			= { dim.x, dim.y, dim.z };
				regions.push_back( reg );
				
				VkFormat	size_fmt	= GetDepthOnlyFormat( src.format );
				buf_offset += GetByteSize( reg.imageExtent.width, reg.imageExtent.height, reg.imageExtent.depth, size_fmt, 0 );
				
				// if we removed stencil from the format, copy that separately now.
				if ( size_fmt != src.format )
				{
					buf_offset = AlignToLarger( buf_offset, buf_align );

					reg.bufferOffset = buf_offset;
					reg.imageSubresource.aspectMask = VK_IMAGE_ASPECT_STENCIL_BIT;

					buf_offset += GetByteSize( reg.imageExtent.width, reg.imageExtent.height, reg.imageExtent.depth, VK_FORMAT_S8_UINT, 0 );
					
					regions.push_back( reg );
				}

				dim = Max( dim >> 1, 1u );
			}
		}

		vkCmdCopyBufferToImage( qdata.cmdBuffer, src.staging, GetResource(image), VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, uint(regions.size()), regions.data() );
	}

	// transfer -> 
	vkCmdPipelineBarrier( qdata.cmdBuffer, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, 0,
						  0, null, 0, null, uint(count), barriers );

	return true;
}

/*
=================================================
	UploadBuffer
=================================================
*/
bool  VApp::UploadBuffer (BufferID dstBuffer, BytesU offset, BytesU size, EQueueFamily queue, StringView contentName) const
{
	CHECK_ERR( _LoadContent() );

	auto&	qdata	= _InitQueue( queue );
	auto&	src		= _bufferContent[ ContentName_t{contentName} ];

	VkBufferCopy	region = {};
	region.srcOffset	= VkDeviceSize(offset);
	region.dstOffset	= 0;
	region.size			= VkDeviceSize(size);
	vkCmdCopyBuffer( qdata.cmdBuffer, src.staging, GetResource(dstBuffer), 1, &region );

	return true;
}

/*
=================================================
	CopyMemory
=================================================
*/
bool  VApp::CopyMemory (DeviceMemoryID mem, StringView contentName) const
{
	CHECK_ERR( _LoadContent() );
	
	auto&	src	= _hostMemContent[ ContentName_t{contentName} ];
	auto&	dst	= _mappedMemory[ size_t(mem) ];

	if ( not dst )
	{
		VK_CHECK( vkMapMemory( _vulkan.GetVkDevice(), GetResource(mem), 0, src.size(), 0, OUT &dst ));
	}

	std::memcpy( dst, src.data(), src.size() );
	return true;
}

/*
=================================================
	_LoadContent
=================================================
*/
bool  VApp::_LoadContent () const
{
	if ( _contentLoaded )
		return true;

	mz_zip_archive	archive = {};

	mz_bool status = mz_zip_reader_init_file( OUT &archive, _contentFolder.string().c_str(), 0);
	CHECK_ERR( status );
	
	CHECK_ERR( _CreateAllocator() );

	const size_t	total	= _bufferContent.size() + _imageContent.size() + _hostMemContent.size();
	size_t			counter	= 0;

	for (auto&[name, buf] : _bufferContent)
	{
		uint	index = UMax;
		CHECK_ERR( mz_zip_reader_locate_file_v2( &archive, name.c_str(), "", 0, OUT &index ) == MZ_TRUE );

		mz_zip_archive_file_stat	stat;
		CHECK_ERR( mz_zip_reader_file_stat( &archive, index, OUT &stat ) == MZ_TRUE );
		
		// create staging buffer
		{
			VkBufferCreateInfo	info = {};
			info.sType			= VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
			info.flags			= 0;
			info.size			= VkDeviceSize(buf.size);
			info.usage			= VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
			info.sharingMode	= VK_SHARING_MODE_EXCLUSIVE;

			VK_CHECK( vkCreateBuffer( _vulkan.GetVkDevice(), &info, null, OUT &buf.staging ));
		}

		// alloc memory
		{
			VmaAllocationCreateInfo		info = {};
			info.flags			= VMA_ALLOCATION_CREATE_MAPPED_BIT;
			info.usage			= VMA_MEMORY_USAGE_CPU_TO_GPU;
			info.requiredFlags	= VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
			info.preferredFlags	= 0;
			info.memoryTypeBits	= 0;
			info.pool			= VK_NULL_HANDLE;
			info.pUserData		= null;

			VK_CHECK( vmaAllocateMemoryForBuffer( _memAllocator, buf.staging, &info, OUT &buf.alloc, null ));
			VK_CHECK( vmaBindBufferMemory( _memAllocator, buf.alloc, buf.staging ));
		}

		VmaAllocationInfo	alloc_info	= {};
		vmaGetAllocationInfo( _memAllocator, buf.alloc, OUT &alloc_info );

		CHECK_ERR( alloc_info.pMappedData );
		CHECK_ERR( buf.size == stat.m_uncomp_size );
		CHECK_ERR( alloc_info.size >= stat.m_uncomp_size );
		CHECK_ERR( mz_zip_reader_extract_to_mem( &archive, index, alloc_info.pMappedData, Min( alloc_info.size, stat.m_uncomp_size ), 0 ) == MZ_TRUE );

		FG_LOGI( "Loaded buffer: '"s << StringView{name} << "', " << ToString(counter) << " of " << ToString(total) );
		++counter;
	}

	for (auto&[name, img] : _imageContent)
	{
		uint	index = UMax;
		CHECK_ERR( mz_zip_reader_locate_file_v2( &archive, name.c_str(), "", 0, OUT &index ) == MZ_TRUE );

		mz_zip_archive_file_stat	stat;
		CHECK_ERR( mz_zip_reader_file_stat( &archive, index, OUT &stat ) == MZ_TRUE );
		
		// create staging buffer
		{
			VkBufferCreateInfo	info = {};
			info.sType			= VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
			info.flags			= 0;
			info.size			= VkDeviceSize(img.size);
			info.usage			= VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
			info.sharingMode	= VK_SHARING_MODE_EXCLUSIVE;

			VK_CHECK( vkCreateBuffer( _vulkan.GetVkDevice(), &info, null, OUT &img.staging ));
		}

		// alloc memory
		{
			VmaAllocationCreateInfo		info = {};
			info.flags			= VMA_ALLOCATION_CREATE_MAPPED_BIT;
			info.usage			= VMA_MEMORY_USAGE_CPU_TO_GPU;
			info.requiredFlags	= VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
			info.preferredFlags	= 0;
			info.memoryTypeBits	= 0;
			info.pool			= VK_NULL_HANDLE;
			info.pUserData		= null;

			VK_CHECK( vmaAllocateMemoryForBuffer( _memAllocator, img.staging, &info, OUT &img.alloc, null ));
			VK_CHECK( vmaBindBufferMemory( _memAllocator, img.alloc, img.staging ));
		}

		VmaAllocationInfo	alloc_info	= {};
		vmaGetAllocationInfo( _memAllocator, img.alloc, OUT &alloc_info );

		CHECK_ERR( alloc_info.pMappedData );
		CHECK_ERR( img.size == stat.m_uncomp_size );
		CHECK_ERR( alloc_info.size >= stat.m_uncomp_size );
		CHECK_ERR( mz_zip_reader_extract_to_mem( &archive, index, alloc_info.pMappedData, Min( alloc_info.size, stat.m_uncomp_size ), 0 ) == MZ_TRUE );

		FG_LOGI( "Loaded image: '"s << StringView{name} << "', " << ToString(counter) << " of " << ToString(total) );
		++counter;
	}

	for (auto&[name, mem] : _hostMemContent)
	{
		uint	index = UMax;
		CHECK_ERR( mz_zip_reader_locate_file_v2( &archive, name.c_str(), "", 0, OUT &index ) == MZ_TRUE );

		mz_zip_archive_file_stat	stat;
		CHECK_ERR( mz_zip_reader_file_stat( &archive, index, OUT &stat ) == MZ_TRUE );
		
		CHECK_ERR( mem.size() == stat.m_uncomp_size );
		CHECK_ERR( mz_zip_reader_extract_to_mem( &archive, index, mem.data(), mem.size(), 0 ) == MZ_TRUE );

		FG_LOGI( "Loaded host memory: '"s << StringView{name} << "', " << ToString(counter) << " of " << ToString(total) );
		++counter;
	}

    mz_zip_reader_end( &archive );

	_contentLoaded = true;
	return true;
}

/*
=================================================
	_CreateAllocator
=================================================
*/
bool  VApp::_CreateAllocator () const
{
	if ( _memAllocator )
		return true;

	VmaVulkanFunctions		funcs = {};
	funcs.vkGetPhysicalDeviceProperties			= vkGetPhysicalDeviceProperties;
	funcs.vkGetPhysicalDeviceMemoryProperties	= vkGetPhysicalDeviceMemoryProperties;
    funcs.vkAllocateMemory						= BitCast<PFN_vkAllocateMemory>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkAllocateMemory" ));
    funcs.vkFreeMemory							= BitCast<PFN_vkFreeMemory>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkFreeMemory" ));
    funcs.vkMapMemory							= BitCast<PFN_vkMapMemory>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkMapMemory" ));
    funcs.vkUnmapMemory							= BitCast<PFN_vkUnmapMemory>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkUnmapMemory" ));
    funcs.vkBindBufferMemory					= BitCast<PFN_vkBindBufferMemory>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkBindBufferMemory" ));
    funcs.vkBindImageMemory						= BitCast<PFN_vkBindImageMemory>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkBindImageMemory" ));
    funcs.vkGetBufferMemoryRequirements			= BitCast<PFN_vkGetBufferMemoryRequirements>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkGetBufferMemoryRequirements" ));
    funcs.vkGetImageMemoryRequirements			= BitCast<PFN_vkGetImageMemoryRequirements>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkGetImageMemoryRequirements" ));
	funcs.vkCreateBuffer						= null;
	funcs.vkDestroyBuffer						= null;
	funcs.vkCreateImage							= null;
	funcs.vkDestroyImage						= null;
#if VMA_DEDICATED_ALLOCATION
    funcs.vkGetBufferMemoryRequirements2KHR		= BitCast<PFN_vkGetBufferMemoryRequirements2KHR>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkGetBufferMemoryRequirements2KHR" ));
    funcs.vkGetImageMemoryRequirements2KHR		= BitCast<PFN_vkGetImageMemoryRequirements2KHR>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkGetImageMemoryRequirements2KHR" ));
#endif
    funcs.vkFlushMappedMemoryRanges             = BitCast<PFN_vkFlushMappedMemoryRanges>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkFlushMappedMemoryRanges" ));
    funcs.vkInvalidateMappedMemoryRanges        = BitCast<PFN_vkInvalidateMappedMemoryRanges>(vkGetDeviceProcAddr( _vulkan.GetVkDevice(), "vkInvalidateMappedMemoryRanges" ));

	VmaAllocatorCreateInfo	info = {};
	info.flags			= VMA_ALLOCATOR_CREATE_EXTERNALLY_SYNCHRONIZED_BIT;
	info.physicalDevice	= _vulkan.GetVkPhysicalDevice();
	info.device			= _vulkan.GetVkDevice();

	info.preferredLargeHeapBlockSize	= VkDeviceSize(256_Mb);
	info.pAllocationCallbacks			= null;
	info.pDeviceMemoryCallbacks			= null;
	//info.frameInUseCount	// ignore
	info.pHeapSizeLimit					= null;		// TODO
	info.pVulkanFunctions				= &funcs;

	VK_CHECK( vmaCreateAllocator( &info, OUT &_memAllocator ));
	return true;
}

/*
=================================================
	_InitQueue
=================================================
*/
VApp::PerQueue&  VApp::_InitQueue (EQueueFamily family) const
{
	auto&	qdata = _queueCmd.insert({ family, {} }).first->second;

	if ( qdata.queue )
		return qdata;

	for (auto& q : _vulkan.GetVkQueues())
	{
		if ( q.familyIndex == uint(family) )
		{
			qdata.queue = q.handle;
			break;
		}
	}

	CHECK( qdata.queue );
	
	VkCommandPoolCreateInfo		pool_info = {};
	pool_info.sType				= VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
	pool_info.flags				= VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
	pool_info.queueFamilyIndex	= uint(family);
	VK_CALL( vkCreateCommandPool( _vulkan.GetVkDevice(), &pool_info, null, OUT &qdata.cmdPool ));

	VkCommandBufferAllocateInfo	cmd_info = {};
	cmd_info.sType				= VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
	cmd_info.commandBufferCount	= 2;
	cmd_info.commandPool		= qdata.cmdPool;
	cmd_info.level				= VK_COMMAND_BUFFER_LEVEL_PRIMARY;

	VkCommandBuffer		cmd_buffers[2] = {};
	VK_CALL( vkAllocateCommandBuffers( _vulkan.GetVkDevice(), &cmd_info, OUT cmd_buffers ));
	
	qdata.cmdBuffer		= cmd_buffers[0];
	qdata.cmdbufPresent	= cmd_buffers[1];

	VkCommandBufferBeginInfo	begin_info = {};
	begin_info.sType	= VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
	begin_info.flags	= 0;
	VK_CALL( vkBeginCommandBuffer( qdata.cmdBuffer, &begin_info ));

	qdata.started = true;
	return qdata;
}

/*
=================================================
	CreateSwapchainImage
=================================================
*/
bool  VApp::CreateSwapchainImage (ImageID image, uint2 dim, VkFormat format, VkImageUsageFlags usage) const
{
	CHECK_ERR( not _swapchainImageMem );
	
	usage |= VK_IMAGE_USAGE_TRANSFER_SRC_BIT;

	// check format
	{
		VkFormatProperties2	props = {};
		props.sType = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2;
		vkGetPhysicalDeviceFormatProperties2( _vulkan.GetVkPhysicalDevice(), format, OUT &props );

		VkFormatFeatureFlags	curr	 = props.formatProperties.optimalTilingFeatures;
		VkFormatFeatureFlags	required = 0;

		for (VkImageUsageFlagBits u = VkImageUsageFlagBits(1);
			 VkImageUsageFlags(u) <= usage;
			 u = VkImageUsageFlagBits(u << 1))
		{
			if ( not EnumEq( usage, u ))
				continue;

			BEGIN_ENUM_CHECKS();
			switch ( u )
			{
				case VK_IMAGE_USAGE_TRANSFER_SRC_BIT :				required |= VK_FORMAT_FEATURE_TRANSFER_SRC_BIT;		break;
				case VK_IMAGE_USAGE_TRANSFER_DST_BIT :				required |= VK_FORMAT_FEATURE_TRANSFER_DST_BIT;		break;
				case VK_IMAGE_USAGE_SAMPLED_BIT :					required |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT | VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT;	break;
				case VK_IMAGE_USAGE_STORAGE_BIT :					required |= VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT;	break;
				case VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT :			required |= VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT;	break;
				case VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT :	CHECK( !"not supported" );							break;
				case VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT :		CHECK( !"not supported" );							break;
				case VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT :			required |= VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT | VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT;	break;
				case VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV :		CHECK( !"not supported" );							break;
				case VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT :	CHECK( !"not supported" );							break;
				case VK_IMAGE_USAGE_FLAG_BITS_MAX_ENUM :			CHECK( !"not supported" );							break;
				default :											CHECK( !"unknown" );								break;
			}
			END_ENUM_CHECKS();
		}

		CHECK_ERR( EnumEq( curr, required ));
	}

	// create image
	{
		VkImageCreateInfo	info = {};
		info.sType			= VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
		info.flags			= 0;
		info.imageType		= VK_IMAGE_TYPE_2D;
		info.format			= format;
		info.extent			= { dim.x, dim.y, 1 };
		info.mipLevels		= 1;
		info.arrayLayers	= 1;
		info.samples		= VK_SAMPLE_COUNT_1_BIT;
		info.tiling			= VK_IMAGE_TILING_OPTIMAL;
		info.usage			= usage;
		info.sharingMode	= VK_SHARING_MODE_EXCLUSIVE;
		info.initialLayout	= VK_IMAGE_LAYOUT_UNDEFINED;

		VK_CHECK( vkCreateImage( _vulkan.GetVkDevice(), &info, null, OUT &EditResource(image) ));
	}

	// allocate memory
	{
		_CreateAllocator();

		VmaAllocationCreateInfo		info = {};
		info.flags			= VMA_ALLOCATION_CREATE_MAPPED_BIT;
		info.usage			= VMA_MEMORY_USAGE_GPU_ONLY;
		info.requiredFlags	= VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
		info.preferredFlags	= 0;
		info.memoryTypeBits	= 0;
		info.pool			= VK_NULL_HANDLE;
		info.pUserData		= null;

		VK_CHECK( vmaAllocateMemoryForImage( _memAllocator, GetResource(image), &info, OUT &_swapchainImageMem, null ));
		VK_CHECK( vmaBindImageMemory( _memAllocator, _swapchainImageMem, GetResource(image) ));
	}

	_swapchainImageId	= image;
	_swapchainImageDim = dim;
	return true;
}

/*
=================================================
	BeginFrame
=================================================
*/
EAppAction  VApp::BeginFrame ()
{
	if ( not _window )
		return EAppAction::Quit;

	if ( not _window->Update() )
		return EAppAction::Quit;

	if ( _pauseRendering )
	{
		std::this_thread::sleep_for( std::chrono::milliseconds{16} );
		return EAppAction::Pause;
	}

	for (auto&[family, q] : _queueCmd)
	{
		if ( q.started ) {
			VK_CHECK( vkEndCommandBuffer( q.cmdBuffer ), EAppAction::None );
			q.started = false;
		}

		VkSubmitInfo		submit_info = {};
		submit_info.sType				= VK_STRUCTURE_TYPE_SUBMIT_INFO;
		submit_info.commandBufferCount	= 1;
		submit_info.pCommandBuffers		= &q.cmdBuffer;

		VK_CHECK( vkQueueSubmit( q.queue, 1, &submit_info, VK_NULL_HANDLE ), EAppAction::None );
	}

	VK_CHECK( vkDeviceWaitIdle( _vulkan.GetVkDevice() ), EAppAction::None );

	EAppAction	result = EAppAction::None;

	if ( _requireRebuildPipelines )
	{
		_requireRebuildPipelines = false;
		result					 = EAppAction::RecreatePipelines;
		_DestroyPipelines();
	}

	// TODO: start timer
	return result;
}

/*
=================================================
	EndFrame
=================================================
*/
bool  VApp::EndFrame (EQueueFamily presentQueue)
{
	CHECK_ERR( _swapchain );
		
	// TODO: stop timer

	auto&	qdata = _InitQueue( presentQueue );
	
	VK_CHECK( vkDeviceWaitIdle( _vulkan.GetVkDevice() ));
	
	// acquire next swapchain image
	{
		if ( not _imageAvailableSem )
		{
			VkSemaphoreCreateInfo	info = {};
			info.sType	= VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
			VK_CHECK( vkCreateSemaphore( _vulkan.GetVkDevice(), &info, null, OUT &_imageAvailableSem ));
		}

		VK_CHECK( _swapchain->AcquireNextImage( _imageAvailableSem ));
	}

	// copy from virtual swapchain image to physical swapchain image
	{
		VkCommandBufferBeginInfo	begin_info = {};
		begin_info.sType	= VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
		begin_info.flags	= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
		VK_CALL( vkBeginCommandBuffer( qdata.cmdbufPresent, &begin_info ));

		// temp
		{
			VkImageMemoryBarrier	barrier = {};
			barrier.sType				= VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
			barrier.srcAccessMask		= 0;
			barrier.dstAccessMask		= VK_ACCESS_TRANSFER_READ_BIT;
			barrier.oldLayout			= VK_IMAGE_LAYOUT_UNDEFINED;
			barrier.newLayout			= VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
			barrier.srcQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
			barrier.dstQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
			barrier.image				= GetResource(_swapchainImageId);
			barrier.subresourceRange	= { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };

			vkCmdPipelineBarrier( qdata.cmdbufPresent, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0,
								  0, null, 0, null, 1, &barrier );
		}

		// blit
		{
			VkImageMemoryBarrier	barrier = {};
			barrier.sType				= VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
			barrier.srcAccessMask		= 0;
			barrier.dstAccessMask		= VK_ACCESS_TRANSFER_WRITE_BIT;
			barrier.oldLayout			= VK_IMAGE_LAYOUT_UNDEFINED;
			barrier.newLayout			= VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
			barrier.srcQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
			barrier.dstQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
			barrier.image				= _swapchain->GetCurrentImage();
			barrier.subresourceRange	= { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };

			vkCmdPipelineBarrier( qdata.cmdbufPresent, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0,
								  0, null, 0, null, 1, &barrier );

			VkImageBlit		region = {};
			region.srcOffsets[0]	= { 0, 0, 0 };
			region.srcOffsets[1]	= { int(_swapchainImageDim.x), int(_swapchainImageDim.y), 1 };
			region.srcSubresource	= { VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1 };
			region.dstOffsets[0]	= { 0, 0, 0 };
			region.dstOffsets[1]	= { int(_swapchain->GetSurfaceSize().x), int(_swapchain->GetSurfaceSize().y), 1 };
			region.dstSubresource	= { VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1 };

			vkCmdBlitImage( qdata.cmdbufPresent, GetResource(_swapchainImageId), VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
						    _swapchain->GetCurrentImage(), VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
						    1, &region, VK_FILTER_LINEAR );
		}

		// transfer -> present
		{
			VkImageMemoryBarrier	barrier = {};
			barrier.sType				= VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
			barrier.srcAccessMask		= VK_ACCESS_TRANSFER_WRITE_BIT;
			barrier.dstAccessMask		= 0;
			barrier.oldLayout			= VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
			barrier.newLayout			= VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
			barrier.srcQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
			barrier.dstQueueFamilyIndex	= VK_QUEUE_FAMILY_IGNORED;
			barrier.image				= _swapchain->GetCurrentImage();
			barrier.subresourceRange	= { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };

			vkCmdPipelineBarrier( qdata.cmdbufPresent, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, 0,
								  0, null, 0, null, 1, &barrier );
		}

		VK_CHECK( vkEndCommandBuffer( qdata.cmdbufPresent ));

		VkPipelineStageFlags	dst_mask = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT;
		VkSubmitInfo			submit	 = {};
		submit.sType				= VK_STRUCTURE_TYPE_SUBMIT_INFO;
		submit.commandBufferCount	= 1;
		submit.pCommandBuffers		= &qdata.cmdbufPresent;
		submit.waitSemaphoreCount	= 1;
		submit.pWaitDstStageMask	= &dst_mask;
		submit.pWaitSemaphores		= &_imageAvailableSem;

		VK_CHECK( vkQueueSubmit( qdata.queue, 1, &submit, VK_NULL_HANDLE ));
	}

	VkResult	err = _swapchain->Present( qdata.queue, {} );
	switch ( err ) {
		case VK_SUCCESS :
			break;

		case VK_SUBOPTIMAL_KHR :
		case VK_ERROR_SURFACE_LOST_KHR :
		case VK_ERROR_OUT_OF_DATE_KHR :
			//CHECK( _swapchain->Recreate( _window->GetSize() ));	// TODO
			//break;

		default :
			RETURN_ERR( "Present failed" );
	}

	VK_CHECK( vkDeviceWaitIdle( _vulkan.GetVkDevice() ));

	return true;
}

/*
=================================================
	Destroy
=================================================
*/
void  VApp::Destroy ()
{
	if ( _vulkan.GetVkDevice() )
	{
		VK_CALL( vkDeviceWaitIdle( _vulkan.GetVkDevice() ));

		_DestroyResources();

		if ( _imageAvailableSem ) {
			vkDestroySemaphore( _vulkan.GetVkDevice(), _imageAvailableSem, null );
			_imageAvailableSem = VK_NULL_HANDLE;
		}

		for (auto& q : _queueCmd) {
			vkDestroyCommandPool( _vulkan.GetVkDevice(), q.second.cmdPool, null );
		}
		_queueCmd.clear();

		for (auto&[name, img] : _imageContent) {
			vmaFreeMemory( _memAllocator, img.alloc );
			vkDestroyBuffer( _vulkan.GetVkDevice(), img.staging, null );
		}
		_imageContent.clear();

		for (auto&[name, buf] : _bufferContent) {
			vmaFreeMemory( _memAllocator, buf.alloc );
			vkDestroyBuffer( _vulkan.GetVkDevice(), buf.staging, null );
		}
		_bufferContent.clear();

		vmaFreeMemory( _memAllocator, _swapchainImageMem );

		if ( _memAllocator ) {
			vmaDestroyAllocator( _memAllocator );
			_memAllocator = null;
		}
	}

	if ( _swapchain ) {
		_swapchain->Destroy();
		_swapchain.reset();
	}

	_vulkan.Destroy();

	if ( _window ) {
		_window->Destroy();
		_window.reset();
	}
}

/*
=================================================
	_DestroyPipelines
=================================================
*/
void VApp::_DestroyPipelines ()
{
	// shader modules
	{
		auto&	storage = _resources[ _ObjInfo<ShaderModuleID>::index ];

		for (auto smod : storage) {
			vkDestroyShaderModule( _vulkan.GetVkDevice(), VkShaderModule(smod), null );
		}
	}

	// pipelines
	{
		auto&	storage = _resources[ _ObjInfo<PipelineID>::index ];

		for (auto ppln : storage) {
			vkDestroyPipeline( _vulkan.GetVkDevice(), VkPipeline(ppln), null );
		}
	}
}

/*
=================================================
	_DestroyResources
=================================================
*/
void  VApp::_DestroyResources ()
{
	for (size_t i = 0; i < _resources.size(); ++i)
	{
		auto&	storage = _resources[i];

		BEGIN_ENUM_CHECKS();
		switch ( i )
		{
			case _ObjInfo< InstanceID >::index :
			case _ObjInfo< PhysicalDeviceID >::index :
			case _ObjInfo< DeviceID >::index :
			case _ObjInfo< QueueID >::index :
			case _ObjInfo< CommandBufferID >::index :
			case _ObjInfo< DescriptorSetID >::index :
				break;	// ignore

			case _ObjInfo< SemaphoreID >::index :
			{
				for (auto sem : storage) {
					vkDestroySemaphore( _vulkan.GetVkDevice(), VkSemaphore(sem), null );
				}
				break;
			}
			case _ObjInfo< FenceID >::index :
			{
				for (auto fence : storage) {
					vkDestroyFence( _vulkan.GetVkDevice(), VkFence(fence), null );
				}
				break;
			}
			case _ObjInfo< DeviceMemoryID >::index :
			{
				for (auto mem : storage) {
					vkFreeMemory( _vulkan.GetVkDevice(), VkDeviceMemory(mem), null );
				}
				break;
			}
			case _ObjInfo< BufferID >::index :
			{
				for (auto buf : storage) {
					vkDestroyBuffer( _vulkan.GetVkDevice(), VkBuffer(buf), null );
				}
				break;
			}
			case _ObjInfo< ImageID >::index :
			{
				for (auto img : storage) {
					vkDestroyImage( _vulkan.GetVkDevice(), VkImage(img), null );
				}
				break;
			}
			case _ObjInfo< EventID >::index :
			{
				for (auto ev : storage) {
					vkDestroyEvent( _vulkan.GetVkDevice(), VkEvent(ev), null );
				}
				break;
			}
			case _ObjInfo< QueryPoolID >::index :
			{
				for (auto pool : storage) {
					vkDestroyQueryPool( _vulkan.GetVkDevice(), VkQueryPool(pool), null );
				}
				break;
			}
			case _ObjInfo< BufferViewID >::index :
			{
				for (auto view : storage) {
					vkDestroyBufferView( _vulkan.GetVkDevice(), VkBufferView(view), null );
				}
				break;
			}
			case _ObjInfo< ImageViewID >::index :
			{
				for (auto view : storage) {
					vkDestroyImageView( _vulkan.GetVkDevice(), VkImageView(view), null );
				}
				break;
			}
			case _ObjInfo< ShaderModuleID >::index :
			{
				for (auto smod : storage) {
					vkDestroyShaderModule( _vulkan.GetVkDevice(), VkShaderModule(smod), null );
				}
				break;
			}
			case _ObjInfo< PipelineCacheID >::index :
			{
				for (auto pplnc : storage) {
					vkDestroyPipelineCache( _vulkan.GetVkDevice(), VkPipelineCache(pplnc), null );
				}
				break;
			}
			case _ObjInfo< PipelineLayoutID >::index :
			{
				for (auto lay : storage) {
					vkDestroyPipelineLayout( _vulkan.GetVkDevice(), VkPipelineLayout(lay), null );
				}
				break;
			}
			case _ObjInfo< RenderPassID >::index :
			{
				for (auto rp : storage) {
					vkDestroyRenderPass( _vulkan.GetVkDevice(), VkRenderPass(rp), null );
				}
				break;
			}
			case _ObjInfo< PipelineID >::index :
			{
				for (auto ppln : storage) {
					vkDestroyPipeline( _vulkan.GetVkDevice(), VkPipeline(ppln), null );
				}
				break;
			}
			case _ObjInfo< DescriptorSetLayoutID >::index :
			{
				for (auto dslay : storage) {
					vkDestroyDescriptorSetLayout( _vulkan.GetVkDevice(), VkDescriptorSetLayout(dslay), null );
				}
				break;
			}
			case _ObjInfo< SamplerID >::index :
			{
				for (auto samp : storage) {
					vkDestroySampler( _vulkan.GetVkDevice(), VkSampler(samp), null );
				}
				break;
			}
			case _ObjInfo< DescriptorPoolID >::index :
			{
				for (auto pool : storage) {
					vkDestroyDescriptorPool( _vulkan.GetVkDevice(), VkDescriptorPool(pool), null );
				}
				break;
			}
			case _ObjInfo< FramebufferID >::index :
			{
				for (auto fb : storage) {
					vkDestroyFramebuffer( _vulkan.GetVkDevice(), VkFramebuffer(fb), null );
				}
				break;
			}
			case _ObjInfo< CommandPoolID >::index :
			{
				for (auto pool : storage) {
					vkDestroyCommandPool( _vulkan.GetVkDevice(), VkCommandPool(pool), null );
				}
				break;
			}
		}
		END_ENUM_CHECKS();

		storage.clear();
	}

	_mappedMemory.clear();
}
