#include "SP.h"
#include "ComplexList.h"
#include <iostream>
using namespace std;
int main()
{
	SP sp1, sp2;

	int x, Lenh;
	SP KetQua;
	ComplexList Clist;
	//PP: phuc & phuc, PI: phuc & nguyen, IP: nguyen & phuc
	cout << "Hay nhap ma lenh tu 0 den 10 de thuc hien yeu cau, voi:" << endl;
	cout << "0: Cong 2 so phuc." << endl;
	cout << "1: Cong phuc voi nguyen." << endl;
	cout << "2: Hieu 2 so phuc." << endl;
	cout << "3: Hieu phuc voi nguyen." << endl;
	cout << "4: Nhan 2 so phuc." << endl;
	cout << "5: Chia 2 so phuc." << endl;
	cout << "6: Module so phuc." << endl;
	cout << "7: Kiem tra phep gan." << endl;
	cout << "8: Kiem tra ++x." << endl;
	cout << "9: Kiem tra x++." << endl;
	cout << "10: Xuat danh sach so phuc." << endl;
	cout << "Hoac nhap mot so khong nam trong khoang tu 0 - 10 de thoat.\n";
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

		if (Lenh == 4)
		{
			cout << "Nhap 2 so phuc : ";
			cin >> sp1;
			cin >> sp2;
			KetQua = sp1 * sp2;
			cout << "Tich 2 so phuc tren la: ";
			cout << KetQua;
		}

		if (Lenh == 5)
		{
			cout << "Nhap 2 so phuc : ";
			cin >> sp1;
			do
			{
				cin >> sp2;
			} while (sp2.Module() == 0);
			KetQua = sp1 / sp2;
			cout << "Thuong 2 so phuc tren la: ";
			cout << KetQua;
		}

		if (Lenh == 6)
		{
			cout << "Nhap so phuc: ";
			cin >> sp1;
			cout << "Module la: ";
			cout << sp1.Module() << endl;
		}

		if (Lenh == 7)
		{
			cout << "Nhap so phuc: ";
			cin >> sp1;
			KetQua = sp1;
			cout << "So phuc ban vua nhap la: ";
			cout << KetQua;
		}

		if (Lenh == 8)
		{
			cout << "Nhap so phuc: ";
			cin >> sp1;
			cout << "Ket qua cua ++sp1 : " << ++sp1;
			
		}

		if (Lenh == 9)
		{
			cout << "Nhap so phuc: ";
			cin >> sp1;
			cout << "Ket qua cua sp1++ : " << sp1++;
		}

		if (Lenh == 10)
		{
			cin >> Clist;
			cout << "Danh sach so phuc vua nhap la: \n";
			cout << Clist;
		}

	} while (Lenh >= 0 && Lenh <= 10);
	system("pause");
	return 0;
}