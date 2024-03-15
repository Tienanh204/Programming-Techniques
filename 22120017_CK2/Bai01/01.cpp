#include"Function.h"

stack init(int Size)
{
	stack st = new Stack();

	st->head = NULL;

	st->Size = Size;

	return st;
}

bool checkID(char* id)
{
	for (int i = 0; i < strlen(id); i++)
	{
		if (id[i] < '0' && id[i] > 9 && strlen(id) != 7)
		{
			return false;
		}
	}
	return true;
}

node createNode()
{
	node newNode = new Node();

	char Name[100], ID[100];

	cin.ignore();

	//Ma so
	do
	{
		cout << "ID: ";

		cin.getline(ID, 10);

		if (checkID(ID)==false)
		{
			cout << "Ma so khong hop le" << endl;
		}
	} while (checkID(ID) == false);

	newNode->Student.id = new char[strlen(ID)+1];

	strcpy_s(newNode->Student.id, strlen(ID) + 1, ID);

	//Ten
	cout << "Name: ";

	cin.getline(Name, 50);

	newNode->Student.name = new char[strlen(Name)+1];

	strcpy_s(newNode->Student.name, strlen(Name) + 1, Name);

	//Diem
	do
	{
		cout << "GPA: ";

		cin >> newNode->Student.gpa;

		if (newNode->Student.gpa < 0 || newNode->Student.gpa>10)
		{
			cout << "Diem khong hop le" << endl;
		}
	} while (newNode->Student.gpa < 0 || newNode->Student.gpa>10);

	newNode->next = NULL;

	return newNode;
}


//Cau1
void inputStudent(stack& st, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Sinh vien " << i + 1 << endl;

		node newNode = createNode();

		if (isEmpty(st,n))
		{
			st->head = newNode;
		}
		else
		{
			newNode->next = st->head;

			st->head = newNode;
		}
		cout << endl;
	}
}

void writeStudentBinary(stack& st, int n)
{
	ofstream fout("input01.bin", ios::binary);

	if (!fout)
	{
		cout << "Can't open file" << endl;
		return;
	}

	fout.write((char*)&n, sizeof(int));

	fout.write((char*)st, sizeof(Stack) * n);

	fout.close();
}

//Cau2
void readAnhDisplayBinary()
{
	ifstream fin("input01.bin", ios::binary);

	if (!fin)
	{
		cout << "Can't open file" << endl;
		return;
	}

	int n;

	fin.read((char*)&n, sizeof(int));

	stack st = new Stack[n];

	fin.read((char*)st, sizeof(Stack) * n);

	node temp = st->head;

	cout << left << setw(4) << "STT";
	cout << left << setw(12) << "MSSV";
	cout << left << setw(15) << "NAME";
	cout << right << setw(10) << "GPA" << endl;

	int i = 0;

	while (temp != NULL)
	{
		cout << left << setw(4) << i + 1;
		cout << left << setw(12) << temp->Student.id;
		cout << left << setw(15) << temp->Student.name;
		cout << right << setw(10) << temp->Student.gpa << endl;

		temp = temp->next;

		i++;
	}

}

//Cau3
void printListStudent(stack& st)
{
	node temp = st->head;

	cout << left << setw(4) << "STT";
	cout << left << setw(12) << "MSSV";
	cout << left << setw(15) << "NAME";
	cout << right << setw(10) << "GPA" << endl;

	int i = 0;

	while (temp != NULL)
	{
		cout << left << setw(4) << i + 1;
		cout << left << setw(12) << temp->Student.id;
		cout << left << setw(15) << temp->Student.name;
		cout << right << setw(10) << temp->Student.gpa << endl;

		temp = temp->next;

		i++;
	}
}

//Cau4
bool isEmpty(stack& st,int n)
{
	return n==0;
}

//Cau5
bool isFull(stack& st, int n)
{
	return st->Size == n;
}

//Cau6
void pushStudent(stack& st, int &n)
{
	cout << "-------------------- THONG TIN SINH VIEN CAN THEM ---------------------" << endl;
	node newNode = createNode();

	if (st->head==NULL)
	{
		st->head = newNode;

		n++;
	}
	else
	{
		newNode->next = st->head;

		st->head = newNode;

		n++;
	}
}

//Cau7
void printNode(node tmp)
{
	cout <<"ID: "<< tmp->Student.id << endl;
	cout << "Name: " << tmp->Student.name << endl;
	cout << "GPA: " << tmp->Student.gpa << endl;
}

void popStudent(stack& st, int& n)
{
	node tmp = st->head;

	st->head = st->head->next;

	cout << "----------------- SINH VIEN BI XOA -----------------" << endl;
	printNode(tmp);

	delete tmp;

	n--;
}


//Cau 9

bool cmpID(char* a, char* b)
{
	return strcmp(a, b) == 0;
}

void findStudent(stack& st,char*id,int &n)
{
	bool check = false;

	node tmp = st->head;

	while (tmp != NULL)
	{
		node p = st->head;

		st->head = st->head->next;

		if (cmpID(tmp->Student.id, id))
		{
			cout << "-------------------- SINH VIEN CAN TIM -----------------" << endl;
			printNode(tmp);

			ofstream fout("output01.bin", ios::binary);

			if (!fout)
				return;
			fout.write((char*)tmp, sizeof(Node));

			fout.close();

			check = true;
			break;
		}
		tmp = tmp->next;

		n--;

		delete p;
	}

	ifstream fin("output01.bin", ios::binary);

	if (!fin)
		return;

	node x=new Node();

	fin.read((char*)x, sizeof(Node));

	printNode(x);

	if (!check)
	{
		cout << "Sinh vien khong ton tai" << endl;
	}
}
//Cau 9

bool checkID(stack& st,node tmp)
{
	node p = st->head;

	while (p != NULL)
	{
		if (strcmp(p->Student.id, tmp->Student.id)==0) 
		{
			return false;
		}
		p = p->next;
	}
	return true;
}

void addStudent(stack& st, int &n)
{
	cout << "-------------------- THONG TIN SINH VIEN CAN THEM ---------------------" << endl;
	
	node newNode = createNode();

	if (checkID(st, newNode)==true)
	{
		if (st->head == NULL)
		{
			st->head = newNode;

			n++;
		}
		else
		{
			newNode->next = st->head;

			st->head = newNode;

			n++;
		}
	}
	else
	{
		cout << "Sinh vien da ton tai" << endl;
	}
}




//2212007
//Tien Anh
//6
//2212008
//Viet Duc
//7
//2212009
//Quang Khanh
//7.5
//2212005
//Van Dat
//8.5
//2212006
//Hoang Anh
//6
//2212010
//Vinh An
//3.5
//2212011
//Viet Cong
//7.5
//2212012
//Duc Hoa
//4.5
//2212013
//Duc Khanh
//8.6
//2212014
//Hung Anh
//9.0