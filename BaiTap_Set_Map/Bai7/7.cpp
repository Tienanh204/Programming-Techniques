#include<iostream>
#include<map>
#include<set>
#include<string>
#include<sstream>
using namespace std;
int main() {
	cout << "nhap test case : ";
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		cout << "Nhap chuoi : ";
		string x;
		getline(cin, x);
		set<string> se;
		stringstream ss(x);
		string tmp;
		while (ss >> tmp) {
			se.insert(tmp);
		}
		cout << se.size() << endl;
	}
}