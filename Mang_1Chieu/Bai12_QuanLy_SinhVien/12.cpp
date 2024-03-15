#include"Function.h"
//cau1
void nhap(sv& a) {
	cout << "Nhap thong tin sinh vien\n";
	cout << "Nhap ma sinh vien :";
	cin >> a.mssv;
	cout << "Nhap ten sinh vien :";
	cin.ignore();
	getline(cin, a.ten);
	cout << "Nhap Que Quan : ";
	getline(cin, a.que);
	cout << "Nhap Diem Toan ly hoa :";
	cin >> a.toan >> a.ly >> a.hoa;
	cin.ignore();
	cout << "___________________________\n";
}

void in(sv& a) {
	cout << "Ma sinh vien : " << a.mssv << endl;
	cout << "Ten sinh vien : " << a.ten << endl;
	cout << "Que Quan : " << a.que << endl;
	cout << "Diem Toan-Ly-Hoa : " << a.toan << " " << a.ly << " " << a.hoa << endl;
	cout << "_________________________________\n";
}

//cau2
void doc(sv &a) {
	ifstream f; int k;
	string s[50];
	f.open("DOC.txt", ios::in);
	if (!f) {
		cout << "Khong mo duoc file" << endl;
	}
	else {
		 f >> k;
		 for (int i = 0; i <= k; i++) {
			 getline(f, s[i]);
		}
	}
	for (int i = 0; i <= k; i++) {
		cout << s[i] << endl;
	}
	f.close();
}


//cau3
void xuat(sv a[], int n) {
	cout << "________Danh_Sach_Sinh_Vien________\n";
	for (int i = 0; i < n; i++){
		in(a[i]);
	}
}

//cau4
void timkiem(sv a[], int n) {
	sv x; bool ok1 = false;
	cout << "Nhap que quan : ";
	cin.ignore();
	getline(cin, x.que);
	cout << "Thong tin sinh vien theo que quan" << endl;
	for (int i = 0; i < n; i++) {
		if (a[i].que == x.que) {
			in(a[i]);
			ok1 = true;
		}
	}
	if (ok1 == false) {
		cout << "Khong tim thay thong tin" << endl;
	}
}

//cau5
string chuanhoa(string name) {
	stringstream ss(name);
	string tmp, res = "";
	string k[50]; int m = 0;
	while (ss >> tmp) {
		k[m++] = tmp;
	}
	res += k[m - 1];
	for (int i = 0; i < m-1; i++) {
		res += k[i];
	}
	return res;
}
bool cmp(sv& a, sv& b) {
	string ten1 = chuanhoa(a.ten);
	string ten2 = chuanhoa(b.ten);
	return ten1 < ten2;
}
void sapxep(sv a[], int n) {
	sort(a, a + n, cmp);
	cout << "____Danh sach sinh vien sau khi sap xep____\n";
	for (int i = 0; i < n; i++) {
		in(a[i]);
	}
}

//cau6
void hocbong(sv a[], int n) {
	ofstream f1;
	f1.open("hocbong.txt", ios::out);
	f1 << "Danh sach hocj sinh du DK nhan hoc bong " << endl;
	for (int i = 0; i < n; i++) {
		double s= (a[i].toan + a[i].ly + a[i].hoa) / 3;
		if ((a[i].toan >= 5 && a[i].ly >= 5 && a[i].hoa >= 5) && s >= 7.5) {
			f1 << a[i].mssv << "  " << a[i].ten << endl;
			f1 << a[i].toan << "  " << a[i].ly << "  " << a[i].hoa << "  " << "Diem trung binh : " << s<< endl;
		}
	}
	f1.close();
}