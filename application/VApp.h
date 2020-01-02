// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

#include "framework/Vulkan/VulkanDeviceExt.h"
#include "framework/Vulkan/VulkanSwapchain.h"
#include "framework/Window/IWindow.h"
#include "stl/Algorithms/ArrayUtils.h"
#include "stl/Containers/FixedMap.h"
#include "stl/Containers/StaticString.h"
#include "SpvCompiler.h"
#include <iostream>

VK_DEFINE_HANDLE(VmaAllocator)
VK_DEFINE_HANDLE(VmaAllocation)

using VkResourceID_t = uint64_t;
using ResourceID_t = uint32_t; // not a real vulkan handle, just a index in array

enum class InstanceID : ResourceID_t {};
enum class PhysicalDeviceID : ResourceID_t {};
enum class DeviceID : ResourceID_t {};
enum class QueueID : ResourceID_t {};
enum class SemaphoreID : ResourceID_t {};
enum class CommandBufferID : ResourceID_t {};
enum class FenceID : ResourceID_t {};
enum class DeviceMemoryID : ResourceID_t {};
enum class BufferID : ResourceID_t {};
enum class ImageID : ResourceID_t {};
enum class EventID : ResourceID_t {};
enum class QueryPoolID : ResourceID_t {};
enum class BufferViewID : ResourceID_t {};
enum class ImageViewID : ResourceID_t {};
enum class ShaderModuleID : ResourceID_t {};
enum class PipelineCacheID : ResourceID_t {};
enum class PipelineLayoutID : ResourceID_t {};
enum class RenderPassID : ResourceID_t {};
enum class PipelineID : ResourceID_t {};
enum class DescriptorSetLayoutID : ResourceID_t {};
enum class SamplerID : ResourceID_t {};
enum class DescriptorPoolID : ResourceID_t {};
enum class DescriptorSetID : ResourceID_t {};
enum class FramebufferID : ResourceID_t {};
enum class CommandPoolID : ResourceID_t {};
//enum class SwapchainKHRID : ResourceID_t {};
//enum class SurfaceKHRID : ResourceID_t {};
enum class DescriptorUpdateTemplID : ResourceID_t {};

enum class ContentID : uint32_t {};

enum class EQueueFamily : uint32_t {};

