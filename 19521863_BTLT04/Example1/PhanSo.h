#pragma once
class PhanSo
{
private:
	int iTuSo;
	int iMauSo;
public:
	//PhanSo();//Neu da khai bao 2 ham duoi thi neu ben main.cpp, khai bao PhanSo a; se bi loi
	//PhanSo(int newTuSo);
	//PhanSo(int newTuSo, int newMauSo);
	//Khai bao ham co tham so mac nhien thi no bao gom ca 3 ham tren nen khong can 3 ham tren nua
	PhanSo(int newTuSo = 1, int newMauSo = 1);
	PhanSo(PhanSo& PS);
	~PhanSo()//Phuong thuc huy
	{}
};