#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main() {
	cout << "Nhap test case :";
	int t; cin >> t;
	cin.ignore();
	vector<string> v;
	while (t--) {
		cout << "Nhap chuoi :";
		string s;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++) {
			s[i] = tolower(s[i]);//--> Doi chu hoa->thuong
		}
		stringstream a(s);
		string tmp;
		while (a >> tmp) {
			v.push_back(tmp);
		}
		cout << v[v.size() - 1];//cout ra cai ten 
		for (int i = 0; i < v.size() - 1; i++){
			cout << v[i][0];// truy cap den chi so dau cua tu 
		}
		cout << "@gmail.com" << endl;
	}
}
//input:
//2
//TrUong TiEn ANH
//nGUYEN xUAn viet dUc
//ouput:
//anhtt@gmail.com
//ducnxv@gmail.com