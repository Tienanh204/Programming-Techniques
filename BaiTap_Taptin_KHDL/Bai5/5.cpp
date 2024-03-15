#include<iostream>
#include<string>
#include<cctype>
#include<fstream>
#include<vector>
#include<cstdio>
#include <algorithm>
using namespace std;
int main() {
	string a[50];
	ifstream f; int n = 0;
	f.open("DOC.txt", ios::in);
	if (!f) {
		cout << "Khong mo duoc file" << endl;
	}
	else {
		while (f.eof() == 0) {
			getline(f,a[n]);
			n++;
		}
	}
	string s1, s2;
	cout << "Nhap chuoi 1 : ";
	getline(cin, s1);
	cout << "Nhap chuoi 2 : ";
	getline(cin, s2);
	bool ok = false;
	for (int i = 0; i < n; i++) {
		if (a[i].find(s1) != string::npos) {
			a[i].replace(0, s1.size(), s2);
			ok = true;
		}
	}
	ofstream f1;
	if (ok == false) {
		cout << "Chuoi 1 khong co trong file" << endl;
	}
	else {
		f1.open("DOC.txt", ios::out);
		for (int i = 0; i < n; i++) {
			f1 << a[i] << endl;
		}
	}

	f.close();
	f1.close();
}