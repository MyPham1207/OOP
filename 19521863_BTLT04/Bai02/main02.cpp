#include "GiaoVien.h"
using namespace std;


int main()
{
	int n;
	//Nhap danh sach giao vien
	cout << "Nhap so luong giao vien :";
	cin >> n;
	GiaoVien* GVArr = new GiaoVien[n];
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		GVArr[i].Nhap();
	}
	// Xuat danh sach giao vien vua nhap
	for (int j = 0; j < n; j++)
	{
		GVArr[j].Xuat();
	}
	//Thong tin luong giao vien
	int iNCT;
	string iTen;
	for (int k = 0; k < n; k++)
	{
		iNCT = GVArr[k].getNamCongTac();
		iTen = GVArr[k].getHoTen();
		if (iNCT <= 30)
		{
			cout << iTen << endl;
			cout << "Luong : " << 5000000 <<endl;
		}
		else
		{
			cout << iTen << endl;
			cout << "Luong : " << 5000000 * 2 <<endl;
		}
	}
	return 0;
}