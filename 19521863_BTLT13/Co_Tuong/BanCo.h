#pragma once
#include "Tuong.h"
#include "Si.h"
#include "_Tuong.h"
#include "Xe.h"
#include "Ma.h"
#include "Phao.h"
#include "Tot.h"

class BanCo
{
private:
	Co* Quan;
public:
	BanCo()
	{
		Quan = NULL;
	}

	~BanCo()
	{
		delete Quan;
	}

	void Nhap()
	{
		int iLoai = 0;
		cout << "Nhap loai quan co (1: Tuong, 2: Si, 3: Tuong(co dau nang), 4: Ma, 5: Xe, 6: Phao, 7: Tot): ";
		cin >> iLoai;
		if (iLoai == 1)
		{
			Quan = new Tuong;
		}
		else if (iLoai == 2)
		{
			Quan = new Si;
		}
		else if (iLoai == 3)
		{
			Quan = new _Tuong;
		}
		else if (iLoai == 4)
		{
			Quan = new Ma;
		}
		else if (iLoai == 5)
		{
			Quan = new Xe;
		}
		else if (iLoai == 6)
		{
			Quan = new Phao;
		}
		else
		{
			Quan = new Tot;
		}
		//Quan->Nhap();
	}

	void XuatCo()
	{
		Nhap();
		Quan->Nhap();
		Quan->ViTriQuan();
	}

	void XuatBanCo()
	{
		int iLoai = 0;
		for (int i = 1; i <= 7; i++)
		{
			iLoai = i;
			if (iLoai == 1)
			{
				Quan = new Tuong;
			}
			else if (iLoai == 2)
			{
				Quan = new Si;
			}
			else if (iLoai == 3)
			{
				Quan = new _Tuong;
			}
			else if (iLoai == 4)
			{
				Quan = new Ma;
			}
			else if (iLoai == 5)
			{
				Quan = new Xe;
			}
			else if (iLoai == 6)
			{
				Quan = new Phao;
			}
			else
			{
				Quan = new Tot;
			}
			Quan->setMau(0);
			Quan->setViTri();
			Quan->ViTriQuan();
		}
		for (int i = 1; i <= 7; i++)
		{
			iLoai = i;
			if (iLoai == 1)
			{
				Quan = new Tuong;
			}
			else if (iLoai == 2)
			{
				Quan = new Si;
			}
			else if (iLoai == 3)
			{
				Quan = new _Tuong;
			}
			else if (iLoai == 4)
			{
				Quan = new Ma;
			}
			else if (iLoai == 5)
			{
				Quan = new Xe;
			}
			else if (iLoai == 6)
			{
				Quan = new Phao;
			}
			else
			{
				Quan = new Tot;
			}
			Quan->setMau(1);
			Quan->setViTri();
			Quan->ViTriQuan();
		}
	}

	void XuatCachDi()
	{
		Nhap();
		Quan->CachDi();
	}
};