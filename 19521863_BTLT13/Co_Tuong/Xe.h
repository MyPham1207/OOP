#pragma once
#include "Co.h"

class Xe :public Co
{
public:
	Xe()
	{
		sTen = "Xe";
	}

	~Xe() {}

	void setViTri()
	{
		if (iMau == 0)
		{
			pos.push_back(make_pair(1, 1));
			pos.push_back(make_pair(1, 9));
		}
		else if (iMau == 1)
		{
			pos.push_back(make_pair(10, 1));
			pos.push_back(make_pair(10, 9));
		}
		setTen();
	}

	void Nhap()
	{
		Co::Nhap();
		setViTri();
	}

	void CachDi()
	{
		cout << "Di ngang hoac doc mien la khong co quan co chan tu diem di den diem den." << endl;
	}
};
