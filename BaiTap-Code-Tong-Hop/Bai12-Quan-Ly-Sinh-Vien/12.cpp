#include<iostream>
#include<fstream>
using namespace std;

struct Sinhvien
{
	int ms;
	char* ten;
	int nam;
	char* lop;
	float diem;
};

struct Node
{
	Sinhvien sv;

	Node* next;
};

struct List
{
	Node* head;
};

typedef struct Node* node;
typedef struct List* list;

bool checkID(int id)
{
	int index = 0, x = 0;
	int a[100], cnt[100] = { 0 };

	while (id != 0)
	{
		x = id % 10;
		id = id / 10;

		a[index++] = x;
		cnt[x]++;
	}

	for (int i = 0; i < index; i++)
	{
		if (cnt[a[i]] > 1)
			return false;
	}
	return true;
}

node createNode()
{
	node tmp = new Node();

	char ten[100], lop[100];

	do
	{
		cout << "MSSV: ";
		cin >> tmp->sv.ms;
		if (checkID(tmp->sv.ms) == false)
		{
			cout << "ma so khong hop le" << endl;
		}
	} while (checkID(tmp->sv.ms) == false);

	cin.ignore();
	cout << "Ten: ";
	cin.getline(ten, 50);
	tmp->sv.ten = new char[strlen(ten) + 1];
	strcpy_s(tmp->sv.ten, strlen(ten) + 1, ten);

	do
	{
		cout << "Nam: ";
		cin >> tmp->sv.nam;
		if (tmp->sv.nam < 0)
		{
			cout << "Diem khong hop le" << endl;
		}
	} while (tmp->sv.nam < 0);

	cin.ignore();
	cout << "Ten lop: ";
	cin.getline(lop, 20);
	tmp->sv.lop = new char[strlen(lop) + 1];
	strcpy_s(tmp->sv.lop, strlen(lop) + 1, lop);

	do
	{
		cout << "Diem: ";
		cin >> tmp->sv.diem;
		if (tmp->sv.diem < 0 || tmp->sv.diem>10)
		{
			cout << "Diem khong hop le" << endl;
		}
	} while (tmp->sv.diem < 0 || tmp->sv.diem>10);

	tmp->next = NULL;

	return tmp;
}

void addStudent(list& l)
{
	node tmp = createNode();

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

void printList(list& l)
{
	node tmp = l->head;
	while (tmp != NULL)
	{
		cout << "MSSV: " << tmp->sv.ms << endl;
		cout << "Ho ten: " << tmp->sv.ten << endl;
		cout << "Nam sinh: " << tmp->sv.nam << endl;
		cout << "Lop: " << tmp->sv.lop << endl;
		cout << "Diem: " << tmp->sv.diem << endl;
		cout << "--------------------------------" << endl;
		tmp = tmp->next;
	}
}

void ascendingGPA(list& l)
{
	for (node p = l->head; p->next != NULL; p = p->next)
	{
		node tmp = p;
		for (node q = p->next; q != NULL; q = q->next)
		{
			if (tmp->sv.diem > q->sv.diem)
			{
				tmp = q;
			}

			swap(tmp->sv, p->sv);
		}
	}
}

void printToFile(list& l)
{
	ofstream f("output.txt");
	if (!f)
	{
		cout << "Khong tao duoc file" << endl;
		return;
	}

	node tmp = l->head;

	while (tmp != NULL)
	{
		
	}
}

int main()
{
	list l = new List();
	l->head = NULL;
	addStudent(l);
	printList(l);
}

//12345
//Tien anh
//2004
//22CTT2
//9.8
//12346
//Viet Duc
//2004
//22CTT2
//7.7
//12349
//qUANG KHANH
//2002
//22CTT2
//8.8