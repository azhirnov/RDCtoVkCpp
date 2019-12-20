// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

#include "framework/Vulkan/VulkanDevice.h"
#include "stl/Algorithms/ArrayUtils.h"

// glslang includes
#include "glslang/Public/ShaderLang.h"

namespace AppDetail
{
	using namespace FGC;


	class SpvCompiler
	{
	public:
		SpvCompiler ();
		~SpvCompiler ();

		bool Compile (OUT Array<uint>&		spirvData,
					  const char *			source,
					  EShLanguage			shaderType,
					  glslang::EShTargetLanguageVersion	spvVersion	= glslang::EShTargetSpv_1_3) const;
	};

}	// AppDetail
