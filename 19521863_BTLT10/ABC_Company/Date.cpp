#include "Date.h"

Date::Date()
{
	iDay = 0;
	iMonth = 0;
	iYear = 0;
}

void Date::Perfect_Input()
{
	iDay = abs(iDay);
	iMonth = abs(iMonth);
	iYear = abs(iYear);
	iMonth = iMonth % 12;
	if (iMonth == 0) iMonth = 12;
	if (Isleapyear(iYear))
	{
		if (iDay > leap_year[iMonth])
		{
			iDay = 1;
		}
	}
	else
	{
		if (iDay > common_year[iMonth])
		{
			iDay = 1;
		}
	}
}

bool Date::Isleapyear(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		return true;
	}
	return false;
}

Date Date::operator+(int day)
{
	Date result;
	day = abs(day);
	iDay = iDay + day;
	while (1)
	{
		if (Isleapyear(iYear))
		{
			if (iDay <= leap_year[iMonth] && iMonth <= 12)
			{
				break;
			}
			else
			{
				iDay = iDay - leap_year[iMonth];
				iMonth++;
			}
			if (iMonth > 12)
			{
				iYear = iYear + iMonth / 12;
				iMonth = iMonth % 12;
			}
		}
		else
		{

			if (iDay <= common_year[iMonth] && iMonth <= 12)
			{
				break;
			}
			else
			{
				iDay = iDay - common_year[iMonth];
				iMonth++;
			}
			if (iMonth > 12)
			{
				iYear = iYear + iMonth / 12;
				iMonth = iMonth % 12;
			}
		}
	}
	result.iDay = iDay;
	result.iMonth = iMonth;
	result.iYear = iYear;
	return result;
}

Date Date::operator-(int day)
{
	Date result;
	int temp = iDay - day;
	if (temp == 0)
	{
		iMonth--;
		if (iMonth == 0)
		{
			iMonth = 12;
			iYear--;
		}
		if (Isleapyear(iYear))
		{
			iDay = leap_year[iMonth];
		}
		else
		{
			iDay = common_year[iMonth];
		}
	}
	else if (temp > 0)
	{
		iDay = temp;
	}
	else
	{
		//int borrow_day_form_month = iDay;
		while (iDay < day)
		{
			iMonth--;
			if (iMonth == 0)
			{
				iMonth = 12;
				iYear--;
			}
			if (Isleapyear(iYear))
			{
				iDay += leap_year[iMonth];
			}
			else
			{
				iDay += common_year[iMonth];
			}
		}
		iDay = iDay - day;
		if (iDay == 0)
		{
			iMonth--;
			if (iMonth == 0)
			{
				iMonth = 12;
				iYear--;
			}
			if (Isleapyear(iYear))
			{
				iDay = leap_year[iMonth];
			}
			else
			{
				iDay = common_year[iMonth];
			}
		}
	}
	result.iDay = iDay;
	result.iMonth = iMonth;
	result.iYear = iYear;
	return result;
}

int How_many_days_between(Date date1, Date date2)
{
	int count_day = 0;
	if (date1.iYear < date2.iYear)
	{
		Swap_date(date1, date2);
	}
	while (1)
	{
		if (Same_day(date1, date2))break;
		else
		{
			date1 = date1 + 1;
			count_day++;
		}
	}

	return count_day;

}

bool Same_day(Date date1, Date date2)
{
	if (date1.iDay == date2.iDay && date1.iMonth == date2.iMonth && date1.iYear == date2.iYear)
	{
		return true;
	}
	return false;
}

void Swap_date(Date date1, Date date2)
{
	swap(date1.iDay, date2.iDay);
	swap(date1.iMonth, date2.iMonth);
	swap(date1.iYear, date2.iYear);
}