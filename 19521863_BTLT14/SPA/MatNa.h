#pragma once
#include "SkinCare.h"

class MatNa :public SkinCare
{
public:
	MatNa()
	{
		sCongDung = "Su dung loai mat na phu hop loai da ket hop nghe nhac thu gian";
		iThoiGian = 30;
		iGia = 100000;
		iChon = 1;
		iThuTu = 3;
	}

	~MatNa()
	{}

	void setChon()
	{
		iChon = 1;
	}
};