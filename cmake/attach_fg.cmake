# find and attach FrameGraph

set( RDE_FRAMEGRAPH_PATH "${RDE_EXTERNALS_PATH}/FrameGraph" CACHE PATH "Path to FrameGraph library" )
message( STATUS "RDE_FRAMEGRAPH_PATH: ${RDE_FRAMEGRAPH_PATH}" )

if (NOT EXISTS "${RDE_FRAMEGRAPH_PATH}/CMakeLists.txt")
	message( FATAL_ERROR "RDE_FRAMEGRAPH_PATH with \"${RDE_FRAMEGRAPH_PATH}\" doesn't contains correct path to FrameGraph source!" )
endif ()

add_subdirectory( "${RDE_FRAMEGRAPH_PATH}" "build-FrameGraph" )

set_property( TARGET "STL" PROPERTY FOLDER "External" )
set_property( TARGET "VulkanLoader" PROPERTY FOLDER "External" )
set_property( TARGET "Framework" PROPERTY FOLDER "External" )

if (${FG_ENABLE_GLFW})
	set_property( TARGET "uninstall" PROPERTY FOLDER "External" )
endif ()

set( RDE_CONVERTER_LIBRARIES "${RDE_CONVERTER_LIBRARIES}" "STL" "VulkanLoader" )
set( RDE_ENGINE_LIBRARIES "${RDE_ENGINE_LIBRARIES}" "STL" "VulkanLoader" "Framework" )


set( RDE_ENGINE_DEFINES "${RDE_ENGINE_DEFINES}" "RDE_FRAMEGRAPH_PATH=\"${RDE_FRAMEGRAPH_PATH}\"" "RDE_FRAMEGRAPH_EXTERNAL_PATH=\"${RDE_FRAMEGRAPH_PATH}/extensions\"" )
