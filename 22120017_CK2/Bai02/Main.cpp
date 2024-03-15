#include"Function.h"

int MENU();

int main()
{
	int lc, n;

	queue q;

	int Size = 10;

	bool check = false;

	q = init(Size);

	while (1)
	{
		lc = MENU();

		system("cls");

		if (lc == 1)
		{
			cout << "So sinh vien: ";

			cin >> n;

			inputStudent(q, n);

			writeStudentBinary(q, n);

			check = true;

			system("pause");
		}


		else if (lc == 2)
		{
			if (!check)
			{
				cout << "Bna can nhap thong tin sinh vien truoc khi xem lua chon nay" << endl;
			}
			else
			{
				readAnhDisplayBinary();
			}

			system("pause");
		}


		else if (lc == 3)
		{

			if (!check)
			{
				cout << "Bna can nhap thong tin sinh vien truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isEmpty(q, n))
				{
					cout << "Danh sach rong khong co gi de in" << endl;
				}
				else
				{
					printListStudent(q);
				}
			}
			system("pause");
		}
		else if (lc == 4)
		{
			if (!check)
			{
				cout << "Bna can nhap thong tin sinh vien truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isEmpty(q, n))
				{
					cout << "Danh sach rong" << endl;
				}
				else
				{
					cout << "Danh sach khong rong" << endl;
				}
			}

			system("pause");
		}


		else if (lc == 5)
		{
			if (!check)
			{
				cout << "Bna can nhap thong tin sinh vien truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isFull(q, n))
				{
					cout << "Danh sach day" << endl;
				}
				else
				{
					cout << "Danh sach chua day" << endl;
				}
			}

			system("pause");
		}

		else if (lc == 6)
		{
			if (!check)
			{
				cout << "Bna can nhap thong tin sinh vien truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isFull(q, n))
				{
					cout << "Danh sach day khong the them sinh vien" << endl;
				}
				else
				{
					enQueue(q, n);
				}
			}

			system("pause");
		}

		else if (lc == 7)
		{
			if (!check)
			{
				cout << "Bna can nhap thong tin sinh vien truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isEmpty(q, n))
				{
					cout << "Danh sach rong khong co gi de xoa" << endl;
				}
				else
				{
					deQueue(q, n);
				}
			}

			system("pause");
		}

		else if (lc == 7)
		{
			if (!check)
			{
				cout << "Bna can nhap thong tin sinh vien truoc khi xem lua chon nay" << endl;
			}
			else
			{

			}

			system("pause");
		}

		else if (lc == 8)
		{

			if (!check)
			{
				cout << "Ban can thong tin sinh vien truoc khi xem lua chon nay" << endl;
			}
			else
			{
				cout << "ID: ";

				cin.ignore();

				char* id = new char[20];

				cin.getline(id, 10);

				findStudent(q, id, n);
			}

			system("pause");
		}

		else if (lc == 0)
		{
			return 0;

		}
	}
}


int MENU()
{
	system("cls");
	cout << "************************* MENU *************************" << endl;
	cout << "1. Nhap va ghi sinh vien vao file input01.bin" << endl;
	cout << "2. Doc file input01.bin va xuat sinh vien ra man hinh" << endl;
	cout << "3. Xuat danh sach sinh vien" << endl;
	cout << "4. Kiem tra danh sach rong" << endl;
	cout << "5. Kiem tra danh sach day" << endl;
	cout << "6. Them 1 sinh vien vao danh sach" << endl;
	cout << "7. Xoa 1 sinh vien khoi danh sach" << endl;
	cout << "8. Tim 1 sinh vien theo id va xuat ra man hinh" << endl;
	cout << "0. Thoat!" << endl;
	cout << "********************************************************" << endl;
	cout << "\n Nhap lua chon: ";

	int lc;

	cin >> lc;

	return lc;
}