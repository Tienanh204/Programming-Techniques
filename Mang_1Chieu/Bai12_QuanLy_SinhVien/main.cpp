#include"Function.h"
int luachon() {
	system("cls");
	cout << "_____________*MENU*___________\n";
	cout << "1.Nhap danh sach sinh vien\n";
	cout << "2.Doc danh sach sinh vien tu tap tin\n";
	cout << "3.Hien thi danh sach sinh vien\n";
	cout << "4.Tim kiems sinh vien theo ho ten hoac que quan(nhap tu ban phim)\n";
	cout << "5.Sap xep sinh vien tang dan theo ho ten\n";
	cout << "6.Tim sinh vien du dieu kien trao hoc bong va ghi vao file (hocbong.txt)\n";
	cout << "0.Thoat !\n";
	cout << "______________________________\n";
	cout << "Nhap lua chon : ";
	int lc; cin >> lc;
	system("cls");
	return lc;
}

int main() {
	sv x;
	sv a[100];
	int lc; int n,i=0;
	bool ok = false;
	while (1)
	{
		lc = luachon();
		if (lc == 1) 
		{
			ok = true;
			cout << "Nhap so sinh vien : "; cin >> n;
			while (i<n) {
				nhap(a[i]);
				i++;
			}
			system("pause");
		}

		else if (lc == 2) 
		{
			doc(x);
			system("pause");
		}

		else if (lc == 3) 
		{
			if (ok == false) {
				cout << "Ban can nhap thong tin sinh vien de xem lua chon " << lc << endl;
			}
			else {
				xuat(a, i);
			}
			system("pause");
		}

		else if (lc == 4)
		{
			if (ok == false) {
				cout << "Ban can nhap thong tin sinh vien de xem lua chon " << lc << endl;
			}
			else {
				timkiem(a, n);
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

		else if (lc == 6) 
		{
			if (ok == false) {
				cout << "Ban can nhap thong tin sinh vien de xem lua chon " << lc << endl;
			}
			else {
				hocbong(a, n);
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