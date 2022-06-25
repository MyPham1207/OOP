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
		sHoTen = "";
		sCMND = "";
		iDichVu = 0;
		iThangSuDung = 0;
		iPhiCoBan = 0;
		iHoTroPT = 0;
		iTienDaChi = 0;
		iSoLop = 0;
		iChiPhiLopHoc = 0;
	}

	~Basic(){}

	void Nhap()
	{
		Customer::Nhap();
		cout << "Nhap so lop da hoc : ";
		cin >> iSoLop;
		cout << "Nhap chi phi cua lop hoc : ";
		cin >> iChiPhiLopHoc;
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