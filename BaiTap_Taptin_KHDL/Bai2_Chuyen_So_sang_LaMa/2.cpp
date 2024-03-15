
#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
using namespace std;
int a[] = { 1,5,10,50,100,500,1000 };
char s[] = "IVXLCDM";
int tim(int n) {
	for (int i = 0; i < 7; i++) {
		if (a[i] == n)
			return i;
	}
}

int main() {
	int n;
	cout << "Nhap so N : ";
	cin >> n;

}