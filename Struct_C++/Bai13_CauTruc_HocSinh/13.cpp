#include"Function.h"
//cau1
void nhap(hs& a) {
	cout << "Nhap thong tin sinh vien\n";
	cout << "Nhap ten sinh vien : ";
	cin.ignore();
	getline(cin, a.ten);
	cout << "Nhap Diem Toan-Van-TBM : ";
	cin >> a.toan >> a.van >> a.tb;
	cout << "___________________________\n";
}

void in(hs& a) {
	cout << "Ten sinh vien : " << a.ten << endl;
	cout << "Diem Toan-Van-TBM : " << a.toan << " " << a.van << " " << a.tb << endl;
	cout << "_________________________________\n";
}

//cau2
void xuat(hs a[], int n) {
	for (int i = 0; i < n; i++) {
		in(a[i]);
	}
}

//cau3
void dem(hs a[], int n) {
	cout << "Danh sach hoc sinh co diem toan <5" << endl;
	for (int i = 0; i < n; i++) {
		if (a[i].toan < 5) {
			in(a[i]);
		}
	}
}
// cau4
void dem2(hs a[], int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].toan > 8 && a[i].van > 8) {
			cnt++;
		}
	}
	cout << "So hoc sinh co diem toan van >8 : " << cnt << endl;
}

//cau5
void sapxep(hs a[], int n) {
	for (int i = 0; i < n; i++) {
		int s = i;
		for (int j = i + 1; j < n; j++) {
			if (a[s].tb <= a[j].tb) {
				s = j;
			}
			swap(a[i].tb, a[s].tb);
		}
	}
	for (int i = 0; i < n; i++) {
		in(a[i]);
	}
}