#pragma once
class SP
{
private :
	float fPhanThuc, fPhanAo;
public :
	void Nhap();
	void Xuat();
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
	SP Chia(SP sp2);
	SP Chia(float x, float y); 
	float Module();
	friend bool operator>=(SP sp1, SP sp2);
};

