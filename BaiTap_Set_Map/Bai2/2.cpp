#include<iostream>
#include<map>
#include<set>
using namespace std;
int main() {
	int a[50];
	//lam 2 cach ca set va map
	map<int, int> mp, mp1;
	set<int> s, s1;


	cout << "Nhap test case : ";
	int t; cin >> t;

	while (t--)
	{
		cout << "Nhap so phan tu n : ";
		int n; cin >> n;

		cout << "Nhap phan tu cho mang : ";
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			mp[a[i]]++;
			s.insert(a[i]);
		}

			cout << "Nhap q : ";
			int q; cin >> q;

			while (q--) 
			{

			cout << "Nhap phan tu can kiem tra : ";
				int k; cin >> k;
				//Set
				bool ok1 = false;
				for (auto x : s) 
				{
					if (x == k)
					{
						cout << "YES" << endl;
						ok1 = true;
					}
				}

				if (ok1 == false)
				{
					cout << "NO" << endl;
				}

				//Map
				bool ok = false;
				for (auto it:mp)
				{
		     	if (it.first == k) 
					{
						cout << "YES" << endl;
						ok = true;
					}
			}

				if (ok == false) 
				{
					cout << "NO" << endl;
				}

		//Mang
			bool ok2 = false;
			for (int i = 0; i < n; i++) {
				if (a[i] == k) {
					cout << "YES" << endl;
					ok2 = true;
					break;
				}
			}
			if (ok2 == false) {
				cout << "No" << endl;
			}
		}
	}
}



