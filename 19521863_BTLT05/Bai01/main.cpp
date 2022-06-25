#include "Vector.h"
#include "Matrix.h"
#include <iostream>
using namespace std;

void Cong(Matrix Mt, Vector Vt)//Ham công vector va ma tran
{

	if (Mt.iHang != 1 || Mt.iCot != Vt.n)
	{
		cout << "Dimension ERROR";
	}
	else
	{
		for (int i = 0; i < Vt.n; i++)
		{
			cout << Mt.matran[0][i] + Vt.vt[i] << " ";
		}
	}
}

void Nhan(Vector Vt, Matrix Mt)
{
	float tam;
	if (Mt.iHang != Vt.n)
	{
		cout << "Dimension ERROR";
	}
	else
	{
		for (int i = 0; i < Mt.iCot; i++)
		{
			tam = 0;
			for (int j = 0; j < Vt.n; j++)
			{
				tam = tam + Vt.vt[j] * Mt.matran[j][i];
				//cout << "i = " << i << ", j = " << j << ":" << tam << endl;
			}
			cout << tam << " ";
		}
	}
}
int main()
{
	Matrix mt;
	mt.Nhap();
	mt.Xuat();
	Vector vt;
	vt.Nhap();
	vt.Xuat();

	cout << endl << "Tong cua ma tran va vector theo phuong phap ham ban :\n";
	Cong(mt, vt);
	cout << endl << "Tong cua ma tran va vector theo phuong phap lop ban :\n";
	mt.Congv2(vt);

	cout << "\nTich cua ma tran va vector theo phuong phap ham ban : \n";
	Nhan(vt, mt);
	cout << "\nTich cua ma tran va vector theo phuong phap lop ban : \n";
	vt.Nhanv2(mt);
	return 0;
}