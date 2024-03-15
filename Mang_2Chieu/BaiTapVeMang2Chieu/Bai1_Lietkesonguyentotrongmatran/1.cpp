#include<iostream>
#include<math.h>
#include<map>
using namespace std;
int ngto(int n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return n > 1;
}
int main() {
	map <int, int> mp;
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int a[100][100];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (ngto(a[i][i] && mp[a[i][j]] == 0)) {
					cout << a[i][j];
					mp[a[i][j]] = 1;//danh dau thang nay da xuat hien de khi gap lai no se bo qua
				}
			}
		}
	}
}