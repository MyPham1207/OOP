#include "PhanSo.h"
#include <iostream>
using namespace std;

int main()
{
	//Nhap phan so
	PhanSo ps1, ps2, ps3, tong, hieu, tich, thuong, psRutGon;
	// Nhap phan so thu nhat
	cout << "Nhap phan so thu nhat : \n";
	ps1.Nhap();
	cout << "--------------------------------------------------------------------------------\n";
	// Nhap phan so thu 2
	cout << "Nhap phan so thu hai : \n";
	ps2.Nhap();
	cout << "--------------------------------------------------------------------------------\n";
	//Cho biet 2 phan so da nhap
	cout << "Hai phan so vua nhap vao la : ";
	ps1.Xuat();
	cout << " va ";
	ps2.Xuat();
	cout << endl;
	cout << "--------------------------------------------------------------------------------\n";
	// Tinh tong 2 phan so
	tong = ps1.Cong(ps2);
	cout << "Tong cua chung la : ";
	tong.Xuat();
	cout << endl;
	cout << "--------------------------------------------------------------------------------\n";
	// Tinh hieu 2 phan so
	hieu = ps1.Tru(ps2);
	cout << "Hieu cua chung la : ";
	hieu.Xuat();
	cout << endl; 
	cout << "--------------------------------------------------------------------------------\n";
	// Tinh tich 2 phan so
	tich = ps1.Nhan(ps2);
	cout << "Tich cua chung la : ";
	tich.Xuat();
	cout << endl; 
	cout << "--------------------------------------------------------------------------------\n";
	// Tinh thuong 2 phan so
	thuong = ps1.Chia(ps2);
	cout << "Thuong cua chung la : ";
	thuong.Xuat();
	cout << endl;
	cout << "--------------------------------------------------------------------------------\n";
	// Rut gon phan so
	// Nhap phan so thu 3 va cho biet phan so da nhap
	cout << "Nhap phan so dau vao thu 3 : " << endl;
	ps3.Nhap();
	cout << "--------------------------------------------------------------------------------\n";
	cout << "Phan so thu 3 la : ";
	ps3.Xuat();
	cout << endl; 
	cout << "--------------------------------------------------------------------------------\n";
	// Cho biet phan so 3 sau khi da rut gon
	cout << "Phan so ";
	ps3.Xuat();
	cout << " sau khi rut gon la : ";
	ps3.RutGon();
	ps3.Xuat();
	cout << endl;
	cout << "--------------------------------------------------------------------------------\n";
	return 0;
}