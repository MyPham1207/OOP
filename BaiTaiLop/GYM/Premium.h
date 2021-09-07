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
		Customer::Customer();
		iDichVu = 1;
		iPhiCoBan = 1000;
		iHoTroPT = 0;
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