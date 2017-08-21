#include <vector>

#ifndef DATA_H
#define DATA_H

namespace DataLog
{
	class Data
	{
	public:
		Data::Data(int size_data); // Конструктор не правильно ствой работает, с ХЕРА?
		void data_push(char);
	private:
		std::vector<char> data;

	};
}

#endif DATA.H