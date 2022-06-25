#pragma once
#include "Kim.h"
#include "Thuy.h"
#include "Moc.h"
#include "Hoa.h"
#include "Tho.h"

class DSNguoiChoi
{
private:
	int iSoNguoiChoi;
	NguoiChoi** list;
public:
	DSNguoiChoi()
	{
		iSoNguoiChoi = 1;
		list = new NguoiChoi*;
		list[0] = NULL;
	}

	~DSNguoiChoi(){}

	void Nhap()
	{
		cout << "Nhap so luong nguoi choi: ";
		cin >> iSoNguoiChoi;
		list = new NguoiChoi * [iSoNguoiChoi];
		int iFlag = 0;
		for (int i = 0; i < iSoNguoiChoi; i++)
		{
			cout << "===========================================================================" << endl;
			cout << "Nhap thong tin nguoi choi thu " << i + 1 << ":" << endl;
			cout << "- Nhap he: " << endl;
			cout << "1. Kim\t\t2. Thuy\t\t3. Moc\t\t4. Hoa\t\t5. Tho" << endl;
			cin >> iFlag;
			if (iFlag == 1)
			{
				list[i] = new Kim();
				list[i]->Nhap();
				//list[i]->setSatThuong();
			}
			else if (iFlag == 2)
			{
				list[i] = new Thuy();
				list[i]->Nhap();
				//list[i]->setSatThuong();
			}
			else if (iFlag == 3)
			{
				list[i] = new Moc();
				list[i]->Nhap();
				//list[i]->setSatThuong();
			}
			else if (iFlag == 4)
			{
				list[i] = new Hoa();
				list[i]->Nhap();
				//list[i]->setSatThuong();
			}
			else if (iFlag == 5)
			{
				list[i] = new Tho();
				list[i]->Nhap();
				//list[i]->setSatThuong();
			}
		}
	}

	void Xuat()
	{
		for (int i = 0; i < iSoNguoiChoi; i++)
		{
			list[i]->Xuat();
		}
	}
};