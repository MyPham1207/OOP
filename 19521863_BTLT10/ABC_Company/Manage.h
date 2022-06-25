#pragma once
#include "Manager.h"
#include "Worker.h"
#include "Officer.h"
#include "Employer.h"

class Employer;

class Management
{
private:
	int iSoNhanVien;
	Employer** employer;
public:


	void Nhap()
	{
		cout << "Nhap so luong nhan vien : ";
		cin >> iSoNhanVien;
		employer = new Employer * [iSoNhanVien];
		int flag = 0;
		for (int i = 0; i < iSoNhanVien; i++)
		{
			cout << "Nhap loai nhan vien (1:Quan ly, 2:Nhan vien san xuat, 3:Nhan vien van phong) : ";
			cin >> flag;
			switch (flag)
			{
			case 1:
			{
				employer[i] = new Manager();
				employer[i]->Nhap();
				employer[i]->setType(flag);
				break;
			}
			case 2:
			{
				employer[i] = new Worker();
				employer[i]->Nhap();
				employer[i]->setType(flag);
				break;
			}
			case 3:
			{
				employer[i] = new Officer();
				employer[i]->Nhap();
				employer[i]->setType(flag);
				break;
			}
			}
		}
	}

	void Xuat()
	{
		for (int i = 0; i < iSoNhanVien; i++)
		{
			cout << "================================" << endl;
			employer[i]->Xuat();
		}

		
	}

	void Delete()
	{
		for (int i = 0; i < iSoNhanVien; i++)
		{
			delete employer[i];
		}
	}

	friend class Employer;

	int Salary()
	{
		int iSum = 0;
		for (int i = 0; i < iSoNhanVien; i++)
		{
			iSum += employer[i]->Cal_Salary();
		}
		return iSum;
	}

	void Find_Emp(string name)
	{
		for (int i = 0; i < iSoNhanVien; i++)
		{
			if (name == employer[i]->getName())
			{
				employer[i]->Xuat();
				return;
			}
		}
		cout << "We don't have this employee" << endl;
		return;
	}
};