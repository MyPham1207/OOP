#pragma once
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
class DaThuc
{
private:
	float* fHeSo;
	int iBac;
	int iPhanTu;
public:
	void Nhap();
	void Xuat();
	DaThuc operator+(DaThuc Another);
	DaThuc operator-(DaThuc Another);
	bool operator!=(DaThuc Another);
	friend float Value_At_X(DaThuc A, float x);
};

