#include "PhanSo.h"
#include <iostream>
using namespace std;

void PhanSo::Nhap()
{
	cout << "Nhap tu so : ";
	cin >> iTuSo;
	cout << "Nhap mau so : ";
	do
	{
		cin >> iMauSo;
		if (iMauSo == 0)
		{
			cout << "Mau so khong hop le ! Xin vui long nhap lai ." << endl;
		}
	} while (iMauSo == 0);// Nhap cho den khi mau so khac 0
}

void PhanSo::Xuat()
{
	cout << iTuSo << "/" << iMauSo;
}

int TimUocChung(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

void PhanSo::RutGon()
{
	int iUocChung = TimUocChung(iTuSo, iMauSo);
	iTuSo /= iUocChung;
	iMauSo /= iUocChung;
}

void PhanSo::PSTuongDuong()// Ham nay chu yeu de lam phan so xuat ra dep 1 ti :))) . vd : 2/-1 = -1/2 hoac -1/-2 = 1/2
{
	if (iMauSo < 0)
	{
		iTuSo /= -1;// iTuSo = iTuSo / -1;
		iMauSo /= -1;
	}
}

PhanSo PhanSo::Cong(PhanSo ps2)
{
	PhanSo KetQua;
	KetQua.iMauSo = iMauSo * ps2.iMauSo;
	KetQua.iTuSo = (iTuSo * ps2.iMauSo) + (ps2.iTuSo * iMauSo);
	KetQua.RutGon();
	KetQua.PSTuongDuong();
    return KetQua;
}

PhanSo PhanSo::Tru(PhanSo ps2)
{
	PhanSo KetQua;
	KetQua.iMauSo = iMauSo * ps2.iMauSo;
	KetQua.iTuSo = (iTuSo * ps2.iMauSo) - (ps2.iTuSo * iMauSo);
	KetQua.RutGon();
	KetQua.PSTuongDuong();
	return KetQua;
}

PhanSo PhanSo::Nhan(PhanSo ps2)
{
	PhanSo KetQua;
	KetQua.iMauSo = iMauSo * ps2.iMauSo;
	KetQua.iTuSo = iTuSo * ps2.iTuSo;
	KetQua.RutGon();
	KetQua.PSTuongDuong();
	return KetQua;
}

PhanSo PhanSo::Chia(PhanSo ps2)
{

	PhanSo psNghichDao;
	PhanSo KetQua;
	//Nghich dao ps2 (phan so bi chia)
	psNghichDao.iTuSo = ps2.iMauSo;
	psNghichDao.iMauSo = ps2.iTuSo;
	//Tinh ket qua
	KetQua.iMauSo = iMauSo * psNghichDao.iMauSo;
	KetQua.iTuSo = iTuSo * psNghichDao.iTuSo;
	KetQua.RutGon();
	KetQua.PSTuongDuong();
	return KetQua;

}