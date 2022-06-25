#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int iDay, iMonth, iYear;
public:
	Date()
	{
		iDay = 1;
		iMonth = 1;
		iYear = 1000;
	}
	~Date()
	{}
	friend istream& operator>>(istream& is, Date& date)
	{
		cout << "(Nhap theo thu tu nam/thang/ngay) : ";
		is >> date.iYear;
		do
		{
			is >> date.iMonth;
		} while (date.iMonth < 1 || date.iMonth>12);
		if (date.iMonth == 1 || date.iMonth == 3 || date.iMonth == 5 || date.iMonth == 7 || date.iMonth == 8 || date.iMonth == 10 || date.iMonth == 12)
		{
			do
			{
				is >> date.iDay;
			} while (date.iDay < 1 || date.iDay>31);
		}
		else
		{
			if (date.iMonth == 2)
			{
				if (date.iYear % 4 == 0 && date.iYear % 100 != 0)
				{
					do
					{
						is >> date.iDay;
					} while (date.iDay < 1 || date.iDay>29);
				}
				else
				{
					do
					{
						is >> date.iDay;
					} while (date.iDay < 1 || date.iDay>28);
				}
			}
			else
			{
				do
				{
					is >> date.iDay;
				} while (date.iDay < 1 || date.iDay>30);
			}
		}
		return is;
	}
	friend ostream& operator<<(ostream& os, Date date)
	{
		os << date.iDay << "/" << date.iMonth << "/" << date.iYear;
		return os;
	}
};

