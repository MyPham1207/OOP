#pragma once
#include <iostream>
using namespace std;

const int common_year[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
const int leap_year[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };

class Date
{
private:
	int iDay, iMonth, iYear;
public:
	Date();
	void Perfect_Input();

	friend istream& operator>>(istream& input, Date& date)
	{
		input >> date.iDay >> date.iMonth >> date.iYear;
		date.Perfect_Input();
		return input;
	}

	friend ostream& operator<<(ostream& output, Date date)
	{
		cout << date.iDay << "/" << date.iMonth << "/" << date.iYear;
		return output;
	}

	//void Perfect_Input();

	bool Isleapyear(int year);

	Date operator+(int day);

	Date operator-(int day);

	friend int How_many_days_between(Date date1, Date date2);

	friend bool Same_day(Date date1, Date date2);

	friend void Swap_date(Date date1, Date date2);
};

