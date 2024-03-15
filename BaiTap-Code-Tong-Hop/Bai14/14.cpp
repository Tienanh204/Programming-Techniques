#include<iostream>
#include<fstream>
using namespace std;

struct Sinhvien
{
	char* ten, *lop;
	float gpa;
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

node createNode()
{
	node tmp = new Node();

	char ten[100], lop[100];
	cin.ignore();
	cout << "Ten: ";
	cin.getline(ten, 50);
	tmp->sv.ten = new char[strlen(ten) + 1];
	strcpy_s(tmp->sv.ten, strlen(ten) + 1, ten);

	cout << "Lop: ";
	cin.getline(lop, 50);
	tmp->sv.lop = new char[strlen(lop) + 1];
	strcpy_s(tmp->sv.lop, strlen(lop) + 1, lop);

	cout << "GPA: ";
	cin >> tmp->sv.gpa;

	tmp->next = NULL;
	return tmp;

}

void insertList(list& l)
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

int Cnt(list& l)
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

void writeFile(list& l)
{
	ofstream f ("output,bin", ios::binary);

	if (!f)
		return;

	int n = Cnt(l);

	f.write((char*)&n, 4);
	f.write((char*)l, sizeof(Sinhvien) * n);

	f.close();
}

