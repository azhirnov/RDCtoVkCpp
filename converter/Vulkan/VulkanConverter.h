// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

#include "Common.h"
#include "Generated/IVulkanListener.h"

namespace RDE
{
	struct ConverterConfig
	{
		bool	divideByCmdBuffers	= true;
		bool	compile				= false;
		bool	configure			= false;
		bool	cleanOutputFolder	= false;
	};


	//
	// Vulkan Converter
	//

	class VulkanConverter
	{
	// variables
	private:
		SharedPtr< IVulkanListener >	_listener;

		const FS::path					_outFolder;


	// methods
	public:
		explicit VulkanConverter (const FS::path &folder, const ConverterConfig &cfg);

		void Flush ();

		ND_ SharedPtr<IVulkanListener>  GetListener () const	{ return _listener; }
	};


}	// RDE
