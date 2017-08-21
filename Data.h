#include <vector>
#include <string>
#include <iostream>

#ifndef DATA_H
#define DATA_H

namespace DataLog
{
	class Data
	{
	public:
		Data::Data( int size_data ) : data( size_data ) {}
		void data_push(int);
	private:
		std::vector<char> data;

	};
}

#endif DATA.H