#include <iostream>
#include "Inputs_data.h"
#include "DfSettings.h"

int main()
{
	FileInputs::Inputs file;
	Inst::Settings def;
	def.data_path_in();
	DataLog::Data log(file.inputs_size(def));
	file.inputs_data(def,log);
	return 0;
}