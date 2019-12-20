// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#include "RdCaptureReader.h"
#include "Vulkan/VulkanConverter.h"

using namespace RDE;

int main ()
{
	String	input;
	String	output;


	VulkanConverter	vk_conv{ output };
	RdCaptureReader	reader;

	reader.AddListener( vk_conv.GetListener() );

	CHECK_ERR( reader.OpenCapture( input ), -1 );
	
	return 0;
}
