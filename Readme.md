[![Build Status](https://img.shields.io/travis/azhirnov/RDCtoVkCpp/master.svg?logo=travis)](https://travis-ci.com/azhirnov/RDCtoVkCpp)

Converts RenderDoc Vulkan capture to compilable and executable C++ code.<br/>
Work in progress.


## How to use
Run RdConverter.exe with ```-i path/to/exported/rdc.zip -o folder/name/for/cpp/code```<br/>
Other arguments:
```
-h, --help              - show help
--build                 - build project
--clean                 - clean output folder before converting
--div-by-cmdbuf [bool]  - group api calls by command buffers, default = true
-i, --input [filename]  - open RenderDoc capture, must be *.zip or *.zip.xml file
-o, --output [folder]   - save c++ code into output directory
```
Warning: console application and converted sources from capture is not portable!
You should rebuild and run converter again on new environment or fix pathes to files.


## Features
* Produces readable C++ code.
* Code validation to fix unsignaled fences/semaphores/events and reset they before next frame.
* Frame played in infinite loop.
* Used resource debug name if possible.
* SPIR-V decompiled to GLSL.
* Resizable window.


## Tested on
* [x] Doom (2016)
* [ ] Wolfenstein 2 - incorrect rendering
* [x] X4
* [ ] Dota 2 - crash
* [ ] Rage 2 - crash
* [ ] RDR 2


## TODO
* Immutable samplers
* Measure frame time
* Portability (remap queue family and memory types)
* Upload multisampled image
* Sparse memory
* 2nd plane formats
* Load content in multiple threads to speedup loading.
* Reload shaders.
* Fix validation errors.


## Building
Requires C++17 and CMake 3.10+

Dependencies:<br/>
[FrameGraph](https://github.com/azhirnov/FrameGraph) - only stl and vulkan helpers.<br/>
[VulkanMemoryAllocator](https://github.com/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator) - required.<br/>
[glfw](https://github.com/glfw/glfw) or [SDL2](https://www.libsdl.org) - required.<br/>
[glslang](https://github.com/KhronosGroup/glslang) - compile glsl to spirv.<br/>
[SPIRV-Cross](https://github.com/KhronosGroup/SPIRV-Cross) - converts spirv to glsl.<br/>
[rapidxml](https://github.com/dwd/rapidxml) - for RDC parsing.<br/>
[miniz](https://github.com/richgel999/miniz) - for RDC content loading.<br/>
[RenderDoc](https://github.com/baldurk/renderdoc) - some code to generate parser.<br/>
