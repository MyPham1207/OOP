#pragma once

class Matrix;
class Vector
{
private:
	int n;//so phan tu trong vector
	float *vt;
public:
	void Nhap();
	void Xuat();

	/*Vector();
	Vector(Vector& AnotherVt);
	~Vector()
	{}*/

	/*int getSoPhanTu();
	void setSoPhanTu(int newn);
	void setPhanTu(Vector newvt);*/

	friend class Matrix;
	friend void setVector();

	friend void Cong(Matrix Mt, Vector Vt);
	friend void Nhan(Vector Vt, Matrix Mt);

	void Nhanv2(Matrix Mt);
};