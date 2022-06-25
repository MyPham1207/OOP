#include "EmployeeList.h"

int main()
{
	EmployeeList NhanVien;
	cin >> NhanVien;

	int Luong, sp_Dinh_Muc[12],sp_San_Xuat[12], iSalaryY;

	cout << "Nhap luong khoi diem cho moi nhan vien : ";
	cin >> Luong;

	cout << "Nhap so san pham dinh muc tung thang : ";
	for (int i = 0; i < 12; i++)
	{
		cin >> sp_Dinh_Muc[i];
	}

	cout << "Nhap so san pham da san xuat tung thang : ";
	for (int i = 0; i < 12; i++)
	{
		cin >> sp_San_Xuat[i];
	}

	cout << NhanVien;

	for (int i = 0; i < 12; i++)
	{
		cout << "\nSo tien cong ty phai tra cho nhan vien thang " << i+1 << " la : " << NhanVien.LuongThang(Luong, sp_Dinh_Muc[i], sp_San_Xuat[i]);
	}
	

	iSalaryY = NhanVien.LuongNam(Luong, sp_Dinh_Muc, sp_San_Xuat);
	cout << "\nSo tien cong ty phai tra cho nhan vien nam nay la : " << iSalaryY << endl;
	system("pause");
	return 0;
}