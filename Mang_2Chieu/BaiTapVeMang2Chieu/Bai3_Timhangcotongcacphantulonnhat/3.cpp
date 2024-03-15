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
		int res = -1e9;
		for (int i = 1; i <= n; i++) {
			int s = 0;
			for (int j = 1; j <= m; j++) {
				s += a[i][j];
			}
			res = max(res, s);

		}
		cout << res << endl;
		for (int i = 1; i <= n; i++) {
			int s1 = 0;
			for (int j = 1; j <= m; j++) {
				s1 += a[i][j];
			}
			if (s1 == res) {
				cout << i <<" ";
		//		break;
			}
		}
	//	int dem = 0;
	//	for (int i = 1; i <= n; i++) {
	//		int s1 = 0;
	//		for (int j = 1; j <= m; j++) {
	//			s1 += a[i][j];
	//		}
	//		if (s1 == res) {
	//			dem = i;
	//		}
	//	}
	//	cout << dem << endl;
		// may cai dong cmt line la neu de no yeu cau trong ma tran ma co nhieu dong cung tong max thi ta lay hang dau voi cuoi 

	}
}