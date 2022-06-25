#pragma once
class PhanSo
{
private:
	int iTuSo, iMauSo;
public:
	void Nhap();
	void Xuat();
	PhanSo Cong(PhanSo ps2);
	PhanSo Tru(PhanSo ps2);
	PhanSo Nhan(PhanSo ps2);
	PhanSo Chia(PhanSo ps2);
	void RutGon();
	void PSTuongDuong();
};

