#pragma once
#include "Co.h"

class Tuong :public Co
{
public:
	Tuong()
	{
		sTen = "Tuong";
	}

	~Tuong(){}


	void Nhap()
	{
		Co::Nhap();
		setViTri();
	}

	void setViTri()
	{
		if (iMau == 0)
		{
			pos.push_back(make_pair(1, 5));
		}
		else if (iMau == 1)
		{
			pos.push_back(make_pair(10, 5));
		}
		setTen();
	}

	void CachDi()
	{
		cout << "Di tung o mot, ngang hoac doc, luon o trong cung va khong duoc ra ngoai." << endl;
	}
};