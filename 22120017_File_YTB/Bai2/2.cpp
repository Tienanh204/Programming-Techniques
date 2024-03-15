//Bài 2. Đọc các số nguyên từ file INPUT.TXT biết
//+ Chỉ có 1 dòng duy nhất chứa các số nguyên
//VD : INPUT.TXT
//12 345 135 7 12 153
//== = Yêu cầu == =
//Tìm các phần tử là số Amstrong trong mảng số nguyên đó và ghi vào file AMSTRONG.TXT.
//note bai 2 kho hon bai 1 vi ta khong biet trong file co bn phan tu
#include<iostream>
#include <fstream>
using namespace std;
int main() {
	int a[100]; int n=0;
	ifstream in;
	in.open("INPUT.txt", ios_base::in);
	while (in.eof()==false) {//Hàm eof() trả về true khi con trỏ đã trỏ tới cuối file và với false thì ngược lại.
		in >> a[n];//doc gia tri tu file vao mang thu n , va sau do mang tang n++
		n++;
	}
	cout << "cac phan tu trong mang :" << " ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	ofstream out;
	out.open("ASMTRONG.txt", ios_base::out);
	for (int i = 0; i < n; i++) {// ham kiem tra so amstrong neu la so amstrong thi minh nhap no vo file
		int dem = a[i]; int s = 0, r = 0;
		int dem2 = a[i];
		while (dem2 != 0) {
			 r = dem2 % 10;
			 s += r * r * r;
			dem2 /= 10;
		}
		if (s == dem) {// tuc so nay la so amstrong
			out<<dem<<" ";//in no vo file
		}
	}
	out.close();
	in.close();
}