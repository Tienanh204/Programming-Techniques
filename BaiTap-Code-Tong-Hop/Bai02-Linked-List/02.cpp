#include<iostream>
#include<string>
using namespace std;

struct NgaySinh
{
	int ngay;

	int thang;

	int nam;
};

struct SinhVien
{
	char* id;

	char* name;

	NgaySinh dob;

	float gpa;

};

struct Node
{
	SinhVien sv;

	Node* next;
};

struct LIST
{
	Node* head;
};

typedef struct Node *node;

typedef struct LIST* list;

//Tao 1 node

node Create_Node()
{
	node tmp = new Node;

	char tmp1[20], tmp2[10];

	//Nhap Ten Sinh Vien
	cout << "Ten Sinh Vien: ";

	cin.ignore();

	cin.getline(tmp1, 20);

	tmp->sv.name = new char[strlen(tmp1) + 1];

	strcpy_s(tmp->sv.name, strlen(tmp1) + 1, tmp1);


	//Nhap Ma So Sinh Vien va Kiem Tra Tinh Hop Le
	cout << "MSSV: ";

	cin.getline(tmp2, 10);

	tmp->sv.id = new char[strlen(tmp2) + 1];

	strcpy_s(tmp->sv.id, strlen(tmp2) + 1, tmp2);


	//Nhap Ngay Thang Nam Sinh

	cout << "Nhap Ngay-Thang-Nam: ";

	cin >> tmp->sv.dob.ngay;

	cin >> tmp->sv.dob.thang;

	cin >> tmp->sv.dob.nam;


	//Nhap Diem So
	do {

		cout << "Nhap Diem: ";

		cin >> tmp->sv.gpa;

		if (tmp->sv.gpa < 0 || tmp->sv.gpa>10)
		{

			cout << "Diem khong hop le. Hay nhap lai" << endl;

		}

	} while (tmp->sv.gpa < 0 || tmp->sv.gpa>10);

	tmp->next = NULL;

	return tmp;
}

//Cau1: Nhap danh sach sinh vien
void Enter_List(list& l)
{
	node tmp = Create_Node();

	if (l->head == NULL)
	{
		l->head = tmp;
	}
	else
	{
		tmp->next = l->head;

		l->head = tmp;
	}
}

//Cau2: Xuat danh sach sinh vien
void Print_List(list& l)
{
	node tmp = l->head;

	int i = 0;

	while (tmp != NULL)
	{
		cout << "STT: " << i + 1 << endl;
		cout << "ID: " << tmp->sv.id << endl;
		cout << "NAME: " << tmp->sv.name << endl;
		cout << "DOB: " << tmp->sv.dob.ngay << "/" << tmp->sv.dob.thang << "/" << tmp->sv.dob.nam << endl;
		cout << "GPA: " << tmp->sv.gpa << endl;
		cout << endl;

		tmp = tmp->next;

		i++;
	}
}

//Cau2:  Tinh diem trung binh cua sinh vien trong danh sach
int Cnt_Student(list& l)
{
	node tmp = l->head;

	int cnt = 0;

	while (tmp != NULL)
	{
		++cnt;

		tmp = tmp->next;

	}

	return cnt;

}

float GPA_Student(list& l)
{
	node tmp = l->head;

	long long Sum = 0;

	while (tmp != NULL)
	{
		Sum += tmp->sv.gpa;

		tmp = tmp->next;
	}

	return Sum * 1.0 / Cnt_Student(l);

}


//Cau4 xoa 1 sinh vien co ma so da cho ra khoi danh sach

bool cmp_id(char* a, char* b)
{
	return strcmp(a, b) == 0;
}

bool delete_id(list& l,char *maso)
{

	bool check = false;

	if (l->head == NULL)
	{
		return  check;
	}

	node tmp = l->head;

	while (cmp_id(tmp->sv.id, maso))
	{
		node p = tmp;

		tmp = tmp->next;

		delete p;

		check = true;
	}

	l->head = tmp;

	while (tmp->next!= NULL)
	{
		if (cmp_id(tmp->next->sv.id, maso))
		{
			node p = tmp->next;

			tmp->next = tmp->next->next;

			delete p;

			check = true;
		}
		else
		{
			tmp = tmp->next;
		}
	}

	return check;
}

//Cau5: tim sinh vien sao cho do chenh lech giưa tong diem cac sinh vien truoc=tong diem cac sinh vien sau= sinh viendo
//pair<node,bool> Find_Student(list& l)
//{
//	int s_truoc = 0;
//
//	node truoc = NULL;
//
//	node giua = l->head;
//
//	node sau = NULL;
//
//	while (giua->next->next != NULL)
//	{
//		int s_sau = 0;
//
//		truoc = giua;
//
//		giua = giua->next;
//
//		sau = giua->next;
//
//		s_truoc += truoc->sv.gpa;
//
//		while (sau != NULL)
//		{
//			s_sau += sau->sv.gpa;
//
//			sau = sau->next;
//		}
//
//		if (s_truoc == s_sau && s_sau == giua->sv.gpa)
//		{
//			return make_pair<giua,true>;
//
//		}
//
//	}
//
//	return make_pair<NULL, false>;
//}

