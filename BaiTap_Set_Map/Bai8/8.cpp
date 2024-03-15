#include<iostream>
#include<map>
#include<set>
#include<string>
#include<sstream>
using namespace std;
int main() {
	cout << "Nhap test case : ";
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		cout << "Nhap chuoi : ";
		string x;
		getline(cin, x);
		map<string, int> mp;
		stringstream ss(x);
		string tmp;
		while (ss >> tmp) {
			mp[tmp]++;
		}
		int res = -1;
		string fre = "";
		for (auto it : mp) {
			if (it.second > res) {
				res = it.second;
				fre = it.first;
			}
		}
		cout << "Tu xuat hien nhieu nhat : " << fre << endl;
	}
}