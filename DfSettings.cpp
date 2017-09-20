#include "DfSettings.h"

std::string Inst::Consol_Settings::get_path()
{
		return path;
}

Inst::Consol_Settings::Consol_Settings()
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
		_Setting = std::unique_ptr <ISettings>(new Constans_Settings()); // ������� ������ Constans_Settings() � ��������� ��� ����� � ��������� �� ������� ����� ISettings.
		break;
	case RELISE:
		_Setting = std::unique_ptr <ISettings>(new Consol_Settings());
		break;
	default:
		break;
	}
}
