#pragma once
#include "Premium.h"
#include "Basic.h"
#include "Non_Member.h"

class CustomerList
{
private:
	int iSoKhach;
	Customer** list;
public:
	CustomerList()
	{
		iSoKhach = 1;
		list = new Customer*;
		list[0] = NULL;
	}

	~CustomerList(){}

	void Nhap()
	{
		cout << "Nhap so luong khach hang : ";
		cin >> iSoKhach;
		list = new Customer * [iSoKhach];
		int flag = 0;
		for (int i = 0; i < iSoKhach; i++)
		{
			cout << "Nhap dich vu (1:Premium, 2:Basic, 3:Non-member) : ";
			cin >> flag;
			switch (flag)
			{
			case 1:
			{
				list[i] = new Premium();
				list[i]->Nhap();
				list[i]->setDichVu(flag);
				break;
			}
			case 2:
			{
				list[i] = new Basic();
				list[i]->Nhap();
				list[i]->setDichVu(flag);
				break;
			}
			case 3:
			{
				list[i] = new Non_Member();
				list[i]->Nhap();
				list[i]->setDichVu(flag);
				break;
			}
			}
		}
	}

	void Xuat()
	{
		for (int i = 0; i < iSoKhach; i++)
		{
			list[i]->Xuat();
			cout << "===========================================================================" << endl;
		}
	}

	void MaxChi()
	{
		int iMaxChi = list[0]->getTongTienDaChi();
		for (int i = 1; i < iSoKhach; i++)
		{
			if (iMaxChi < list[i]->getTongTienDaChi())
			{
				iMaxChi = list[i]->getTongTienDaChi();
			}
		}
		cout << "Cac khach hang da chi tieu nhieu nhat : " << endl;
		cout << "***************************************************************************" << endl;
		for (int i = 0; i < iSoKhach; i++)
		{
			if (list[i]->getTongTienDaChi() == iMaxChi)
			{
				list[i]->Xuat();
				cout << "***************************************************************************" << endl;
			}
		}
	}
};