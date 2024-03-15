#include"Function.h"

int MENU();

int main()
{
	int lc, n;

	stack st;

	int Size = 10;
    
	bool check = false;

	st = init(Size);

	while (1)
	{
		lc = MENU();

		system("cls");

		if (lc == 1)
		{
			do
			{
				cout << "So sinh vien: ";

				cin >> n;

				if (n < 0 || n>10)
				{
					cout << "So sinh vien khong hop le. Vui long nhap trong khoang [0" << "," << Size << "]" << endl;
				}
			} while (n < 0 || n>10);

			inputStudent(st, n);

			writeStudentBinary(st, n);

			check = true;
			
			system("pause");
		}

		else if (lc == 2)
		{
			if (!check)
			{
				cout << "Ban can Nhap Stack truoc khi xem lua chon nay" << endl;
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
				cout << "Ban can Nhap Stack truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isEmpty(st, n))
				{
					cout << "Danh sach rong khong co gi de in" << endl;
				}
				else
				{
					printListStudent(st);
				}
			}
			system("pause");
		}
		else if (lc == 4)
		{
			if (!check)
			{
				cout << "Ban can Nhap Stack truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isEmpty(st, n))
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
				cout << "Ban can Nhap Stack truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isFull(st, n))
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
				cout << "Ban can Nhap Stack truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isFull(st, n))
				{
					cout << "Danh sach day. Khong the them sinh vien" << endl;
				}
				else
				{
					pushStudent(st, n);
				}
			}
			system("pause");
		}

		else if (lc == 7)
		{
			if (!check)
			{
				cout << "Ban can Nhap Stack truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isEmpty(st, n))
				{
					cout << "Danh sach rong. Khong co gi de xoa" << endl;
				}
				else
				{
					popStudent(st, n);
				}
			}
			system("pause");
		}

		else if (lc == 7)
		{
			if (!check)
			{
				cout << "Ban can Nhap Stack truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isEmpty(st, n))
				{
					cout << "Danh sach rong. Khong co gi de xoa" << endl;
				}
				else
				{
					popStudent(st, n);
				}
			}
			system("pause");
		}
		
		else if (lc == 8)
		{

			if (!check)
			{
				cout << "Ban can Nhap Stack truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isEmpty(st, n))
				{
					cout << "Danh sach rong" << endl;
				}
				else
				{
					cout << "ID: ";

					cin.ignore();

					char* id = new char[20];

					cin.getline(id,10);

					findStudent(st, id, n);
				}
			}

			system("pause");
		}

		else if (lc == 9)
		{
			if (!check)
			{
				cout << "Ban can Nhap Stack truoc khi xem lua chon nay" << endl;
			}
			else
			{
				if (isEmpty(st, n))
				{
					cout << "Danh sach rong" << endl;
				}
				else
				{
					addStudent(st, n);
				}
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
	cout << "8. Tim 1 sinh vien theo id doc ghi file va xuat ra man hinh" << endl;
	cout << "9 .Nhap vao 1 sinh vien neu trung id bao sinh vien da ton tai" << endl;
	cout << "0. Thoat!" << endl;
	cout << "********************************************************" << endl;
	cout << "\n Nhap lua chon: ";

	int lc;

	cin >> lc;

	return lc;
}