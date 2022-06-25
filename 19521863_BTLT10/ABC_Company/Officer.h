#pragma once
#include "Employer.h"

class Officer :public Employer
{
private:
	int iWorkDay;
	int iTroCap;
public:
	Officer()
	{
		iWorkDay = 0;
		iTroCap = 0;
	}

	~Officer(){}

	void Nhap()
	{
		Employer::Nhap();
		cout << "Nhap so ngay lam viec : ";
		cin >> iWorkDay;
		cout << "Nhap so tien tro cap : ";
		cin >> iTroCap;
	}
	

	int Cal_Salary()
	{
		return iSalary + iWorkDay * 200000 + iTroCap;
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