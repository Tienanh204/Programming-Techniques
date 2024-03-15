#include<iostream>
#include<map>
#include<set>
using namespace std;
int n, m, t;
int main() 
{
	int a[50], b[50];
	map<int, bool> mp;

	cout << "Nhap test case : ";
	cin >> t;

	while (t--) 
	{
		cout << "Nhap n,m :";
		cin >> n >> m;
		cout << "Nhap mang a : ";
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << "Nhap mang b : ";
		for (int j = 0; j < m; j++) {
			int x; cin >> x;
			mp[x] = true;
		}

		bool ok = false;
		for (int x : a) {
			if (mp.find(x) == mp.end()) {
				cout << x << " ";
				ok = true;
			}
		}
		if (!ok) {
			cout << "NOT FOUND" << endl;
		}
	}
}