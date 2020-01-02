// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

#include "Common.h"
#include <sstream>

namespace RDE
{

	//
	// Float/Int Value
	//

	struct FIValue
	{
		union {
			float	f;
			int		i;
			uint	u;
		};

		FIValue () : i{0} {}
		FIValue (float val) : f{val} {}
		FIValue (int val) : i{val} {}
		FIValue (uint val) : u{val} {}
	};


/*
=================================================
	BoolToString
=================================================
*/
	ND_ inline String  BoolToString (VkBool32 value)
	{
		return value ? "true" : "false";
	}
	
/*
=================================================
	HexToString
=================================================
*/
	template <typename T>
	ND_ inline String  HexToString (const T &value)
	{
		auto	ivalue = BitCast< NearUInt<T> >( value );

		std::stringstream	str;
		str << "0x" << std::hex << ivalue;
		
		if constexpr ( IsSameTypes< T, uint32_t > or (IsPointer<T> and sizeof(T) == sizeof(uint32_t)) )
			str << 'u';
		else if constexpr ( IsSameTypes< T, uint64_t > or (IsPointer<T> and sizeof(T) == sizeof(uint64_t)) )
			str << "ull";
		else if constexpr ( IsSameTypes< T, int64_t > )
			str << "ll";

		return str.str();
	}
	
/*
=================================================
	IntToString
=================================================
*/
	template <typename T>
	ND_ inline EnableIf<IsInteger<T>, String>  IntToString (const T &value)
	{
		String	str = ToString( value );

		if constexpr ( IsSameTypes< T, uint32_t > )
			str << 'u';
		else if constexpr ( IsSameTypes< T, uint64_t > )
			str << "ull";
		else if constexpr ( IsSameTypes< T, int64_t > )
			str << "ll";

		return str;
	}
	
/*
=================================================
	FloatToString
=================================================
*/
	ND_ inline String  FloatToString (float value)
	{
		if ( std::isnan( value ))
			FG_LOGD( "Converting NaN to string" );

		return ToString( value ) << 'f';
	}

	ND_ inline String  DoubleToString (double value)
	{
		if ( std::isnan( value ))
			FG_LOGD( "Converting NaN to string" );

		return ToString( value );
	}
	
/*
=================================================
	WCharToString
=================================================
*/
# ifdef VULKAN_WIN32_H_
	ND_ inline String  WCharToString (LPCWSTR str)
	{
		STATIC_ASSERT( sizeof(str[0]) == 2 );	// 2 bytes in wchar

		std::wstring_view	ws{str};
		String				result	= "L\"";
		char				buf[]	= "\\x0000";

		for (auto& w : ws)
		{
			buf[2] = char((w >> 12) & 0xF);
			buf[3] = char((w >>  8) & 0xF);
			buf[4] = char((w >>  4) & 0xF);
			buf[5] = char((w)       & 0xF);

			result << buf;
		}
		result << "\"";

		return result;
	}
# endif
	
/*
=================================================
	EnumToString
=================================================
*/
	template <typename T>
	ND_ inline String  EnumToString (const T &value)
	{
		return ToString( BitCast<NearUInt<T>>( value ));
	}
	
/*
=================================================
	VoidToFIValueString
=================================================
*/
	ND_ inline String  VoidToFIValueString (const void *data, size_t offset)
	{
		FIValue		value;
		memcpy( &value, static_cast<const char*>(data) + offset, sizeof(value) );

		String	fstr = FloatToString( value.f );
		String	ustr = HexToString( value.u );

		if ( not std::isfinite( value.f ) or fstr.length() > ustr.length()+4 )
			return ustr;
		else
			return fstr;
	}

/*
=================================================
	ConvertToCStyleString
=================================================
*/
	ND_ inline String  ConvertToCStyleString (StringView str)
	{
		String	result;
		result.reserve( str.length() + 10 );

		for (const char c : str)
		{
			switch ( c ) {
				case '\\' :		result << '\\' << '\\';		break;
				case '"' :		result << '\\' << '\"';		break;
				default :		result << c;				break;
			}
		}

		return result;
	}


}	// RDE
