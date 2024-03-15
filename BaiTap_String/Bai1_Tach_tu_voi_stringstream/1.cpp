#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main() {
	cout << "Nhap test case :";
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		cout << "Nhap chuoi :";
		getline(cin, s);
		stringstream a(s);
		string tmp; int cnt = 0;
		while (a >> tmp) {
			cnt++;
		}
		cout << "So tu trong chuoi :" << " " <<cnt<< endl;
	}
}
//input : Tien Anh Dep Trai
//output : 4