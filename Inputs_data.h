#include "Data.h"
#include "DfSettings.h"

#ifndef INPUTS_DATA_H 
#define INPUTS_DATA_H 

namespace FileInputs
{
	class Inputs
	{
	public:
		Inputs()	{}
		int inputs_size( Inst::Settings & );
		void inputs_data( Inst::Settings & ,DataLog::Data &);
	};
}

#endif INPUTS_DATA_H 