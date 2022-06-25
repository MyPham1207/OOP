#pragma once

class Vector;
class Matrix
{
private:
	int iHang, iCot;
	float** matran;
public:
	void Nhap();
	void Xuat();
	//Matrix();
	/*Matrix(Matrix& mt);*/
	~Matrix()
	{}
	/*int getSoHang();
	int getSoCot();
	void setSoHang(int newHang);
	void setSoCot(int newCot);*/

	friend class Vector;
	friend void Cong(Matrix Mt, Vector vt);
	friend void Nhan(Vector Vt, Matrix Mt);

	void Congv2(Vector Vt);
};