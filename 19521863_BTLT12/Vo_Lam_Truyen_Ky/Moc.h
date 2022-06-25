#pragma once
#include "NguoiChoi.h"

class Moc :public NguoiChoi
{
public:
	Moc()
	{
		iHe = 3;
	}

	~Moc() {}

	void Nhap()
	{
		cout << "Chon giao phai: " << endl;
		cout << "1. Ngu Doc giao" << endl;
		cout << "2. Duong Mon" << endl;
		NguoiChoi::Nhap();
	}


	void Xuat()
	{
		cout << "===========================================================================" << endl;
		cout << "- Thong tin nhan vat: " << endl;
		cout << "+ He: Moc" << endl;
		cout << "+ Mon phai: ";
		if (iGiaoPhai == 1)
		{
			cout << "Ngu Doc giao";
		}
		else
		{
			cout << "Duong Mon";
		}
		cout << endl;
		NguoiChoi::Xuat();
	}

};
