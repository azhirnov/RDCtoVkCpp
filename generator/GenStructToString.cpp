// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "Generator.h"
#include "StringParser.h"

namespace RDE
{
	using EBasicType = Generator::EBasicType;


/*
=================================================
	StructNameToVariableName
=================================================
*/
	ND_ static String  StructNameToVariableName (StringView name)
	{
		if ( StartsWithIC( name, "vk" ) )
			name = name.substr( 2 );

		if ( EndsWith( name, "EXT" ) )
			name = name.substr( 0, name.length()-3 );

		if ( EndsWith( name, "KHR" ) )
			name = name.substr( 0, name.length()-3 );


		String	result;

		// make long name
		result << '"';
		for (size_t i = 0; i < name.size(); ++i)
		{
			const char	c = name[i];

			if ( i == 0 )
				result << ToLowerCase( c );
			else
				result << c;
		}
		result << "\"s";


		// make short name
		const Pair<StringView, StringView>  shortNameMap[] = {
			{ "CreateInfo",		"\"createInfo\"s"	},
			{ "Info",			"\"info\"s"			},
			{ "Properties",		"\"properties\"s"	},
			{ "Features",		"\"features\"s"		},
			{ "Barrier",		"\"barrier\"s"		},
			{ "Requirements",	"\"requirements\"s"	}
		};

		for (auto& short_name : shortNameMap)
		{
			if ( HasSubStringIC( name, short_name.first ) ) {
				result << ", " << short_name.second;
				break;
			}
		}

		return result;
	}

/*
=================================================
	FieldNameToVariableName
=================================================
*/
	ND_ static String  FieldNameToVariableName (StringView name, StringView typeName = Default)
	{
		CHECK_ERR( not name.empty() );

		size_t	indirect_access_pos	= name.find( "->" );
		size_t	direct_access_pos	= name.find( '.' );

		if ( indirect_access_pos != StringView::npos )
			name = name.substr( indirect_access_pos+2 );

		if ( direct_access_pos != StringView::npos )
			name = name.substr( direct_access_pos+1 );
		
		// validate name
		DEBUG_ONLY(
		for (auto& c : name) {
			ASSERT( (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z') or (c == '_') or (&c != name.data() and c >= '0' and c <= '9') );
		})

		// remove pointer prefix
		if ( name.size() > 1 and name[0] == 'p' and IsUpperCase( name[1] ) )
			name = name.substr( 1 );

		String	result;
	
		// make long name
		result << '"';
		for (size_t i = 0; i < name.length(); ++i)
		{
			const char	c = name[i];

			if ( i == 0 )
				result << ToLowerCase( c );
			else
				result << c;
		}
		result << "\"s";


		if ( not typeName.empty() )
			result << ", " << StructNameToVariableName( typeName );

		return result;
	}

/*
=================================================
	ConvertBasicType
=================================================
*/
	ND_ static String  ConvertBasicType (StringView value, StringView typeName, Generator::EBasicType type, bool isArray)
	{
		BEGIN_ENUM_CHECKS();
		switch ( type )
		{
			case EBasicType::Void :			CHECK( isArray );		return "\"BitCast<void*>(\" << HexToString("s << value << ") << \")\"";
			case EBasicType::Bool :			CHECK( not isArray );	return "BoolToString("s << value << ")";
			case EBasicType::Char :			CHECK( isArray );		return "'\"' << "s << value << " << '\"'";
			case EBasicType::WCharString :	CHECK( not isArray );	return "WCharToString("s << value << ")";
			case EBasicType::Int :
			case EBasicType::UInt :
			case EBasicType::USize :
			case EBasicType::Long :
			case EBasicType::ULong :		CHECK( not isArray );	return "IntToString("s << value << ")";
			case EBasicType::Float :		CHECK( not isArray );	return "FloatToString("s << value << ")";
			case EBasicType::Double :		CHECK( not isArray );	return "DoubleToString("s << value << ")";
			case EBasicType::Handle :		CHECK( not isArray );	return "\"BitCast<"s << typeName << ">(\" << HexToString(" << value << ") << \")\"";
			case EBasicType::Struct :		CHECK( isArray );		return "\"BitCast<"s << typeName << "*>(\" << HexToString(" << value << ") << \")\"";
		}
		END_ENUM_CHECKS();
		RETURN_ERR( "unknown type" );
	}

/*
=================================================
	_SerializeSingleObject
=================================================
*/
	bool Generator::_SerializeSingleObject (const TypeInfo &t, StringView fieldName, StringView indent, INOUT String &str, INOUT String &beforeStr) const
	{
		// TODO: replace counter by 'nameSer.Get( <pointer ot array> )' + '.size()'

		const String	field_name2 = (t.isField ? "obj->"s : ""s) << fieldName;

		if ( t.structInfo != _structs.end() )
		{
			CHECK( t.structInfo->data.required );
			CHECK( t.structInfo->data.name != "VkAllocationCallbacks" );

			if ( t.hasSType )
			{
				beforeStr << indent << "before << SerializeStruct( BitCast<VkBaseInStructure const*>(&" << field_name2 << "), nameSer, remapper, indent );\n";
				str << "nameSer.Get( &" << field_name2 << " )";
			}
			else
			{
				size_t	str_len = str.length();
				StringParser::ToBeginOfLine( str, INOUT str_len );

				str.resize( str_len );
				str << indent << "Serialize2_" << t.structInfo->data.name << "( &" << field_name2 << ", String(name) << \"." << fieldName
								<< "\", nameSer, remapper, indent, INOUT result, INOUT before );\n";
				return true;
			}
		}
		else
		if ( t.resInfo != _resourceTypes.end() )
		{
			str << "remapper( " << t.resInfo->second.typeName << ", " << field_name2 << " )";
		}
		else
		if ( t.enumInfo != _enums.end() )
		{
			CHECK( t.enumInfo->data.required );

			str << "Serialize_" << t.enumInfo->data.name << "(" << field_name2 << ")";
		}
		else
		if ( t.bitfieldInfo != _bitfields.end() )
		{
			CHECK( t.bitfieldInfo->data.required );

			str << "Serialize_" << t.bitfieldInfo->data.name << "(" << field_name2 << ")";
		}
		else
		if ( t.basicInfo != _basicTypes.end() )
		{
			str << ConvertBasicType( field_name2, t.basicInfo->first, t.basicInfo->second, false );
		}
		else
		{
			CHECK(false);
		}
	
		if ( t.isField )
			str << " << \";\\n\";\n";
		else
			str << ";\n";

		return true;
	}

/*
=================================================
	_SerializeOutputObject
=================================================
*/
	bool Generator::_SerializeOutputObject (const TypeInfo &t, StringView fieldName, StringView indent, StringView counter,
											INOUT String &str, INOUT String &beforeStr, INOUT String &afterStr) const
	{
		CHECK_ERR( not t.isArray );
		CHECK_ERR( not t.isConst );

		if ( counter.empty() )
		{
			if ( t.resInfo != _resourceTypes.end() )
			{
				str << "\"&\" << remapper( " << t.resInfo->second.typeName << ", *" << fieldName << ", true )";
			}
			else
			if ( t.basicInfo != _basicTypes.end() )
			{
				beforeStr << indent << "before << \"" << indent << t.basicInfo->first << " \" << nameSer.MakeUnique( &" << fieldName << ", "
					<< FieldNameToVariableName( fieldName ) << " ) << \" = {};\\n\";\n";
				
				str << "nameSer.Get( &" << fieldName << " )";
			}
			else
			{
				CHECK(false);
			}
		}
		else
		{
			if ( t.resInfo != _resourceTypes.end() )
			{
				beforeStr << indent << "before << indent << \"" << t.resInfo->first << " \" << nameSer.MakeUnique( &" << fieldName << ", "
					<< FieldNameToVariableName( fieldName, t.resInfo->first ) << " ) << \"[\" << IntToString(" << counter << ") << \"] = {};\\n\";\n";

				str << "nameSer.Get( &" << fieldName << " )";

				afterStr
					<< indent << "for (uint i = 0; i < " << counter << "; ++i) {\n"
					<< indent << "	result << indent << remapper( " << t.resInfo->second.typeName
								<< ", " << fieldName << "[i], true ) << \" = \" << nameSer.Get( &" << fieldName << " ) << \"[\" << IntToString(i) << \"];\\n\";\n"
					<< indent << "}\n";
			}
			else
			{
				CHECK(false);
			}
		}
	
		if ( t.isField )
			str << " << \";\\n\";\n";
		else
			str << ";\n";

		return true;
	}

/*
=================================================
	_SerializePointerToObject
=================================================
*/
	bool Generator::_SerializePointerToObject (const TypeInfo &t, StringView fieldName, StringView indent, StringView counter,
											   INOUT String &str, INOUT String &beforeStr) const
	{
		CHECK_ERR( t.isArray or t.isConst or t.isField );
		CHECK_ERR( (t.numPointers > 0) != t.isArray );	// pointers OR static arrays are supported

		if ( t.structInfo != _structs.end() )
		{
			CHECK( t.structInfo->data.required );

			if ( t.structInfo->data.name == "VkAllocationCallbacks" )
			{
				CHECK( not t.isField );
				str << "\"null\";\n";
				return true;
			}

			beforeStr << indent << "if ( " << fieldName << " ) {\n";

			if ( counter.empty() )
			{
				if ( t.hasSType )
					beforeStr << indent << "\tbefore << SerializeStruct( BitCast<VkBaseInStructure const*>(" << fieldName << "), nameSer, remapper, indent );\n";
				else
					beforeStr << indent << "\tbefore << Serialize_" << t.structInfo->data.name << "( " << fieldName << ", nameSer, remapper, indent );\n";

				str << "nameSer.GetPtr(" << fieldName << ")";
			}
			else
			{
				beforeStr
					<< indent << "\tCHECK( " << counter << " > 0 );\n"
					<< indent << "\tconst String arr_name = nameSer.MakeUnique( &" << fieldName << ", "
								<< FieldNameToVariableName( fieldName, t.structInfo->data.name ) << " );\n"
					<< indent << "\tbefore << indent << \"" << t.structInfo->data.name << "  \" << arr_name << \"[\" << IntToString(" << counter << ") << \"] = {};\\n\";\n"
					<< indent << "\tfor (uint i = 0; i < " << counter << "; ++i) {\n"
					<< indent << "\t	Serialize2_" << t.structInfo->data.name << "( " << fieldName
								<< " + i, String(arr_name) << \"[\" << IntToString(i) << \"]\", nameSer, remapper, indent, INOUT result, INOUT before );\n"
					<< indent << "\t}\n";

				str << "nameSer.Get( &" << fieldName << " )";
			}
			beforeStr << indent << "}\n";
		}
		else
		if ( t.resInfo != _resourceTypes.end() )
		{
			CHECK_ERR( not counter.empty() );

			beforeStr
				<< indent << "if ( " << fieldName << " ) {\n"
				<< indent << "\tCHECK( " << counter << " > 0 );\n"
				<< indent << "\tbefore << indent << \"const " << t.resInfo->first << "  \" << nameSer.MakeUnique( &" << fieldName << ", "
							<< FieldNameToVariableName( fieldName, t.resInfo->first ) << " ) << \"[] = {\";\n"
				<< indent << "\tfor (uint i = 0; i < " << counter << "; ++i) {\n"
				<< indent << "\t	before << (i ? \",\" : \"\") << (i%4 == 0 ? \"\\n\\t\"s << indent : \" \") << "
							<< "remapper( " << t.resInfo->second.typeName << ", " << fieldName << "[i] );\n"
				<< indent << "\t}\n"
				<< indent << "\tbefore << \"\\n\" << indent << \"};\\n\";\n"
				<< indent << "\tbefore << indent << \"STATIC_ASSERT( CountOf(\" << nameSer.Get( &" << fieldName
							<< " ) << \") == \" << IntToString(" << counter << ") << \" );\\n\\n\";\n"
				<< indent << "}\n";

			str << "nameSer.Get( &" << fieldName << " )";
		}
		else
		if ( t.enumInfo != _enums.end() )
		{
			CHECK( t.enumInfo->data.required );
			CHECK_ERR( not counter.empty() );
		
			beforeStr
				<< indent << "if ( " << fieldName << " ) {\n"
				<< indent << "\tCHECK( " << counter << " > 0 );\n"
				<< indent << "\tbefore << indent << \"const " << t.enumInfo->data.name << "  \" << nameSer.MakeUnique( &" << fieldName << ", "
							<< FieldNameToVariableName( fieldName ) << " ) << \"[] = {\";\n"
				<< indent << "\tfor (uint i = 0; i < " << counter << "; ++i) {\n"
				<< indent << "\t	before << (i ? \",\" : \"\") << (i%4 == 0 ? \"\\n\\t\"s << indent : \" \") << Serialize_"
							<< t.enumInfo->data.name << "( " << fieldName << "[i] );\n"
				<< indent << "\t}\n"
				<< indent << "\tbefore << \"\\n\" << indent << \" };\\n\";\n"
				<< indent << "\tbefore << indent << \"STATIC_ASSERT( CountOf(\" << nameSer.Get( &" << fieldName
							<< " ) << \") == \" << IntToString(" << counter << ") << \" );\\n\\n\";\n"
				<< indent << "}\n";

			str << "nameSer.Get( &" << fieldName << " )";
		}
		else
		if ( t.bitfieldInfo != _bitfields.end() )
		{
			CHECK( t.bitfieldInfo->data.required );
			CHECK_ERR( not counter.empty() );

			beforeStr
				<< indent << "if ( " << fieldName << " ) {\n"
				<< indent << "\tCHECK( " << counter << " > 0 );\n"
				<< indent << "\tbefore << indent << \"const " << t.bitfieldInfo->data.name << "  \" << nameSer.MakeUnique( &" << fieldName << ", "
							<< FieldNameToVariableName( fieldName ) << " ) << \"[] = {\";\n"
				<< indent << "\tfor (uint i = 0; i < " << counter << "; ++i) {\n"
				<< indent << "\t	before << (i ? \",\" : \"\") << (i%4 == 0 ? \"\\n\\t\"s << indent : \" \") << Serialize_"
							<< t.bitfieldInfo->data.name << "( " << fieldName << "[i] );\n"
				<< indent << "\t}\n"
				<< indent << "\tbefore << \"\\n\" << indent << \" };\\n\";\n"
				<< indent << "\tbefore << indent << \"STATIC_ASSERT( CountOf(\" << nameSer.Get( &" << fieldName
							<< " ) << \") == \" << IntToString(" << counter << ") << \" );\\n\\n\";\n"
				<< indent << "}\n";

			str << "nameSer.Get( &" << fieldName << " )";
		}
		else
		if ( t.basicInfo != _basicTypes.end() )
		{
			if ( t.basicInfo->second == EBasicType::Struct or
				 t.basicInfo->second == EBasicType::Char )
			{
				str << ConvertBasicType( fieldName, t.basicInfo->first, t.basicInfo->second, true );
			}
			else
			if ( t.basicInfo->second == EBasicType::Void )
			{
				if ( counter.empty() )
				{
					CHECK( EndsWith( fieldName, "pUserData" )		or
						   EndsWith( fieldName, "pInitialData" )	or
						   EndsWith( fieldName, "pHostPointer" )	or
						   EndsWith( fieldName, "pTag" )			or
						   EndsWith( fieldName, "pData" )			or
						   EndsWith( fieldName, "pCheckpointMarker" ));

					str << "\"null\"";
				}
				else
				{
					beforeStr
						<< indent << "CHECK( (" << counter << " > 0) and (" << counter << " % 4 == 0) );\n"
						<< indent << "before << indent << \"const FIValue \" << nameSer.MakeUnique( &" << fieldName << ", "
									<< FieldNameToVariableName( fieldName ) << " ) << \"[] = {\";\n"
						<< indent << "for (uint i = 0; i < " << counter << "; ++i) {\n"
						<< indent << "	before << (i ? \",\" : \"\") << (i%8 == 0 ? \"\\n\\t\"s << indent : \" \")"
									<< " << VoidToFIValueString( " << fieldName << ", i*sizeof(FIValue) );\n"
						<< indent << "}\n"
						<< indent << "before << '\\n' << indent << \"};\\n\";\n"
						<< indent << "before << indent << \"STATIC_ASSERT( CountOf(\" << nameSer.Get( &" << fieldName
									<< " ) << \") == \" << IntToString(" << counter << ") << \" );\\n\\n\";\n";

					str << "nameSer.Get( &" << fieldName << " )";
				}
			}
			else
			if ( t.isArray )
			{
				CHECK_ERR( not counter.empty() );

				// replace operator = by <<
				for (size_t j = str.length()-1, min = Max(str.length(), 10)-9;
					 j < str.length() and j > min;
					 --j)
				{
					if ( str[j] == '=' ) {
						str[j] = '<';
						str.insert( str.begin() + j, '<' );
						break;
					}
				}

				str	<< "\"StaticArray<" << t.basicInfo->first << ", \" << IntToString(" << counter << ") << \">{ \";\n"
					<< indent << "for (uint i = 0; i < " << counter << "; ++i) {\n"
					<< indent << "	result << (i ? \", \" : \"\") << " << ConvertBasicType( String(fieldName) << "[i]", t.basicInfo->first, t.basicInfo->second, false ) << ";\n"
					<< indent << "}\n"
					<< indent << "result << \" }\"";
			}
			else
			{
				CHECK_ERR( not counter.empty() );

				beforeStr
					<< indent << "if ( " << fieldName << " ) {\n"
					<< indent << "\tCHECK( " << counter << " > 0 );\n"
					<< indent << "\tbefore << indent << \"const " << t.basicInfo->first << "  \" << nameSer.MakeUnique( &" << fieldName << ", "
								<< FieldNameToVariableName( fieldName ) << " ) << \"[] = { \";\n"
					<< indent << "\tfor (uint i = 0; i < " << counter << "; ++i) {\n"
					<< indent << "\t	before << (i ? \", \" : \"\") << (i%16 == 0 ? \"\\n\\t\"s << indent : \" \") << "
								<< ConvertBasicType( String(fieldName) << "[i]", t.basicInfo->first, t.basicInfo->second, false ) << ";\n"
					<< indent << "\t}\n"
					<< indent << "\tbefore << indent << \" };\\n\";\n"
					<< indent << "\tbefore << indent << \"STATIC_ASSERT( CountOf(\" << nameSer.Get( &" << fieldName
								<< " ) << \") == \" << IntToString(" << counter << ") << \" );\\n\\n\";\n"
					<< indent << "}\n";

				str << "nameSer.Get( &" << fieldName << " )";
			}
		}
		else
		{
			CHECK(false);
		}
	
		if ( t.isField )
			str << " << \";\\n\";\n";
		else
			str << ";\n";

		return true;
	}

/*
=================================================
	_SerializePointerToPointerToObject
=================================================
*/
	bool Generator::_SerializePointerToPointerToObject (const TypeInfo &t, StringView fieldName, StringView indent, StringView counter,
														INOUT String &str, INOUT String &beforeStr) const
	{
		CHECK_ERR( t.isConst );
		CHECK_ERR( not counter.empty() );
	
		if ( t.structInfo != _structs.end() )
		{
			CHECK( t.structInfo->data.required );
			CHECK( t.structInfo->data.name != "VkAllocationCallbacks" );

			beforeStr
				<< indent << "if ( " << fieldName << " ) {\n"
				<< indent << "\tCHECK( " << counter << " > 0 );\n"
				<< indent << "\tfor (uint i = 0; i < " << counter << "; ++i) {\n";

			if ( t.hasSType )
				beforeStr << indent << "\t	before << SerializeStruct( BitCast<VkBaseInStructure const*>(" << fieldName << "[i]), nameSer, remapper, indent );\n";
			else
				beforeStr << indent << "\t	before << Serialize_" << t.structInfo->data.name << "( " << fieldName << "[i], nameSer, remapper, indent );\n";

			beforeStr
				<< indent << "\t}\n"
				<< indent << "\tbefore << indent << \"const " << t.structInfo->data.name << "*  \" << nameSer.MakeUnique( &" << fieldName << ", "
							<< FieldNameToVariableName( fieldName, t.structInfo->data.name ) << " ) << \" = { \";\n"
				<< indent << "\tfor (uint i = 0; i < " << counter << "; ++i) {\n"
				<< indent << "\t	before << (i ? \",\" : \"\") << \"\\n\\t\\t\" << indent << nameSer.GetPtr( " << fieldName << "[i] );\n"
				<< indent << "\t}\n"
				<< indent << "\tbefore << indent << \" };\\n\";\n"
				<< indent << "}\n";

			str << "nameSer.Get( &" << fieldName << " )";
		}
		else
		if ( t.basicInfo != _basicTypes.end() )
		{
			/*beforeStr
				<< indent << "\tCHECK( " << counter << " > 0 );\n"
				<< indent << "\tfor (uint i = 0; i < " << counter << "; ++i) {\n";

				<< indent << "}\n";*/

			str << "nameSer.Get( &" << fieldName << " )";
		}
		else
		{
			CHECK(false);
		}

	
		if ( t.isField )
			str << " << \";\\n\";\n";
		else
			str << ";\n";

		return true;
	}

/*
=================================================
	_GenStructToString_ProcessVar
=================================================
*/
	bool Generator::_GenStructToString_ProcessVar (StringView fieldName, ArrayView<StringView> fieldType, StringView indent, StringView counterName,
													bool isField, INOUT String &str, INOUT String &beforeStr, INOUT String &afterStr) const
	{
		const String	field_name = (isField ? "obj->"s : ""s) << fieldName;

		TypeInfo		t;
		t.structInfo	= _structs.end();
		t.enumInfo		= _enums.end();
		t.bitfieldInfo	= _bitfields.end();
		t.resInfo		= _resourceTypes.end();
		t.basicInfo		= _basicTypes.end();
		t.isField		= isField;

		for (size_t i = 0; i < fieldType.size(); ++i)
		{
			auto&	type = fieldType[i];

			if ( not (t.structInfo	 != _structs.end()		 or
					  t.enumInfo	 != _enums.end()		 or
					  t.resInfo		 != _resourceTypes.end() or
					  t.bitfieldInfo != _bitfields.end()	 or
					  t.basicInfo	 != _basicTypes.end())	)
			{
				t.structInfo	= _structs.find( SearchableStruct{type} );
				t.enumInfo		= _enums.find( SearchableEnum{type} );
				t.bitfieldInfo	= _bitfields.find( SearchableBitfield{type} );
				t.resInfo		= _resourceTypes.find( type );
				t.basicInfo		= _basicTypes.find( type );
			}

			t.numPointers += uint(type == "*");
			t.isConst	  |= (type == "const");
			
			if ( type == "[" )
			{
				CHECK_ERR( fieldType.size() > i+2 and fieldType[i+2] == "]" );

				t.isArray	= true;
				counterName	= fieldType[i+1];
				break;
			}
		}

		// check if type is known
		CHECK_ERR(	t.structInfo != _structs.end()			or t.enumInfo	  != _enums.end()		or
					t.resInfo	 != _resourceTypes.end()	or t.bitfieldInfo != _bitfields.end()	or
					t.basicInfo  != _basicTypes.end() );


		if ( t.structInfo != _structs.end() )
		{
			t.hasSType = _HasSType( t.structInfo->data );
		}


		if ( isField )
			str << indent << "result << indent << name << \"." << fieldName << " = \" << ";
		else
			str << indent << "result << indent << \"\t\t/*" << fieldName << "*/ \" << ";


		// build counter name
		String	counter;
		if ( not counterName.empty() )
		{
			if ( counterName.front() == '(' and counterName.back() == ')' )
				counter = counterName;
			else
			if ( _IsNumber( counterName ) or t.isArray )
				counter = "CountOf("s << field_name << ")";
			else
				counter << (isField ? "obj->" : "") << counterName;
		}
	

		// serialize basic type or single object
		if ( t.numPointers == 0 and not t.isArray )
		{
			CHECK_ERR( counter.empty() );
			CHECK_ERR( _SerializeSingleObject( t, fieldName, indent, INOUT str, INOUT beforeStr ));
		}
		else

		// serialize output parameter(s)
		if ( not t.isConst and t.numPointers > 0 and not isField )
		{
			CHECK_ERR( _SerializeOutputObject( t, field_name, indent, counter, INOUT str, INOUT beforeStr, INOUT afterStr ));
		}
		else

		// serialize pointer or array
		if ( t.numPointers == 1 or t.isArray )
		{
			CHECK_ERR( _SerializePointerToObject( t, field_name, indent, counter, INOUT str, INOUT beforeStr ));
		}
		else

		// serialize array of pointers
		if ( t.numPointers > 1 )
		{
			CHECK_ERR( _SerializePointerToPointerToObject( t, field_name, indent, counter, INOUT str, INOUT beforeStr ));
		}
		else

		{
			RETURN_ERR( "unknown type" );
		}

		return true;
	}

/*
=================================================
	_GenStructToString_ProcessStruct
=================================================
*/
	bool Generator::_GenStructToString_ProcessStruct (const VkStructInfo &info, StringView stype, OUT String &str) const
	{
		str.clear();

		if ( stype.empty() )
		{
			str	<< "ND_ String  Serialize_" << info.name << " (const " << info.name << " *obj, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)\n"
				<< "{\n"
				<< "	String	result, before;\n"
				<< "	if ( obj == null ) return result;\n"
				<< "	const String  name = nameSer.MakeUnique( obj, " << StructNameToVariableName( info.name ) << " );\n"
				<< "	result << indent << \"" << info.name << "  \" << name << \" = {};\\n\";\n"
				<< "	Serialize2_" << info.name << "( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );\n"
				<< "	return before + result;\n"
				<< "}\n\n";
		}

		str	<< "void  Serialize2_" << info.name << " (const " << info.name << " *obj, StringView name, NameSerializer &nameSer,"
			<< " ResRemapper &remapper, StringView indent, INOUT String &result, INOUT String &before)\n"
			<< "{\n";


		// special cases
		if ( info.name == "VkOffset2D" )
		{
			str << "	result << indent << name << \" = { \" << IntToString(obj->x) << \", \" << IntToString(obj->y) << \" };\\n\";\n";
		}else
		if ( info.name == "VkOffset3D" )
		{
			str << "	result << indent << name << \" = { \" << IntToString(obj->x) << \", \" << IntToString(obj->y) << \", \" << IntToString(obj->z) << \" };\\n\";\n";
		}else
		if ( info.name == "VkExtent2D" )
		{
			str << "	result << indent << name << \" = { \" << IntToString(obj->width) << \", \" << IntToString(obj->height) << \" };\\n\";\n";
		}else
		if ( info.name == "VkExtent3D" )
		{
			str << "	result << indent << name << \" = { \" << IntToString(obj->width) << \", \" << IntToString(obj->height) << \", \" << IntToString(obj->depth) << \" };\\n\";\n";
		}else
		if ( info.name == "VkClearColorValue" )
		{
			str << "	result << indent << \"// current clear value depends on render pass\\n\";\n"

				<< "	result << indent << \"// float32 << { \" << FloatToString(obj->float32[0]) << \", \" << FloatToString(obj->float32[1]) << "
				<<				"\", \" << FloatToString(obj->float32[2]) << \", \" << FloatToString(obj->float32[3]) << \" };\\n\";\n"

				<< "	result << indent << name << \".uint32 << StaticArray<uint32_t, 4>{ \" << IntToString(obj->uint32[0]) << \", \" << IntToString(obj->uint32[1]) << "
				<<				"\", \" << IntToString(obj->uint32[2]) << \", \" << IntToString(obj->uint32[3]) << \" };\\n\";\n";
		}else
		if ( info.name == "VkClearValue" )
		{
			str << "	result << indent << \"// current clear value depends on render pass\\n\";\n"
				<< "	result << indent << \"// .depthStencil = { \" << FloatToString(obj->depthStencil.depth) << \", \" << IntToString(obj->depthStencil.stencil) << \" }\\n\";\n"
				<< "	result << indent << \"// .color.float32 = { \" << FloatToString(obj->color.float32[0]) << \", \" << FloatToString(obj->color.float32[1]) << "
				<<				"\", \" << FloatToString(obj->color.float32[2]) << \", \" << FloatToString(obj->color.float32[3]) << \" };\\n\";\n"
				<< "	result << indent << name << \".color.uint32 << StaticArray<uint32_t, 4>{ \" << IntToString(obj->color.uint32[0]) << \", \" << IntToString(obj->color.uint32[1]) << "
				<<				"\", \" << IntToString(obj->color.uint32[2]) << \", \" << IntToString(obj->color.uint32[3]) << \" };\\n\";\n";
		}else
		{
			String	fields;
			String	beforeFields;
			String	afterFields;

			if ( not stype.empty() )
			{
				str << "	before << SerializeStruct( BitCast<VkBaseInStructure const *>(obj->pNext), nameSer, remapper, indent );\n"
					<< "	result << indent << name << \".pNext = \" << nameSer.GetPtr( obj->pNext ) << \";\\n\";\n"
					<< "	result << indent << name << \".sType = " << stype << ";\\n\";\n"
					<< "	CHECK( obj->sType == " << stype << " );\n";
			}
	
			for (auto& field : info.fields)
			{
				if ( field.name == "pNext" or field.name == "sType" )
					continue;

				CHECK_ERR( _GenStructToString_ProcessVar( field.name, field.type, "\t",
														  _GetStructFieldCounterName( info.name, field.name ), true,
														  INOUT fields, INOUT beforeFields, INOUT afterFields ));
			}

			str	<< beforeFields
				<< fields
				<< afterFields;
		}

		str << "}\n";
		return true;
	}
	
/*
=================================================
	_FindStructTypeEnum
=================================================
*/
	StringView  Generator::_FindStructTypeEnum (StringView structType, INOUT Array<Generator::EnumField> &values)
	{
		const auto	IsNumber	= [] (const char c) { return (c >= '0' and c <= '9'); };

		String		type_name	= "VK_STRUCTURE_TYPE_";

		if ( StartsWith( structType, "Vk" ) )
			structType = structType.substr( 2 );

		bool	req_space	= false;
		uint	mode		= 0;

		for (size_t i = 0; i < structType.size(); ++i)
		{
			const char	c			= structType[i];
			const char	next		= i+1 < structType.length() ? structType[i+1] : c;
			const uint	last_mode	= mode;

			mode = 0;

			if ( i > 0 )
			{
				if ( IsUpperCase( c ) )
					mode = 1;
			
				if ( IsNumber( c ) )
					mode = 2;

				if ( last_mode == 1 and IsUpperCase( c ) and IsLowerCase( next ) )
					req_space = true;
			}

			if ( mode and i > 0 )
			{
				if ( req_space or last_mode != mode )
				{
					type_name << '_';
					req_space = false;
				}
			}
			else
				req_space = true;

			type_name << ToUpperCase( c );
		}

		// validate
		{
			FindAndReplace( INOUT type_name, "WIN_32", "WIN32" );
			FindAndReplace( INOUT type_name, "16_BIT", "16BIT" );
			FindAndReplace( INOUT type_name, "8_BIT", "8BIT" );
			FindAndReplace( INOUT type_name, "D_3_D_12", "D3D12" );
			FindAndReplace( INOUT type_name, "AABBNV", "AABB_NV" );
			FindAndReplace( INOUT type_name, "_INT_64_", "_INT64_" );
			FindAndReplace( INOUT type_name, "_FLOAT_16_", "_FLOAT16_" );
			FindAndReplace( INOUT type_name, "_INT_8_", "_INT8_" );
			FindAndReplace( INOUT type_name, "_UINT_8_", "_UINT8_" );
			FindAndReplace( INOUT type_name, "_ASTCHDR_", "_ASTC_HDR_" );
		}

		for (auto field = values.begin(); field != values.end(); ++field)
		{
			if ( HasSubStringIC( field->name, type_name ) )
			{
				StringView	result = field->name;
				values.erase( field );
				return result;
			}
		}

		RETURN_ERR( "struct type enum is not found!" );
	}

/*
=================================================
	GenStructToString
=================================================
*/
	bool Generator::GenStructToString (const FS::path &headerFile, const FS::path &sourceFile) const
	{
		String	header = "// auto-generated file\n\n";
		String	str1, str2;
	
		header << "ND_ String  SerializeStruct (const VkBaseInStructure*, NameSerializer&, ResRemapper &, StringView);\n";

		str1 << "// auto-generated file\n\nusing namespace std::string_literals;\n\n"
			<< "#pragma warning (push)\n#pragma warning (disable: 4100)\n\n"
			<< "ND_ String  SerializeStruct (const VkBaseInStructure *ptr, NameSerializer &nameSer, ResRemapper &remapper, StringView indent)\n"
			<< "{\n"
			<< "	if ( ptr == null ) return {};\n"
			<< "	String	result, before;\n"
			<< "	BEGIN_ENUM_CHECKS();\n"
			<< "	switch ( ptr->sType )\n"
			<< "	{\n";
	
		auto	st_types = _enums.find( SearchableEnum{"VkStructureType"} );
		CHECK_ERR( st_types != _enums.end() );

		Array<EnumField>	enum_fields = st_types->data.fields;
		String				temp;
	

		for (auto& info : _structs)
		{
			if ( not info.data.required )
				continue;

			const bool	has_stype = _HasSType( info.data );

			if ( info.data.name == "VkBaseInStructure" or
				 info.data.name == "VkBaseOutStructure" )
				continue;
		
			if ( info.data.fileIndex > 0 )
				header << "#ifdef " << _fileData[info.data.fileIndex].macro << "\n";

			header << "    void    Serialize2_" << info.data.name << " (const " << info.data.name
					<< "*, StringView, NameSerializer&, ResRemapper &, StringView, String&, String&);\n";

			if ( not has_stype )
			{
				header << "ND_ String  Serialize_" << info.data.name << " (const " << info.data.name << "*, NameSerializer&, ResRemapper &, StringView);\n";

				CHECK_ERR( _GenStructToString_ProcessStruct( info.data, "", OUT temp ));
			
				if ( info.data.fileIndex > 0 )
					str2 << "#ifdef " << _fileData[info.data.fileIndex].macro << "\n" << temp << "#endif\n\n";
				else
					str2 << temp << "\n";

				if ( info.data.fileIndex > 0 )
					header << "#endif\n";
				continue;
			}
		

			StringView	enum_name = _FindStructTypeEnum( info.data.name, INOUT enum_fields );
		
			CHECK_ERR( _GenStructToString_ProcessStruct( info.data, enum_name, OUT temp ));

			str1 << "\t\tcase " << enum_name << " : {\n";
		
			if ( info.data.fileIndex > 0 )
			{
				str1 << "\t\t\t#ifdef " << _fileData[info.data.fileIndex].macro << "\n";

				str2 << "#ifdef " << _fileData[info.data.fileIndex].macro << "\n"
					 << temp << "#endif\n\n";

				temp = "\t\t\t#endif\n";
			}
			else
			{
				str2 << temp << "\n";
				temp.clear();
			}

			str1 << "\t\t\t" << info.data.name << " const *  obj = BitCast<" << info.data.name << " const *>( ptr );\n"
				<< "\t\t\tconst String  name = nameSer.MakeUnique( obj, " << StructNameToVariableName( info.data.name ) << " );\n"
				<< "\t\t\tresult << indent << \"" << info.data.name << "  \" << name << \" = {};\\n\";\n"
				<< "\t\t\tSerialize2_" << info.data.name << "( obj, name, nameSer, remapper, indent, INOUT result, INOUT before );\n"
				<< temp
				<< "\t\t\tbreak;\n"
				<< "\t\t}\n\n";
			
			if ( info.data.fileIndex > 0 )
				header << "#endif\n";
		}
	

		for (auto& field : enum_fields)
		{
			if ( not _IsNumber( field.value ) and field.name != "VK_STRUCTURE_TYPE_RANGE_SIZE" )
				continue;	// skip aliases

			str1 << "\t\tcase " << field.name << " : CHECK(false); break;\n";
		}

		str1 << "	}\n"
			<< "	END_ENUM_CHECKS();\n"
			<< "	return before + result;\n"
			<< "}\n\n"
			<< "#pragma warning (pop)\n\n";


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
			CHECK_ERR( file.Write( StringView(str1) ));
			CHECK_ERR( file.Write( StringView(str2) ));
		}
		return true;
	}

}	// RDE
