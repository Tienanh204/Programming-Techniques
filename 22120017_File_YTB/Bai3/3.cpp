//Bài 3. Đọc các số nguyên từ file INPUT.TXT biết
//+ Chỉ có 1 dòng duy nhất chứa các số nguyên và mỗi số nguyên cách nhau bởi 1 dấu phẩy
//VD : INPUT.TXT
//12, 3, 6, 9
//
//== = Yêu cầu == =
//-File UCLN.TXT lưu 1 số nguyên là ước số chung lớn nhất của tất cả các phần tử của mảng
//- File BCNN.TXT lưu 1 số nguyên là bội chung nhỏ nhất của tất cả các phần tử của mảng
#include<iostream>
#include <fstream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) return a;
	 return gcd(b, a % b);
}
int bcnn(int a, int b) {
	return a * b / gcd(a, b);
}
int main() {
	ifstream f1;
	int a[100], n = 0;
	f1.open("INPUT.txt",ios_base::in);
	while (f1.eof() == false) {
		f1 >> a[n];
		n++;
		char x;
		f1 >> x;//doc dau "," vao bien x de con tro chi vi nhay qua dau phay , chi luu so nguyen vao mang thoi
	}
	ofstream f2 , f3;
	int t = 1;
	f2.open("UCLN.txt", ios_base::out);
	f3.open("BCNN.txt", ios_base::out);
	int x = a[0], y = a[0];
	for (int i = 1; i < n; i++){
		x = gcd(x, a[i]);
		y = bcnn(y, a[i]);
	}
	f2 << x;
	f3 << y;
	f3.close();
	f2.close();
	f1.close();
	return 0;
}
