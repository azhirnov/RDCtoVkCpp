// Copyright (c) 2018-2019,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

#include "Common.h"
#include "Generated/IVulkanListener.h"

namespace RDE
{

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
		explicit VulkanConverter (const FS::path &folder);

		void Flush ();

		ND_ SharedPtr<IVulkanListener>  GetListener () const	{ return _listener; }
	};


}	// RDE
