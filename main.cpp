#include "Inputs_data.h"
#include "DfSettings.h"

void main()
{
	FileInputs::Inputs file;
	Inst::Settings def;
	DataLog::Data log(file.get_file_size(def));
	file.get_file_data( def,log );
}