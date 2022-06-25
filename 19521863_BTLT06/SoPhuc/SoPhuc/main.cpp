#include "SP.h"
#include <iostream>
using namespace std;
int main()
{
	SP sp1, sp2;
	//sp1.Nhap();
	//sp2.Nhap();

	/*SP x1, x2, x3, x4, x5, A1, A;
	float mod1 = sp1.Module();
	float mod2 = sp2.Module();

	if (mod1 == 0 || mod2 == 0)
	{
		cout << "ERROR";
		return 0;
	}
	x1 = sp1.Cong(sp2);
	x2 = sp1.Nhan(2,0);
	x3 = sp2.Tru(x2);
	x4 = sp2.Nhan(4, 0);
	x5 = sp1.Tru(x4);
	A1 = x1.Nhan(x3);
	A = A1.Chia(x5);
	/*cout << "So phuc thu nhat la : ";
	sp1.Xuat();
	cout << endl;
	cout << "So phuc thu hai la : ";
	sp2.Xuat();
	cout << endl;
	cout << "Ket qua bieu thuc A la ";
	A.Xuat();*/

	int x, Lenh;
	SP KetQua;
	//PP: phuc & phuc, PI: phuc & nguyen, IP: nguyen & phuc
	cout << "Hay nhap ma lenh tu 0 den 3 de thuc hien yeu cau, voi:" << endl;
	cout << "0: Cong 2 so phuc." << endl;
	cout << "1: Cong phuc voi nguyen." << endl;
	cout << "2: Hieu 2 so phuc." << endl;
	cout << "3: Hieu phuc voi nguyen." << endl;
	cout << "Hoac nhap mot so khong nam trong khoang tu 0 - 3 de thoat.\n";
	do
	{
		
		cout << "\nLenh cua ban la: ";
		cin >> Lenh;
		if (Lenh == 0)
		{
			cout << "\nNhap 2 so phuc ban muon cong: ";
			sp1.Nhap();
			sp2.Nhap();
			KetQua = sp1 + sp2;
			cout << "Tong 2 so phuc la: ";
			KetQua.Xuat();
		}

		if (Lenh == 1)
		{
			cout << "\nNhap so phuc: ";
			sp1.Nhap();
			cout << "Nhap so nguyen ban muon cong: ";
			cin >> x;
			KetQua = sp1 + x;
			cout << "Tong la: ";
			KetQua.Xuat();
		}

		if (Lenh == 2)
		{
			cout << "\nNhap 2 so phuc: ";
			sp1.Nhap();
			sp2.Nhap();
			KetQua = sp1 - sp2;
			cout << "Hieu 2 so phuc tren la: ";
			KetQua.Xuat();
		}

		if (Lenh == 3)
		{
			cout << "\nNhap so phuc: ";
			sp1.Nhap();
			cout << "Nhap so nguyen: ";
			cin >> x;
			cout << "Ban muon tru so phuc cho so nguyen hay nguoc lai ? (Phuc - Nguyen : PN, Nguyen - Phuc : NP)" << endl;
			string sAnswer;
			cin >> sAnswer;
			if (sAnswer == "PN")
			{
				KetQua = sp1 - x;
				cout << "Hieu so phuc va so nguyen la: ";
			}
			else
			{
				KetQua = x - sp1;
				cout << "Hieu so nguyen va so phuc la: ";
			}
			KetQua.Xuat();
		}
		
	} while (Lenh >= 0 && Lenh <= 3);
	/*
	if (sp2 >= sp1)// kiem tra module cua sp2 co lon hon hoac bang sp1 hay khong
	{
		cout << "TRUE";
	}
	else
	{
		cout << "FALSE";
	}*/
	system("pause");
	return 0;
}