#include<iostream>
#include<string>
#include<cctype>
#include<fstream>
#include<vector>
#include<cstdio>
#include <algorithm>
using namespace std;
int main() {
	ifstream f;
	string a[50]; 
	int n = 0;

	f.open("DOC.txt", ios::in);
	if (!f) {
		cout << "Khong the mo file" << endl;
	}
	else {
		while (f.eof() == 0) {
			getline(f, a[n]);
			n++;
		}
	}

	string k;
	cout << "Nhap chuoi can tim : ";
	getline(cin, k);

	transform(k.begin(), k.end(), k.begin(), ::tolower);

	for (int i = 0; i < n; i++) {
	     string t = a[i];
	transform(t.begin(), t.end(), t.begin(), ::tolower);
		if (t.find(k) != string::npos) {
			cout << a[i] << endl;
		}
	}
	f.close();
	return 0;
}