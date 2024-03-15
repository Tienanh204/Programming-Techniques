#include<iostream>
#include<math.h>
using namespace std;

//2212006
//canh manh ba
//tien anh
//15
//15
//2030
//2212009
//vung dat quy
//duc
//6
//7
//2004
//2212008
//gio
//quang khanh
//7 
//8
//2003

struct BOOK
{
	char* id;

	char* sach;

	char* tg;

	int gia;

	int trang;

	int nam;
};

//Cau1
void Enter_List(BOOK &b)
{
	char tmp1[30], tmp2[30], tmp3[30];
	//Nhap ma so
	cout << "Nhap id: ";

	cin.ignore();

	cin.getline(tmp1, 30);

	b.id = new char[strlen(tmp1) + 1];

	strcpy_s(b.id, strlen(tmp1) + 1, tmp1);

	//Ten Sach
	cout << "Nhap Ten Sach: ";

	cin.getline(tmp2, 30);

	b.sach = new char[strlen(tmp2) + 1];

	strcpy_s(b.sach, strlen(tmp2) + 1, tmp2);

	//Ten Tac Gia
	cout << "Nhap Tac Gia: ";

	cin.getline(tmp3, 30);

	b.tg = new char[strlen(tmp3) + 1];

	strcpy_s(b.tg, strlen(tmp3) + 1, tmp3);

	//Nhap Gia Ban
	cout << "Nhap gia: ";

	cin >> b.gia;

	cout << "so trang: ";

	cin >> b.trang;

	cout << "Nam Xuat Ban: ";

	cin >> b.nam;

}


//Cau2
void Print_List(BOOK* b,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "STT: " << i + 1 << endl;

		cout << "ID: " << b[i].id << endl;

		cout << "Ten Sach: " << b[i].sach << endl;

		cout << "Tac Gia: " << b[i].tg << endl;

		cout << "Gia: " << b[i].gia << endl;

		cout << "So Trang: " << b[i].trang << endl;

		cout << "Nam XB: " << b[i].nam << endl;

		cout << endl;

	}
}
//Cau3
// BOOK &b : day chi la mot doi tuong
//BOOK *b : day chi cac doi tuong ma b co the tro den

void Ascending_year(BOOK* b,int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;

		for (int j = i + 1; j < n; j++)
		{
			if (b[min].nam >b[j].nam)

				min = j;
		}

		swap(b[min], b[i]);

	}
}



//Cau4
void Print_book(BOOK& b)
{
	cout << "ID: " << b.id << endl;

	cout << "Ten Sach: " << b.sach << endl;

	cout << "Ten Tac Gia" << b.tg << endl;

	cout << "Gia: " << b.gia << endl;

	cout << "So Trang: " << b.trang << endl;

	cout << "Nam XB: " << b.nam << endl;
}


pair<BOOK,bool> Find(BOOK* b,int n,int k)
{

	bool check = false;

	int index=-1;

	int res = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		if (b[i].trang < k)
		{
			if (b[i].trang > res) {

				res = b[i].trang;

				check = true;

				index = i;

			}
		}
	}

	if (index == -1)
	{
		return make_pair(BOOK(), false);
	}
	else
	{
		return make_pair(b[index], true);
	}
}

//Cau5
void insert_Book(BOOK* b, BOOK &ib, int &n, int index)
{
	for (int i = n; i > index; i--)
	{
		b[i] = b[i - 1];
	}
	n++;

	b[index] = ib;
}

//Cau6
bool delete_year(BOOK* b,int &n, int year)
{
	bool check = false;

	int cnt = n;

	for (int i = 0; i < cnt; i++)
	{
		if (b[i].nam < year)
		{
			for (int j = i; j < cnt-1; j++)
			{
				b[j] = b[j + 1];
			}

			check = true;

			n--;
		}
	}

	return check;
}

