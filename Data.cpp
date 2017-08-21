#include "Data.h"



Data::Data(int size_data)
{
	data.reserve(size_data);
}

void Data::data_path_in()
{
	std::cout << "Write the full path to the log" << std::endl;
	std::cin >> path;
}

void Data::data_size_in(int size)
{
	data.reserve(size);
}
std::string Data::data_path_out()
{
	return path;
}