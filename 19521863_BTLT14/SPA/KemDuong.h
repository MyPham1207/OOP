#pragma once
#include "SkinCare.h"

class KemDuong :public SkinCare
{
public:
	KemDuong()
	{
		sCongDung = "Su dung cac loai kem duong de cung cap duong chat va khoa am cho da";
		iThoiGian = 10;
		iGia = 50000;
		iThuTu = 6;
	}

	~KemDuong()
	{}

	void setChon()
	{
		cout << "Ban co muon chon buoc cham soc va duong da nay khong ? (0: Khong chon, 1: Chon) ";
		cin >> iChon;
	}
};

