#include<iostream>
using namespace std;

struct Node
{
	int data;

	Node* next;//Luu dia chi dang sau

	Node* prev;//Luu dia chi dang truoc
};

struct List
{
	Node* head;
};

typedef struct Node* node;

typedef struct List* list;

node CreateNode(int data)
{
	node newnode = new Node();

	newnode->data = data;

	newnode->next = NULL;

	newnode->prev = NULL;

	return newnode;
}

int CntList(list& l)
{
	int cnt = 0;

	node tmp = l->head;

	while (tmp != NULL)
	{
		++cnt;

		tmp = tmp->next;
	}

	return cnt;
}

void PrintList(list l)
{
	node tmp = l->head;

	while (tmp != NULL)
	{
		cout << tmp->data << " ";

		tmp = tmp->next;
	}

	cout << endl;
}

//Them vao dau
void InsertFirst(list& l,int data)
{
	node newnode = CreateNode(data);

	newnode->next = l->head;// Cho phan next cua node moi tro vao node dau hien tai

	if (l->head != NULL)//Kiem tra xem danh sach co rong hay khong
	{
		l->head->prev = newnode;
	}

	l->head = newnode;
}

//Them vao cuoi
void InsertLast(list& l, int data)
{
	node newnode = CreateNode(data);

	if (l->head == NULL)
	{
		l->head = newnode;

		return;
	}

	node tmp = l->head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next; 
	}

	tmp->next = newnode;

	newnode->prev = tmp;
}

//Them vao giua
void InsertList(list& l, int data, int pos)
{
	node newnode = CreateNode(data);

	if (l->head == NULL)
	{
		l->head = newnode;

		return;
	}
	if (pos == 0)
	{
		InsertFirst(l, data);
	}
	else if (pos == CntList(l))
	{
		InsertLast(l,data);
	}
	else
	{
		node tmp = l->head;

		for (int i = 0; i < pos; i++)
		{
			tmp = tmp->next;//Duyet den node can chen
		}
		newnode->next = tmp;

		tmp->prev->next = newnode;

		newnode->prev = tmp->prev;

		tmp->prev = newnode;
	}
}

//Xoa dau
void DeleteFirst(list& l)
{
	if (l->head == NULL)
		return;

	node tmp = l->head;

	l->head = l->head->next;

	if (l->head != NULL)
	{
		l->head->prev = NULL;
	}

	delete tmp;
}

//Xoa cuoi
void DeleteLast(list& l)
{
	if (l->head == NULL)
		return;

	node tmp = l->head;

	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	
	node p = tmp->next;

	tmp->next = NULL;

	delete p;
}

void DeleteList(list& l, int pos)
{
	if (l->head == NULL)
		return;

	if (pos == 0)
	{
		DeleteFirst(l);
	}
	else
	{
		node tmp = l->head;

		for (int i = 0; i < pos; i++)
		{
			tmp = tmp->next;//Duyet den node can xoa
		}

		node p = tmp;

		tmp->prev->next = tmp->next;

		if (tmp->next != NULL)
		{
			tmp->next->prev = tmp->prev;
		}

		delete p;
	}
}



int main()
{
	int choice;

	list l = new List();

	l->head = NULL;

	while (1)
	{
		int data;

		cout << "******************************************" << endl;
		cout << "                    MENU                  " << endl;
		cout << "******************************************\n" << endl;
		cout << "1.Them dau." << endl;
		cout << "2.Them cuoi." << endl;
		cout << "3.Them bat ki" << endl;
		cout << "4.Xoa dau" << endl;
		cout << "5.Xoa cuoi" << endl;
		cout << "6.Xoa bat ki" << endl;
		cout << "7.Xuat danh sach" << endl;
		cout << "0.Thoat\n" << endl;
		cout << "******************************************" << endl;
		cout << "\nNhap lua chon: ";

		cin >> choice;

		system("cls");

		if (choice == 1)
		{
			cout << "Nhap node: ";

			cin >> data;

			InsertFirst(l, data);

			system("pause");

		}
		else if (choice == 2)
		{
			cout << "Nhap node: ";

			cin >> data;

			InsertLast(l, data);

			system("pause");
		}
		else if (choice == 3)
		{
			cout << "Nhap node: ";

			cin >> data;

			cout << "Nhap vi tri: ";

			int pos;

			cin >> pos;

			InsertList(l, data, pos);

			system("pause");
		}
		else if (choice == 4)
		{
			DeleteFirst(l);

			system("pause");
		}
		else if (choice == 5)
		{

			DeleteLast(l);

			system("pause");
		}
		else if (choice == 6)
		{
			cout << "Nhap vi tri: ";

			int pos;

			cin >> pos;

			DeleteList(l, pos);

			system("pause");
		}
		else if (choice == 7)
		{
			PrintList(l);

			system("pause");
		}
		else if (choice == 0)
		{
			return 0;
		}

		system("cls");
	}
}
