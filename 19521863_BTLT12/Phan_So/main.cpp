#include "PhanSo.h"

int TimUocChung(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	PhanSo a, b;
	cin >> a >> b;
	cout << a + b << endl << a - b;
	system("pause");
	return 0;
}