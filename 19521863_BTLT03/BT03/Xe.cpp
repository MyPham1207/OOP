#include "Xe.h"

void Xe::Nhap()
{
	
	cout << "Nhap ten xe : ";
	getline(cin, strTenXe);
	//cout << "-------------------------------------------------------------------------------\n";
	cout << "Nhap hang xe : ";
	getline(cin, strHangXe);
	//cout << "-------------------------------------------------------------------------------\n";
	cout << "Nhap loai xe : ";
	getline(cin, strLoaiXe); 
	//cout << "-------------------------------------------------------------------------------\n";
	cout << "Nhap xuat xu xe : ";
	getline(cin, strXuatXu);
	//cout << "-------------------------------------------------------------------------------\n";
	cout << "Nhap nam san xuat xe : ";
	cin >> iNamSanXuat;
	//cout << "-------------------------------------------------------------------------------\n";
	cout << "Nhap so banh xe : ";
	cin >> n;
	cout << "\n========================================================================================================================\n";
	arr = new BanhXe[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nBanh xe thu " << i + 1 << " :\n";
		arr[i].Nhap();
	}
}

void Xe::Xuat()
{
	cout << endl;
	cout << strTenXe << ", hang " << strHangXe << ", loai " << strLoaiXe << ", xuat xu " << strXuatXu << ", san xuat nam " << iNamSanXuat << endl;
	cout << "\n------------------------------------------------------------------------------------------------------------------------\n";
	for (int i = 0; i < n; i++)
	{
		cout << "\nThong tin banh xe thu " << i + 1 << " : ";
		arr[i].Xuat();
	}
	delete[]arr;
}