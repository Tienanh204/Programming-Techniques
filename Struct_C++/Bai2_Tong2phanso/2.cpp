#include<iostream>
using namespace std;
struct phanso {
	long long tu, mau;
};
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
void nhap(phanso& x) {
	cout << "Nhap phan so " << endl;
	cin >> x.tu >> x.mau;

}
void tong(phanso& p, phanso& q) {
	int t, m;
	t = p.tu * q.mau + p.mau * q.tu;
	m = p.mau * q.mau;
	long long l = gcd(t, m);
	t /= l;
	m /= l;
	cout << t << "/" << m << endl;
}
int main(){
	phanso p, q;
	nhap(p); nhap(q);
	tong(p, q);
	return 0;
}