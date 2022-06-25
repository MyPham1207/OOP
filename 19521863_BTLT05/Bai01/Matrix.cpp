#include "Matrix.h"
#include "Vector.h"
#include <iostream>
using namespace std;

void Matrix::Nhap()
{
	cout << "Nhap so hang : ";
	cin >> iHang;
	cout << "Nhap so cot : ";
	cin >> iCot;
	matran = new float*[iHang];
	
	for (int i = 0; i < iHang; i++)
	{
		matran[i] = new float[iCot];
		
	}
	for (int j = 0; j < iHang; j++)
	{
		for (int k = 0; k < iCot; k++)
		{
			cin >> matran[j][k];
		}
	}
}

void Matrix::Xuat()
{
	cout << "Ma tran vua nhap la : \n";
	for (int i = 0; i < iHang * iCot; i++)
	{
		cout << matran[i / iCot][i % iCot] << " ";
		if (i % iCot == iCot - 1)
		{
			cout << endl;
		}
	}
}

/*Matrix::Matrix()
{
	iHang = 1;
	iCot = 1;
	matran[iHang-1][iCot-1] = 0;
}*/
/*
Matrix::Matrix(Matrix& AnotherMt)
{
	iHang = AnotherMt.iHang;
	iCot = AnotherMt.iCot;
	for (int j = 0; j < iHang; j++)
	{
		for (int k = 0; k < iCot; k++)
		{
			matran[j][k] = AnotherMt.matran[j][k];
		}
	}
}*/

void Matrix::Congv2(Vector Vt)
{

	if (iHang != 1 || iCot != Vt.n)
	{
		cout << "Dimension ERROR";
	}
	else
	{
		for (int i = 0; i < Vt.n; i++)
		{
			cout << matran[0][i] + Vt.vt[i] << " ";
		}
	}
}