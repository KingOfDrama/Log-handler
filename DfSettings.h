#include <string>
#include <iostream>

#ifndef DFSETTINGS_H
#define DFSETTINGS_H

class Make_ISettings;

namespace Inst
{
	class ISettings
	{
	public:
		virtual std::string get_path() = 0; //виртуальную вункцию get_path() чисто обстрактную = 0
		virtual ~ISettings() {}; 	
	};

	class Consol_Settings : public ISettings
	{
	public:
		std::string get_path();
		void put_path();
		friend Make_ISettings;
	private:
		std::string path;
		Consol_Settings() {};
	};

	class Constans_Settings : public ISettings
	{
	public:
		std::string get_const_path();
	private:
		std::string path = "D:\\test.log";
	};

	class Make_ISettings
	{
	public:
		virtual ISettings * Get_Settings(bool);//Патер абстрактная фабрика
		static Consol_Settings * Instans();
	private:
		static Consol_Settings * _Setting;
	};
}

#endif  DFSETTINGS_H

