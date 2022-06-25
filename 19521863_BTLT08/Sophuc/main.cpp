#include "Soao.h"

int main()
{
	Soao x, y, result;
	x.Nhap();
	y.Nhap();
	result = x.Cong(y);
	result.Xuat();
	system("pause");
	return 0;
}