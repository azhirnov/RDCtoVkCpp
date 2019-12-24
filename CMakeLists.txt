cmake_minimum_required( VERSION 3.10.0 )

message( STATUS "==========================================================================\n" )
message( STATUS "project 'RDCtoVkCpp' generation started" )

project( "RDCtoVkCpp" LANGUAGES C CXX )
set_property( GLOBAL PROPERTY USE_FOLDERS ON )
message( STATUS "Compiler: ${CMAKE_CXX_COMPILER_ID} (${CMAKE_CXX_COMPILER_VERSION})" )
message( STATUS "Compiler name: ${DETECTED_COMPILER}" )
message( STATUS "target system: ${CMAKE_SYSTEM_NAME} (${CMAKE_SYSTEM_VERSION})" )
message( STATUS "host system: ${CMAKE_HOST_SYSTEM_NAME} (${CMAKE_HOST_SYSTEM_VERSION})" )

set( RDE_ENABLE_SPIRVCROSS ON CACHE BOOL "" )
set( RDE_ENABLE_SPIRVREFLECT OFF CACHE BOOL "" )

include( "cmake/compilers.cmake" )
add_subdirectory( "external" "external" )
add_subdirectory( "generator" )
add_subdirectory( "converter" )
add_subdirectory( "application" )
add_subdirectory( "tests/application" )

message( STATUS "project 'RDCtoVkCpp' generation ended" )
message( STATUS "\n==========================================================================" )

