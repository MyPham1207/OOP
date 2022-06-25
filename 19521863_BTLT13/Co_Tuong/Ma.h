#pragma once
#include "Co.h"

class Ma :public Co
{
public:
	Ma()
	{
		sTen = "Ma";
	}

	~Ma() {}


	void Nhap()
	{
		Co::Nhap();
		setViTri();
	}

	void setViTri()
	{
		if (iMau == 0)
		{
			pos.push_back(make_pair(1, 2));
			pos.push_back(make_pair(1, 8));
		}
		else if (iMau == 1)
		{
			pos.push_back(make_pair(10, 2));
			pos.push_back(make_pair(10, 8));
		}
		setTen();
	}

	void CachDi()
	{
		cout << "Di ngang 2 doc 1 hoac doc 2 ngang 1 moi nuoc, neu co quan nam ngay ben canh ma va can duong ngang 2 hay doc 2, ma bi can khong di duoc duong do." << endl;
	}
};
