// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#include "Generator.h"

namespace RDE
{

/*
=================================================
	BuildSkipPacketsMap
=================================================
*/
	bool Generator::BuildSkipPacketsMap ()
	{
		_alwaysSerialize = {
			"VkDedicatedAllocationImageCreateInfoNV",
			"VkDedicatedAllocationBufferCreateInfoNV",
			"VkDedicatedAllocationMemoryAllocateInfoNV"
		};

		_skipFuncs = {
			"vkFlushMappedMemoryRanges"
		};

		return true;
	}

/*
=================================================
	_MarkRequiredTypes_ProcessVar
=================================================
*/
	bool Generator::_MarkRequiredTypes_ProcessVar (ArrayView<StringView> types, bool forSerialization) const
	{
		for (auto& type : types)
		{
			auto struct_info = _structs.find( SearchableStruct{type} );
			if ( struct_info != _structs.end() )
			{
				if ( struct_info->data.required )
					return false;

				// may be not required, but dependencies may be used for custom serialization
				struct_info->data.required = (not forSerialization or _neverSerialize.find( struct_info->data.name ) == _neverSerialize.end());

				for (auto& field : struct_info->data.fields)
				{
					_MarkRequiredTypes_ProcessVar( field.type, forSerialization );
				}
				return true;
			}

			auto enum_info = _enums.find( SearchableEnum{type} );
			if ( enum_info != _enums.end() )
			{
				if ( enum_info->data.required )
					return false;

				enum_info->data.required = true;
				return true;
			}

			auto bitfield_info = _bitfields.find( SearchableBitfield{type} );
			if ( bitfield_info != _bitfields.end() )
			{
				if ( bitfield_info->data.required )
					return false;

				bitfield_info->data.required = true;

				enum_info = _enums.find( SearchableEnum{bitfield_info->data.enumName} );
				if ( enum_info != _enums.end() )
				{
					enum_info->data.required = true;
				}
				return true;
			}
		}
		return false;
	}

/*
=================================================
	_MarkRequiredTypes
=================================================
*/
	bool Generator::_MarkRequiredTypes (bool forSerialization) const
	{
		const auto	GetInitialState =	[forSerialization, this] (StringView name) {
											return	forSerialization										and
													_alwaysSerialize.find( name ) != _alwaysSerialize.end()	and
													_neverSerialize.find( name ) == _neverSerialize.end();
										};

		// reset all
		for (auto& en : _enums) {
			en.data.required = false;
		}
		for (auto& bf : _bitfields) {
			bf.data.required = false;
		}
		for (auto& st : _structs) {
			st.data.required = false;
		}


		// refresh all
		for (auto& en : _enums)
		{
			en.data.required |= GetInitialState( en.data.name );
		}

		for (auto& bf : _bitfields)
		{
			bf.data.required |= GetInitialState( bf.data.name );
		
			auto	enum_info = _enums.find( SearchableEnum{bf.data.enumName} );

			if ( bf.data.required and enum_info != _enums.end() )
				enum_info->data.required = true;
		}

		for (auto& st : _structs)
		{
			st.data.required |=	(_HasSType( st.data ) and (not forSerialization or _neverSerialize.find( st.data.name ) == _neverSerialize.end())) or
								GetInitialState( st.data.name );

			if ( st.data.required ) {
				for (auto& field : st.data.fields) {
					_MarkRequiredTypes_ProcessVar( field.type, forSerialization );
				}
			}
		}

		for (auto& func : _funcs)
		{
			func.data.required = GetInitialState( func.data.name );

			if ( func.data.required ) {
				for (auto& arg : func.data.args) {
					_MarkRequiredTypes_ProcessVar( arg.type, forSerialization );
				}
			}
		}


		for (auto& packet : _packetIDs)
		{
			if ( packet.vkFunc.empty() )
				continue;
		
			auto	func_info = _funcs.find( SearchableFunc{packet.vkFunc} );
			CHECK_ERR( func_info != _funcs.end() );

			if ( not func_info->data.required )
			{
				func_info->data.required = true;

				for (auto& arg : func_info->data.args)
				{
					_MarkRequiredTypes_ProcessVar( arg.type, forSerialization );
				}
			}
		}

		return true;
	}

/*
=================================================
	MarkRequiredTypesForSerializing
=================================================
*/
	bool Generator::MarkRequiredTypesForSerializing () const
	{
		return _MarkRequiredTypes( true );
	}

}	// RDE
