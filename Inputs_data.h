
class Inputs
{
private:
	int size;
	char *data;
public:
	Inputs(int size_data)
	{
		size = size_data;
		data = new char[size];
	}

	~Inputs()
	{
		delete[] data;
	}
};
