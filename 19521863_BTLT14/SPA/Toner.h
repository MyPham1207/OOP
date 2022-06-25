#pragma once
#include "SkinCare.h"

class Toner :public SkinCare
{
public:
	Toner()
	{
		sCongDung = "Su dung toner de cap am va se nho chan long";
		iThoiGian = 10;
		iGia = 50000;
		iThuTu = 4;
	}

	~Toner()
	{}

	void setChon()
	{
		cout << "Ban co muon chon buoc cham soc va duong da nay khong ? (0: Khong chon, 1: Chon) ";
		cin >> iChon;
	}
};
