[![Build Status](https://img.shields.io/travis/azhirnov/RDCtoVkCpp/master.svg?logo=travis)](https://travis-ci.com/azhirnov/RDCtoVkCpp)

Converts RenderDoc Vulkan capture to compilable and executable C++ code.
Work in progress.

## Tested on
* [x] Doom (2016)
* [ ] Wolfenstein 2 - incorrect rendering
* [x] X4
* [ ] Dota 2 - crash
* [ ] Rage 2 - crash
* [ ] RDR 2


## TODO
* [x] Upload image
* [ ] Immutable samplers
* [ ] Measure frame time
* [ ] Portability (remap queue family and memory types)
* [ ] Use memory refs
* [ ] Upload multisampled image
* [ ] Sparse memory
* [ ] 2nd plane formats


## Building
Requires C++17 and CMake 3.10+

Dependencies:
[FrameGraph](https://github.com/azhirnov/FrameGraph) - only stl and vulkan helpers.<br/>
[VulkanMemoryAllocator](https://github.com/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator) - required.<br/>
[glfw](https://github.com/glfw/glfw) or [SDL2](https://www.libsdl.org) - required.<br/>
[glslang](https://github.com/KhronosGroup/glslang) - compile glsl to spirv.<br/>
[SPIRV-Cross](https://github.com/KhronosGroup/SPIRV-Cross) - converts spirv to glsl.<br/>
[rapidxml](https://github.com/dwd/rapidxml) - for RDC parsing.<br/>
[miniz](https://github.com/richgel999/miniz) - for RDC content loading.<br/>
[RenderDoc](https://github.com/baldurk/renderdoc) - some code to generate parser.<br/>
