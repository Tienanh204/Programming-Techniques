#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
#define pi 3.141592653589793238
using namespace std;
struct S{
	long long x, y;
};

void ketqua(S& m,S&n,S&p) {
	long long a = sqrt(pow(m.x - n.x, 2) + pow(m.y - n.y, 2));
	long long b = sqrt(pow(m.x - p.x, 2) + pow(m.y - p.y, 2));
	long long c = sqrt(pow(p.x - n.x, 2) + pow(p.y - n.y, 2));
	if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
		cout << "INVALID" << endl;
	}
	else {
		long long t = a + b + c / 2 * 1.0;
		long long s = sqrt(t * (t - a) * (t - b) * (t - c));
		long long s1 = a * b * c / 4 * s;
		cout << "s=" << pi*pow(s1,2) << endl;
	}

}
int main() {
	cout << "So test case :";
	int t; cin >> t; int i = 1;
	while (t--) {
		S  m, n, p;
		cout << "Nhap diem " << i << " :";
		cin>>m.x >> m.y >> n.x >> n.y >> p.x >> p.y;
		ketqua(m, n, p);
		i++;
	}
}