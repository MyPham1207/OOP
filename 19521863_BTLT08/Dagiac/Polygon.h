#pragma once
#include "Point.h"
class Point;
class Polygon
{
protected:
	int n;
	Point* p;
public:
	void Nhap(int dinh);
	void Xuat();
	friend class Point;
};

