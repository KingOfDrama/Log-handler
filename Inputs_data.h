#include "Data.h"
#include "DfSettings.h"

#ifndef INPUTS_DATA_H
#define INPUTS_DATA_H

namespace FileInputs
{
	class Inputs
	{
	public:
		size_t get_size( Inst::Consol_Settings *) const;// функция константна
		void get_data( Inst::Consol_Settings *, DataLog::Data &);
	};
}
#endif INPUTS_DATA_H