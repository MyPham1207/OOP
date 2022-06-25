#pragma once
#include <iostream>
using namespace std;
#include "Polygon.h"
class Point
{
private:
	float x, y;
public:
	void Nhap()
	{
		cin >> x >> y;
	}
	void Xuat()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
	friend class Polygon;
};

