#include "Data.h"
#include "DfSettings.h"

#ifndef INPUTS_DATA_H
#define INPUTS_DATA_H

namespace FileInputs
{
	class Inputs
	{
	public:
		int get_file_size( Inst::Settings );
		void get_file_data( Inst::Settings ,DataLog::Data &);
	};
}

#endif INPUTS_DATA_H