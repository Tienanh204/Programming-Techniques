#include<iostream>
using namespace std;
// y tuong : tim UCLN cua tu va mau roi chia tu cho ucln vaf mau cho ucln
struct phanso {
	long long tu, mau;
};
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
void nhap(phanso& p) {
	cout << "Nhap tu va mau :";
	cin >> p.tu >> p.mau;
}
void rutgon(phanso& p) {
	long long k = gcd(p.tu, p.mau);
	p.tu /= k;
	p.mau /= k;
}
void in(phanso& p) {
	cout << "Sau kho rut gon :";
	cout << p.tu << "/" << p.mau << endl;
}
int main() {
	phanso p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