template <typename ID>  struct _ObjInfo;
template <>  struct _ObjInfo< InstanceID >				{ static constexpr uint32_t	 index = 0;		using vktype = VkInstance;				static constexpr auto  type = VK_OBJECT_TYPE_INSTANCE; };
template <>  struct _ObjInfo< PhysicalDeviceID >		{ static constexpr uint32_t	 index = 1;		using vktype = VkPhysicalDevice;		static constexpr auto  type = VK_OBJECT_TYPE_PHYSICAL_DEVICE; };
template <>  struct _ObjInfo< DeviceID >				{ static constexpr uint32_t	 index = 2;		using vktype = VkDevice;				static constexpr auto  type = VK_OBJECT_TYPE_DEVICE; };
template <>  struct _ObjInfo< QueueID >					{ static constexpr uint32_t	 index = 3;		using vktype = VkQueue;					static constexpr auto  type = VK_OBJECT_TYPE_QUEUE; };
template <>  struct _ObjInfo< SemaphoreID >				{ static constexpr uint32_t	 index = 4;		using vktype = VkSemaphore;				static constexpr auto  type = VK_OBJECT_TYPE_SEMAPHORE; };
template <>  struct _ObjInfo< CommandBufferID >			{ static constexpr uint32_t	 index = 5;		using vktype = VkCommandBuffer;			static constexpr auto  type = VK_OBJECT_TYPE_COMMAND_BUFFER; };
template <>  struct _ObjInfo< FenceID >					{ static constexpr uint32_t	 index = 6;		using vktype = VkFence;					static constexpr auto  type = VK_OBJECT_TYPE_FENCE; };
template <>  struct _ObjInfo< DeviceMemoryID >			{ static constexpr uint32_t	 index = 7;		using vktype = VkDeviceMemory;			static constexpr auto  type = VK_OBJECT_TYPE_DEVICE_MEMORY; };
template <>  struct _ObjInfo< BufferViewID >			{ static constexpr uint32_t	 index = 8;		using vktype = VkBufferView;			static constexpr auto  type = VK_OBJECT_TYPE_BUFFER_VIEW; };
template <>  struct _ObjInfo< ImageViewID >				{ static constexpr uint32_t	 index = 9;		using vktype = VkImageView;				static constexpr auto  type = VK_OBJECT_TYPE_IMAGE_VIEW; };
template <>  struct _ObjInfo< EventID >					{ static constexpr uint32_t	 index = 10;	using vktype = VkEvent;					static constexpr auto  type = VK_OBJECT_TYPE_EVENT; };
template <>  struct _ObjInfo< QueryPoolID >				{ static constexpr uint32_t	 index = 11;	using vktype = VkQueryPool;				static constexpr auto  type = VK_OBJECT_TYPE_QUERY_POOL; };
template <>  struct _ObjInfo< BufferID >				{ static constexpr uint32_t	 index = 12;	using vktype = VkBuffer;				static constexpr auto  type = VK_OBJECT_TYPE_BUFFER; };
template <>  struct _ObjInfo< ImageID >					{ static constexpr uint32_t	 index = 13;	using vktype = VkImage;					static constexpr auto  type = VK_OBJECT_TYPE_IMAGE; };
template <>  struct _ObjInfo< ShaderModuleID >			{ static constexpr uint32_t	 index = 14;	using vktype = VkShaderModule;			static constexpr auto  type = VK_OBJECT_TYPE_SHADER_MODULE; };
template <>  struct _ObjInfo< PipelineCacheID >			{ static constexpr uint32_t	 index = 15;	using vktype = VkPipelineCache;			static constexpr auto  type = VK_OBJECT_TYPE_PIPELINE_CACHE; };
template <>  struct _ObjInfo< PipelineLayoutID >		{ static constexpr uint32_t	 index = 16;	using vktype = VkPipelineLayout;		static constexpr auto  type = VK_OBJECT_TYPE_PIPELINE_LAYOUT; };
template <>  struct _ObjInfo< RenderPassID >			{ static constexpr uint32_t	 index = 17;	using vktype = VkRenderPass;			static constexpr auto  type = VK_OBJECT_TYPE_RENDER_PASS; };
template <>  struct _ObjInfo< PipelineID >				{ static constexpr uint32_t	 index = 18;	using vktype = VkPipeline;				static constexpr auto  type = VK_OBJECT_TYPE_PIPELINE; };
template <>  struct _ObjInfo< DescriptorSetLayoutID >	{ static constexpr uint32_t	 index = 19;	using vktype = VkDescriptorSetLayout;	static constexpr auto  type = VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT; };
template <>  struct _ObjInfo< SamplerID >				{ static constexpr uint32_t	 index = 20;	using vktype = VkSampler;				static constexpr auto  type = VK_OBJECT_TYPE_SAMPLER; };
template <>  struct _ObjInfo< DescriptorPoolID >		{ static constexpr uint32_t	 index = 21;	using vktype = VkDescriptorPool;		static constexpr auto  type = VK_OBJECT_TYPE_DESCRIPTOR_POOL; };
template <>  struct _ObjInfo< DescriptorSetID >			{ static constexpr uint32_t	 index = 22;	using vktype = VkDescriptorSet;			static constexpr auto  type = VK_OBJECT_TYPE_DESCRIPTOR_SET; };
template <>  struct _ObjInfo< FramebufferID >			{ static constexpr uint32_t	 index = 23;	using vktype = VkFramebuffer;			static constexpr auto  type = VK_OBJECT_TYPE_FRAMEBUFFER; };
template <>  struct _ObjInfo< CommandPoolID >			{ static constexpr uint32_t	 index = 24;	using vktype = VkCommandPool;			static constexpr auto  type = VK_OBJECT_TYPE_COMMAND_POOL; };
//template <>  struct _ObjInfo< SwapchainKHRID >		{ static constexpr uint32_t	 index = 25;	using vktype = VkSwapchainKHR;			static constexpr auto  type = VK_OBJECT_TYPE_SWAPCHAIN_KHR; };
//template <>  struct _ObjInfo< SurfaceKHRID >			{ static constexpr uint32_t	 index = 26;	using vktype = VkSurfaceKHR;			static constexpr auto  type = VK_OBJECT_TYPE_SURFACE_KHR; };
template <>  struct _ObjInfo< DescriptorUpdateTemplID >	{ static constexpr uint32_t	 index = 27;	using vktype = VkDescriptorUpdateTemplate; static constexpr auto  type = VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR; };

