#include"Function.h"
int luachon() {
	int lc;
	system("cls");
	cout << "_______________MENU_____________\n";
	cout << "1.Nhap thong tin sinh vien \n";
	cout << "2.Hien thi toan bo danh sach sinh vien \n";
	cout << "3.Tim kiem sinh vien theo ma sinh vien (ten,lop) ,hien thi cac sinh vien co ma dung voi ma can tim hoac chua ma can tim \n";
	cout << "4.Liet ke sinh vien co diem GPA cao nhat \n";
	cout << "5.Liet ke cac sinh vien co diem GPA>=2.5 theo thu tu diem giam dan \n";
	cout << "6.Sap xep sinh vien theo ten \n";
	cout << "7.Sap xep sinh vien theo lop,cac sinh vien cung lop se xep theo thu tu tang dan theo thu tu tu dien , chu y sap xep ten truoc sau den ho va ten dem \n";
	cout << "8.Sawp xep sinh vien theo lop, cac sinh vien cung lop xep theo thu tu diem GPA giam dan \n";
	cout << "0.Thoat!\n";
	cout << "________________________________\n";
	cout << "Nhap lua chon :";
	cin >> lc;
	system("cls");
	return lc;
}
int main(){
	sv a[50];
	int lc;
	int n = 0;//luu so sinh vien
	lc = luachon();
	if (lc != 1) {
		cout << "Ban can nhap thong tin sinh vien de coi lua chon " << lc << endl;
		return 0;
	}
	else {
		while (1) {
			lc = luachon();
			if (lc == 1) {
				nhap(a[n]);
				n++;
				system("pause");
			}
			else if (lc == 2) {
				ds(a,n);
				system("pause");
			}
			else if (lc == 3) {
				tim(a, n);
				system("pause");
			}
			else if (lc == 4) {
				lietke1(a, n);
				system("pause");
			}
			else if (lc == 5) {
				lietke2(a, n);
				system("pause");
			}
			else if (lc == 6) {
				sapxep(a, n);
				system("pause");
			}
			else if (lc == 7) {
				sapxep1(a, n);
				system("pause");
			}
			else if (lc == 8) {
				sapxep2(a, n);
				system("pause");
			}
			else if (lc == 0) {
				return 0;
			}
		}
	}
	return 0;
}
//22120017
//Truong Tien Anh
//22CTT2
//21/06/2004
//4.0

//22280012
//Nguyen Xuan Viet Duc
//22KDL2A
//06/11/2004
//2.5

//2257010175
//Truong Quanh Khanh
//NguVanB
//21/08/2002
//3.0
