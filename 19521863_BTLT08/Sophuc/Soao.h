#pragma once
#include "SP.h"
class Soao:public SP
{
public:
	Soao()
	{
		fPhanThuc = 0;
		fPhanAo = 0;
	}
	void Nhap();
	void Xuat();
	Soao Cong(Soao x);
};

