#include "SP.h"

void SP::Nhap()
{
	cin >> fPhanThuc >> fPhanAo;
}

void SP::Xuat()
{
	if (fPhanThuc != 0)
	{
		if (fPhanAo != 0)
		{
			if (fPhanAo > 0)
			{
				cout << fPhanThuc << "+" << fPhanAo << "i" << endl;
			}
			else
			{
				cout << fPhanThuc << fPhanAo << "i" << endl;
			}
		}
		else
		{
			cout << fPhanThuc << endl;
		}
	}
	else
	{
		if (fPhanAo != 0)
		{
			cout << fPhanAo << "i" << endl;
		}
		else
		{
			cout << "0+0i" << endl;
		}
	}
}