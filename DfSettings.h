#include <string>
#include <iostream>

#ifndef DFSETTINGS_H
#define DFSETTINGS_H

namespace Inst
{
	class Settings
	{
	public:
		void get_path();
		std::string path;
	};
}

#endif  DFSETTINGS_H