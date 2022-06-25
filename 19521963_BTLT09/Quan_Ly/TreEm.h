#pragma once
#include "Nguoi.h"

class TreEm :public Nguoi
{
private:
	string sTruong;
public:
	void Nhap()
	{
		Nguoi::Nhap();
		cin.ignore();
		getline(cin, sTruong);
	}
	void Xuat()
	{
		if (sTruong == "Truong mau giao A")
		{
			iSoTienTra = iSoTienTra * 0.2;
		}
		Nguoi::Xuat();
	}
};