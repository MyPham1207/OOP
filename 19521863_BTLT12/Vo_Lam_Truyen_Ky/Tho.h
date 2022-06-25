#pragma once
#include "NguoiChoi.h"

class Tho :public NguoiChoi
{
public:
	Tho()
	{
		iHe = 5;
	}

	~Tho() {}

	void Nhap()
	{
		cout << "Chon giao phai: " << endl;
		cout << "1. Con Lon" << endl;
		cout << "2. Vo Dang" << endl;
		NguoiChoi::Nhap();
	}

	void Xuat()
	{
		cout << "===========================================================================" << endl;
		cout << "- Thong tin nhan vat: " << endl;
		cout << "+ He: Tho" << endl;
		cout << "+ Mon phai: ";
		if (iGiaoPhai == 1)
		{
			cout << "Con Lon";
		}
		else
		{
			cout << "Vo Dang";
		}
		cout << endl;
		NguoiChoi::Xuat();
	}

};
