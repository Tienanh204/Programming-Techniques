#include<iostream>
#include<string>
#include<cctype>
#include<fstream>
#include<vector>
#include<cstdio>
using namespace std;
int main() {
	ifstream f;
	string s;
	vector<string> v;
	f.open("DOC.txt", ios::in);
	if (!f) {
		cout << "Khong the mo duoc file" << endl;
	}
	else {
		while (f.eof() == 0) {
			getline(f, s);
			v.push_back(s);
		}
	}
	cout << "Ten sinh vien can them : ";
	string a; getline(cin, a);
	v.push_back(a);
	ofstream f1;
	f1.open("DOC.txt", ios::out);
	for (int i = 0; i < v.size(); i++) {
		f1 << v[i] << endl;
	}
	f1.close();
	f.close();
	return 0;
}