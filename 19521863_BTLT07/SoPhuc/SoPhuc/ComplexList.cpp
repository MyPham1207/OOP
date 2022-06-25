#include "ComplexList.h"
#include "SP.h"
void ComplexList::Nhap()
{
	cin >> iPhanTu;
	list = new SP[iPhanTu];
	for (int i = 0; i < iPhanTu; i++)
	{
		cin >> list[i];
	}
}

void ComplexList::Xuat()
{
	for (int i = 0; i < iPhanTu; i++)
	{
		cout << list[i] << endl;
	}
}