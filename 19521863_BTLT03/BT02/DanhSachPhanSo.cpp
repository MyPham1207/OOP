#include "DanhSachPhanSo.h"
#include <iostream>
using namespace std;

void DanhSachPhanSo::Nhap()
{
	cout << "Nhap so phan so : ";
	cin >> n;
	cout << "====================================================================\n";
	arr = new PhanSo[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu " << i + 1 << ": \n";
		arr[i].Nhap();
		cout << "====================================================================\n";
	}
}

void DanhSachPhanSo::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		cout << "Phan so thu " << i + 1 << " la: \n";
		arr[i].Xuat();
		cout << "\n====================================================================\n";
	}
}