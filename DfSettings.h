#include <string>
#include <iostream>
#include <memory>

#ifndef DFSETTINGS_H
#define DFSETTINGS_H

namespace Inst
{
	class Factory; //патерн фабрика

	class ISettings
	{
	public:
		virtual std::string get_path() = 0; //виртуальную функцию get_path() чисто обстрактную = 0
		virtual ~ISettings() {};
	};

	class Consol_Settings : public ISettings
	{
	public:
		std::string get_path() override; //получаем адрес к данным
		friend class Factory; // даем доступ к private классу Factory
	private:
		Consol_Settings();
		std::string path; 
	};

	class Constans_Settings : public ISettings
	{
	public:
		std::string get_path() override;
	private:
		std::string path = "D:\\test.log";
	};
	
	class Factory
	{
	public:
		enum Fabric_Type //перечесление
		{
			DEBUG = 0, RELISE
		};
		Factory(Fabric_Type);
		ISettings * Get_Settings()
		{
			return _Setting.get();
		};
	private:
		std::unique_ptr <ISettings> _Setting;
};
}

#endif  DFSETTINGS_H

