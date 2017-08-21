#include "DfSettings.h"

Inst::Settings::Settings()
{
	std::cout << "Write the full path to the log" << std::endl;
	std::cin >> path;
}

std::string Inst::Settings::get_path()
{
	return path;
}