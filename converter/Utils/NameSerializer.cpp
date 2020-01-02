// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "NameSerializer.h"

namespace RDE
{
	
/*
=================================================
	Get
=================================================
*/
	String  NameSerializer::Get (const void *ptr) const
	{
		if ( ptr == null )
			return "null";

		auto	iter = _usedNames.find( ptr );
		if ( iter != _usedNames.end() )
			return iter->second;

		//ASSERT(false);
		return "null";
	}
	
/*
=================================================
	GetPtr
=================================================
*/
	String  NameSerializer::GetPtr (const void *ptr) const
	{
		if ( ptr == null )
			return "null";

		auto	iter = _usedNames.find( ptr );
		if ( iter != _usedNames.end() )
			return "&"s << iter->second;

		//ASSERT(false);
		return "null";
	}

/*
=================================================
	MakeUnique
=================================================
*/
	String  NameSerializer::MakeUnique (const void *ptr, String &&var0, String &&var1, String &&var2)
	{
		ASSERT( _usedNames.count(ptr) == 0 );
		ASSERT( ptr );
		ASSERT( not var0.empty() );
		//ASSERT( var0.length() > var1.length() );
		ASSERT( var1.length() >= var2.length() );

		uint	matches = 0;

		_MakeUnique( INOUT var0, OUT matches );

		// TODO
		//_MakeUnique( INOUT var1, OUT matches );
		//_MakeUnique( INOUT var2, OUT matches );

		_usedNames.insert({ ptr, var0 });
		_unique.insert( var0 );

		return var0;
	}
	
/*
=================================================
	ReserveName
=================================================
*/
	bool  NameSerializer::ReserveName (String &&name)
	{
		CHECK_ERR( _unique.insert( std::move(name) ).second );
		return true;
	}

/*
=================================================
	_MakeUnique
=================================================
*/
	inline void  NameSerializer::_MakeUnique (INOUT String &name, OUT uint &matches) const
	{
		matches = 0;

		if ( _unique.find( name ) == _unique.end() )
			return;

		// validate name
		DEBUG_ONLY(
		for (auto& c : name) {
			ASSERT( (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z') or (c == '_') or (&c != name.data() and c >= '0' and c <= '9') );
		})

		const size_t	len = name.length();

		for (matches = 1; matches < 1000; ++matches)
		{
			name.resize( len );
			name << "_" << ToString(matches);

			if ( _unique.find( name ) == _unique.end() )
				return;
		}
	}
	
/*
=================================================
	Clear
=================================================
*/
	void NameSerializer::Clear ()
	{
		_usedNames.clear();
		_unique.clear();
	}


}	// RDE
