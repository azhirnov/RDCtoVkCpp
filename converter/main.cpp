// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "RdCaptureReader.h"
#include "Vulkan/VulkanConverter.h"
#include <iostream>


using namespace RDE;

static const char	s_Help[] = R"#(
-i [filename]           - open RenderDoc capture, must be *.zip or *.zip.xml file
--input [filename]

-o [folder]             - save c++ code into output directory
--output [folder]

--div-by-cmdbuf [bool]  - (optional) group api calls by command buffers, default = true

--build                 - (optional) generate project and build, default = false

--configure             - (optional) generate project without building, default = false

--clean					- (optional) clean output folder before converting
)#";

int main (int argc, const char** argv)
{
	String			input;
	String			output;
	ConverterConfig	cfg;
	
	// parse arguments
	for (int i = 1; i < argc; ++i)
	{
		StringView	curr = argv[i];

		// 'open RDC' command
		if ( curr == "-i" or curr == "--input" )
		{
			if ( i+1 >= argc )
			{
				std::cout << "'--input' requires file or folder name" << std::endl;
				return -1;
			}

			input = argv[++i];
			continue;
		}

		// 'set output directory' command
		if ( curr == "-o" or curr == "--output" )
		{
			if ( i+1 >= argc )
			{
				std::cout << "'--output' requires folder name" << std::endl;
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

		if ( curr == "--div-by-cmdbuf" )
		{
			if ( i+1 >= argc )
			{
				std::cout << "--div-by-cmdbuf requires bool parameter" << std::endl;
				return -1;
			}
			
			++i;
			cfg.divideByCmdBuffers = (argv[i] == "true"s or argv[i] == "TRUE"s);
			continue;
		}

		if ( curr == "--build" )
		{
			cfg.compile = true;
			continue;
		}
		
		if ( curr == "--configure" )
		{
			cfg.configure = true;
			continue;
		}

		if ( curr == "--clean" )
		{
			cfg.cleanOutputFolder = true;
			continue;
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
		if ( not FS::create_directories( output_p ))
		{
			std::cout << "can't create directory: '" << output << "'" << std::endl;
			return -1;
		}

		std::cout << "created directoty: '" << output << "'" << std::endl;
	}

	if ( cfg.compile and cfg.configure )
	{
		std::cout << "'configure' command ignored because used 'build' command" << std::endl;
		cfg.configure = false;
	}


	VulkanConverter	vk_conv{ output_p, cfg };
	RdCaptureReader	reader;

	reader.AddListener( vk_conv.GetListener() );

	CHECK_ERR( reader.OpenCapture( input_p.replace_extension("") ), -1 );
	
	return 0;
}
