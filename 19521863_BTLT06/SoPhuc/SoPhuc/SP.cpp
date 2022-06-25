#include "SP.h"
#include <iostream>
#include <math.h>
using namespace std;

void SP::Nhap()
{
	//cout << "Nhap phan thuc : ";
	cin >> fPhanThuc;
	//cout << "Nhap phan ao : ";
	cin >> fPhanAo;
}

void SP::Xuat()
{
	if (fPhanThuc != 0)
	{
		if (fPhanAo != 0)
		{
			if (fPhanAo > 0)
			{
				cout << fPhanThuc << "+" << fPhanAo << "i" << endl;
			}
			else
			{
				cout << fPhanThuc << fPhanAo << "i" << endl;
			}
		}
		else
		{
			cout << fPhanThuc << endl;
		}
	}
	else
	{
		if (fPhanAo != 0)
		{
				cout << fPhanAo << "i" << endl;
		}
		else
		{
			cout << "0+0i" << endl;
		}
	}
}

/*SP SP::Cong(SP sp2)
{
	SP tong;
	tong.fPhanThuc = fPhanThuc + sp2.fPhanThuc;
	tong.fPhanAo = fPhanAo + sp2.fPhanAo;
	return tong;
}*/

SP operator+(SP sp1, SP sp2)
{
	SP tong;
	tong.fPhanThuc = sp1.fPhanThuc + sp2.fPhanThuc;
	tong.fPhanAo = sp1.fPhanAo + sp2.fPhanAo;
	return tong;
}

SP SP::Cong(float x, float y)
{
	SP tong;
	tong.fPhanThuc = fPhanThuc + x;
	tong.fPhanAo = fPhanAo + y;
	return tong;
}


SP SP::operator-(SP sp2)
{
	SP hieu;
	hieu.fPhanThuc = fPhanThuc - sp2.fPhanThuc;
	hieu.fPhanAo = fPhanAo - sp2.fPhanAo;
	return hieu;
}

SP SP::Tru(float x, float y)
{
	SP hieu;
	hieu.fPhanThuc = fPhanThuc - x;
	hieu.fPhanAo = fPhanAo - y;
	return hieu;
}

SP SP::Nhan(SP sp2)
{
	SP tich;
	tich.fPhanThuc = fPhanThuc * sp2.fPhanThuc - fPhanAo * sp2.fPhanAo;
	tich.fPhanAo = fPhanThuc * sp2.fPhanAo + fPhanAo * sp2.fPhanThuc;
	return tich;
}

SP SP::Nhan(float x, float y)
{
	SP tich;
	tich.fPhanThuc = fPhanThuc * x - fPhanAo * y;
	tich.fPhanAo = fPhanThuc * y + fPhanAo * x;
	return tich;
}

SP SP::Chia(SP sp2)
{
	SP thuong;
	thuong.fPhanThuc = (fPhanThuc * sp2.fPhanThuc + fPhanAo * sp2.fPhanAo) / (pow(sp2.fPhanThuc, 2) + pow(sp2.fPhanAo, 2));
	thuong,fPhanAo = (fPhanAo*sp2.fPhanThuc - fPhanThuc*sp2.fPhanAo)/ (pow(sp2.fPhanThuc, 2) + pow(sp2.fPhanAo, 2));
	return thuong;
}

SP SP::Chia(float x, float y)
{
	SP thuong;
	thuong.fPhanThuc = (fPhanThuc * x + fPhanAo * y) / (pow(x, 2) + pow(y, 2));
	thuong, fPhanAo = (fPhanAo * x - fPhanThuc * y) / (pow(x, 2) + pow(y, 2));
	return thuong;
}

float SP::Module()
{
	float fMod;
	fMod = sqrt(pow(fPhanThuc, 2) + pow(fPhanAo, 2));
	return fMod;
}

bool operator>=(SP sp1, SP sp2)
{
	if (sp1.Module() >= sp2.Module())return true;
	return false;
}

SP operator+(SP sp, int x)
{
	SP tong;
	tong.fPhanThuc = sp.fPhanThuc + (float)x;
	tong.fPhanAo = sp.fPhanAo;
	return tong;
}

SP operator+(int x, SP sp)
{
	SP tong;
	tong.fPhanThuc = sp.fPhanThuc + (float)x;
	tong.fPhanAo = sp.fPhanAo;
	return tong;
}

SP SP::operator-(int x)
{
	SP hieu;
	hieu.fPhanThuc = fPhanThuc - (float)x;
	hieu.fPhanAo = fPhanAo;
	return hieu;
}

SP operator-(int x, SP sp)
{
	SP hieu;
	hieu.fPhanThuc = (float)x - sp.fPhanThuc;
	hieu.fPhanAo = 0 - sp.fPhanAo;
	return hieu;
}