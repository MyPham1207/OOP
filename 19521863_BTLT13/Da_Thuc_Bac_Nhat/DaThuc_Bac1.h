#pragma once
#include <iostream>
using namespace std;

class DaThucBacNhat
{
private:
	float fHeSo1, fHeSo2;
public:
	DaThucBacNhat()
	{
		fHeSo1 = fHeSo2 = 0;
	}

	~DaThucBacNhat(){}


	friend istream& operator>>(istream& is, DaThucBacNhat& dathuc)
	{
		is >> dathuc.fHeSo1 >> dathuc.fHeSo2;
		return is;
	}

	void Gia_Tri_Tai_X(float x)
	{
		cout << fHeSo1 * x + fHeSo2;
	}

	void Tim_Nghiem()
	{
		cout << -fHeSo2 / fHeSo1;
	}

	DaThucBacNhat operator+(DaThucBacNhat Thu2)
	{
		DaThucBacNhat result;
		result.fHeSo1 = fHeSo1 + Thu2.fHeSo1;
		result.fHeSo2 = fHeSo2 + Thu2.fHeSo2;
		return result;
	}

	friend ostream& operator<<(ostream& os, DaThucBacNhat dathuc)
	{
		if (dathuc.fHeSo1 != 0)
		{
			cout << dathuc.fHeSo1 << "x";
		}
		if (dathuc.fHeSo2 > 0)
		{
			cout << " + ";
			cout << dathuc.fHeSo2;
		}
		else if(dathuc.fHeSo2 < 0)
		{
			cout << " - ";
			cout << -dathuc.fHeSo2;
		}
		if (dathuc.fHeSo1 == 0 && dathuc.fHeSo2 == 0)
		{
			cout << "0";
		}
		return os;
	}
};