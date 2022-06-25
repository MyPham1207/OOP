#include "PhanSo.h"
#include <iostream>


/*PhanSo::PhanSo()
{
	iTuSo = 1;
	iMauSo = 1;
}

PhanSo::PhanSo(int newTuSo)
{
	iTuSo = newTuSo;
	iMauSo = 1;
}

PhanSo::PhanSo(int newTuSo, int newMauSo)
{
	iTuSo = newTuSo;
	iMauSo = newMauSo;
}*/

PhanSo::PhanSo(PhanSo& PS)
{
	iTuSo = PS.iTuSo;
	iMauSo = PS.iMauSo;
}