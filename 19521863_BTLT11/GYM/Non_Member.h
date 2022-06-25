#pragma once
#include "Customer.h"

class Non_Member :public Customer
{
public:
	Non_Member()
	{
		sHoTen = "";
		sCMND = "";
		iDichVu = 0;
		iThangSuDung = 0;
		iPhiCoBan = 0;
		iHoTroPT = 0;
		iTienDaChi = 0;
	}

	~Non_Member(){}

	void Nhap()
	{
		Customer::Nhap();
	}

	int getTongTienDaChi()
	{
		iTienDaChi = (iPhiCoBan + iHoTroPT) * iThangSuDung;
		return iTienDaChi;
	}

	void Xuat()
	{
		Customer::Xuat();
		cout << "So tien da chi : " << getTongTienDaChi() << endl;
	}
};
