#pragma once
#include <string>
#include "BanhXe.h"
using namespace std;

class Xe
{
private:
	string strTenXe;
	string strHangXe;
	string strLoaiXe;
	string strXuatXu;
	int iNamSanXuat;
	int n;
	BanhXe* arr;
public:
	void Nhap();
	void Xuat();
};

