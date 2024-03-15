#include"Function.h"
int luachon() {
	system("cls");
	cout << "_____________*MENU*___________\n";
	cout << "1.Nhap danh sach sinh vien\n";
	cout << "2.Hien thi danh sach sinh vien\n";
	cout << "3.Liet ke hoc sinh co diem toan <5\n";
	cout << "4.Dem so luong hoc sinh co diem toan va van >8\n";
	cout << "5.Sap xep hoc sinh giam dan theo diem TBM\n";
	cout << "0.Thoat !\n";
	cout << "______________________________\n";
	cout << "Nhap lua chon : ";
	int lc; cin >> lc;
	system("cls");
	return lc;
}


int main() {
	hs x;
	hs a[50];
	int lc; int n, i = 0;
	bool ok = false;
	while (1)
	{
		lc = luachon();
		if (lc == 1)
		{
			ok = true;
			cout << "Nhap so sinh vien : "; cin >> n;
			while (i < n) {
				nhap(a[i]);
				i++;
			}
			system("pause");
		}

		else if (lc == 2)
		{
			if (ok == false) {
				cout << "Ban can nhap thong tin sinh vien de xem lua chon " << lc << endl;
			}
			else {
				xuat(a, n);
			}
			system("pause");
		}

		else if (lc == 3)
		{
			if (ok == false) {
				cout << "Ban can nhap thong tin sinh vien de xem lua chon " << lc << endl;
			}
			else {
				dem(a, n);
			}
			system("pause");
		}

		else if (lc == 4)
		{
			if (ok == false) {
				cout << "Ban can nhap thong tin sinh vien de xem lua chon " << lc << endl;
			}
			else {
				dem2(a, n);
			}
			system("pause");
		}

		else if (lc == 5)
		{
			if (ok == false) {
				cout << "Ban can nhap thong tin sinh vien de xem lua chon " << lc << endl;
			}
			else {
				sapxep(a, n);
			}
			system("pause");
		}

		else if (lc == 0)
		{
			return 0;
		}
	}
	system("pause");
	return 0;
}
