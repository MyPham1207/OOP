#pragma once
#include <iostream>
#include <string>
#include "Date.h"

class EmployeeList;

class Date;
using namespace std;
class Employee
{
private:
	string sName;
	Date Birth;
	string sSex;
	string sPosition;
	//int iLuong;
public:
	friend class Date;
	friend class EmployeeList;
	friend istream& operator>>(istream& is, Employee& Emp)
	{
		
		cout << "Nhap ho va ten : ";
		getline(is, Emp.sName);
		cout << "Nhap ngay thang nam sinh ";
		is >> Emp.Birth;
		cout << "Gioi tinh : ";
		is.ignore();
		is >> Emp.sSex;
		cout << "Nhap vi tri lam viec cua nguoi do (Ban quan ly hay nhan vien san xuat) : ";
		is.ignore();
		getline(is, Emp.sPosition);
		return is;
	}
	
	friend ostream& operator<<(ostream& os, Employee Emp)
	{
		os << "Thong tin nhan vien :" << endl;
		os << "Ho va ten : " << Emp.sName << endl;
		os << "Ngay thang nam sinh : " << Emp.Birth << endl;
		os << "Gioi tinh : " << Emp.sSex << endl;
		os << "Vi tri : " << Emp.sPosition << endl;
		return os;
	}

};

