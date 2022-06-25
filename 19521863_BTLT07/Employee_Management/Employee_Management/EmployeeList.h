#pragma once
#include "Employee.h"
class Employee;
class EmployeeList
{
private:
	int iSoNhanVien;
	Employee* list;
public:
	
	Employee operator[](int x)
	{
		return list[x];
	}

	friend istream& operator>>(istream& is, EmployeeList& nv)
	{
		cout << "Nhap so nhan vien : ";
		is >> nv.iSoNhanVien;
		is.ignore();
		nv.list = new Employee[nv.iSoNhanVien];
		for (int i = 0; i < nv.iSoNhanVien; i++)
		{
			is >> nv.list[i];
		}
		return is;
	}

	friend ostream& operator<<(ostream& os, EmployeeList nv)
	{
		os << endl;
		for (int i = 0; i < nv.iSoNhanVien; i++)
		{
			os << nv[i] << endl;
		}
		return os;
	}
	friend class Employee;
	int LuongThang(int luongnv, int sp_Dinh_Muc, int sp_San_Xuat)
	{
		int iS = 0;
		for (int i = 0; i < iSoNhanVien; i++)
		{
			if (list[i].sPosition == "Ban quan ly")
			{
				iS += luongnv + 500000;
			}
			else
			{
				iS += luongnv + ((sp_San_Xuat > sp_Dinh_Muc) ? (sp_San_Xuat - sp_Dinh_Muc) : 0) * 30000;
			}
		}
		return iS;
	}

	int LuongNam(int luongnv, int sp_Dinh_Muc[], int sp_San_Xuat[])
	{
		int iS = 0;
		for (int i = 0; i < 12; i++)
		{
			iS += LuongThang(luongnv, sp_Dinh_Muc[i], sp_San_Xuat[i]);
		}
		return iS;
	}
};