using namespace FGC;


struct FIValue
{
	union {
		float	f;
		int		i;
		uint	u;
	};

	FIValue () : i{0} {}
	FIValue (float val) : f{val} {}
	FIValue (int val) : i{val} {}
	FIValue (uint val) : u{val} {}
};


enum class EAppAction
{
	None,
	Quit,
	Pause,
	RecreatePipelines,
};


#include <filesystem>
namespace FS = std::filesystem;


//
// Vulkan Application
//

class VApp final : public IWindowEventListener, public VulkanDeviceFn
{
// types
public:
	struct QueueInfo
	{
		uint						uid			= 0;
		VkDeviceQueueCreateFlags	createFlags	= 0;
		VkQueueFlags				familyFlags	= 0;
		float						priority	= 0.0f;
	};


private:
	struct QueueMapping
	{
		uint				index;
		mutable QueueID		id;
	};
	using QueueUIDMap_t		= FixedMap< uint, QueueMapping, 16 >;

	using ContentName_t		= StaticString<64>;

	struct ImageContent
	{
		VmaAllocation		alloc		= null;
		VkBuffer			staging		= VK_NULL_HANDLE;
		BytesU				size;
		uint3				dim;
		uint				arrayLayers;
		VkFormat			format;
		VkSampleCountFlagBits samples;
		uint				maxLevels;
		VkImageAspectFlags	aspect;
	};

	struct BufferContent
	{
		VmaAllocation		alloc		= null;
		VkBuffer			staging		= VK_NULL_HANDLE;
		BytesU				size;
	};

	using ImageContentMap_t		= HashMap< ContentName_t, ImageContent >;
	using BufferContentMap_t	= HashMap< ContentName_t, BufferContent >;
	using HostMemContentMap_t	= HashMap< ContentName_t, Array<uint8_t> >;

	struct PerQueue
	{
		VkQueue				queue			= VK_NULL_HANDLE;
		VkCommandPool		cmdPool			= VK_NULL_HANDLE;
		VkCommandBuffer		cmdBuffer		= VK_NULL_HANDLE;
		VkCommandBuffer		cmdbufPresent	= VK_NULL_HANDLE;
		bool				started			= false;
	};
	using PerQueueData_t	= FixedMap< EQueueFamily, PerQueue, 8 >;

	using ResourceMap_t		= StaticArray< Array<VkResourceID_t>, 32 >;
	using MappedMemory_t	= Array< void* >;


// variables
private:
	VulkanDeviceExt			_vulkan;
	VulkanSwapchainPtr		_swapchain;
	WindowPtr				_window;
	String					_windowTitle;
	uint2					_surfaceSize;

	// actions
	bool					_requireRebuildPipelines	= false;
	bool					_pauseRendering				= false;

	// virtual swapchain
	VkSemaphore				_imageAvailableSem		= VK_NULL_HANDLE;
	mutable VkImage			_swapchainImage			= VK_NULL_HANDLE;
	mutable ImageID			_swapchainImageId;
	mutable VmaAllocation	_swapchainImageMem		= VK_NULL_HANDLE;
	mutable uint2			_swapchainImageDim;
	