//Cau6: them 1 sinh vien vao vị tri bat khi trong danh savcjh

void Insert_List(list& l,node tmp,int index)
{
	if (l->head == NULL)
	{
		l->head = tmp;

		return;
	}

	//chen vao dau

	if (index == 0)
	{
		tmp->next = l->head;

		l->head = tmp;

		return;
	}

	//chen vao cuoi
	if (index == Cnt_Student(l))
	{
		node p = l->head;

		while (p->next!= NULL)
		{
			p = p->next;
		}

		p->next = tmp;

		return;
	}

	else
	{
		node p = l->head;

		for (int i = 0; i < index-1; i++)
		{
			p = p->next;
		}

		tmp->next = p->next;

		p->next = tmp;

	}
}

int luachon() {
	system("cls");
	cout << "_______________________________MENU___________________________\n";
	cout << "1.Nhap danh sach sinh vien.\n";
	cout << "2.Xuat danh sachsinh vien.\n";
	cout << "3.Tinh diem trung binh danh sach.\n";
	cout << "4.Xoa sinh vien co ma so sinh vien da cho\n";
	cout << "5.Tim sinh vienX trong danh sach sao cho do chenh lech giua tong truoc = tong sau = giua.\n";
	cout << "6.Them 1 sinh vien vao vi tri bat ki.\n";
	cout << "0.Thoat !\n";
	cout << "______________________________________________________________\n";
	cout << "Nhap lua chon : ";
	int lc; cin >> lc;
	system("cls");
	return lc;
}

int main()
{
	list l = new LIST();

	l->head = NULL;

	int lc;

	bool ok = false;
	while (1)
	{
		lc = luachon();

		if (lc == 1)
		{
			ok = true;

			cout << "Nhap so sinh vien: ";

			int n; cin >> n;

			for (int i = 0; i < n; i++)
			{
				Enter_List(l);

				cout << endl;
			}

			system("pause");
		}
		else if (lc == 2)
		{
			if (!ok)
			{
				cout << "Ban can nhap danh sach sinh vien truoc khi xem lua chon nay !" << endl;
			}
			else
			{
				cout << "********************  DANH SACH SINH VIEN  ******************" << endl;

				Print_List(l);

				cout << "*************************************************************" << endl;
			}

			system("pause");
		}

		else if (lc == 3)
		{
			if (!ok)
			{
				cout << "Ban can nhap danh sach sinh vien truoc khi xem lua chon nay !" << endl;
			}
			else
			{
				cout << "Diem trung binh cua cac sinh vien: " << GPA_Student(l) << endl;
			}

			system("pause");
		}


		else if (lc == 4)
		{
			if (!ok)
			{
				cout << "Ban can nhap danh sach sinh vien truoc khi xem lua chon nay !" << endl;
			}
			else
			{
				cout << "Nhap ma so: ";

				cin.ignore();

				char* a=new char[10];

				cin.getline(a, 10);

				if (delete_id(l, a) == false)
				{
					cout << "Khong co sinh vien nao thoa man" << endl;
				}
				else if(delete_id(l,a)==true)
				{
					cout << "********** DANH SAH SAU KHI XOA  ********** " << endl;

					Print_List(l);

					cout << "******************************************" << endl;
				}

			}

			system("pause");
		}


		else if (lc == 5)
		{
			if (!ok)
			{
				cout << "Ban can nhap danh sach sinh vien truoc khi xem lua chon nay !" << endl;
			}
			else
			{

			}

			system("pause");
		}


		else if (lc == 6)
		{
			if (!ok)
			{
				cout << "Ban can nhap danh sach sinh vien truoc khi xem lua chon nay !" << endl;
			}
			else
			{
				cout << "********** NHAP SINH VIEN CAN THEM ************" << endl;
				node tmp = Create_Node();
				cout << endl;
				cout << "Nhap vi chi can them: ";

				int index; cin >> index;
				Insert_List(l, tmp, index);

			}

			system("pause");
		}

		else if (lc == 0)
		{
			return 0;
		}
	}

	system("pause");
}

//Tien anh
//2212007
//21 6 2004
//8
//Viet Duc
//2228002
//3 4 2004
//5
//Quang khanh
//2212009
//21 6 2002
//8
//Huu Ly
//2212006
//3 4 2002
//7.5
//Vat Dat
//2212019
//21 6 2005
//9