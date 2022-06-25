#pragma once#pragma once
#include "SkinCare.h"

class Serum :public SkinCare
{
public:
	Serum()
	{
		sCongDung = "Su dung cac san pham serum de tang cuong su duong am, chong lao hoa";
		iThoiGian = 10;
		iGia = 50000;
		iThuTu = 5;
	}

	~Serum()
	{}

	void setChon()
	{
		cout << "Ban co muon chon buoc cham soc va duong da nay khong ? (0: Khong chon, 1: Chon) ";
		cin >> iChon;
	}
};
