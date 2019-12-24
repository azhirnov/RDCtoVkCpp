cmake_minimum_required( VERSION 3.10 FATAL_ERROR )

file( GLOB_RECURSE SOURCES "*.*" )
add_executable( "RdConverter" ${SOURCES} )
source_group( TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES} )
target_link_libraries( "RdConverter" PUBLIC "ProjectTemplate" )
target_include_directories( "RdConverter" PUBLIC ".." )
set_property( TARGET "RdConverter" PROPERTY FOLDER "" )

target_include_directories( "RdConverter" PUBLIC "${RDE_FRAMEGRAPH_PATH}/external/Vulkan-Headers/include" )
target_include_directories( "RdConverter" PUBLIC "${RDE_EXTERNALS_PATH}/rapidxml" )
target_include_directories( "RdConverter" PUBLIC ".." "." )
target_link_libraries( "RdConverter" PUBLIC "STL" )
target_link_libraries( "RdConverter" PUBLIC "SPIRV-Cross-lib" )
target_link_libraries( "RdConverter" PUBLIC "MiniZ" )

target_compile_definitions( "RdConverter" PUBLIC "RDE_SOURCE_PATH=\"${CMAKE_CURRENT_SOURCE_DIR}/..\"" )
target_compile_definitions( "RdConverter" PUBLIC "RDE_FRAMEGRAPH_PATH=\"${RDE_FRAMEGRAPH_PATH}\"" )
target_compile_definitions( "RdConverter" PUBLIC "RDE_VS_DEVENV_EXE=\"${RDE_VS_DEVENV_EXE}\"" )

if (MSVC)
	set_property( DIRECTORY PROPERTY VS_STARTUP_PROJECT "RdConverter" )
	target_compile_options( "RdConverter" PUBLIC $<$<CONFIG:Debug>: /bigobj > )
endif ()
