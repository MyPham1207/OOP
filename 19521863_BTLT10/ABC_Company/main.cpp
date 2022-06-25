#include "Manage.h"


int main()
{
	Management List;
	List.Nhap();
	List.Xuat();
	cout << "================================" << endl;
	cout << "Company total salary : " << List.Salary() << endl;
	string hoten;
	cin.ignore();
	getline(cin, hoten);
	List.Find_Emp(hoten);
	List.Delete();
	system("pause");
	return 0;
}