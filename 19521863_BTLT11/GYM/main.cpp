#include "CustomerManage.h"

int main()
{
	CustomerList list;
	list.Nhap();
	cout << "===========================================================================" << endl;
	list.Xuat();
	list.MaxChi();
	system("pause");
	return 0;
}