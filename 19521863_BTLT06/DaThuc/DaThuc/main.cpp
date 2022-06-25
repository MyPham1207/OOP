#include "DaThuc.h"
#include <iostream>
using namespace std;
int main()
{
	DaThuc A, B, C, D, E, F, Tong, Hieu, DT;
	A.Nhap();
	B.Nhap();
	Tong = A + B;
	cout << "Tong cua 2 da thuc tren la: ";
	Tong.Xuat();

	C.Nhap();
	D.Nhap();
	Hieu = C - D;
	cout << "Hieu cua 2 da thuc tren la: ";
	Hieu.Xuat();

	E.Nhap();
	F.Nhap();
	cout << "Hai da thuc tren co giong nhau hay khong ? ";
	if (E != F)
	{
		cout << "Khac!" << endl;
	}
	else
	{
		cout << "Giong!" << endl;
	}

	DT.Nhap();
	DT.Xuat();
	float x, Value;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Gia tri da thuc tai x = " << x << " la: ";
	Value = Value_At_X(DT, x);
	cout << Value << endl;
	system("pause");
	return 0;
}