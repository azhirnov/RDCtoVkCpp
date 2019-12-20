# download and install all external dependencies

cmake_policy( SET CMP0022 NEW )
cmake_minimum_required (VERSION 3.6.0)

include( ExternalProject )

set( RDE_EXTERNALS_PATH "${CMAKE_CURRENT_SOURCE_DIR}" CACHE PATH "Path to external projects sources" )
set( RDE_EXTERNAL_INSTALL_DIR "${CMAKE_BINARY_DIR}/install" )
message( STATUS "RDE_EXTERNALS_PATH: ${RDE_EXTERNALS_PATH}" )

# configure
set( RDE_LIST_SEPARATOR "|" )
string( REPLACE ";" "${RDE_LIST_SEPARATOR}" RDE_EXTERNAL_CONFIGURATION_TYPES "${CMAKE_CONFIGURATION_TYPES}" )
set( RDE_BUILD_TARGET_FLAGS "" )

foreach ( CONFIG ${CMAKE_CONFIGURATION_TYPES} )
	string( TOUPPER ${CONFIG} OUT_CONFIG )

    set( RDE_BUILD_TARGET_FLAGS
        "${RDE_BUILD_TARGET_FLAGS}"
		"-DCMAKE_C_FLAGS_${OUT_CONFIG}=${CMAKE_C_FLAGS_${OUT_CONFIG}}"
		"-DCMAKE_CXX_FLAGS_${OUT_CONFIG}=${CMAKE_CXX_FLAGS_${OUT_CONFIG}}"
		"-DCMAKE_EXE_LINKER_FLAGS_${OUT_CONFIG}=${CMAKE_EXE_LINKER_FLAGS_${OUT_CONFIG}}"
		"-DCMAKE_STATIC_LINKER_FLAGS_${OUT_CONFIG}=${CMAKE_STATIC_LINKER_FLAGS_${OUT_CONFIG}}"
		"-DCMAKE_SHARED_LINKER_FLAGS_${OUT_CONFIG}=${CMAKE_SHARED_LINKER_FLAGS_${OUT_CONFIG}}"
	)
endforeach ()

include( "${CMAKE_SOURCE_DIR}/cmake/attach_fg.cmake" )
include( "${CMAKE_SOURCE_DIR}/cmake/find_devenv.cmake" )
include( "${CMAKE_SOURCE_DIR}/cmake/download_spirvcross.cmake" )

add_subdirectory( "miniz" "miniz" )
