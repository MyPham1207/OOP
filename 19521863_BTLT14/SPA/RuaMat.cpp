#pragma once
#include "SkinCare.h"

class RuaMat :public SkinCare
{
public:
	RuaMat()
	{
		sCongDung = "Su dung cac loai sua rua mat de lam sach da mat";
		iThoiGian = 10;
		iGia = 50000;
		iChon = 1;
		iThuTu = 2;
	}

	~RuaMat()
	{}

	void setChon()
	{
		iChon = 1;
	}
};