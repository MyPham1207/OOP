#include "DaThuc_Bac1.h"

void Menu()
{
	cout << "--------+---------Menu---------+------- : " << endl;
	cout << "1. Tinh gia tri da thuc bac nhat tai x." << endl;
	cout << "2. Tim nghiem cua da thuc bac nhat." << endl;
	cout << "3. Cong hai da thuc bac nhat." << endl;
	cout << "0. Ket thuc." << endl;
}

int main()
{
	DaThucBacNhat dathuc1;
	DaThucBacNhat dathuc2;
	int iLuaChon;
	float x;
	Menu();
	do
	{
		cout << "==============================================================================" << endl;
		cout << "Lua chon cua ban la: ";
		cin >> iLuaChon; 
		if (iLuaChon == 1)
		{
			cout << "Nhap cac he so cua da thuc ax+b theo thu tu a truoc b sau: ";
			cin >> dathuc1;
			cout << "Nhap gia tri an x: ";
			cin >> x;
			cout << "Gia tri cua da thuc " << dathuc1 << " tai x=" << x << " la: ";
			dathuc1.Gia_Tri_Tai_X(x);
		}
		else if (iLuaChon == 2)
		{
			cout << "Nhap cac he so cua da thuc ax+b theo thu tu a truoc b sau: ";
			cin >> dathuc1;
			cout << "Nghiem cua da thuc la: ";
			dathuc1.Tim_Nghiem();
		}
		else if (iLuaChon == 3)
		{
			DaThucBacNhat result;
			cout << "Nhap cac he so cua da thuc thu nhat ax+b theo thu tu a truoc b sau: ";
			cin >> dathuc1;
			cout << "Nhap cac he so cua da thuc thu hai ax+b theo thu tu a truoc b sau: ";
			cin >> dathuc2;
			result = dathuc1 + dathuc2;
			cout << "Ket qua sau khi cong hai da thuc la: ";
			cout << result;
		}
		else if (iLuaChon != 0)
		{
			cout << "Moi ban chon lai!";
		}
		cout << endl;
	} while (iLuaChon != 0);
	cout << "Hen gap lai!" << endl;
	system("pause");
	return 0;
}