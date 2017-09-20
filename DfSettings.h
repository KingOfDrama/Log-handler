#include <string>
#include <iostream>
#include <memory>

#ifndef DFSETTINGS_H
#define DFSETTINGS_H

namespace Inst
{
	class Factory; //������ �������

	class ISettings
	{
	public:
		virtual std::string get_path() = 0; //����������� ������� get_path() ����� ����������� = 0
		virtual ~ISettings() {};
	};

	class Consol_Settings : public ISettings
	{
	public:
		std::string get_path() override; //�������� ����� � ������
		friend class Factory; // ���� ������ � private ������ Factory
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
		enum Fabric_Type //������������
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

