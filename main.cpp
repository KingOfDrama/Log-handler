#include "Inputs_data.h"
#include "DfSettings.h"

int main()
{
	FileInputs::Inputs file;
	Inst::Settings def;
	def.get_path();
	DataLog::Data log(file.get_size(def));
	file.get_data(def,log);
	return 0;
}