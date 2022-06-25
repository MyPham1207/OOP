#pragma once
#include "Date.h"
#include <string>
#include "Manage.h"

class Manage;

class Employer
{
protected:
	string sName;
	int type;//1: Manager,2: Worker,3: Officer
	Date DoB;
	int iSalary;
public:
	Employer()
	{
		type = 0;
		iSalary = 0;
	}
	~Employer(){}
	virtual void Nhap()
	{
		cin.ignore();
		cout << "Nhap ten : ";
		getline(cin, sName);
		cout << "Nhap ngay thang nam sinh : ";
		cin >> DoB;
		cout << "Nhap muc luong co ban : ";
		cin >> iSalary;
		type = 0;
	}

	virtual int Cal_Salary()
	{
		return 0;
	}

	virtual void Xuat()
	{
		cout << "Ho va ten nhan vien : ";
		cout << sName << endl;
		cout << "Vi tri : ";
		switch (type)
		{
		case 1:
		{
			cout << "Nhan vien quan ly" << endl;
			break;
		}
		case 2:
		{
			cout << "Nhan vien san xuat" << endl;
			break;
		}
		case 3:
		{
			cout << "Nhan vien van phong" << endl;
			break;
		}
		}
		cout << "Ngay sinh : " << DoB << endl;
		cout << "Luong : " << Cal_Salary() << endl;
	}



	virtual string getName()
	{
		return sName;
	}


	void setType(int Type)
	{
		type = Type;
	}
};

