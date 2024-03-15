#include<string>
#include<cctype>
#include<fstream>
#include<vector>
#include<cstdio>
#include <algorithm>
#include<iostream>
using namespace std;
int main() {
	string a[50];
	int n = 0;

	ifstream f;
	f.open("DOC.txt", ios::in);

	if (!f) {
		cout << "Khong mo duoc file" << endl;
	}
	else {
		while (f.eof() == 0) {
			getline(f, a[n]);
			n++;
		}
	}
	string s;
	cout << "Nhap chuoi : ";
	getline(cin, s);
	int space;
	for (int i = 0; i < n; i++) {
		if (a[i].find(s) != string::npos) {
			a[i].erase(0, s.size());
			space = i;
		}
	}
	ofstream f1;
	f1.open("DOC.txt", ios::out);
	for (int i = 0; i < n; i++) {
		if (i == space) {
			continue;
		}
			f1 << a[i] << endl;
	}
	f.close();
	f1.close();
}