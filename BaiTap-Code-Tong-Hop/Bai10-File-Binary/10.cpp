#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct SinhVien
{
	int ngay, thang, nam;
};

void WriteFlie(FILE*&f)
{
	fopen_s(&f, "SinhVien.bin", "wb");

	//Ghi du lieu vao file nhi phan
	if (!f)
	{
		cout << "Cannot open file!" << endl;

		exit(1);
	}

	SinhVien sv;

	sv.ngay = 1;

	sv.thang = 12;

	sv.nam = 2004;

	fwrite(&sv, sizeof(struct SinhVien), 1, f);//dia chi bien/kich thuoc/ghi bao nhieu ngay sinh/con tro f

	fclose(f);
}

void ReadFile(FILE*& f)
{
	SinhVien sv;

	FILE* f_out;

	fopen_s(&f_out, "SinhVien.bin", "rb");

	if (!f_out)
	{
		cout << "Can't open file1" << endl;

		exit(1);
	}

	fread(&sv, sizeof(struct SinhVien), 1, f_out);

	cout << "DOB: " << sv.ngay << "/" << sv.thang << "/" << sv.nam << endl;
}
void EnterArray(int a[], int& n)
{
	cout << "N: ";

	cin >> n;

	cout << "a[]: ";

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void PrintArray(int a[], int& n)
{
	cout << "a[]: ";

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void NhapFile(int a[], int &n)
{
	ofstream f("SinhVien.bin",ios::binary);

	if (!f)
	{
		cout << "Can't open file!" << endl;

		return;
	}

	f << n << endl;

	for (int i = 0; i < n; i++)
	{
		f << a[i] << endl;
	}
	f.close();
}

//Nhap file khi khong biet truoc so luong phan tu

void NhapFile1(int a[])
{
	ofstream f("SinhVien.bin", ios::binary);

	if (!f)
	{
		cout << "Can't open file!" << endl;

		return;
	}

	int i = 0;

	while (!f.fail())
	{
		f << a[i] << endl;
	}

	i++;
}

void XuatFile(int a[], int &n)
{
	ifstream f("SinhVien.bin", ios::binary);

	if (!f)
	{
		cout << "Can't open file" << endl;

		return;
	}

	int x;

	f >> x;

	for (int i = 0; i < n; i++)//co the xuat sang file khac
	{
		cout << x << endl;;

		f >> x;
	}

	f.close();
}

int main()
{
	FILE* f;

	SinhVien sv;
	//Doc du lieu tu file nhi phan

	//WriteFlie(f);

	//ReadFile(f);

	int n;

	int a[10];

	EnterArray(a, n);

	NhapFile(a, n);

	XuatFile(a, n);
}