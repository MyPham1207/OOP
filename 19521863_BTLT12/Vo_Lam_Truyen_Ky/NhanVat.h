#pragma once
#include <iostream>
using namespace std;

class NhanVat
{
protected:
	int iHe;
	int iCapDo;
	float fSatThuong;
public:
	NhanVat()
	{
		iHe = 0;
		iCapDo = 0;
		fSatThuong = 0;
	}

	~NhanVat(){}

	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	int SinhHayKhac(int HeTanCong)
	{
		if (iHe == 1)
		{
			if (HeTanCong == 2)
			{
				return 1;
			}
			else if (HeTanCong == 3)
			{
				return 2;
			}
			else if (HeTanCong == 4)
			{
				return -2;
			}
		}
		else if (iHe == 2)
		{
			if (HeTanCong == 3)
			{
				return 1;
			}
			else if (HeTanCong == 4)
			{
				return 2;
			}
			else if (HeTanCong == 5)
			{
				return -2;
			}
		}
		else if (iHe == 3)
		{
			if (HeTanCong == 4)
			{
				return 1;
			}
			else if (HeTanCong == 5)
			{
				return 2;
			}
			else if (HeTanCong == 1)
			{
				return -2;
			}
		}
		else if (iHe == 4)
		{
			if (HeTanCong == 5)
			{
				return 1;
			}
			else if (HeTanCong == 1)
			{
				return 2;
			}
			else if (HeTanCong == 2)
			{
				return -2;
			}
		}
		else if (iHe == 5)
		{
			if (HeTanCong == 1)
			{
				return 1;
			}
			else if (HeTanCong == 2)
			{
				return 2;
			}
			else if (HeTanCong == 3)
			{
				return -2;
			}
		}
		return 0;
	}
	void setSatThuong(int HeTanCong)
	{
		if (SinhHayKhac(HeTanCong) == 1)
		{
			fSatThuong += fSatThuong * 0.1;
		}
		else if (SinhHayKhac(HeTanCong) == 2)
		{
			fSatThuong += fSatThuong * 0.2;
		}
		else if (SinhHayKhac(HeTanCong) == -2)
		{
			fSatThuong -= fSatThuong * 0.2;
		}
	}

	float getSatThuong()
	{
		return fSatThuong;
	}
};