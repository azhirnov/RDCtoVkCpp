// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "Generator.h"

/*
=================================================
	main
=================================================
*/
int main (int argc, const char** argv)
{
	using namespace RDE;

	CHECK_ERR( argv > 0 );
	
	StringView	vulkan_headers;
	StringView	rd_vkchunk;
	StringView	output;

	for (int i = 1; i < argc; ++i)
	{
		StringView	key = argv[i];
		StringView	value;

		if ( ++i < argc )
			value = argv[i];

		if ( key == "-vulkan" )
			vulkan_headers = value;
		else
		if ( key == "-vkchunk" )
			rd_vkchunk = value;
		else
		if ( key == "-output" )
			output = value;
		else
			RETURN_ERR( "unsupported command arg: "s << key, 1 );
	}

	// temp
#if 1
	vulkan_headers	= R"(C:\Projects\RdcExport\external\FrameGraph\external\Vulkan-Headers\include\vulkan)";
	rd_vkchunk		= R"(C:\Projects\RdcExport\external\RenderDoc\vk_common.h)";
	output			= R"(C:\Projects\RdcExport\converter\Generated)";
#endif

	
	Generator	generator;

	CHECK_ERR( generator.ParseVkHeaders( vulkan_headers ), -1 );
	CHECK_ERR( generator.ParseVkChunks( rd_vkchunk ), -2 );
	CHECK_ERR( generator.BuildBasicTypeMap(), -3 );
	CHECK_ERR( generator.BuildResourceTypeMap(), -4 );
	CHECK_ERR( generator.BuildFuncArgCountOfMap(), -5 );
	CHECK_ERR( generator.BuildStructFieldCountOfMap(), -6 );
	CHECK_ERR( generator.BuildFuncArgDestructorMap(), -7 );
	CHECK_ERR( generator.SetFunctionsScope(), -8 );
	CHECK_ERR( generator.BuildSkipPacketsMap(), -9 );
	
	CHECK_ERR( generator.MarkRequiredTypesForSerializing() );
	CHECK_ERR( generator.GenEnumToString( FS::path(output).append( "VkEnumToString.h" ), FS::path(output).append( "VkEnumToStringImpl.h" )), -16 );
	CHECK_ERR( generator.GenStructToString( FS::path(output).append( "VkStructToString.h" ), FS::path(output).append( "VkStructToStringImpl.h" )), -17 );

	CHECK_ERR( generator.GenListenerInterface( FS::path(output).append("IVulkanListener.h") ), -18 );
	CHECK_ERR( generator.GenChunkParser( FS::path(output).append("ParseChunk.h"),
										 FS::path(output).append("ParseChunkImpl.h"),
										 FS::path(output).append("ParseChunkMap.h") ), -19 );
	CHECK_ERR( generator.GenValueParser( FS::path(output).append("ParseValue.h"),
										 FS::path(output).append("ParseValueImpl.h") ), -20 );
	CHECK_ERR( generator.GenRawVulkanCalls( FS::path{output}.append("BuildRawVulkanCalls.h") ), -21 );

	return 0;
}
