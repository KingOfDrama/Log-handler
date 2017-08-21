#include "DfSettings.h"

Inst::Consol_Settings *Inst::Make_ISettings::_Setting = nullptr;
/*
Inst::Consol_Settings::Consol_Settings ()
{
	std::cout << "Write the full path to the log" << std::endl;
	std::cin >> path;
}
*/
std::string Inst::ISettings::get_path()
{
	return nullptr;
}

Inst::Consol_Settings *Inst::Make_ISettings::Instans()
{
	if ( _Setting == nullptr )
	{
		_Setting = new Inst::Consol_Settings;
	}
	return _Setting;
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

std::string Inst::Constans_Settings::get_const_path()
{
	return path;
}

Inst::ISettings *Inst::Make_ISettings::Get_Settings(bool x) //метод фабрики
{
	if (x)
	{
		return Inst::Make_ISettings::Instans();
	}
	return nullptr;
}
