#pragma once
#include "NguoiChoi.h"

class Thuy :public NguoiChoi
{
public:
	Thuy()
	{
		iHe = 2;
	}

	~Thuy() {}

	void Nhap()
	{
		cout << "Chon giao phai: " << endl;
		cout << "1. Nga My" << endl;
		cout << "2. Thuy Yen mon" << endl;
		NguoiChoi::Nhap();
	}


	void Xuat()
	{
		cout << "===========================================================================" << endl;
		cout << "- Thong tin nhan vat: " << endl;
		cout << "+ He: Thuy" << endl;
		cout << "+ Mon phai: ";
		if (iGiaoPhai == 1)
		{
			cout << "Nga My";
		}
		else
		{
			cout << "Thuy Yen mon";
		}
		cout << endl;
		NguoiChoi::Xuat();
	}

};
