#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
struct point {
	double x, y;
};
void nhap(point& p) {
	
	cout << "Nhap lan luot toa do x , y :";
	cin >> p.x >> p.y;
}
int khoangcach(point& a, point& b) {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}
int main() {
	point A, B;
	cout << "Nhap test case :";
	int t; cin >> t;
	while (t--) {
		nhap(A); nhap(B);
		cout << fixed << setprecision(4) << khoangcach(A, B) << endl;
	}
	return 0;
}
