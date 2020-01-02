// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "Generator.h"

namespace RDE
{

/*
=================================================
	GenChunkParser
=================================================
*/
	bool Generator::GenChunkParser (const FS::path &headerFile, const FS::path &sourceFile, const FS::path &chunksMap) const
	{
		String	header	= "// auto-generated file\n\n";
		String	str		= "// auto-generated file\n\n#pragma warning (push)\n#pragma warning (disable: 4100)\n\n";
		String	chunks	= "// auto-generated file\n\n";

		HashMap<String, String>  name_remapping;
		name_remapping["pCreateInfo"]			= "CreateInfo";
		name_remapping["pAllocator"]			= "pAllocator";
		name_remapping["pCommandPool"]			= "CmdPool";
		name_remapping["pQueue"]				= "Queue";
		name_remapping["pSwapchainImageCount"]	= "SwapchainImageIndex";
		name_remapping["pSwapchainImages"]		= "SwapchainImage";
		name_remapping["pCommandBuffers"]		= "CommandBuffer";
		name_remapping["pAllocateInfo"]			= "AllocateInfo";
		name_remapping["pSwapchain"]			= "SwapChain";
		name_remapping["swapchain"]				= "Swapchain";
		name_remapping["createInfoCount"]		= "count";
		name_remapping["pCreateInfos"]			= "CreateInfo";
		name_remapping["pPipelines"]			= "Pipeline";
		name_remapping["pBeginInfo"]			= "BeginInfo";
		name_remapping["dstStageMask"]			= "destStageMask";
		name_remapping["dstBuffer"]				= "destBuffer";
		name_remapping["pRenderPassBegin"]		= "RenderPassBegin";
		name_remapping["descriptorSetCount"]	= "setCount";
		name_remapping["dstImage"]				= "destImage";
		name_remapping["dstImageLayout"]		= "destImageLayout";

		name_remapping["vkCmdBindDescriptorSets_pDescriptorSets"]	= "pDescriptorSets";
		name_remapping["vkAllocateDescriptorSets_pDescriptorSets"]	= "DescriptorSet";
		name_remapping["vkBeginCommandBuffer_commandBuffer"]		= "CommandBuffer";
		name_remapping["vkCmdDispatch_groupCountX"]					= "x";
		name_remapping["vkCmdDispatch_groupCountY"]					= "y";
		name_remapping["vkCmdDispatch_groupCountZ"]					= "z";
		name_remapping["vkCmdDrawIndexedIndirect_drawCount"]		= "count";
		name_remapping["vkCmdSetDepthBias_depthBiasConstantFactor"]	= "depthBias";
		name_remapping["vkCmdSetDepthBias_depthBiasClamp"]			= "depthBiasClamp";
		name_remapping["vkCmdSetDepthBias_depthBiasSlopeFactor"]	= "slopeScaledDepthBias";
		name_remapping["vkEndCommandBuffer_commandBuffer"]			= "CommandBuffer";
		name_remapping["vkFlushMappedMemoryRanges_memoryRangeCount"]= "memRangeCount";
		name_remapping["vkFlushMappedMemoryRanges_pMemoryRanges"]	= "MemRange";
		name_remapping["vkUpdateDescriptorSets_descriptorWriteCount"]	= "writeCount";
		name_remapping["vkUpdateDescriptorSets_descriptorCopyCount"]	= "copyCount";
		name_remapping["vkCmdPushConstants_offset"]					= "start";
		name_remapping["vkCmdPushConstants_size"]					= "length";
		name_remapping["vkCmdPushConstants_pValues"]				= "values";
		

		for (auto& packet : _packetIDs)
		{
			if ( packet.vkFunc.empty() )
				continue;
			
			if ( _skipFuncs.count( packet.vkFunc ))
				continue;

			auto	fn_info = _funcs.find( SearchableFunc{packet.vkFunc} );
			CHECK_ERR( fn_info != _funcs.end() );

			header << "bool Parse_" << packet.vkFunc << " (const Node_t &node, uint64_t threadId, uint64_t timestamp);\n";

			chunks << "_chunkParser[\"" << packet.vkFunc << "\"] = &RdCaptureReader::Parse_" << packet.vkFunc << ";\n";

			str << "bool RdCaptureReader::Parse_" << packet.vkFunc << " (const Node_t &root, uint64_t threadId, uint64_t timestamp)\n{\n";

			for (auto& arg : fn_info->data.args)
			{
				bool		is_resource	= false;
				bool		is_const	= false;
				bool		is_pointer	= false;
				bool		is_array	= false;
				String		type_name;
				StringView	counter		= _GetFuncArgCounterName( packet.vkFunc, arg.name );
				auto		struct_info	= _structs.end();

				for (size_t i = 0; i < arg.type.size(); ++i)
				{
					auto&	type = arg.type[i];

					is_resource	|= (_resourceTypes.find(type) != _resourceTypes.end());
					is_const	|= (type == "const");
					is_pointer	|= (type == "*");

					if ( type == "const" )
						continue;

					if ( type == "[" )
					{
						CHECK_ERR( arg.type.size() == i+3 and arg.type[i+2] == "]" );
						is_array = true;
						break;
					}
					
					if ( struct_info == _structs.end() )
						struct_info = _structs.find( SearchableStruct{type} );

					type_name << type << ' ';
				}
				
				auto	remapped	= name_remapping.find( String(arg.name) );
				auto	remapped2	= name_remapping.find( String(packet.vkFunc) << '_' << arg.name );
				String	node_name;

				if ( remapped != name_remapping.end() )
					node_name = remapped->second;
				else
				if ( remapped2 != name_remapping.end() )
					node_name = remapped2->second;
				else
				if ( not is_const and is_resource and
					 (StartsWith( fn_info->data.name, "vkCreate" ) or StartsWith( fn_info->data.name, "vkAllocate" )) and
					 arg.name.size() > 1 and arg.name[0] == 'p' and IsUpperCase(arg.name[1]) )
				{
					node_name = arg.name.substr( 1 );
				}
				else
					node_name = arg.name;


				str << "	Node_t* " << arg.name << "_node = _FindByAttribName( root, \"" << node_name << "\" );\n"
					<< "	" << type_name << ' ' << arg.name;
				
				if ( is_array )
					str << '[' << *(arg.type.end()-2) << ']';
				
				str << " = {};\n";

				if ( is_resource )
				{
					if ( counter.empty() )
					{
						str << "\t_ParseResource( " << arg.name << "_node, OUT " << (is_pointer ? "const_cast<"s << type_name << "&>(" : "")
							<< arg.name << (is_pointer ? ")" : "") << " );\n";
					}
					else
					{
						str << "\t_ParseResources( " << arg.name << "_node, OUT " << (is_pointer ? "const_cast<"s << type_name << "&>(" : "")
							<< arg.name << (is_pointer ? ")" : "") << ", INOUT " << counter << " );\n";
					}
				}
				else
				if ( struct_info != _structs.end() )
				{
					if ( counter.empty() )
					{
						str << "\t_ParseStruct( " << arg.name << "_node, OUT " << (is_pointer ? "const_cast<"s << type_name << "&>(" : "")
							<< arg.name << (is_pointer ? ")" : "") << " );\n";
					}
					else
					{
						str << "\t_ParseStructArray( " << arg.name << "_node, OUT " << (is_pointer ? "const_cast<"s << type_name << "&>(" : "")
							<< arg.name << (is_pointer ? ")" : "") << ", INOUT " << counter << " );\n";
					}
				}
				else
				{
					if ( counter.empty() )
					{
						str << "\t_ParseValue( " << arg.name << "_node, OUT " << (is_pointer ? "const_cast<"s << type_name << "&>(" : "")
							<< arg.name << (is_pointer ? ")" : "") << " );\n";
					}
					else
					{
						str << "\t_ParseArray( " << arg.name << "_node, OUT " << (is_pointer ? "const_cast<"s << type_name << "&>(" : "")
							<< arg.name << (is_pointer ? ")" : "") << ", INOUT " << counter << " );\n";
					}
				}
			}

			str << "\tfor (auto listener : _listeners) {\n"
				<< "\t	listener->" << fn_info->data.name.substr( 2 ) << "( _chunkCounter, threadId, timestamp, ";
				
			for (auto& arg : fn_info->data.args)
			{
				str << (&arg == fn_info->data.args.data() ? "" : ", ") << arg.name;
			}

			str << " );\n\t}\n";
			str << "\treturn true;\n}\n\n";
		}

		str << "#pragma warning (pop)\n";
		

		// struct map
		uint	curr_file = UMax;

		chunks << "\n\n";
		for (auto& st : _structs)
		{
			if ( not st.data.required					or
				 st.data.name == "VkBaseInStructure"	or
				 st.data.name == "VkBaseOutStructure" )
				continue;
			
			if ( curr_file != st.data.fileIndex )
			{
				if ( curr_file < _fileData.size() )
					chunks << "#endif // " << _fileData[curr_file].macro << "\n";
				
				curr_file = st.data.fileIndex;
				chunks << "#ifdef " << _fileData[curr_file].macro << "\n";
			}

			chunks << "_structParser[\"" << st.data.name << "\"] = {\n\t[this] (auto& node, OUT void *ptr) "
					<< "{ return this->_Parse_" << st.data.name << "( &node, OUT *BitCast<" << st.data.name << "*>(ptr) ); },\n"
					<< "\t[this] (auto& node, OUT void **ptr) "
					<< "{ return this->_Parse_" << st.data.name << "( &node, OUT *BitCast<" << st.data.name << "**>(ptr) ); }\n};\n";
		}
		
		if ( curr_file < _fileData.size() )
			chunks << "#endif // " << _fileData[curr_file].macro << "\n";


		// 
		chunks << "\n\n";
		for (auto& res : _resourceTypes)
		{
			chunks << "_strToResType[\"" << res.first << "\"] = " << res.second.typeName << ";\n";
		}


		// store header file
		{
			FileWStream		wfile{ headerFile };
			CHECK_ERR( wfile.IsOpen() );
			CHECK_ERR( wfile.Write( header ));
		}

		// store source file
		{
			FileWStream		wfile{ sourceFile };
			CHECK_ERR( wfile.IsOpen() );
			CHECK_ERR( wfile.Write( str ));
		}

		// store source file
		{
			FileWStream		wfile{ chunksMap };
			CHECK_ERR( wfile.IsOpen() );
			CHECK_ERR( wfile.Write( chunks ));
		}
		return true;
	}
	
/*
=================================================
	GenValueParser
=================================================
*/
	bool Generator::GenValueParser (const FS::path &headerFile, const FS::path &sourceFile) const
	{
		String	header	= "// auto-generated file\n\n";
		String	str		= "// auto-generated file\n\n";

		// resources
		for (auto& res : _resourceTypes)
		{
			header << "bool  _ParseResource (const Node_t *node, OUT " << res.first << " &result);\n";
			header << "bool  _ParseResource (const Node_t *node, OUT " << res.first << "* &result);\n";

			str << "bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT " << res.first << " &result)\n{\n"
				<< "	CHECK_ERR( node );\n"
				<< "	result = BitCast<" << res.first << ">(std::atoll( node->value() ));\n"
				<< "	return true;\n"
				<< "}\n\n";

			str << "bool  RdCaptureReader::_ParseResource (const Node_t *node, OUT " << res.first << "* &result)\n{\n"
				<< "	CHECK_ERR( node );\n"
				<< "	result = _allocator.Alloc<" << res.first << ">( 1 );\n"
				<< "	return _ParseResource( node, OUT *result );\n"
				<< "}\n\n";
		}

		// struct
		uint	curr_file = UMax;

		for (auto& st : _structs)
		{
			if ( not st.data.required					or
				 st.data.name == "VkBaseInStructure"	or
				 st.data.name == "VkBaseOutStructure" )
				continue;

			if ( curr_file != st.data.fileIndex )
			{
				if ( curr_file < _fileData.size() )
				{
					header << "#endif // " << _fileData[curr_file].macro << "\n";
					str << "#endif // " << _fileData[curr_file].macro << "\n\n";
				}
				
				curr_file = st.data.fileIndex;

				header << "#ifdef " << _fileData[curr_file].macro << "\n";
				str << "#ifdef " << _fileData[curr_file].macro << "\n";
			}

			header << "bool  _Parse_" << st.data.name << " (const Node_t *node, OUT " << st.data.name << " &result);\n";
			header << "bool  _Parse_" << st.data.name << " (const Node_t *node, OUT " << st.data.name << "* &result);\n";
			
			str << "bool  RdCaptureReader::_Parse_" << st.data.name << " (const Node_t *node, OUT " << st.data.name << "* &result)\n{\n"
				<< "	CHECK_ERR( node );\n"
				<< "	if ( StringView{node->name()} == \"null\" ) {\n"
				<< "		result = null;\n"
				<< "		return true;\n\t}\n\n"

				<< "	result = _allocator.Alloc<" << st.data.name << ">( 1 );\n"
				<< "	DEBUG_ONLY( memset( result, 0xDE, sizeof(*result) ));\n"
				<< "	return _Parse_" << st.data.name << "( node, OUT *result );\n"
				<< "}\n\n";

			str << "bool  RdCaptureReader::_Parse_" << st.data.name << " (const Node_t *node, OUT " << st.data.name << " &result)\n{\n"
				<< "	CHECK_ERR( node );\n";

			for (auto& field : st.data.fields)
			{
				if ( field.name == "pNext" )
				{
					str << "	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, \"" << field.name << "\" ), OUT const_cast<void **>(&result.pNext) ));\n";
					continue;
				}
				
				bool	is_pointer	= false;
				bool	is_resource	= false;
				String	counter		{_GetStructFieldCounterName( st.data.name, field.name )};
				String	type_name;
				auto	struct_info	= _structs.end();

				for (auto& type : field.type)
				{
					is_resource	|= (_resourceTypes.find(type) != _resourceTypes.end());
					is_pointer	|= (type == "*");

					if ( type == "const" )
						continue;

					if ( struct_info == _structs.end() )
						struct_info = _structs.find( SearchableStruct{type} );

					type_name << type << ' ';
				}

				if ( counter.size() and not FindAndReplace( INOUT counter, "obj->", "result." ))
					counter = "result." + counter;

				if ( is_resource )
				{
					if ( counter.empty() )
					{
						str << "	CHECK_ERR( _ParseResource( _FindByAttribName( *node, \"" << field.name << "\" ), OUT "
							<< (is_pointer ? "const_cast<"s << type_name << "&>(" : "") << "result." << field.name
							<< (is_pointer ? ")" : "") << " ));\n";
					}
					else
					if ( (st.data.name == "VkDescriptorSetLayoutBinding" and field.name == "pImmutableSamplers") or
						 (st.data.name == "VkWriteDescriptorSet" and field.name == "pTexelBufferView") )
					{
						str << "	CHECK_ERR( _ParseResourcesOpt( _FindByAttribName( *node, \"" << field.name << "\" ), OUT "
							<< (is_pointer ? "const_cast<"s << type_name << "&>(" : "") << "result." << field.name
							<< (is_pointer ? ")" : "") << ", uint32_t(" << counter << ") ));\n";
					}
					else
					{
						str << "	CHECK_ERR( _ParseResources( _FindByAttribName( *node, \"" << field.name << "\" ), OUT "
							<< (is_pointer ? "const_cast<"s << type_name << "&>(" : "") << "result." << field.name
							<< (is_pointer ? ")" : "") << ", INOUT " << counter << " ));\n";
					}
				}
				else
				if ( struct_info != _structs.end() )
				{
					if ( counter.empty() )
					{
						str << "	CHECK_ERR( _ParseStruct( _FindByAttribName( *node, \"" << field.name << "\" ), OUT "
							<< (is_pointer ? "const_cast<"s << type_name << "&>(" : "") << "result." << field.name
							<< (is_pointer ? ")" : "") << " ));\n";
					}
					else
					if ( (st.data.name == "VkSubpassDescription" and field.name == "pResolveAttachments")		or
						 (st.data.name == "VkPipelineViewportStateCreateInfo" and field.name == "pViewports")	or
						 (st.data.name == "VkPipelineViewportStateCreateInfo" and field.name == "pScissors")	or
						 (st.data.name == "VkWriteDescriptorSet" and field.name == "pImageInfo")				or
						 (st.data.name == "VkWriteDescriptorSet" and field.name == "pBufferInfo") )
					{
						str << "	CHECK_ERR( _ParseStructArrayOpt( _FindByAttribName( *node, \"" << field.name << "\" ), OUT "
							<< (is_pointer ? "const_cast<"s << type_name << "&>(" : "") << "result." << field.name
							<< (is_pointer ? ")" : "") << ", uint32_t(" << counter << ") ));\n";
					}
					else
					{
						str << "	CHECK_ERR( _ParseStructArray( _FindByAttribName( *node, \"" << field.name << "\" ), OUT "
							<< (is_pointer ? "const_cast<"s << type_name << "&>(" : "") << "result." << field.name
							<< (is_pointer ? ")" : "") << ", INOUT " << counter << " ));\n";
					}
				}
				else
				{
					if ( counter.empty() )
					{
						str << "	CHECK_ERR( _ParseValue( _FindByAttribName( *node, \"" << field.name << "\" ), OUT "
							<< (is_pointer ? "const_cast<"s << type_name << "&>(" : "") << "result." << field.name
							<< (is_pointer ? ")" : "") << " ));\n";
					}
					else
					if ( (st.data.name == "VkPipelineMultisampleStateCreateInfo" and field.name == "pSampleMask") )
					{
						str << "	CHECK_ERR( _ParseArrayOpt( _FindByAttribName( *node, \"" << field.name << "\" ), OUT "
							<< (is_pointer ? "const_cast<"s << type_name << "&>(" : "") << "result." << field.name
							<< (is_pointer ? ")" : "") << ", uint32_t(" << counter << ") ));\n";
					}
					else
					{
						str << "	CHECK_ERR( _ParseArray( _FindByAttribName( *node, \"" << field.name << "\" ), OUT "
							<< (is_pointer ? "const_cast<"s << type_name << "&>(" : "") << "result." << field.name
							<< (is_pointer ? ")" : "") << ", INOUT " << counter << " ));\n";
					}
				}
			}

			str << "\treturn true;\n}\n\n";
		}
		
		if ( curr_file < _fileData.size() )
		{
			header << "#endif // " << _fileData[curr_file].macro << "\n";
			str << "#endif // " << _fileData[curr_file].macro << "\n\n";
		}


		// store header file
		{
			FileWStream		wfile{ headerFile };
			CHECK_ERR( wfile.IsOpen() );
			CHECK_ERR( wfile.Write( header ));
		}

		// store source file
		{
			FileWStream		wfile{ sourceFile };
			CHECK_ERR( wfile.IsOpen() );
			CHECK_ERR( wfile.Write( str ));
		}
		return true;
	}


}	// RDE
