#include "Vector.h"
#include "Matrix.h"
#include <iostream>
using namespace std;
void Vector::Nhap()
{
	cout << "Nhap so phan tu trong vector : ";
	cin >> n;
	vt = new float[n];
	cout << "Nhap cac phan tu trong vector : ";
	for (int i = 0; i < n; i++)
	{
		cin >> vt[i];
	}
}

void Vector::Xuat()
{
	cout << "Vector vua nhap la : ";
	for (int i = 0; i < n; i++)
	{
		cout << vt[i] << " ";
	}
}

void Vector::Nhanv2(Matrix Mt)
{
	float tam;
	if (Mt.iHang != n)
	{
		cout << "Dimension ERROR";
	}
	else
	{
		for (int i = 0; i < Mt.iCot; i++)
		{
			tam = 0;
			for (int j = 0; j < n; j++)
			{
				tam = tam + vt[j] * Mt.matran[j][i];
				//cout << "i = " << i << ", j = " << j << ":" << tam << endl;
			}
			cout << tam << " ";
		}
	}
}
/*Vector::Vector()
{
	n = 0;

}

Vector::Vector(Vector& AnotherVt)
{
	n = AnotherVt.n;
	for (int i = 0; i < AnotherVt.n; i++)
	{
		vt[i] = AnotherVt.vt[i];
	}
}*/

/*int Vector::getSoPhanTu()
{
	return n;
}

void Vector::setSoPhanTu(int newn)
{
	n = newn;
}

void Vector::setPhanTu(Vector newvt)
{
	for (int i = 0; i < n; i++)
	{
		vt[i] = newvt.vt[i];
	}
}*/

