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
		iDichVu = 0;
		iThangSuDung = 0;
		iPhiCoBan = 0;
		iHoTroPT = 0;
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
		cout << "Nhap phi co ban cua dich vu : ";
		cin >> iPhiCoBan;
		cout << "Nhap phi ho tro phong tap : ";
		cin >> iHoTroPT;
	}

	virtual int getTongTienDaChi()
	{
		return 0;
	}

	void setDichVu(int iChoice)
	{
		iDichVu = iChoice;
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
		//cout << "So tien da chi : " << getTongTienDaChi() << endl;
		//cout << "===========================================================================" << endl;
	}
};