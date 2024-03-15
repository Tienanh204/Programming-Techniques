#include<iostream>
using namespace std;
int main(){
	int a[100][100];
	cout << "Nhap test case : ";
	int t; cin >> t;
	while (t--) {
		cout << "Nhap ma tran MxN " << endl;
		int n,m; cin >> n>>m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		long long s = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				s += a[i][j];
			}
		}
		cout << "Tong tam giac duoi : " << s << endl;
	}
    
}