	mutable PerQueueData_t	_queueCmd;
	QueueUIDMap_t			_queueMap;
	mutable ResourceMap_t	_resources;
	mutable MappedMemory_t	_mappedMemory;

	FS::path				_shaderFolder;
	AppDetail::SpvCompiler	_spvCompiler;
	mutable String			_shaderSrc;
	mutable Array<uint>		_spvBuffer;

	FS::path					_contentFolder;
	mutable ImageContentMap_t	_imageContent;
	mutable BufferContentMap_t	_bufferContent;
	mutable HostMemContentMap_t	_hostMemContent;
	mutable bool				_contentLoaded	= false;
	mutable VmaAllocator		_memAllocator	= null;


// methods
public:
	VApp ();
	~VApp ();

	bool CreateWindow (uint width, uint height, StringView title);

	bool CreateDevice (InstanceID				instance,
					   PhysicalDeviceID			physicalDevice,
					   DeviceID					logicalDevice,
					   StringView				gpuDeviceName,
					   uint						apiVersion,
					   ArrayView<QueueInfo>		queues,
					   ArrayView<const char*>	instanceLayers		= VulkanDevice::GetRecomendedInstanceLayers(),
					   ArrayView<const char*>	instanceExtensions	= VulkanDevice::GetRecomendedInstanceExtensions(),
					   ArrayView<const char*>	deviceExtensions	= VulkanDevice::GetRecomendedDeviceExtensions());

	bool CreateSwapchain (const VkFormat						colorFormat			= VK_FORMAT_B8G8R8A8_UNORM,
						  const VkColorSpaceKHR					colorSpace			= VK_COLOR_SPACE_SRGB_NONLINEAR_KHR,
						  const uint							minImageCount		= 2,
						  const VkSurfaceTransformFlagBitsKHR	preTransform		= VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR,
						  const VkPresentModeKHR				presentMode			= VK_PRESENT_MODE_FIFO_KHR,
						  const VkCompositeAlphaFlagBitsKHR		compositeAlpha		= VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR,
						  const VkImageUsageFlags				colorImageUsage		= VK_IMAGE_USAGE_TRANSFER_DST_BIT);
	
	void Destroy ();

	template <typename ResIdType>
	void AllocateResources (const ResIdType count);

	bool CreateSwapchainImage (ImageID image, uint2 dim, VkFormat format, VkImageUsageFlags usage) const;

	ND_ EAppAction BeginFrame ();
	bool EndFrame (EQueueFamily presentQueue);

	bool MapQueueID (uint uid, QueueID id) const;

	template <typename ResIdType>
	void SetObjectName (const ResIdType id, StringView name) const;

	ND_ uint  GetQueueFamilyIndex (QueueID id) const;

	template <typename ResIdType>
	ND_ typename _ObjInfo<ResIdType>::vktype const	GetResource (ResIdType id)	const;

	template <typename ResIdType>
	ND_ typename _ObjInfo<ResIdType>::vktype & 		EditResource (ResIdType id)	const	{ return _EditResource( id ); }

	void SetShaderFolder (StringView folder);
	bool CreateShaderModule (StringView name, VkShaderStageFlagBits stage, OUT VkShaderModule &module) const;

	void SetContentFolder (StringView folder);
	bool LoadImage (StringView contentName, uint3 dim, uint arrayLayers, VkSampleCountFlagBits samples,
					uint maxLevels, VkFormat format, VkImageAspectFlags aspect, BytesU size) const;
	bool LoadBuffer (StringView contentName, BytesU size) const;
	bool LoadHostMemory (StringView contentName, BytesU size) const;

	bool UploadImage (ImageID image, EQueueFamily queue, VkImageMemoryBarrier *barriers, size_t count, StringView contentName) const;
	bool UploadBuffer (BufferID buffer, BytesU offset, BytesU size, EQueueFamily queue, StringView contentName) const;
	bool SetImageInitialLayout (ImageID image, EQueueFamily queue, const VkImageMemoryBarrier *barriers, size_t count) const;
	bool CopyMemory (DeviceMemoryID mem, StringView contentName) const;

private:
	template <typename ResIdType>
	typename _ObjInfo<ResIdType>::vktype &  _EditResource (ResIdType id) const;

