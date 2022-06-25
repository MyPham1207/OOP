#pragma once
#include"Customer.h" 

class Premium :public Customer
{
private:
	int iChiPhiLopHoc;
	int iDichVuXongHoi;
public:
	Premium()
	{
		sHoTen = "";
		sCMND = "";
		iDichVu = 0;
		iThangSuDung = 0;
		iPhiCoBan = 0;
		iHoTroPT = 0;
		iTienDaChi = 0;
		iChiPhiLopHoc = 0;
		iDichVuXongHoi = 0;
	}

	~Premium(){}

	void Nhap()
	{
		Customer::Nhap();
	}

	int getTongTienDaChi()
	{
		iTienDaChi = iPhiCoBan * iThangSuDung;
		return iTienDaChi;
	}

	void Xuat()
	{
		Customer::Xuat();
		cout << "So tien da chi : " << getTongTienDaChi() << endl;
	}
};