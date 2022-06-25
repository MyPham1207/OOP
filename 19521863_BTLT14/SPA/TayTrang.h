#pragma once
#include "SkinCare.h"

class TayTrang :public SkinCare
{
public:
	TayTrang()
	{
		sCongDung = "Su dung oliu tinh khiet de tay di cac lop trang diem";
		iThoiGian = 5;
		iGia = 30000;
		iChon = 1;
		iThuTu = 1;
	}

	~TayTrang()
	{}

	void setChon()
	{
		iChon = 1;
	}
};