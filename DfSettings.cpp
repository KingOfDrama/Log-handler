#include "DfSettings.h"

void Inst::Settings::data_path_in()
{
	std::cout << "Write the full path to the log" << std::endl;
	std::cin >> path;
}