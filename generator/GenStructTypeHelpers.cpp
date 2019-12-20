// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#include "Generator.h"

namespace RDE
{

/*
=================================================
	_HasSType
=================================================
*/
	bool Generator::_HasSType (const VkStructInfo &st)
	{
		const size_t  cnt = Min( 2, st.fields.size() );

		for (size_t i = 0; i < cnt; ++i)
		{
			if ( st.fields[i].name == "sType" )
				return true;
		}
		return false;
	}

/*
=================================================
	GenStructTypeHelpers
=================================================
*/
	bool Generator::GenStructTypeHelpers (const FS::path &output) const
	{
		String		str;
		String		str1, str2;

		str << "// auto-generated file\n\n"
			<< "template <typename T> struct TypeToEnum;\n"
			<< "template <VkStructureType E> struct EnumToType;\n\n";

		auto	st_types = _enums.find( SearchableEnum{"VkStructureType"} );
		CHECK_ERR( st_types != _enums.end() );
	
		Array<EnumField>	enum_fields = st_types->data.fields;

		for (auto& info : _structs)
		{
			const bool	has_stype = _HasSType( info.data );

			if ( not has_stype							or
				 info.data.name == "VkBaseInStructure"	or
				 info.data.name == "VkBaseOutStructure" )
				continue;
		
			StringView	enum_name = _FindStructTypeEnum( info.data.name, INOUT enum_fields );
		
			if ( info.data.fileIndex > 0 )
			{
				str1 << "#ifdef "s << _fileData[info.data.fileIndex].macro << "\n";
				str2 << "#ifdef "s << _fileData[info.data.fileIndex].macro << "\n";
			}

			str1 << "template <> struct TypeToEnum< " << info.data.name << " > { static constexpr VkStructureType  value = " << enum_name << "; };\n";
			str2 << "template <> struct EnumToType< " << enum_name << " > { using type = " << info.data.name << "; };\n";
		
			if ( info.data.fileIndex > 0 )
			{
				str1 << "#endif // "s << _fileData[info.data.fileIndex].macro << "\n";
				str2 << "#endif // "s << _fileData[info.data.fileIndex].macro << "\n";
			}
		}
	
		str << str1 << "\n\n" << str2;


		// store to file
		FileWStream		file{ output };
		CHECK_ERR( file.IsOpen() );
		CHECK_ERR( file.Write( StringView(str) ));

		return true;
	}

}	// RDE
