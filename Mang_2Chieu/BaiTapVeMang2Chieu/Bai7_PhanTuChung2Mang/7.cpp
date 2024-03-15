#include<iostream>
#include<map>
using namespace std;
int main() {

	int a[100];
	int b[100];

	map<int,int> mp;
	cout << "Nhap n : ";
	int n; cin >> n;
	cout << "Nhap mang 1" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << "Nhap m : ";
	int m; cin >> m;
	cout << "Nhap mang 2" << endl;
	for (int j = 0; j < m; j++) {
		cin >> b[j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i] == b[j]) {
				mp[a[i]]++;
			}
		}
	}

	cout << "Phan tu trung nhau : ";
	for (auto it: mp) {
		if (it.second >= 1) {
			cout << it.first;
		}
	}
}