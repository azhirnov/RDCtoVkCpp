// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "Generator.h"

namespace RDE
{

/*
=================================================
	_GenRawVulkanCalls_ProcessPacket
=================================================
*/
	bool Generator::_GenRawVulkanCalls_ProcessPacket (const PacketInfo &packet, OUT String &str) const
	{
		str.clear();

		auto	func_info = _funcs.find( SearchableFunc{packet.vkFunc} );
		CHECK_ERR( func_info != _funcs.end() );

		String		call, after;
		const bool	returns_vkresult = (func_info->data.result.type.size() == 1 and func_info->data.result.type[0] == "VkResult");
		
		str << "\tnameSer.Clear();\n"
			<< "\tremapper.SetCurrentPos( chunkIndex );\n"
			<< "\tbefore << \"\t{\\n\";\n";

		call << "\tresult << indent << \""
			 << (returns_vkresult ? "VK_CALL( " : "")
			 << (func_info->data.scope == EFuncScope::Device ? "app." : "") << packet.vkFunc << "( \\n\";\n";

		bool	is_ctor = false;
		bool	is_dtor = false;

		is_ctor |= func_info->data.name.find( "vkCreate" ) != StringView::npos;
		is_ctor |= func_info->data.name.find( "vkAllocate" ) != StringView::npos;
		is_dtor |= func_info->data.name.find( "vkDestroy" ) != StringView::npos;
		is_dtor |= func_info->data.name.find( "vkFree" ) != StringView::npos;

		for (auto& arg : func_info->data.args)
		{
			StringView	counter = _GetFuncArgCounterName( packet.vkFunc, arg.name );

			TypeInfo	t;
			t.resInfo	= _resourceTypes.end();

			for (auto& type : arg.type)
			{
				if ( t.resInfo == _resourceTypes.end() )
					t.resInfo = _resourceTypes.find( type );

				t.numPointers += uint(type == "*");
				t.isConst	  |= (type == "const");
				t.isArray	  |= (type == "[");
			}
			
			if ( not t.isConst and t.resInfo != _resourceTypes.end() and is_ctor and t.numPointers == 1 )
			{
				if ( counter.size() )
				{
					str << "\tfor (uint i = 0; i < " << counter << "; ++i) {\n"
						<< "\t	remapper.CreateResource( " << t.resInfo->second.typeName << ", VkResourceID(" << arg.name << "[i]), chunkIndex );\n"
						<< "\t}\n";
				}else
					str << "\tremapper.CreateResource( " << t.resInfo->second.typeName << ", VkResourceID(*" << arg.name << "), chunkIndex );\n";
			}
			else
			if ( t.resInfo != _resourceTypes.end() and is_dtor )
			{
				if ( counter.size() )
				{
					str << "\tfor (uint i = 0; i < " << counter << "; ++i) {\n"
						<< "\t	remapper.DestroyResource( " << t.resInfo->second.typeName << ", VkResourceID(" << arg.name << "[i]), chunkIndex );\n"
						<< "\t}\n";
				}else
					str << "\tremapper.DestroyResource( " << t.resInfo->second.typeName << ", VkResourceID(*" << arg.name << "), chunkIndex );\n";
			}

			CHECK_ERR( _GenStructToString_ProcessVar( arg.name, arg.type, "\t", counter, false,
													  INOUT call, INOUT str, INOUT after ));
			
			if ( &arg != &func_info->data.args.back() )
				call << "\tresult << \",\\n\";\n";
			else
				call << "\tresult << \" " << (returns_vkresult ? ")" : "") << ");\\n\";\n";
		}

		str << call << after
			<< "\tresult << \"\t}\\n\";\n";

		if ( StartsWith( func_info->data.name, "vkCmd" )	or
			 func_info->data.name == "vkBeginCommandBuffer"	or
			 func_info->data.name == "vkEndCommandBuffer" )
		{
			str << "\tFlushCommandBuffer( " << func_info->data.args.front().name << " );\n";
		}
		else
		if ( StartsWith( func_info->data.name, "vkQueue" ))
		{
			str << "\tFlushQueue( " << func_info->data.args.front().name << " );\n";
		}
		else
			str << "\tFlushGlobal();\n";

		return true;
	}

/*
=================================================
	GenRawVulkanCalls
=================================================
*/
	bool Generator::GenRawVulkanCalls (const FS::path &output) const
	{
		String	str = "// auto-generated file\n\n#pragma warning (push)\n#pragma warning (disable: 4100)\n\n";
		String	temp;

		for (auto& packet : _packetIDs)
		{
			if ( packet.vkFunc.empty() )
				continue;
			
			if ( _skipFuncs.count( packet.vkFunc ))
				continue;

			str << "void " << packet.vkFunc.substr( 2 ) << " (uint chunkIndex, uint64_t threadID, uint64_t timestamp, ";
			
			auto	fn_iter = _funcs.find( SearchableFunc{packet.vkFunc} );
			CHECK_ERR( fn_iter != _funcs.end() );

			for (auto& arg : fn_iter->data.args)
			{
				str << (&arg == fn_iter->data.args.data() ? "" : ", ");

				for (size_t i = 0; i < arg.type.size(); ++i)
				{
					const auto&	type = arg.type[i];

					if ( type == "[" )
					{
						CHECK_ERR( arg.type.size() == i+3 and arg.type[i+2] == "]" );

						str << arg.name << type << arg.type[i+1] << arg.type[i+2];
						break;
					}

					str << type << ' ';

					if ( i+1 == arg.type.size() )
						str << arg.name;
				}
			}

			CHECK_ERR( _GenRawVulkanCalls_ProcessPacket( packet, OUT temp ));

			str << ") override\n{\n" << temp << "}\n\n";
		}
		str << "#pragma warning (push)\n\n";


		// store to file
		FileWStream		file{ output };
		CHECK_ERR( file.IsOpen() );
		CHECK_ERR( file.Write( StringView(str) ));

		return true;
	}

}	// RDE
