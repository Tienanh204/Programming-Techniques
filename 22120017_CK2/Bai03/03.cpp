#include"Function.h"

node createNode()
{
	node newNode = new Node();

	char name[100], id[100], num[100];

	cout << "ID: ";

	cin.ignore();

	cin.getline(id, 20);

	newNode->F.id = new char[strlen(id) + 1];

	strcpy_s(newNode->F.id, strlen(id) + 1, id);


	cout << "Name: ";

	cin.getline(name, 20);

	newNode->F.name = new char[strlen(name) + 1];

	strcpy_s(newNode->F.name, strlen(name) + 1, name);


	cout << "Hang: ";

	cin.getline(num, 20);

	newNode->F.nameNum = new char[strlen(num) + 1];

	strcpy_s(newNode->F.nameNum, strlen(num) + 1, num);

	cout << "Mon: ";

	cin >> newNode->F.monney;

	newNode->next = NULL;

	return newNode;

}

void inputFilm(list& l, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Dien thoai " << i + 1 << endl;

		node newNode = createNode();

		if (l->head == NULL)
		{
			l->head = newNode;
		}
		else
		{
			newNode->next = l->head;

			l->head = newNode;
		}
	}
	printList(l);
}

void printList(list& l)
{
	node tmp = l->head;

	while (tmp != NULL)
	{
		cout << "ID: " << tmp->F.id << endl;
		cout << "Name: " << tmp->F.name << endl;
		cout << "Hang: " << tmp->F.nameNum << endl;
		cout << "Mon: " << tmp->F.monney << endl;
		cout << "-----------------------------------------" << endl;

		tmp = tmp->next;
	}

}


void deleteFilm(list& l,int k)
{
	node truoc = NULL;

	node sau = l->head;

	bool check = false;

	if (l->head == NULL)
	{
		cout << "Danh sach rong" << endl;
		return;
	}

	while (sau->F.monney>k && sau!=NULL)
	{
		node tmp = sau;

		sau = sau->next;

		delete tmp;

		check = true;
	}

	l->head = sau;

	while (sau != NULL)
	{
		if (sau->F.monney > k)
		{
			node tmp = sau;

			truoc->next = sau->next;

			sau = sau->next;

			delete tmp;

			check = true;
		}
		else
		{
			truoc = sau;

			sau = sau->next;
		}
	}
	if (!check)
	{
		cout << "Khong co bo phim nao hop le" << endl;
	}
	else
	{
		cout << "******************* DANH SACH SAU KHI XOA *****************" << endl;
		printList(l);
	}

}

//22120017
//Oscar
//xioami
//12
//2212007
//Grammy
//iphon
//12.5
//2212008
//Cannes
//oppo
//11