#pragma once
#include "Co.h"

class Phao :public Co
{
public:
	Phao()
	{
		sTen = "Phao";
	}

	~Phao() {}


	void Nhap()
	{
		Co::Nhap();
		setViTri();
	}

	void setViTri()
	{
		if (iMau == 0)
		{
			pos.push_back(make_pair(3, 2));
			pos.push_back(make_pair(3, 8));
		}
		else if (iMau == 1)
		{
			pos.push_back(make_pair(8, 2));
			pos.push_back(make_pair(8, 8));
		}
		setTen();
	}

	void CachDi()
	{
		cout << "Di ngang va doc giong xe, muon an quan, phao phai nhay qua dúng 1 quan nao do. Khi khong an quan, tat ca nhung diem tu cho di toi cho den phai khong co quan can." << endl;
	}
};
