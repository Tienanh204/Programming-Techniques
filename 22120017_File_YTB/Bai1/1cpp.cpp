//Bài 1. Đọc các số nguyên từ file INPUT.TXT biết
//+ Dòng đầu tiên là 1 số nguyên biểu diễn số lượng các số nguyên cần đọc
//+ Dòng thứ 2 là 1 dãy các số nguyên cần đọc
//VD : INPUT.TXT
//5
//1 4 7 8 9
//== = Yêu cầu == =
//-Tìm phần tử lớn nhất trong mảng số nguyên đó và ghi vào file KETQUA.TXT.

#include<iostream>
#include <fstream>
using namespace std;
int main() {
	int a[100]; int n=0;
	ifstream in;//doi tuong doc file
	in.open("INPUT.txt", ios_base::in);// mo file len con tro se vo vi tri dau file
	in >> n;//doc gia tri dong dau tien tu file vao cho bien n
	for (int i = 0; i < n; i++) {//nhap gia tri tu file vo cho mang
		in >> a[i];
	}
	int res = -1;
	for (int i = 0; i < n; i++) {// ham tim gia tri ptu lon nhat
		res = max(res, a[i]);
	}
	cout << "Phan tu lon nhat trong mang :" << " ";
	cout << res << endl;

	ofstream out;//doi tuong ghi file
	out.open("KETQUA.txt", ios_base::out);
	out << res;//ghi gia tri max vao file
		out.close();
	
	in.close();
	system("pause");
	return 0;
}