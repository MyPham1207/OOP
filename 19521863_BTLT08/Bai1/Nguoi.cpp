#include "Nguoi.h"
void Nguoi::Nhap()
{
	cin >> tuoi;
	cin.ignore();
	getline(cin, hoten);
}

void Nguoi::Xuat()
{
	cout << hoten << endl;
	cout << tuoi << endl;
}