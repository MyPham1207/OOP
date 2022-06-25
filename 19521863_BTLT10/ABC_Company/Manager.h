#pragma once
#include "Employer.h"

class Manager : public Employer
{
private:
	int iHeSoChucVu;
	int iTienThuong;
public:
	Manager()
	{
		iHeSoChucVu = 0;
		iTienThuong = 0;
	}
	~Manager(){}
	void Nhap()
	{
		Employer::Nhap();
		cout << "Nhap he so chuc vu : ";
		cin >> iHeSoChucVu;
		cout << "Nhap tien thuong : ";
		cin >> iTienThuong;
	}

	int Cal_Salary()
	{
		return iSalary * iHeSoChucVu + iTienThuong;
	}

	void Xuat()
	{
		Employer::Xuat();
	}

	
	string getName()
	{
		return sName;
	};

	void setType(int Type)
	{
		type = Type;
	}
};