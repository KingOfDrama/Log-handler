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
		virtual ~ISettings() {};
		virtual std::string get_path() const = 0; //виртуальную функцию get_path() чисто обстрактную = 0
	};

	class Consol_Settings : public ISettings
	{
	public:
		std::string get_path() const override; //получаем адрес к данным
		friend class Factory; // даем доступ к private классу Factory

	private:
		Consol_Settings();
		Consol_Settings(Consol_Settings const&) = delete; //конструктор копирования
		Consol_Settings& operator=(Consol_Settings const&) = delete; // оператор копирования

		std::string path;
	};

	class Constans_Settings : public ISettings
	{
	public:
		std::string get_path() const override;

	private:
		Constans_Settings();
		Constans_Settings(Constans_Settings const&) = delete;
		Constans_Settings& operator=(Constans_Settings const&) = delete;

		const std::string path  = "D:\\test.log";
	};

	class Factory
	{
	public:
		enum Fabric_Type //перечесление
		{
			DEBUG = 0,
			RELISE
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

