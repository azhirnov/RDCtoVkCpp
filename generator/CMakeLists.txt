cmake_minimum_required( VERSION 3.10 FATAL_ERROR )

file( GLOB_RECURSE SOURCES "*.*" )
add_executable( "Generator" ${SOURCES} )
source_group( TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES} )
target_link_libraries( "Generator" "STL" )
target_include_directories( "Generator" PUBLIC ".." )
set_property( TARGET "Generator" PROPERTY FOLDER "" )
target_include_directories( "Generator" PRIVATE "${RDE_FRAMEGRAPH_PATH}/external/Vulkan-Headers/include" )
