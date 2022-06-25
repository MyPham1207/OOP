#pragma once
#include "NguoiChoi.h"

class Hoa :public NguoiChoi
{
public:
	Hoa()
	{
		iHe = 4;
	}

	~Hoa() {}

	void Nhap()
	{
		cout << "Chon giao phai: " << endl;
		cout << "1. Cai Bang" << endl;
		cout << "2. Thien Nhan giao" << endl;
		NguoiChoi::Nhap();
	}

	void Xuat()
	{
		cout << "===========================================================================" << endl;
		cout << "- Thong tin nhan vat: " << endl;
		cout << "+ He: Hoa" << endl;
		cout << "+ Mon phai: ";
		if (iGiaoPhai == 1)
		{
			cout << "Cai Bang";
		}
		else
		{
			cout << "Thien Nhan giao";
		}
		cout << endl;
		NguoiChoi::Xuat();
	}

};
