#include "Inputs_data.h"
#include "DfSettings.h"
#include <fstream>
#include <string>

size_t FileInputs::Inputs::get_size ( Inst::Consol_Settings *def ) const
{
	std::fstream file;// מבתוהוםטעü ס 9 
	file.open( def->get_path(), std::ios::in );
	if (file)
	{
		file.seekg(0, std::ios::end);
		return file.tellg();
	}
	return 0;
}

void FileInputs::Inputs::get_data( Inst::Consol_Settings *def, DataLog::Data &log )
{
	char symbol;
	std::ifstream file(def->get_path() );
	while ( file.eof() )
	{
		log.data_push(file.get());
	}
	file.close();
}