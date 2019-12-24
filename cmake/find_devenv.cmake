# search for visual studio devenv.exe

if (WIN32)
	set( VS_VERSIONS "2019/Community" "2019/Professional" "2019/Enterprise"
					 "2017/Community" "2017/Professional" "2017/Enterprise"
					 "2015/Community" "2015/Professional" "2015/Enterprise" )

	foreach( VER ${VS_VERSIONS} )
		if (EXISTS "C:/Program Files (x86)/Microsoft Visual Studio/${VER}/Common7/IDE/devenv.exe")
			set( RDE_VS_DEVENV_EXE "C:/Program Files (x86)/Microsoft Visual Studio/${VER}/Common7/IDE/devenv.exe" CACHE INTERNAL "" FORCE )
			break()
		endif ()
	endforeach ()
	
	if (RDE_VS_DEVENV_EXE)
		message( STATUS "Found VS compiler in '${RDE_VS_DEVENV_EXE}'" )
	endif ()
endif ()
