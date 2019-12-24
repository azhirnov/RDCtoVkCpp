# download and install SPIRV-Cross

if (${RDE_ENABLE_SPIRVCROSS})
	set( RDE_EXTERNAL_SPIRVCROSS_PATH "" CACHE PATH "path to SPIRV-Cross source" )
    set( SPIRVCROSS_INSTALL_DIR "${RDE_EXTERNAL_INSTALL_DIR}/SPIRV-Cross" CACHE INTERNAL "" FORCE )
	
	# reset to default
	if (NOT EXISTS "${RDE_EXTERNAL_SPIRVCROSS_PATH}/include/spirv_cross")
		message( STATUS "SPIRV-Cross is not found in \"${RDE_EXTERNAL_SPIRVCROSS_PATH}\"" )
		set( RDE_EXTERNAL_SPIRVCROSS_PATH "${RDE_EXTERNALS_PATH}/SPIRV-Cross" CACHE PATH "" FORCE )
		set( RDE_SPIRVCROSS_REPOSITORY "https://github.com/KhronosGroup/SPIRV-Cross.git" )
	else ()
		set( RDE_SPIRVCROSS_REPOSITORY "" )
	endif ()


	ExternalProject_Add( "External.SPIRV-Cross"
        LIST_SEPARATOR		"${RDE_LIST_SEPARATOR}"
		# download
		GIT_REPOSITORY		${RDE_SPIRVCROSS_REPOSITORY}
		GIT_TAG				master
		EXCLUDE_FROM_ALL	1
		LOG_DOWNLOAD		1
		# update
		PATCH_COMMAND		""
		UPDATE_DISCONNECTED	1
		# configure
        SOURCE_DIR			"${RDE_EXTERNAL_SPIRVCROSS_PATH}"
		CMAKE_GENERATOR		"${CMAKE_GENERATOR}"
		CMAKE_GENERATOR_PLATFORM "${CMAKE_GENERATOR_PLATFORM}"
		CMAKE_GENERATOR_TOOLSET	"${CMAKE_GENERATOR_TOOLSET}"
        CMAKE_ARGS			"-DCMAKE_CONFIGURATION_TYPES=${RDE_EXTERNAL_CONFIGURATION_TYPES}"
							"-DCMAKE_SYSTEM_VERSION=${CMAKE_SYSTEM_VERSION}"
							"-DCMAKE_DEBUG_POSTFIX=d"
							"-DCMAKE_RELEASE_POSTFIX="
							"-DSPIRV_CROSS_EXCEPTIONS_TO_ASSERTIONS=ON"
							"-DCMAKE_INSTALL_PREFIX=${SPIRVCROSS_INSTALL_DIR}"
                            ${RDE_BUILD_TARGET_FLAGS}
		LOG_CONFIGURE 		1
		# build
		BINARY_DIR			"${CMAKE_BINARY_DIR}/build2-SPIRV-Cross"
		BUILD_COMMAND		"${CMAKE_COMMAND}"
							--build .
							--target ALL_BUILD
							--config $<CONFIG>
		LOG_BUILD 			1
		# install
		INSTALL_DIR 		"${SPIRVCROSS_INSTALL_DIR}"
		LOG_INSTALL 		1
		# test
		TEST_COMMAND		""
	)
	
	set_property( TARGET "External.SPIRV-Cross" PROPERTY FOLDER "External" )
	
	
	add_library( "SPIRV-Cross-lib" INTERFACE )
	set_property( TARGET "SPIRV-Cross-lib" PROPERTY INTERFACE_LINK_LIBRARIES 
					$<$<CONFIG:Release>: "${SPIRVCROSS_INSTALL_DIR}/lib/spirv-cross-core${CMAKE_STATIC_LIBRARY_SUFFIX}" >
					$<$<CONFIG:Release>: "${SPIRVCROSS_INSTALL_DIR}/lib/spirv-cross-glsl${CMAKE_STATIC_LIBRARY_SUFFIX}" >
					$<$<CONFIG:Debug>: "${SPIRVCROSS_INSTALL_DIR}/lib/spirv-cross-cored${CMAKE_STATIC_LIBRARY_SUFFIX}" >
					$<$<CONFIG:Debug>: "${SPIRVCROSS_INSTALL_DIR}/lib/spirv-cross-glsld${CMAKE_STATIC_LIBRARY_SUFFIX}" >)
	target_include_directories( "SPIRV-Cross-lib" INTERFACE "${SPIRVCROSS_INSTALL_DIR}/include" )
	target_compile_definitions( "SPIRV-Cross-lib" INTERFACE "RDE_ENABLE_SPIRVCROSS" )
	add_dependencies( "SPIRV-Cross-lib" "External.SPIRV-Cross" )
	
endif ()
