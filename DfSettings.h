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
		virtual ~ISettings() {};
		virtual std::string get_path() const = 0; //����������� ������� get_path() ����� ����������� = 0
	};

	class Consol_Settings : public ISettings
	{
	public:
		std::string get_path() const override; //�������� ����� � ������
		friend class Factory; // ���� ������ � private ������ Factory

	private:
		Consol_Settings();
		Consol_Settings(Consol_Settings const&) = delete; //����������� �����������
		Consol_Settings& operator=(Consol_Settings const&) = delete; // �������� �����������

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
		enum Fabric_Type //������������
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

