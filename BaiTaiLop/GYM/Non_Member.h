#pragma once
#include "Customer.h"

class Non_Member :public Customer
{
public:
	Non_Member()
	{
		Customer::Customer();
		iDichVu = 3;
		iPhiCoBan = 200;
		iHoTroPT = 200;
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
