#pragma once
#include "NguoiChoi.h"
#include "QuaiVat.h"

class Kim :public NguoiChoi
{
public:
	Kim()
	{
		iHe = 1;
	}

	~Kim(){}

	void Nhap()
	{
		cout << "Chon giao phai: " << endl;
		cout << "1. Thieu Lam" << endl;
		cout << "2. Thien Vuong bang" << endl;
		NguoiChoi::Nhap();
	}


	void Xuat()
	{
		cout << "===========================================================================" << endl;
		cout << "- Thong tin nhan vat: " << endl;
		cout << "+ He: Kim" << endl;
		cout << "+ Mon phai: ";
		if (iGiaoPhai == 1)
		{
			cout << "Thieu Lam";
		}
		else
		{
			cout << "Thien Vuong bang";
		}
		cout << endl;
		NguoiChoi::Xuat();
	}

};