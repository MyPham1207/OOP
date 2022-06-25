#include "DaThuc.h"


void DaThuc::Nhap()
{
	cout << "Nhap bac cua da thuc: ";
	cin >> iBac;
	iPhanTu = iBac + 1;
	fHeSo = new float[iPhanTu];
	cout << "Nhap cac he so cua da thuc: ";
	for (int i = iPhanTu - 1; i >= 0; i--)
	{
		if (i == iPhanTu - 1)
		{
			do
			{
				cin >> fHeSo[i];
			} while (fHeSo[i] == 0);
		}
		else
		{
			cin >> fHeSo[i];
		}
	}
}

void DaThuc::Xuat()
{
	int Dem = 0;
	for (int i = iPhanTu - 1; i >= 0; i--)
	{
		if (fHeSo[i] == 0)
		{
			Dem++;
		}
		if (i == iPhanTu - 1)
		{
			if (fHeSo[i] != 0)
			{
				if (fHeSo[i] != 1 && fHeSo[i] != -1)
				{
					cout << fHeSo[i] << "x^" << i;
				}
				else
				{
					if (fHeSo[i] == 1)
					{
						cout << "x^" << i;
					}
					else
					{
						cout << "-x^" << i;
					}
				}
			}
		}
		else
		{
			if (i == 0)
			{
				if (fHeSo[i] > 0)
				{
					
					cout << " + " << fHeSo[i];
					
				}
				else
				{
					if (fHeSo[i] < 0)
					{
						cout << " - " << -fHeSo[i];
					}
				}
				cout << endl;
			}
			else
			{
				if (i == 1)
				{
					if (fHeSo[i] > 0)
					{
						if (fHeSo[i] != 1)
						{
							cout << " + " << fHeSo[i] << "x";
						}
						else
						{
							cout << " + x";
						}
					}
					else
					{
						if (fHeSo[i] < 0)
						{
							if (fHeSo[i] != -1)
							{
								cout << " - " << -fHeSo[i] << "x";
							}
							else
							{
								cout << " - x";
							}
						}
					}
				}
				else
				{
					if (fHeSo[i] > 0)
					{
						if (fHeSo[i] != 1)
						{
							cout << " + " << fHeSo[i] << "x^" << i;
						}
						else
						{
							cout << " + x^" << i;
						}
					}
					else
					{
						if (fHeSo[i] < 0)
						{
							if (fHeSo[i] != -1)
							{
								cout << " - " << -fHeSo[i] << "x^" << i;
							}
							else
							{
								cout << " - x^" << i;
							}
						}
					}
				}
			}
		}
	}
	if (Dem == iPhanTu)
	{
		cout << 0 << endl;
	}
}

DaThuc DaThuc::operator+(DaThuc Another)
{
	DaThuc KetQua;
	KetQua.iBac = max(iBac, Another.iBac);
	KetQua.iPhanTu = KetQua.iBac + 1;
	KetQua.fHeSo = new float[KetQua.iPhanTu];
	if (iBac >= Another.iBac)
	{
		for (int i = KetQua.iPhanTu - 1; i >= 0; i--)
		{
			KetQua.fHeSo[i] = fHeSo[i];
		}
		for (int j = Another.iPhanTu - 1; j >= 0; j--)
		{
			KetQua.fHeSo[j] += Another.fHeSo[j];
		}
	}
	else
	{
		for (int i = KetQua.iPhanTu - 1; i >= 0; i--)
		{
			KetQua.fHeSo[i] = Another.fHeSo[i];
		}
		for (int j = iPhanTu - 1; j >= 0; j--)
		{
			KetQua.fHeSo[j] += fHeSo[j];
		}
	}
	/*int iDem = 0;
	for (int i = KetQua.iPhanTu - 1; i > 0; i--)
	{
		if (KetQua.fHeSo[i] != 0)
		{
			KetQua.iBac = i;
		}
		iDem++;
	}
	if (iDem == 5)
	{
		iBac = 0;
	}*/
	return KetQua;
}

DaThuc DaThuc::operator-(DaThuc Another)
{
	DaThuc KetQua;
	KetQua.iBac = max(iBac, Another.iBac);
	KetQua.iPhanTu = KetQua.iBac + 1;
	KetQua.fHeSo = new float[KetQua.iPhanTu];
	DaThuc Tam;
	Tam.iBac = max(iBac, Another.iBac);
	Tam.iPhanTu = Tam.iBac + 1;
	Tam.fHeSo = new float[Tam.iPhanTu];
	if (iBac != Another.iBac)
	{
		if (iBac > Another.iBac)
		{
			for (int i = 0; i < Another.iPhanTu; i++)
			{
				Tam.fHeSo[i] = Another.fHeSo[i];
			}
			for (int j = Another.iPhanTu; j < iPhanTu; j++)
			{
				Tam.fHeSo[j] = 0;
			}
			for (int a = KetQua.iPhanTu - 1; a >= 0; a--)
			{
				KetQua.fHeSo[a] = fHeSo[a] - Tam.fHeSo[a];
			}
		}
		else
		{
			for (int i = 0; i < iPhanTu; i++)
			{
				Tam.fHeSo[i] = fHeSo[i];
			}
			for (int j = iPhanTu; j < Another.iPhanTu; j++)
			{
				Tam.fHeSo[j] = 0;
			}
			for (int a = KetQua.iPhanTu - 1; a >= 0; a--)
			{
				KetQua.fHeSo[a] = Tam.fHeSo[a] - Another.fHeSo[a];
			}
		}
		
	}
	else
	{
		for (int a = KetQua.iPhanTu - 1; a >= 0; a--)
		{
			KetQua.fHeSo[a] = fHeSo[a] - Another.fHeSo[a];
		}
	}
	/*int iDem = 0;
	for (int i = KetQua.iPhanTu - 1; i > 0; i--)
	{
		if (KetQua.fHeSo[i] != 0)
		{
			KetQua.iBac = i;
		}
		iDem++;
	}
	if (iDem == iBac)
	{
		iBac = 0;
	}*/
	return KetQua;
}

bool DaThuc::operator!=(DaThuc Another)
{
	if (iBac != Another.iBac)
	{
		return true;
	}
	else
	{
		for (int i = iBac; i >= 0; i--)
		{
			if (fHeSo[i] != Another.fHeSo[i])
			{
				return true;
			}
		}
	}
	return false;
}

float Value_At_X(DaThuc A, float x)
{
	float Value = 0;
	for (int i = A.iPhanTu - 1; i >= 0; i--)
	{
		Value += A.fHeSo[i] * pow(x, i);
	}
	return Value;
}