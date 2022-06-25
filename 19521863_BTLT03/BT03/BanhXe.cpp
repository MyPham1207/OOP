#include "BanhXe.h"


void BanhXe::Nhap()
{
	cout << "Nhap chat lieu cua banh xe : ";
	cin.ignore(1);
	getline(cin, strChatLieu);
	//cout << "-------------------------------------------------------------------------------\n";
	cout << "Nhap xuat xu : ";
	getline(cin, strXuatXu);
	//cout << "-------------------------------------------------------------------------------\n";
	cout << "Nhap nam san xuat : ";
	cin >> iNamSanXuat;
	//cout << "-------------------------------------------------------------------------------\n";
	cout << "Nhap trang thai cua banh xe : ";
	cin.ignore(1);
	getline(cin, strTrangThai);
	cout << "\n========================================================================================================================\n";
}

void BanhXe::Xuat()
{
	//cout << "Thong tin cua banh xe : " << endl;
	cout << "Lam bang " << strChatLieu << ", xuat xu " << strXuatXu << ", san xuat nam " << iNamSanXuat << ", trang thai : " << strTrangThai << endl;
	cout << "\n------------------------------------------------------------------------------------------------------------------------\n";
}
