#pragma once
#include "TreEm.h"
class Nguoi;
class QuanLy
{
private:
	int n;
	Nguoi** list;
public:
	//friend class Nguoi;
	void Nhap()
	{
		int type;
		cin >> n;
		list = new Nguoi*[n];
		for (int i = 0; i < n; i++)
		{
			cin >> type;
			switch (type)
			{
			case 0:
			{
				list[i] = new TreEm();
				((TreEm*)list[i])->Nhap();
				break;
			}
			case 1:
			{
				list[i] = new Nguoi();
				((Nguoi*)list[i])->Nhap();
				break;
			}
			}
		}
	}
};