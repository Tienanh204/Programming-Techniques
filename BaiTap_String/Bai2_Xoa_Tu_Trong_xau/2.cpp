#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main() {
	string s;
	cout << "Nhap chuoi :";
	getline(cin, s);
	stringstream a(s);
	string tmp;
	cout << "Nhap tu can xoa :";
	string x; cin >> x;
	while (a >> tmp) {
		if (tmp != x) {
			cout << tmp << " ";
		}
	}
}
//input :tien anh ngu lap trinh
//tu muon xoa : trinh
//output :tien anh ngu lap



//note: neu de co bao in sao ma sau chu lap khong co dau cach(output cua minh sau chu lap no in ca dau cach as nha theo nhu code tren)
//cach de khong in dau cach
//vector<string> v;
//while (a >> tmp) {
//	if (tmp != x) {
//		v.push_back(tmp);  -- > day no vao vector
//	}
//}
//for (int i = 0; i < v.size(); i++) {
//	cout << v[i];
//	if (i != v.size() - 1) {-->tuc chi so minh in no chua phai chi so cuoi cung
//		cout << " ";
//	}
//}