cmake_minimum_required (VERSION 3.6.0)

project( "MiniZ" LANGUAGES C )

add_library( "MiniZ" STATIC
	"miniz.c"
	"miniz.h"
	"miniz_common.h"
	"miniz_tdef.c"
	"miniz_tdef.h"
	"miniz_tinfl.c"
	"miniz_tinfl.h"
	"miniz_zip.c"
	"miniz_zip.h"
)

target_include_directories( "MiniZ" PUBLIC "." )
set_property( TARGET "MiniZ" PROPERTY FOLDER "External" )
