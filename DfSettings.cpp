#include "DfSettings.h"

std::string Inst::Settings::get_path()
{
	return path;
}

void Inst::Settings::put_path()
{
	std::cout << "Write the full path to the log" << std::endl;
	std::cin >> path;
}