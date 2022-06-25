#pragma once
#include <iostream>
#include <string>
#include "Date.h"


class GiaoVien
{
private:
	std::string sHoTen;
	std::string sMSGV;
	//Date DateOfBirth;
	int iNamSinh;
	int iAge;
	int iNamCongTac;
public:
	//Ham khoi tao
	GiaoVien();
	GiaoVien(std::string TenKhac);
	GiaoVien(std::string TenKhac, std::string newMSGV);
	GiaoVien(std::string TenKhac, std::string newMSGV, int trueNamSinh);
	GiaoVien(std::string TenKhac, std::string newMSGV, int trueNamSinh, int trueAge);
	GiaoVien(std::string TenKhac, std::string newMSGV, int trueNamSinh, int trueAge, int trueNamCongTac);

	//Ham thiet lap sao chep
	GiaoVien(GiaoVien& GV);

	//Ham huy
	~GiaoVien()
	{}

	//Ham truy van
	string getHoTen();
	string getMSGV();
	//Date getDOB();
	int getNamSinh();
	int getAge();
	int getNamCongTac();

	//Ham truy van (co tinh dung sai)
	bool NamSinh(int NamSinh);
	bool Young();
	bool LauNam();

	//Ham cap nhat
	void setHoTen(std::string newName);
	void setMSGV(std::string newMSGV);
	//void setDOB(Date newDOB);
	void setNamSinh(int altNamSinh);
	void setAge(int newAge);
	void setNamCongTac(int newNamCongTac);

	//Ham nhap xuat
	void Nhap();
	void Xuat();

};