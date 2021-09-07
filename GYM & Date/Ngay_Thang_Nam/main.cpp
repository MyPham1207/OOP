#include "Date.h"

int main()
{
	Date date;
	cin >> date;
	date.PerfectInput();
	cout << date++ << endl;
	cout << ++date;
	system("pause");
	return 0;
}