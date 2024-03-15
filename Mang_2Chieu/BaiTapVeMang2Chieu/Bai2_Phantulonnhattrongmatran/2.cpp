#include<iostream>
#include<math.h>
#include<map>
using namespace std;
int main() {
	int t; cin >> t;
	int a[500][500];
	while (t--) {
		int n, m; cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> a[i][j];
			}
		}
		int res = -1e9, s = 0, c1 = 0, c2 = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				res = max(res, a[i][j]);
			}
		}
		cout << res << endl;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (a[i][j] == res) {
					cout << "Vi tri trong ma tran :" << " " << "A" << "[" << i << "]" << "[" << j << "]" << endl;
				}
			}
		}

	}
}