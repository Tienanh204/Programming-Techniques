#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
struct sinhvien {
	string name,ns;
	string lop;
	float gpa;
};
void nhap(sinhvien& a) {
	cout << "Nhap ho ten :";
	getline(cin, a.name);
	cout << "Nhap d/m/y :";
	getline(cin, a.ns);
	cout << "Nhap ma lop :";
	cin >> a.lop;
	cout << "Nhap gpa :";
	cin >> a.gpa;
}
void chuanhoa(sinhvien &x) {
	string ns;
	if (x.ns[1] == '/') {
		x.ns.insert(0, "0");
	}
	if (x.ns[4] == '/') {
		x.ns.insert(3, "0");
	}
	cout << x.ns;
}
void in(sinhvien& x) {
	cout << "B20CQCN04-B" << " " << x.name << " " << x.lop << " ";
	chuanhoa(x);
	cout<< " " << x.gpa << endl;
}
int main() {
	sinhvien x;
	nhap(x);
	in(x);
}