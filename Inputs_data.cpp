#include "Inputs_data.h"
#include <fstream>
//#include <iostream>

int Inputs::inputs_size(Data & log)
{
	std::fstream file;
	file.open(log.data_path_out(), std::ios::in);
	file.seekg(0, std::ios::end);
	int size = file.tellg();
	file.close();
	return size+100;
}

void Inputs::inputs_data(Data & log)
{
	//std::fstream file;
	char symbol;
	std::ifstream file(log.data_path_out());
	while (!file.eof())
	{
		symbol = file.get() ;
		log.data_ttt(symbol);
	//	cout << n << endl;
	}
	//file.open(log.data_path_out(), std::ios::in);
/*	int symbol;
	while (!file.eof())
	{
		file >> symbol;
		log.data_ttt(symbol);
	}
	*/
	file.close();
}