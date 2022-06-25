#include "PhanSo.h"
#include <iostream>
using namespace std;
int main()
{
	PhanSo a;
	PhanSo b(5);
	PhanSo c(7, 10);
	PhanSo d(c);
	return 0;
}