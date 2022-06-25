#pragma once
#include "SkinCare.h"

class ChongNang :public SkinCare
{
public:
	ChongNang()
	{
		sCongDung = "Su dung kem chong nang de bao ve lan da truoc anh nang mat troi";
		iThoiGian = 30;
		iGia = 50000;
		iThuTu = 7;
	}

	~ChongNang()
	{}

	void setChon()
	{
		cout << "Ban co muon chon buoc cham soc va duong da nay khong ? (0: Khong chon, 1: Chon) ";
		cin >> iChon;
	}
};
