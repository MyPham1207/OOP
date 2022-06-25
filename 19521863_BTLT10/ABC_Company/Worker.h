#pragma once
#include "Employer.h"

class Worker :public Employer
{
private:
	int iSoSP;
public:
	Worker()
	{
		//Employer::Employer();
		iSoSP = 0;
	}
	~Worker(){}
	void Nhap()
	{
		Employer::Nhap();
		cout << "Nhap so san pham : ";
		cin >> iSoSP;
		//iSalary = basicSalary + iSoSP * 2000;
	}

	int Cal_Salary()
	{
		return iSalary + iSoSP * 2000;
	}

	void Xuat()
	{
		Employer::Xuat();
	}



	string getName()
	{
		return sName;
	}

	void setType(int Type)
	{
		type = Type;
	}
};