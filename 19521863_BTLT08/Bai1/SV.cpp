#include "SV.h"

void SV::Nhap()
{
	//lam ky
	//cin >> Nguoi::tuoi;//them lop nguoi de phan biet trong truong hop lop sv co cung bien tuoi
	//Goi lai ham nhap ben lop nguoi(nen de ten lop cha)
	Nguoi::Nhap();
	getline(cin, mssv);
}

void SV::Xuat()
{
	Nguoi::Xuat();
	cout << mssv << endl;
}