int luachon() {
	system("cls");
	cout << "_______________________________MENU___________________________\n";
	cout << "1.Nhap danh sach cac quyen sach.\n";
	cout << "2.Xuat danh sach cac quyen sach.\n";
	cout << "3.Sap xep cac quyen sach tang dan theo nam xuat ban.\n";
	cout << "4.Tim quyen sach it hon k trang co gia ban cao nhat trong mang.\n";
	cout << "5.Them mot quyen sach vao trong mang.\n";
	cout << "6.Xoa cac quyen sach co nam xuat ban truoc nam chi dinh\n";
	cout << "0.Thoat !\n";
	cout << "______________________________________________________________\n";
	cout << "Nhap lua chon : ";
	int lc; cin >> lc;
	system("cls");
	return lc;
}


int main() {

	BOOK* x = new BOOK;
	int lc, n = 0;

	bool ok = false;

	while (1)
	{
		lc = luachon();

		if (lc == 1)
		{
			do {
				cout << "Nhap so quyen sach: ";
				cin >> n;

				if (cin.fail()) {
					cout << "Nhap khong hop le. Hay nhap lai.\n";
					cin.clear();    // Xóa trạng thái lỗi của đối tượng cin
					cin.ignore(100, '\n'); // Xóa các ký tự không hợp lệ khỏi đầu vào
				}
				else if (n <= 0) {
					cout << "So Sach khong hop le hay nhap lai.\n";
				}
			} while (n <= 0 || cin.fail());


			ok = true;

			x = new BOOK[n];

			cout << "__________Nhap Danh Sach Cac Quyen Sach________" << endl;

			for (int i = 0; i < n; i++)
			{

				Enter_List(x[i]);

				cout << endl;

			}
			system("pause");

		}


		else if (lc == 2)
		{
			if (ok == false) cout << "Nhap thong tin sach truoc khi xem lua chon nay" << endl;

			else
			{
				cout << "************** DANH SACH CAC QUYEN SACH  ****************" << endl;

				Print_List(x, n);

				cout << "*********************************************************" << endl;

			}

			system("pause");
		}


		else if (lc == 3)
		{

			if (ok == false) cout << "Nhap thong tin sach truoc khi xem lua chon nay" << endl;

			else Ascending_year(x,n);

			system("pause");

		}



		else if (lc == 4)
		{
			if (ok == false) cout << "Nhap thong tin sach truoc khi xem lua chon nay" << endl;

			else
			{
				cout << "Nhap so trang: ";

				int k; cin >> k;

				pair<BOOK, bool>p = Find(x, n, k);

				if (p.second == false)
				{
					cout << "Khong co quyen nao thoa man" << endl;
				}
				else
				{
					cout << "*********** QUYEN SACH CAN TIM ************" << endl;

					Print_book(p.first);
				}
			}

			system("pause");
		}

		else if (lc == 5)
		{
			if (ok == false) cout << "Nhap thong tin sach truoc khi xem lua chon nay" << endl;

			else
			{
				cout << "************ THONG TIN SACH CAN THEM ************" << endl;

				BOOK ib;

				Enter_List(ib);

				cout << endl;

				int index;

				do
				{
					cout << "Nhap vi tri can them: ";

					 cin >> index;

					if (index<0 || index>n)
					{
						cout << "Vi tri nhap khong hop le!" << endl;
					}
				} while (index<0 || index>n);
				
				insert_Book(x, ib, n, index);
			}

			system("pause");
		}

		else if (lc == 6)
		{
			if (ok == false) cout << "Nhap thong tin sach truoc khi xem lua chon nay" << endl;

			else
			{
				cout << "Nhap nam: ";

				int year; cin >> year;

				if (delete_year(x, n, year) == false)
				{
					cout << "Khong co quyen sach nao hop le" << endl;
				}
				else if(delete_year(x, n, year)==true)
				{
					Print_List(x,n);
				}
			}
			system("pause");
		}

		else if (lc == 0)
		{
			return 0;
		}

	}

	delete[]x;
	system("pause");
	return 0;
}