#include<iostream>
#include<map>
#include<set>
using namespace std;
int main() {
	map<long long, long long> mp;
	cout << "Nhap test case : ";
	int t; cin >> t;
	while (t--) {

		cout << "Nhap so phan tu : ";
		int n; cin >> n;
		cout << "Nhap mang : ";
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			mp[x]++;
		}
		int res = -1, res1=0;
		for (auto it : mp) {
			if (it.second > res) {
				res = it.second;
				res1 = it.first;
			}
		}
		cout << res1 << " " << res << endl;
	}
}