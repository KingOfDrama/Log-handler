#include "DfSettings.h"

std::string Inst::ISettings::get_path()
{
	return nullptr;
}

std::string Inst::Consol_Settings::get_path()
{
		return path;
}

void Inst::Consol_Settings::put_path()
{
	std::cout << "Write the full path to the log" << std::endl;
	std::cin >> path;
}

std::string Inst::Constans_Settings::get_path()
{
	return path;
}

Inst::Factory::Factory(Fabric_Type Type) 
{
	switch (Type)
	{
	case DEBUG: 
		_Setting = std::unique_ptr <ISettings>(new Constans_Settings()); // Создаем объект Constans_Settings() и сохраняем его адрес в указателе на базовый класс ISettings.
		break;
	case RELISE:
		_Setting = std::unique_ptr <ISettings>(new Consol_Settings());
		break;
	default:
		break;
	}
}
