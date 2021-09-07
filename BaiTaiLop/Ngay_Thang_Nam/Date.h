#pragma once
#include <iostream>
using namespace std;

const int common_year[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
const int leap_year[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };

class Date
{
private:
	int iNgay, iThang, iNam;
public:
	Date()
	{
		iNgay = 0;
		iThang = 0;
		iNam = 0;
	}

	~Date() {}

	friend istream& operator>>(istream& input, Date& date)
	{
		input >> date.iNgay >> date.iThang >> date.iNam;
		return input;
	}

	bool IsLeapYear(int year)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) return true;
		return false;
	}

	void PerfectInput()
	{
		iNgay = abs(iNgay);
		iThang = abs(iThang);
		iNam = abs(iNam);

		if (iThang > 12) iThang = iThang % 12;

		if (IsLeapYear(iNam))
		{
			if (iNgay > leap_year[iThang])iNgay = iNgay % leap_year[iThang];
		}
		else
		{
			if (iNgay > common_year[iThang])iNgay = iNgay % common_year[iThang];
		}
	}

	friend ostream& operator<<(ostream& output, Date date)
	{
		output << date.iNgay << "/" << date.iThang << "/" << date.iNam;
		return output;
	}

	Date operator++(int)
	{
		Date result;
		result.iNgay = iNgay;
		result.iThang = iThang;
		result.iNam = iNam;
		iNgay = iNgay + 1;
		if (IsLeapYear(iNam))
		{
			if (iNgay > leap_year[iThang])
			{
				iNgay = 1;
				iThang++;
				if (iThang > 12)
				{
					iThang = 1;
					iNam++;
				}
			}
		}
		else
		{
			if (iNgay > common_year[iThang])
			{
				iNgay = 1;
				iThang++;
				if (iThang > 12)
				{
					iThang = 1;
					iNam++;
				}
			}
		}
		return result;
	}

	Date operator++()
	{
		iNgay = iNgay + 1;
		if (IsLeapYear(iNam))
		{
			if (iNgay > leap_year[iThang])
			{
				iNgay = 1;
				iThang++;
				if (iThang > 12)
				{
					iThang = 1;
					iNam++;
				}
			}
		}
		else
		{
			if (iNgay > common_year[iThang])
			{
				iNgay = 1;
				iThang++;
				if (iThang > 12)
				{
					iThang = 1;
					iNam++;
				}
			}
		}
		Date result;
		result.iNgay = iNgay;
		result.iThang = iThang;
		result.iNam = iNam;
		return result;
	}

};


