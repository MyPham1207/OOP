#pragma once
#include "SP.h"
class SP;
class ComplexList
{
private:
	int iPhanTu;
	SP* list;
public:
	void Nhap();
	void Xuat();
	friend class SP;
	//lay phan tu []
	SP operator[](int i)
	{
		return list[i];
	}

	friend istream& operator>>(istream& is, ComplexList& Clist)
	{
		cout << "Nhap so phan tu cua danh sach:" << endl;
		is >> Clist.iPhanTu;
		Clist.list = new SP[Clist.iPhanTu];
		cout << "Nhap cac so phuc: ";
		for (int i = 0; i < Clist.iPhanTu; i++)
		{
			is >> Clist.list[i];
		}
		return is;
	}

	friend ostream& operator<<(ostream& os, ComplexList list)
	{
		for (int i = 0; i < list.iPhanTu; i++)
		{
			os << list[i];
		}
		return os;
	}
};

