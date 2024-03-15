#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
using namespace std;

int a[] = { 1,5,10,50,100,500,1000 };
char s[] = "IVXLCDM";
int tim(char c) {
	for (int i = 0; i < 7; i++) {
		if (s[i] == c) return i;
	}
}
int ketqua(char c[]) {
	int n = strlen(c);
	int res = a[tim(c[n - 1])];
	for (int i = n - 1; i > 0; i--) {
		int vt1 = tim(c[i]);
		int vt2 = tim(c[i - 1]);
		if (a[vt1] <= a[vt2]) {
			res += a[vt2];
		}
		else {
			res -= a[vt2];
		}
	}
	return res;
}
int main() {
	char c[100];
	cout << "Nhap so la ma :";
	cin >> c;
	cout << ketqua(c);
}
