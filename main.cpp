#include <iostream>
#include "Inputs_data.h"

int main()
{
	Inputs file;
	Data log;
	log.data_path_in();
	log.data_size_in(file.inputs_size(log));
	file.inputs_data(log);
	return 0;
}