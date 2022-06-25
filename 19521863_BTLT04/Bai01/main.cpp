#include "GV.h"


int main()
{
	// Cac cau lenh kiem tra ham khoi tao
	//Nhap binh thuong
	GiaoVien X1;
	X1.Nhap();
	X1.Xuat();

	//Giaovien();
	GiaoVien X2;
	X2.Xuat();

	//GiaoVien(std::string TenKhac);
	GiaoVien X3("Hatake Kakashi");
	X3.Xuat();

	//GiaoVien(std::string TenKhac, std::string newMSGV);
	GiaoVien X4("Iruka", "Konohagakuen");
	X4.Xuat();

	//GiaoVien(std::string TenKhac, std::string newMSGV, int trueNamSinh);
	GiaoVien X5("Elena Jelavich", "AnT", 1990);
	X5.Xuat();

	//GiaoVien(std::string TenKhac, std::string newMSGV, int trueNamSinh, int trueAge);
	GiaoVien X6("Koro", "Octopus", 1989, 31);
	X6.Xuat();

	//GiaoVien(std::string TenKhac, std::string newMSGV, int trueNamSinh, int trueAge, int trueNamCongTac);
	GiaoVien X7("Urokodaki", "WP", 1969, 51, 10);
	X7.Xuat();

	//GiaoVien(GiaoVien& GV);
	GiaoVien X8(X1);
	X8.Xuat();

	//Nhap danh sach giao vien, su dung cho cac ham truy van va cap nhat
	int n;
	string sAnswer;//Bien dung de nhap cau tra loi
	//Nhap danh sach giao vien
	cout << "=====================================================================================\n";
	cout << "Nhap so luong giao vien :";
	cin >> n;
	GiaoVien* GVArr = new GiaoVien[n];
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		GVArr[i].Nhap();
	}
	// Xuat danh sach giao vien vua nhap
	for (int j = 0; j < n; j++)
	{
		GVArr[j].Xuat();
	}
	
	cout << "=====================================================================================\n";
	//De tiep tuc cac buoc tiep theo, tra loi "yes", nguoc lai "no", khong viet hoa
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//Cac ham truy van "get"
	//Kiem tra ham // string getHoTen();
	int x1;
	cout << "Nhap vi tri cua giao vien can tim ho va ten : ";
	cin >> x1;
	string HoTen = GVArr[x1].getHoTen(); 
	cout << HoTen << endl;

	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//string getMSGV();
	int x2;
	cout << "Nhap vi tri cua giao vien can tim MSGV : ";
	cin >> x2;
	string MSGV = GVArr[x2].getMSGV();
	cout << MSGV << endl;

	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//int getNamSinh();
	int x3;
	cout << "Nhap vi tri cua giao vien can tim nam sinh : ";
	cin >> x3;
	int NamSinh = GVArr[x3].getNamSinh();
	cout << NamSinh << endl;

	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//int getAge();
	int x4;
	cout << "Nhap vi tri cua giao vien can tim tuoi : ";
	cin >> x4;
	int Tuoi = GVArr[x4].getAge();
	cout << Tuoi << endl;

	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//int getNamCongTac();
	int x5;
	cout << "Nhap vi tri cua giao vien can tim nam cong tac : ";
	cin >> x5;
	int NamCongTac = GVArr[x5].getNamCongTac();
	cout << NamCongTac << endl;

	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//Ham truy van nhung co tinh dung sai
	//bool NamSinh(int NamSinh);
	int othNamSinh, x6;
	cout << "Nhap vi tri giao vien va doan xem nam sinh cua nguoi do : ";
	cin >> x6 >> othNamSinh;
	if (GVArr[x6].NamSinh(othNamSinh))
	{
		cout << "Congratulation!" << endl;
	}
	else
	{
		cout << "Chuc ban may man lan sau :(" << endl;
	}

	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "No")return 0;
	cout << "=====================================================================================\n";

	//bool Young();
	int x7;
	cout << "Nhap vi tri giao vien ban muon biet ho da gia hay con tre :v : ";
	cin >> x7;
	if (GVArr[x7].Young())
	{
		cout << "Van con tre chan!\n";
	}
	else
	{
		cout << "Lon tuoi nhung van dep lao :v\n";
	}

	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//bool LauNam();
	int x8;
	cout << "Nhap vi tri giao vien ma ban muon biet la ho da day lau nam hay chua : ";
	cin >> x8;
	if (GVArr[x8].LauNam())
	{
		cout << "Lau roi day\n";
	}
	else
	{
		cout << "Chua lau lam nhi\n";
	}

	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//Cac ham cap nhat
	//void setHoTen(std::string newName);
	int x9;
	string newName;
	cout << "Ban sai ten giao vien o vi tri nao ? : ";
	cin >> x9;
	cout << "Hay nhap lai ho ten nguoi do : ";
	cin.ignore();
	getline(cin, newName);
	GVArr[x9].setHoTen(newName);
	cout << "Hay kiem tra lai thong tin :\n";
	GVArr[x9].Xuat();

	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//void setMSGV(std::string newMSGV);
	int x10;
	string newMSGV;
	cout << "Ban sai MSGV o vi tri nao ? : ";
	cin >> x10;
	cout << "Hay nhap lai MSGV nguoi do : ";
	cin.ignore();
	getline(cin, newMSGV);
	GVArr[x10].setMSGV(newMSGV);
	cout << "Hay kiem tra lai thong tin :\n";
	GVArr[x10].Xuat();

	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//void setNamSinh(int altNamSinh);
	int x11;
	int altNamSinh;
	cout << "Ban sai nam sinh o vi tri nao ? : ";
	cin >> x11;
	cout << "Hay nhap lai nam sinh nguoi do : ";
	cin >> altNamSinh;
	GVArr[x11].setNamSinh(altNamSinh);
	cout << "Hay kiem tra lai thong tin :\n";
	GVArr[x11].Xuat();

	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//void setAge(int newAge);
	int x12;
	int newAge;
	cout << "Ban sai tuoi o vi tri nao ? : ";
	cin >> x12;
	cout << "Hay nhap lai tuoi nguoi do : ";
	cin >> newAge;
	GVArr[x12].setAge(newAge);
	cout << "Hay kiem tra lai thong tin :\n";
	GVArr[x12].Xuat();
	
	cout << "=====================================================================================\n";
	cout << "Do you want to continue ? Please type yes or no :";
	cin >> sAnswer;
	if (sAnswer == "no")return 0;
	cout << "=====================================================================================\n";

	//void setNamCongTac(int newNamCongTac);
	int x13;
	int newNCT;
	cout << "Ban muon sua nam cong tac o vi tri nao ? : ";
	cin >> x13;
	cout << "Hay nhap lai nam cong tac cua nguoi do : ";
	cin >> newNCT;
	GVArr[x13].setNamCongTac(newAge);
	cout << "Hay kiem tra lai thong tin :\n";
	GVArr[x13].Xuat();


	
	return 0;
	//system("pause");
}