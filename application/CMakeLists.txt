cmake_minimum_required( VERSION 3.10 FATAL_ERROR )

file( GLOB_RECURSE SOURCES "*.*" )
add_library( "Application" STATIC ${SOURCES} )
source_group( TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES} )

target_link_libraries( "Application" PUBLIC "GLSLang-lib" )
target_link_libraries( "Application" PRIVATE "VMA-lib" )
target_link_libraries( "Application" PRIVATE "MiniZ" )
target_link_libraries( "Application" PUBLIC "STL" "VulkanLoader" "Framework" )
target_include_directories( "Application" PRIVATE "../external/RenderDoc" )
target_include_directories( "Application" PUBLIC "." )
