#pragma once
#include "Co.h"

class Tot :public Co
{
public:
	Tot()
	{
		sTen = "Tot";
	}

	~Tot() {}


	void Nhap()
	{
		Co::Nhap();
		setViTri();
	}

	void setViTri()
	{
		if (iMau == 0)
		{
			pos.push_back(make_pair(4, 1));
			pos.push_back(make_pair(4, 3));
			pos.push_back(make_pair(4, 5));
			pos.push_back(make_pair(4, 7));
			pos.push_back(make_pair(4, 9));
		}
		else if (iMau == 1)
		{
			pos.push_back(make_pair(7, 1));
			pos.push_back(make_pair(7, 3));
			pos.push_back(make_pair(7, 5));
			pos.push_back(make_pair(7, 7));
			pos.push_back(make_pair(7, 9));
		}
		setTen();
	}

	void CachDi()
	{
		cout << "Di 1 o moi nuoc, neu chua qua song, chi co the di thang. Khi da vuot song thi co the di ngang hoac doc 1 o moi nuoc." << endl;
	}
};
