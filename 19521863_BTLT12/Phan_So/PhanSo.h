#pragma once
#include <iostream>
using namespace std;

int TimUocChung(int a, int b);

class PhanSo
{
private:
	int iTu, iMau;
public:
	PhanSo()
	{
		iTu = iMau = 1;
	}

	~PhanSo(){}

	friend istream& operator>> (istream& is, PhanSo& ps)
	{
		is >> ps.iTu >> ps.iMau;
		return is;
	}

	friend ostream& operator<<(ostream& os, PhanSo ps)
	{
		os << ps.iTu << "/" << ps.iMau;
		return os;
	}


	PhanSo operator+(PhanSo pskhac)
	{
		PhanSo result;
		result.iTu = iTu * pskhac.iMau + pskhac.iTu * iMau;
		result.iMau = iMau * pskhac.iMau;
		int iUocChung = TimUocChung(result.iTu, result.iMau);
		result.iTu = result.iTu / iUocChung;
		result.iMau = result.iMau / iUocChung;
		return result;
	}

	PhanSo operator-(PhanSo pskhac)
	{
		PhanSo result;
		result.iTu = iTu * pskhac.iMau - pskhac.iTu * iMau;
		result.iMau = iMau * pskhac.iMau;
		int iUocChung = TimUocChung(result.iTu, result.iMau);
		result.iTu = result.iTu / iUocChung;
		result.iMau = result.iMau / iUocChung;
		return result;
	}
};