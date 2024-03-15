#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;
struct tuoi {
	string name, ns;
};

int sosanh(tuoi x,tuoi y){
	string s = x.ns, t = y.ns;
	int n1 = (s[0] - '0') * 10 + (s[1] - '0'), t1 = (s[3] - '0') * 10 + (s[4] - '0'), na1 = stoi(s.substr(6));
	int n2 = (t[0] - '0') * 10 + (t[1] - '0'), t2 = (t[3] - '0') * 10 + (t[4] - '0'), na2 = stoi(t.substr(6));
	if (na1 != na2) return na1 <na2;
	if(t1!=t2) return t1 < t2;
	return n1 < n2;
}
void nhap(tuoi  &a){
	cout << "Nhap ten :";
	getline(cin, a.name);
	cout << "Nhap dd/mm/yyyy :";
	cin >> a.ns;
	cin.ignore();
}
int main() {
	tuoi x[10];
	cout << "Co bao nhieu nguoi :";
	int t; cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++) {
		nhap(x[i]);
	}
	sort(x, x + t, sosanh);
	cout <<"Nguoi gia nhat :" <<x[0].name << endl;
	cout <<"Nguoi tre nhat :"<< x[t - 1].name << endl;
}