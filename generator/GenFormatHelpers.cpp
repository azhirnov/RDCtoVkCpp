// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#include "Generator.h"

namespace RDE
{

/*
=================================================
	GenFormatHelpers
=================================================
*/
	bool Generator::GenFormatHelpers (const FS::path &output) const
	{
		String		str;
		
		str << "// auto-generated file\n\n"
			<< "enum class EClearValueType : uint32_t {\n"
			<< "	Int,\n"
			<< "	UInt,\n"
			<< "	Float,\n"
			<< "	Depth,\n"
			<< "	DepthStencil,\n"
			<< "	Unknown = ~0u,\n"
			<< "};\n\n"
			<< "ND_ EClearValueType  VkFormatToClearValueType (VkFormat value)\n{\n"
			<< "	switch ( value )\n\t{\n";

		auto	iter = _enums.find( SearchableEnum{"VkFormat"} );
		CHECK_ERR( iter != _enums.end() );

		for (auto& field : iter->data.fields)
		{
			if ( _IsWord( field.value ) )
				continue;

			if ( field.name == "VK_FORMAT_UNDEFINED"	or
				 field.name == "VK_FORMAT_RANGE_SIZE"	or
				 field.name == "VK_FORMAT_MAX_ENUM"	)
				continue;

			str << "\t\tcase " << field.name << " : return EClearValueType::";
			
			if ( HasSubString( field.name, "_D16_" ) or HasSubString( field.name, "_D24_" ) or HasSubString( field.name, "_D32_" ) )
			{
				if ( HasSubString( field.name, "_S8_" ) )
					str << "DepthStencil";
				else
					str << "Depth";
			}
			else
			if ( HasSubString( field.name, "_UNORM" )   or HasSubString( field.name, "_SNORM" )   or
				 HasSubString( field.name, "_USCALED" ) or HasSubString( field.name, "_SSCALED" ) or
				 HasSubString( field.name, "_SFLOAT" )  or HasSubString( field.name, "_UFLOAT" )  or
				 HasSubString( field.name, "_SRGB" ) )
			{
				str << "Float";
			}
			else
			if ( HasSubString( field.name, "_SINT" ) )
			{
				str << "Int";
			}
			else
			if ( HasSubString( field.name, "_UINT" ) )
			{
				str << "UInt";
			}
			else
			{
				str << "Unknown";
				CHECK(false);	// unknown type
			}

			str << ";\n";
		}

		str << "	}\n"
			<< "	RETURN_ERR( \"unknown format type!\" );\n"
			<< "}\n\n";

			
		// store to file
		FileWStream		file{ output };
		CHECK_ERR( file.IsOpen() );
		CHECK_ERR( file.Write( StringView(str) ));

		return true;
	}

}	// RDE
