#include "Polygon.h"

void Polygon::Nhap(int dinh)
{
	n = dinh;
	p = new Point[n];
	for (int i = 0; i < n; i++)
	{
		p[i].Nhap();
	}
}

void Polygon::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		p[i].Xuat();
	}
}