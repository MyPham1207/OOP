#pragma once
#include <iostream>
using namespace std;
class SP
{
private:
	float fPhanThuc, fPhanAo;
public :
	void Nhap();
	void Xuat();
	SP()
	{
		fPhanThuc = 0;
		fPhanAo = 0;
	}
	~SP()
	{}
	//SP Cong(SP sp2);
	//xay dung phep cong 2 so phuc (nap chong toan tu +) (friend)
	friend SP operator+(SP sp1, SP sp2);
	//Cong so phuc voi so nguyen theo 2 chieu
	friend SP operator+(SP sp, int x);
	friend SP operator+(int x, SP sp);
	//Mot cach khac de cong 2 so phuc va cong phuc voi nguyen. Vd phuc thi float y != 0, nguyen thi float y == 0
	SP Cong(float x, float y);


	//xay dung phep tru 2 so phuc (nap chong toan tu -) (member)
	SP operator-(SP sp2);
	//xay dung phep tru so phuc cho so nguyen, tuy nhien neu su dung ham thanh vien thi chi co so phuc tru cho so nguyen
	SP operator-(int x);
	//the nen phai xay dung phep tru chieu so nguyen - so phuc = pp ham ban
	friend SP operator-(int x, SP sp);
	SP Tru(float x, float y);


	SP Nhan(SP sp2);
	SP Nhan(float x, float y);
	SP operator*(SP sp2);


	SP Chia(SP sp2);
	SP Chia(float x, float y); 
	SP operator/(SP sp2);


	float Module();


	friend bool operator>=(SP sp1, SP sp2);


	//xay dung phep gan
	SP& operator=(SP sp);


	friend istream& operator>>(istream& is, SP& sp)
	{
		is >> sp.fPhanThuc >> sp.fPhanAo;
		return is;
	}

	friend ostream& operator<<(ostream& os, SP sp)
	{
		if (sp.fPhanThuc != 0)
		{
			if (sp.fPhanAo != 0)
			{
				if (sp.fPhanAo > 0)
				{
					os << sp.fPhanThuc << "+" << sp.fPhanAo << "i" << endl;
				}
				else
				{
					os << sp.fPhanThuc << sp.fPhanAo << "i" << endl;
				}
			}
			else
			{
				os << sp.fPhanThuc << endl;
			}
		}
		else
		{
			if (sp.fPhanAo != 0)
			{
				os << sp.fPhanAo << "i" << endl;
			}
			else
			{
				os << "0+0i" << endl;
			}
		}
		return os;
	}



	SP& operator++()
	{
		this->fPhanThuc += 1;
		this->fPhanAo += 1;
		return *this;
	}

	SP operator++(int)//int : tham so fake, chi de phan biet 2 ham
	{
		SP t = *this;
		this->fPhanThuc += 1;
		this->fPhanAo += 1;
		return t;
	}

};

