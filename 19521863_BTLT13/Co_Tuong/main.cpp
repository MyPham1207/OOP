#include "BanCo.h"

int main()
{
	BanCo banco;
	int iLuaChon1, iLuaChon2;
	cout << "Chon hanh dong ma ban muon thuc hien: " << endl;
	cout << "1. Xuat vi tri cua 1 quan co." << endl;
	cout << "2. Xuat cach di cua 1 quan co." << endl;
	cout << "3. Xuat ban co." << endl;
	cout << "==============================================================================================================" << endl;
	do
	{
		
		cout << "Lua chon cua ban la: ";
		cin >> iLuaChon1;
		if (iLuaChon1 == 1)
		{
			banco.XuatCo();
		}
		else if(iLuaChon1 == 2)
		{
			banco.XuatCachDi();
		}
		else
		{
			banco.XuatBanCo();
		}
		cout << "==============================================================================================================" << endl;
		cout << "Ban co muon thuc hien tiep chuong trinh khong ? (1: Co, 2: Khong) ";
		cin >> iLuaChon2;
	} while (iLuaChon2 == 1);
	system("pause");
	return 0;
}