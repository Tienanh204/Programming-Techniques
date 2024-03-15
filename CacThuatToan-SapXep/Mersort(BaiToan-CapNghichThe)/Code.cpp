

//cap nghich the : neu phan tu dung truoc lon hon phan tu dung sau (xet theo chieu mang tang dan)
//a[i]>a[j] && i<j
//vd : 8 2 1 9 7 3--> cac cap nghic the : (8,2) (8,1) (8,7) (8,3) (2,1)

#include<iostream>
#include<vector>
using namespace std;
int  Merge(int a[], int l, int m, int r)
{
	// tao 2 mang vector de luu 2 day con
	vector<int> x(a + l, a + m + 1);// no khong lay can tren nen phai +1
	vector<int> y(a + m + 1, a + r + 1);

	int i = 0, j = 0, cnt = l, dem = 0;// cnt khoi tao chi so bat dau cua mang va luu ket qua
	while (i < x.size() && j < y.size())
	{
		if (x[i] <= y[j]) {
			a[cnt] = x[i];
			cnt++;
			i++;
		}
		else {
			dem += x.size() - i;
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
	return dem;
}

int mergesort(int a[], int l, int r) {
	int dem1 = 0;
	if (l < r) {
		int m = (l + r) / 2;
		dem1 += mergesort(a, l, m);
		dem1 += mergesort(a, m+1, r);
		dem1 += Merge(a,l,m,r);
	}
	return dem1;

}
int main() {
	int n; cin >> n;
	int a[100];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout<<mergesort(a, 0, n - 1);
	
	cout << endl;
	return 0;
}