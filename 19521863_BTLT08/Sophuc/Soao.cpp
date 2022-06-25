#include "Soao.h"

void Soao::Nhap()
{
	cin >> fPhanAo;
}

void Soao::Xuat()
{
	SP::Xuat();
}

Soao Soao::Cong(Soao x)
{
	Soao result;
	result.fPhanAo = fPhanAo + x.fPhanAo;
	return result;
}