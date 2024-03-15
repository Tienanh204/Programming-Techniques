#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
struct sinhvien {
	string hoten, ns;
	float diem1, diem2, diem3;
};
void nhap(sinhvien& x) {
	cout << "Nhap ho ten :";
	getline(cin, x.hoten);
	cout << "Nhap diem 3 mon :";
	cin >> x.diem1 >> x.diem2 >> x.diem3;
	cout << "Nhap dd/mm/yyyy :";
	cin.ignore();
	getline(cin, x.ns);
}
int tong(sinhvien& x) {
	return (x.diem1 + x.diem2 + x.diem3);
}
void in(sinhvien& x) {
	cout << x.hoten << " " <<x.ns<<" " << fixed << setprecision(1) << tong(x) << endl;
}
int main() {
	sinhvien x;
	nhap(x);
	in(x);
}