#include <string>
#include <iostream>

#ifndef DFSETTINGS_H
#define DFSETTINGS_H

namespace Inst
{
	class Settings
	{
	public:
		Settings();
		std::string get_path();
	private:
		std::string path;
	};
}

#endif  DFSETTINGS_H
