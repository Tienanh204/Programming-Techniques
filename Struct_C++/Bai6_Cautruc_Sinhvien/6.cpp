#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
struct sinhvien {
	string ms, name, sex, ns, adress, mst, ns1;
};
void nhap(sinhvien& x) {
	cout << "Nhap mssv :";
	getline(cin, x.ms);
	cout << "Nhap name :";
	getline(cin, x.name);
	cout << "Nhap Gioi tinh:";
	getline(cin, x.sex);
	cout << "Nhap dia chi :";
	getline(cin, x.adress);
	cout << "Nhap ma so thue :";
	getline(cin, x.mst);
	cout << "Nhap ngay ky hop dong :";
	getline(cin, x.ns1);

}
void in(sinhvien& x) {
	cout << x.ms << " " << x.name << " " << x.sex << " " << x.adress << " " << x.mst << " " << x.ns1 << endl;
}
int main() {
	sinhvien a;
	nhap(a);
	in(a);
}