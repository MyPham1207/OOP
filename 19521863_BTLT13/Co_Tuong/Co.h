#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef pair<int, int> ViTri;

class Co
{
protected:
	string sTen;
	vector<ViTri>pos;
	int iMau;
public:
	Co()
	{
		sTen = "";
		iMau = 0;
	}


	~Co(){}

	virtual void Nhap()
	{
		cout << "Nhap mau quan co (0: Trang, 1: Den): ";
		cin >> iMau;
	}

	void setMau(int Mau)
	{
		iMau = Mau;
	}

	virtual void CachDi() = 0;

	virtual void setViTri() = 0;

	void setTen()
	{
		if (iMau == 0)
		{
			sTen += " trang";
		}
		else
		{
			sTen += " den";
		}
	}

	void ViTriQuan()
	{
		vector<ViTri>::iterator iter; // Khai bao con tro de duyet
		cout << sTen << ": ";
		for (iter = pos.begin(); iter != pos.end(); iter++) 
		{
			cout << "(" << iter->first << ", " << iter->second << ") ";
		}
		cout << endl;
	}

};