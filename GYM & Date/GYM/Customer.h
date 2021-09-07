#pragma once
#include <iostream>
#include <string>
using namespace std;

class Customer
{
protected:
	string sHoTen;
	string sCMND;
	int iDichVu;
	int iThangSuDung;
	int iPhiCoBan;
	int iHoTroPT;
	int iTienDaChi;
public:
	Customer()
	{
		sHoTen = "";
		sCMND = "";
		iThangSuDung = 0;
		iTienDaChi = 0;
	}

	~Customer(){}

	virtual void Nhap()
	{
		cin.ignore();
		cout << "Nhap ho va ten khach hang : ";
		getline(cin, sHoTen);
		cout << "Nhap CMND : ";
		getline(cin, sCMND);
		cout << "Nhap so thang dung dich vu : ";
		cin >> iThangSuDung;
	}

	virtual int getTongTienDaChi()
	{
		return 0;
	}

	virtual void Xuat()
	{
		cout << "Ten khach hang : " << sHoTen << endl;
		cout << "CMND : " << sCMND << endl;
		cout << "Loai dich vu : ";
		if (iDichVu == 1)
		{
			cout << "Premium" << endl;
		}
		else if (iDichVu == 2)
		{
			cout << "Basic" << endl;
		}
		else
		{
			cout << "Non-member" << endl;
		}
		cout << "Thoi gian dang ky su dung dich vu : " << iThangSuDung << endl;
	}
};