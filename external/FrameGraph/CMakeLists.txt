cmake_minimum_required( VERSION 3.10 FATAL_ERROR )

message( STATUS "==========================================================================\n" )
message( STATUS "project 'FrameGraph' generation started" )

project( "FrameGraph" LANGUAGES C CXX )
set_property( GLOBAL PROPERTY USE_FOLDERS ON )
message( STATUS "Compiler: ${CMAKE_CXX_COMPILER_ID} (${CMAKE_CXX_COMPILER_VERSION})" )
message( STATUS "target system: ${CMAKE_SYSTEM_NAME} (${CMAKE_SYSTEM_VERSION})" )
message( STATUS "host system: ${CMAKE_HOST_SYSTEM_NAME} (${CMAKE_HOST_SYSTEM_VERSION})" )

set( FG_ENABLE_SIMPLE_COMPILER_OPTIONS OFF CACHE BOOL "use simplified compiler settings if you have problem with it" )
set( FG_EXTERNALS_USE_STABLE_VERSIONS ON CACHE BOOL "use last stable version instead of master branch" )

set( FG_ENABLE_GLFW ON CACHE BOOL "use glfw (optional, required for tests)" )
set( FG_ENABLE_SDL2 OFF CACHE BOOL "use SDL2 (optional, required for tests)" )
set( FG_ENABLE_GLSLANG ON CACHE BOOL "use glslang (optional, required for glsl compilation)" )
set( FG_ENABLE_VMA ON CACHE BOOL "use Vulkan Memory Allocator (required)" )

set( CMAKE_DEBUG_POSTFIX "d" )
set( CMAKE_RELEASE_POSTFIX "" )
set( CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE PATH "installation directory" )
set( MAIN_BINARY_DIR "${CMAKE_BINARY_DIR}/bin" CACHE INTERNAL "" FORCE )
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${MAIN_BINARY_DIR}" )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY "${MAIN_BINARY_DIR}" )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY "${MAIN_BINARY_DIR}" )

if (${FG_ENABLE_SIMPLE_COMPILER_OPTIONS})
	include( "cmake/compilers_minimal.cmake" )
else()
	include( "cmake/compilers.cmake" )
endif()
include( "cmake/compiler_tests.cmake" )

add_subdirectory( "external" )
include( "cmake/project_template.cmake" )
add_subdirectory( "stl" )
add_subdirectory( "extensions/vulkan_loader" )
add_subdirectory( "extensions/framework" )

message( STATUS "project 'FrameGraph' generation ended" )
message( STATUS "\n==========================================================================" )
