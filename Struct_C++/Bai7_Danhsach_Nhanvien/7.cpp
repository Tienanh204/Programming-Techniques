#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
struct nhanvien {
	string ms, name, sex, ns, adress, mst, ns1;
};
void nhap(nhanvien& x){
	cout <<"Nhap ten :";
	cin.ignore();
	getline(cin, x.name);
	cout << "Nhap gioi tinh :";
	cin >> x.sex;
	cout << "Nhap nam sinh dd/mm/yyyy :";
	cin.ignore();
	cin >> x.ns;
	cout << "Nhap dia chi :";
	cin.ignore();
	getline(cin, x.adress);
	cout << "Nhap ma so thue :";
	cin >> x.mst;
	cout << "Nhap ngay ky hop dong dd/mm/yyyy :";
	cin.ignore();
	getline(cin, x.ns1);
}
void in(nhanvien a[],int n) {
	for (int i = 0; i < n; i++){
		string s = to_string(i + 1);//chuyen so-->xau
		while (s.size() < 5) s = "0" + s;
		cout <<s<< " " << a[i].name << " " << a[i].sex << " " << a[i].ns << " " << a[i].adress << " " << a[i].mst << " " << a[i].ns1 << endl;
	}
}
int main() {
	nhanvien a[50];
	cout << "So nhan vien :";
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		nhap(a[i]);
	}
	in(a, n);
}