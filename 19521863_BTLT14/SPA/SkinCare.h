#pragma once
#include <iostream>
#include <string>
using namespace std;

class SkinCare
{
protected:
	string sCongDung;
	int iThoiGian;
	int iChon;//1 neu duoc chon, 0 neu khong duoc chon
	int iGia;
	int iThuTu;
public:
	SkinCare()
	{
		sCongDung = "";
		iThoiGian = 0;
		iChon = 0;
		iGia = 0;
		iThuTu = 0;
	}

	~SkinCare(){}

	virtual void setChon() = 0;

	int getThuTu()
	{
		return iThuTu;
	}

	string getCongDung()
	{
		return sCongDung;
	}

	int getThoiGian()
	{
		return iThoiGian;
	}

	int getGia()
	{
		return iGia;
	}
};