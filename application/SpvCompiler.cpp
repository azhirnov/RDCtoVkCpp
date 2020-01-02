// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "SpvCompiler.h"
#include "stl/Algorithms/StringUtils.h"

// glslang includes
#include "glslang/Include/revision.h"
#include "glslang/MachineIndependent/localintermediate.h"
#include "glslang/Include/intermediate.h"
#include "SPIRV/doc.h"
#include "SPIRV/disassemble.h"
#include "SPIRV/GlslangToSpv.h"
#include "SPIRV/GLSL.std.450.h"
#include "StandAlone/ResourceLimits.cpp"

using namespace glslang;

namespace AppDetail
{

	SpvCompiler::SpvCompiler ()
	{
		glslang::InitializeProcess();
	}

	SpvCompiler::~SpvCompiler ()
	{
		glslang::FinalizeProcess();
	}

	bool SpvCompiler::Compile (OUT Array<uint>&			spirvData,
							   const char *				source,
							   EShLanguage				shaderType,
							   EShTargetLanguageVersion	spvVersion) const
	{
		EShMessages				messages		= EShMsgDefault;
		TProgram				program;
		TShader					shader			{ shaderType };
		EshTargetClientVersion	client_version	= EShTargetVulkan_1_1;
		TBuiltInResource		builtin_res		= DefaultTBuiltInResource;
		char const*				shader_src[]	= { source };

		shader.setStrings( shader_src, int(CountOf(shader_src)) );
		shader.setEntryPoint( "main" );
		shader.setEnvInput( EShSourceGlsl, shaderType, EShClientVulkan, 110 );
		shader.setEnvClient( EShClientVulkan, client_version );
		shader.setEnvTarget( EshTargetSpv, spvVersion );
		
		shader.setAutoMapLocations( false );
		shader.setAutoMapBindings( false );

		if ( not shader.parse( &builtin_res, 460, ECoreProfile, false, true, messages ) )
		{
			FG_LOGI( shader.getInfoLog() );
			return false;
		}
		
		program.addShader( &shader );

		if ( not program.link( messages ) )
		{
			FG_LOGI( program.getInfoLog() );
			return false;
		}

		const TIntermediate* intermediate = program.getIntermediate( shader.getStage() );
		if ( not intermediate )
			return false;

		SpvOptions				spv_options;
		spv::SpvBuildLogger		logger;

		spv_options.generateDebugInfo	= true;
		spv_options.disableOptimizer	= true;
		spv_options.optimizeSize		= false;
		
		spirvData.clear();
		GlslangToSpv( *intermediate, OUT spirvData, &logger, &spv_options );

		if ( spirvData.empty() )
			return false;

		return true;
	}

}	// AppDetail
