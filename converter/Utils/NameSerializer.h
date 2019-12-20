// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

#include "Common.h"

namespace RDE
{

	//
	// Name Serializer
	//

	class NameSerializer
	{
	// types
	private:
		using NameMap_t		= HashMap< const void*, String >;
		using UniqueNames_t	= HashSet< String >;


	// variables
	private:
		NameMap_t		_usedNames;
		UniqueNames_t	_unique;


	// methods
	public:
		NameSerializer () {}
		NameSerializer (NameSerializer &&) = default;
		NameSerializer (const NameSerializer &) = delete;

		ND_ String	Get (const void *ptr) const;
		ND_ String	GetPtr (const void *ptr) const;

		ND_ String	MakeUnique (const void *ptr, String &&var0, String &&var1 = Default, String &&var2 = Default);

		void Clear ();

		bool ReserveName (String &&name);


	private:
		void _MakeUnique (INOUT String &name, OUT uint &matches) const;
	};


}	// RDE
