#include <string>
#include <iostream>

#ifndef DFSETTINGS_H
#define DFSETTINGS_H

namespace Inst
{
	class Settings
	{
	public:
		std::string get_path(); 
		void put_path();
	private:
		std::string path;
	};
}

#endif  DFSETTINGS_H