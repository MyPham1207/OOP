#pragma once
#include "Co.h"

class Si :public Co
{
public:
	Si()
	{
		sTen = "Si";
	}

	~Si() {}


	void Nhap()
	{
		Co::Nhap();
		setViTri();
	}

	void setViTri()
	{
		if (iMau == 0)
		{
			pos.push_back(make_pair(1, 4));
			pos.push_back(make_pair(1, 6));
		}
		else if (iMau == 1)
		{
			pos.push_back(make_pair(10, 4));
			pos.push_back(make_pair(10, 6));
		}
		setTen();
	}

	void CachDi()
	{
		cout << "Di xeo 1 o moi nuoc, luon o trong cung." << endl;
	}
};