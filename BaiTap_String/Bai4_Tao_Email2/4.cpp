#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>
using namespace std;
int cnt[100];
int main() {
	cout << "Nhap test case :";
	int t; cin >> t;
	cin.ignore();	map<string, int> mp;
	while (t--) {
		cout << "Nhap chuoi :";
		string s;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++) {
			s[i] = tolower(s[i]);
		}
		vector<string> v;
		string tmp, res = "";
		stringstream a(s);
		while (a >> tmp) {
			v.push_back(tmp);
		}
		res += v[v.size() - 1];
		for (int i = 0; i < v.size() - 1; i++) {
			res += v[i][0];
		}
		if (mp[res] == 0) {
			cout << res << "@gmail.com" << endl;
		}
		else {
			cout << res << mp[res] + 1 << "@gmail.com" << endl;
		}
		mp[res]++;
	}
}
