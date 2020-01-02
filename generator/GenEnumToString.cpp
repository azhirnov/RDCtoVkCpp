// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "Generator.h"

namespace RDE
{

/*
=================================================
	_SkipSpecialCases
=================================================
*/
	ND_ static bool  _SkipSpecialCases (StringView enumName, StringView fieldName)
	{
		return	(enumName == "VkDescriptorUpdateTemplateType"		and fieldName == "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_RANGE_SIZE")		or
				(enumName == "VkShaderStageFlagBits"				and fieldName == "VK_SHADER_STAGE_FLAG_BITS_MAX_ENUM")					or
				(enumName == "VkValidationCacheHeaderVersionEXT"	and fieldName == "VK_VALIDATION_CACHE_HEADER_VERSION_RANGE_SIZE_EXT")	or
				(enumName == "VkSamplerAddressMode"					and fieldName == "VK_SAMPLER_ADDRESS_MODE_RANGE_SIZE")					or
				(enumName == "VkPipelineCacheHeaderVersion"			and fieldName == "VK_PIPELINE_CACHE_HEADER_VERSION_RANGE_SIZE");
	}

/*
=================================================
	GenEnumToString
=================================================
*/
	bool Generator::GenEnumToString (const FS::path &headerFile, const FS::path &sourceFile) const
	{
		String	header  = "// auto-generated file\n\n";
		String	str		= "// auto-generated file\n\n#pragma warning (push)\n#pragma warning (disable: 4100)\n\n";

		for (auto& info : _enums)
		{
			if ( not info.data.required )
				continue;
			
			if ( info.data.fileIndex > 0 ) {
				header	<< "#ifdef "s << _fileData[info.data.fileIndex].macro << "\n";
				str		<< "#ifdef "s << _fileData[info.data.fileIndex].macro << "\n";
			}

			header << "\tND_ String  Serialize_" << info.data.name << " (" << info.data.name << ");\n";

			str << "\tND_ String  Serialize_" << info.data.name << " (" << info.data.name << " value)\n"
				<< "\t{\n"
				<< "\t	BEGIN_ENUM_CHECKS();\n"
				<< "\t	switch ( value )\n"
				<< "\t	{\n";

			for (auto& field : info.data.fields)
			{
				if ( _SkipSpecialCases( info.data.name, field.name ) )
					continue;

				if ( HasSubString( field.name, "_MAX_ENUM" ) or HasSubString( field.name, "_RANGE_SIZE" ) )
				{
					str << "\t\t\tcase " << field.name << " : break;\n";
				}
				else
				{
					if ( not _IsNumber( field.value ) )
						continue;	// skip aliases

					str << "\t\t\tcase " << field.name << " : return \"" << field.name << "\";\n";
				}
			}

			str << "\t	}\n"
				<< "\t	END_ENUM_CHECKS();\n"
				<< "\t	RETURN_ERR( \"unsupported value: \"s << EnumToString( value ), \"<unknown>\" );\n"
				<< "\t}\n";
			
			if ( info.data.fileIndex > 0 ) {
				header	<< "#endif\n";
				str		<< "#endif\n";
			}
			str << '\n';
		}


		for (auto& info : _bitfields)
		{
			if ( not info.data.required )
				continue;
				
			if ( info.data.fileIndex > 0 ) {
				header	<< "#ifdef "s << _fileData[info.data.fileIndex].macro << "\n";
				str		<< "#ifdef "s << _fileData[info.data.fileIndex].macro << "\n";
			}

			header << "\tND_ String  Serialize_" << info.data.name << " (" << info.data.name << ");\n";

			auto	iter = _enums.find( SearchableEnum{info.data.enumName} );
			if ( iter == _enums.end() )
			{
				str << "\tND_ String  Serialize_" << info.data.name << " (" << info.data.name << " bits)\n"
					<< "\t{\n"
					<< "\t	CHECK( bits == 0 );\n"
					<< "\t	return \"0\";\n"
					<< "\t}\n";
				
				if ( info.data.fileIndex > 0 ) {
					header	<< "#endif\n";
					str		<< "#endif\n";
				}
				str << '\n';
				continue;
			}


			// find _MAX_ENUM or _END_RANGE
			StringView	max_enum;

			for (auto& field : iter->data.fields)
			{
				if ( HasSubString( field.name, "_MAX_ENUM" ) or HasSubString( field.name, "_END_RANGE" ) )
				{
					max_enum = field.name;
					break;
				}
			}
			CHECK_ERR( not max_enum.empty() );


			str << "\tND_ String  Serialize_" << info.data.name << " (" << info.data.name << " bits)\n"
				<< "\t{\n"
				<< "\t	if ( bits == 0 )\n"
				<< "\t		return \"0\";\n"
				<< "\t	String  result;\n"
				<< "\t	for (" << info.data.name << " t = 1; t < " << max_enum << "; t <<= 1)\n"
				<< "\t	{\n"
				<< "\t		if ( not EnumEq( bits, t ) )\n"
				<< "\t			continue;\n\n"
				<< "\t		if ( not result.empty() )\n"
				<< "\t			result << \" | \";\n\n"
				<< "\t		result << Serialize_" << info.data.enumName << "( " << info.data.enumName << "(t) );\n"
				<< "\t	}\n"
				<< "\t	return result;\n"
				<< "\t}\n";
			
			if ( info.data.fileIndex > 0 ) {
				header	<< "#endif\n";
				str		<< "#endif\n";
			}
			str << '\n';
		}
		
		str << "#pragma warning (pop)\n\n";
	
		// store header to file
		{
			FileWStream		file{ headerFile };
			CHECK_ERR( file.IsOpen() );
			CHECK_ERR( file.Write( StringView(header) ));
		}
		// store source to file
		{
			FileWStream		file{ sourceFile };
			CHECK_ERR( file.IsOpen() );
			CHECK_ERR( file.Write( StringView(str) ));
		}
		return true;
	}

}	// RDE
