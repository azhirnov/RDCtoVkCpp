Converts RenderDoc Vulkan capture to compilable and executable C++ code.

## Tested
* [x] Doom (2016)
* [ ] Wolfenstein 2 - incorrect rendering
* [x] X4
* [ ] Dota 2
* [ ] Rage 2
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
[glslang](https://github.com/KhronosGroup/glslang) - compiles glsl to spirv.<br/>
[SPIRV-Cross](https://github.com/KhronosGroup/SPIRV-Cross) - converts spirv to glsl.<br/>
