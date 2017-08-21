#include "Data.h"

void  DataLog::Data::data_push(char symbol)
{
	data.push_back(symbol);
}

DataLog::Data::Data(int size_data)
//:data(size_data)
{
	data.reserve(size_data); 
}
