#pragma once
#include <iostream>
#include <string>
using namespace std;
class QuanLy;
class Nguoi
{
protected:
	string sHoTen;
	int iTuoi;
	string sCMND;
	int loai;
	int iChieuCao;
	int iSoTroChoi;
	int iSoTienTra;
public:
	//friend class QuanLy;
	void Nhap()
	{
		cin.ignore();
		getline(cin, sHoTen);
		cin >> iTuoi;
		if (iTuoi >= 14)
		{
			cin.ignore();
			getline(cin, sCMND);
		}
		if (iTuoi < 16)
		{
			loai = 1;//1:Nguoi lon
		}
		else
		{
			loai = 0;//0: Tre em
		}
		cin >> iChieuCao;
		cin >> iSoTroChoi;
		if (iChieuCao <= 130 && loai == 0)
		{
			iSoTienTra = 50000 * iSoTroChoi;
		}
		else
		{
			iSoTienTra = 100000 * iSoTroChoi;
		}
	}
	void Xuat()
	{
		cout << sHoTen << endl;
		cout << iTuoi << endl;
		if (iTuoi < 14)
		{
			cout << "Chua co cmnd" << endl;
		}
		else
		{
			cout << sCMND << endl;
		}
		if (loai == 1)
		{
			cout << "Nguoi lon" << endl;
		}
		else
		{
			cout << "Tre em" << endl;
		}
		cout << iSoTroChoi << endl;
		cout << iSoTienTra << endl;
	}
};