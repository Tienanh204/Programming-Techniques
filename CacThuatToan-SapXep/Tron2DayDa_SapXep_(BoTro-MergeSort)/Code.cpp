#include<iostream>
using namespace std;

int main(){
	cout << "Enter n,m : ";
	int n, m;
	cin >> n >> m;
	
	int a[100], b[100];

	cout << "Enter a[] : ";
	for (int i = 0; i < n; i++) cin >> a[i];

	cout << "Enter b[] : ";
	for (int i = 0; i < m; i++) cin >> b[i];

	int i = 0, j = 0, cnt = 0, c[100 + 100];//mang tong hop

	while (i < n && j < m) {
		if (a[i] <= b[j]) {
			c[cnt++] = a[i];
			i++;
		}
		else {
			c[cnt++] = b[j];
			j++;
		}
	}
	// de cho not cac so con thua vao mang luon
	while (i < n) {
		c[cnt++] = a[i++];
	}
	while (j < m) {
		c[cnt++] = b[j++];
	}
	cout << "Mang sau khi tron : ";
	for (int i = 0; i < cnt; i++) {
		cout << c[i] << " ";
	}
	cout << endl;
	return 0;
}