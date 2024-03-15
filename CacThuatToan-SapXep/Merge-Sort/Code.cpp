#include<iostream>
#include<vector>
using namespace std;

void Merge(int a[], int l, int m, int r)
{
	// tao 2 mang vector de luu 2 day con
	vector<int> x(a + l, a + m + 1);// no khong lay can tren nen phai +1
	vector<int> y(a + m + 1, a + r + 1);

	int i = 0, j = 0, cnt = l;// cnt khoi tao chi so bat dau cua mang va luu ket qua
	while (i<x.size()&&j<y.size())
	{
		if (x[i] <= y[j]) {
			a[cnt] = x[i];
			cnt++;
			i++;
		}
		else {
			a[cnt] = y[j];
			cnt++;
			j++;
		}
	}
	while (i < x.size()) {
		a[cnt++] = x[i++];
	}
	while (j < y.size()) {
		a[cnt++] = y[j++];
	}
}

void mergesort(int a[], int l, int r) {
	if (l >= r) return;
	int m = (l + r) / 2;
	mergesort(a, l, m );
	mergesort(a, m + 1, r);
	Merge(a, l, m, r);

}
int main() {
	int n; cin >> n;
	int a[100];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	mergesort(a, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}