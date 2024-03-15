#include<iostream>
#include<map>
#include<set>
using namespace std;
int main() {
	int a[50];
	//lam 2 cach ca set va map
	map<int, int> mp;
	set<int> s;
	cout << "Nhap test case :";
	int t; cin >> t;
	while (t--) {
		cout << "Nhap so phan tu : ";
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
			s.insert(a[i]);
		}
		cout << "So phan tu khac nhau trong mang : " << endl;
		cout << mp.size() << endl;
		cout << s.size() << endl;
	}
}