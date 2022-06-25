#pragma once
#include "Co.h"

class _Tuong :public Co
{
public:
	_Tuong()
	{
		sTen = "Tuong(co dau nang)";
	}

	~_Tuong() {}


	void Nhap()
	{
		Co::Nhap();
		setViTri();
	}
	void setViTri()
	{
		if (iMau == 0)
		{
			pos.push_back(make_pair(1, 3));
			pos.push_back(make_pair(1, 7));
		}
		else if (iMau == 1)
		{
			pos.push_back(make_pair(10, 3));
			pos.push_back(make_pair(10, 7));
		}
		setTen();
	}

	void CachDi()
	{
		cout << "Di cheo 2 o moi nuoc, khong duoc phep sang nua ben kia cua ban co cua doi phuong. Nuoc di se khong hop le khi co mot quan chan giua duong di." << endl;
	}
};