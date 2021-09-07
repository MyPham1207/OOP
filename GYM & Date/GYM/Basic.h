#pragma once
#include "Customer.h" 

class Basic :public Customer
{
private:
	int iSoLop;
	int iChiPhiLopHoc;
public:
	Basic()
	{
		Customer::Customer();
		iDichVu = 2;
		iPhiCoBan = 500;
		iHoTroPT = 100;
		iSoLop = 0;
		iChiPhiLopHoc = 100;
	}

	~Basic(){}

	void Nhap()
	{
		Customer::Nhap();
		cout << "Nhap so lop da hoc : ";
		cin >> iSoLop;
	}

	int getTongTienDaChi()
	{
		iTienDaChi = (iPhiCoBan + iSoLop * iChiPhiLopHoc + iHoTroPT) * iThangSuDung;
		return iTienDaChi;
	}

	void Xuat()
	{
		Customer::Xuat();
		cout << "So lop da hoc : " << iSoLop << endl;
		cout << "So tien da chi : " << getTongTienDaChi() << endl;
	}
};