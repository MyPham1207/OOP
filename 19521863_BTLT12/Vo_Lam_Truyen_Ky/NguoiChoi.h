#pragma once
#include "NhanVat.h"

class NguoiChoi:public NhanVat
{
protected:
	int iGiaoPhai;
public:
	NguoiChoi()
	{
		iGiaoPhai = 0;
	}

	~NguoiChoi(){}

	virtual void Nhap()
	{
		cin >> iGiaoPhai;
		cout << "Nhap level hien tai cua ban: ";
		cin >> iCapDo;
		fSatThuong = (float)iCapDo * 5;
	}
	
	virtual void Xuat()
	{
		/*
		cout << "+ He doi thu: ";
		if (iHeTanCong == 1)
		{
			cout << "Kim";
		}
		else if (iHeTanCong == 2)
		{
			cout << "Thuy";
		}
		else if (iHeTanCong == 3)
		{
			cout << "Moc";
		}
		else if (iHeTanCong == 4)
		{
			cout << "Hoa";
		}
		else if (iHeTanCong == 5)
		{
			cout << "Tho";
		}
		cout << endl;*/
		cout << "+ Level nhan vat: " << iCapDo << endl;
		cout << "+ Sat thuong: " << fSatThuong << endl;
	}
};
