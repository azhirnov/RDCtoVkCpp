// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#include "RdCaptureReader.h"
#include "Vulkan/VulkanConverter.h"
#include <iostream>


using namespace RDE;

static const char	s_Help[] = R"#(
-o [filename]
--open [filename]   - open RenderDoc capture

-d [dir]
--output-dir [dir]  - save c++ code into output directory
)#";

int main (int argc, const char** argv)
{
	String	input;
	String	output;
	
	// parse arguments
	for (int i = 1; i < argc; ++i)
	{
		StringView	curr = argv[i];

		// 'open RDC' command
		if ( curr == "-o" or curr == "--open" )
		{
			if ( i+1 >= argc )
			{
				std::cout << "'--open' requires file or folder name" << std::endl;
				return -1;
			}

			input = argv[++i];
			continue;
		}

		// 'set output directory' command
		if ( curr == "-d" or curr == "--output-dir" )
		{
			if ( i+1 >= argc )
			{
				std::cout << "'--output-dir' requires folder name" << std::endl;
				return -1;
			}

			output = argv[++i];
			continue;
		}

		// show help
		if ( curr == "-h" or curr == "--help" )
		{
            std::cout << s_Help << std::endl;
			return 0;
		}

		std::cout << "unknown command: '" << curr << "', see help with command -h or --help" << std::endl;
		return -1;
	}

	// validate
	FS::path	input_p  {input};
	FS::path	output_p {output};

	if ( not FS::exists( input_p ))
	{
		if ( not input_p.extension().empty() )
		{
			std::cout << "can't open input: '" << input << "'" << std::endl;
			return -1;
		}

		// try use extension .zip / .zip.xml
		if ( not FS::exists( input_p.replace_extension( "zip" )) )
		{
			if ( not FS::exists( input_p.replace_extension( "zip.xml" )) )
			{
				std::cout << "can't open input: '" << input << "'" << std::endl;
				return -1;
			}
		}
	}

	if ( FS::exists( output_p ))
	{
		if ( not FS::is_directory( output_p ))
		{
			std::cout << "output: '" << output << "' must be directory name" << std::endl;
			return -1;
		}
	}
	else
	{

	}


	VulkanConverter	vk_conv{ output_p };
	RdCaptureReader	reader;

	reader.AddListener( vk_conv.GetListener() );

	CHECK_ERR( reader.OpenCapture( input_p ), -1 );
	
	return 0;
}
