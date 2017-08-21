#include <vector>
#include <string>  
#include <iostream>

class Data
{
public:

	Data(int size_data = 0);
	void data_path_in();
	void data_size_in(int size);
	std::string data_path_out();
	void data_ttt(int symbol)
	{
		data.push_back(symbol);
	}
	~Data()
	{}

private:

	std::vector<char> data;
	std::string path;
	

};