	ND_ VkInstance & 				EditResource (InstanceID id)				{ return _EditResource( id ); }
	ND_ VkPhysicalDevice & 			EditResource (PhysicalDeviceID id)			{ return _EditResource( id ); }
	ND_ VkDevice & 					EditResource (DeviceID id)					{ return _EditResource( id ); }
	ND_ VkQueue & 					EditResource (QueueID id)					{ return _EditResource( id ); }
	
// IWindowEventListener
private:
	void OnResize (const uint2 &size) override;
	void OnRefresh () override {}
	void OnDestroy () override {}
	void OnUpdate () override {}
	void OnKey (StringView, EKeyAction) override;
	void OnMouseMove (const float2 &) override {}

private:
	bool _LoadBuffer (void *archive, const ContentName_t &name, BufferContent &content) const;
	bool _LoadImage (void *archive, const ContentName_t &name, ImageContent &content) const;
	bool _LoadMemory (void *archive, const ContentName_t &name, Array<uint8_t> &content) const;

	bool _LoadContent () const;
	bool _CreateAllocator () const;
	
	bool _AcquireImage (ImageID image, SemaphoreID imageAvailableSemaphore) const;
	bool _Present (QueueID queue, ImageID image, SemaphoreID renderFinishedSemaphore) const;

	ND_ PerQueue& _InitQueue (EQueueFamily family) const;

	void _DestroyResources ();
	void _DestroyPipelines ();
};



/*
=================================================
	GetResource
=================================================
*/
template <typename ResIdType>
inline typename _ObjInfo<ResIdType>::vktype const  VApp::GetResource (ResIdType id) const
{
	if ( id == ResIdType(~0u) )
		return 0;

	constexpr uint	index = _ObjInfo<ResIdType>::index;
		
	STATIC_ASSERT( index < std::tuple_size<decltype(_resources)>::value );
	ASSERT( size_t(id) < _resources[index].size() );

	auto	result = BitCast< typename _ObjInfo<ResIdType>::vktype >( _resources[index] [size_t(id)] );
	ASSERT( result != 0 );

	return result;
}
	
/*
=================================================
	EditResource
=================================================
*/
template <typename ResIdType>
inline typename _ObjInfo<ResIdType>::vktype &  VApp::_EditResource (ResIdType id) const
{
	constexpr uint	index = _ObjInfo<ResIdType>::index;
		
	STATIC_ASSERT( index < std::tuple_size<decltype(_resources)>::value );
	ASSERT( size_t(id) < _resources[index].size() );

	auto&	result = reinterpret_cast< typename _ObjInfo<ResIdType>::vktype &>( _resources[index] [size_t(id)] );
	return result;
}
	
/*
=================================================
	AllocateResources
=================================================
*/
template <typename ResIdType>
inline void  VApp::AllocateResources (const ResIdType count)
{
	constexpr uint	index = _ObjInfo<ResIdType>::index;
		
	STATIC_ASSERT( index < std::tuple_size<decltype(_resources)>::value );
	ASSERT( count < ResIdType(~0u) );

	_resources[ index ].resize( size_t(count) );

	if constexpr( IsSameTypes< ResIdType, DeviceMemoryID >)
	{
		_mappedMemory.resize( size_t(count) );
	}
}

/*
=================================================
	SetObjectName
=================================================
*/
template <typename ResIdType>
inline void  VApp::SetObjectName (const ResIdType id, StringView name) const
{
	_vulkan.SetObjectName( uint64_t(GetResource(id)), name, _ObjInfo<ResIdType>::type );
}

/*
=================================================
	operator <<
=================================================
*/
template <typename T, size_t S>
inline void operator << (T (&dst)[S], const StaticArray<T,S> &src)
{
	memcpy( dst, src.data(), sizeof(src) );
}
