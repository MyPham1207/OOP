#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int iNgay;
	int iThang;
	int iNam;
public:
	/*Date();
	Date(int Ngay);
	Date(int Ngay, int Thang);
	Date(int Ngay, int Thang, int Nam);*/
	//Date(int Ngay = 0, int Thang = 0, int Nam = 0);
	Date(Date& d)
	{
		iNgay = d.iNgay;
		iThang = d.iThang;
		iNam = d.iNam;
	}
	void Nhap()
	{
		cin >> iNgay >> iThang >> iNam;
	}
	void Xuat()
	{
		cout << iNgay << "/" << iThang << "/" << iNam;
	}
};
/*Date::Date()
{
	iNgay = 0;
	iThang = 0;
	iNam = 0;
}
Date::Date(int Ngay)
{
	iNgay = Ngay;
	iThang = 0;
	iNam = 0;
}
Date::Date(int Ngay, int Thang)
{
	iNgay = Ngay;
	iThang = Thang;
	iNam = 0;
}
Date::Date(int Ngay, int Thang, int Nam)
{
	iNgay = Ngay;
	iThang = Thang;
	iNam = Nam;
}*/