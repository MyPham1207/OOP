#include "GiaoVien.h"
using namespace std;

GiaoVien::GiaoVien()
{
	sHoTen = "Anomyous";
	sMSGV = "1234567890";
	//Date dob(0, 0, 0);
	iNamSinh = 0;
	iAge = 0;
	iNamCongTac = 0;
}
GiaoVien::GiaoVien(std::string TenKhac)
{
	sHoTen = TenKhac;
	sMSGV = "1234567890";
	// dob(0, 0, 0);
	iNamSinh = 0;
	iAge = 0;
	iNamCongTac = 0;
}
GiaoVien::GiaoVien(std::string TenKhac, std::string newMSGV)
{
	sHoTen = TenKhac;
	sMSGV = newMSGV;
	//Date dob(0, 0, 0);
	iNamSinh = 0;
	iAge = 0;
	iNamCongTac = 0;
}
GiaoVien::GiaoVien(std::string TenKhac, std::string newMSGV, int altNamSinh)
{
	sHoTen = TenKhac;
	sMSGV = newMSGV;
	//Date dob(trueDOB);
	iNamSinh = altNamSinh;
	iAge = 0;
	iNamCongTac = 0;
}
GiaoVien::GiaoVien(std::string TenKhac, std::string newMSGV, int altNamSinh, int trueAge)
{
	sHoTen = TenKhac;
	sMSGV = newMSGV;
	//Date dob(trueDOB);
	iNamSinh = altNamSinh;
	iAge = trueAge;
	iNamCongTac = 0;
}
GiaoVien::GiaoVien(std::string TenKhac, std::string newMSGV, int altNamSinh, int trueAge, int trueNamCongTac)
{
	sHoTen = TenKhac;
	sMSGV = newMSGV;
	//Date dob(trueDOB);
	iNamSinh = altNamSinh;
	iAge = trueAge;
	iNamCongTac = trueNamCongTac;
}

GiaoVien::GiaoVien(GiaoVien& GV)
{
	sHoTen = GV.sHoTen;
	sMSGV = GV.sMSGV;
	//DateOfBirth = GV.DateOfBirth;
	iNamSinh = GV.iNamSinh;
	iAge = GV.iAge;
	iNamCongTac = GV.iNamCongTac;
}

string GiaoVien::getHoTen()
{
	return sHoTen;
}
string GiaoVien::getMSGV()
{
	return sMSGV;
}
/* Date GiaoVien::getDOB()
{
	return DateOfBirth;
}*/
int GiaoVien::getNamSinh()
{
	return iNamSinh;
}
int GiaoVien::getAge()
{
	return iAge;
}
int GiaoVien::getNamCongTac()
{
	return iNamCongTac;
}

bool GiaoVien::NamSinh(int NamSinh)
{
	if (NamSinh != iNamSinh)return false;
	return true;
}
bool GiaoVien::Young()
{
	if (iAge < 40) return true;
	return false;
}
bool GiaoVien::LauNam()
{
	if (iNamCongTac > 7) return true;
	return false;
}

void GiaoVien::setHoTen(std::string newName)
{
	sHoTen = newName;
}
void GiaoVien::setMSGV(std::string newMSGV)
{
	sMSGV = newMSGV;
}
/*void GiaoVien::setDOB(Date newDOB)
{
	DateOfBirth = newDOB;
}*/
void GiaoVien::setNamSinh(int altNamSinh)
{
	iNamSinh = altNamSinh;
}
void GiaoVien::setAge(int newAge)
{
	iAge = newAge;
}
void GiaoVien::setNamCongTac(int newNamCongTac)
{
	iNamCongTac = newNamCongTac;
}

void GiaoVien::Nhap()
{
	//cin.ignore();
	cout << "Nhap ho va ten cua giao vien : ";
	getline(cin, sHoTen);
	cout << "Nhap MSGV : ";
	getline(cin, sMSGV);
	cout << "Nhap nam sinh : ";
	//DateOfBirth.Nhap();
	cin >> iNamSinh;
	cout << "Nhap tuoi : ";
	cin >> iAge;
	cout << "Nhap so nam cong tac : ";
	cin >> iNamCongTac;
	cout << "=====================================================================================\n";
}
void GiaoVien::Xuat()
{
	//cout << "=====================================================================================\n";
	cout << "Thong tin giao vien :\n";
	cout << "Ho va ten : " << sHoTen << endl;
	cout << "MSGV : " << sMSGV << endl;
	cout << "Nam sinh : ";
	//DateOfBirth.Xuat();
	cout << iNamSinh;
	cout << endl;
	cout << "Tuoi : " << iAge << endl;
	cout << "So nam cong tac : " << iNamCongTac << endl;
	cout << "=====================================================================================\n";
}