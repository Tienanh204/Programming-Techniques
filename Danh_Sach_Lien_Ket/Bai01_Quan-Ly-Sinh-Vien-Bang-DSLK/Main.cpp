#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct student {
	string name, id;
	double gpa;
};

struct SV {
	student s;// luu thong tin sinh vien
	SV* next;// luu vi tri cua sinh vien
};

typedef struct SV* sv;

sv makeNode() {//tao 1 not luu thong tin sinh vien 
	student s;
	cout << "Nhap Ten Sinh Vien:";
	cin.ignore();
	getline(cin, s.name);

	cout << "Nhap MSSV:";
	cin >> s.id;
	cout << "Nhap GPA:";
	cin >> s.gpa;

	sv tmp = new SV();//Xin cap phat
	tmp->s = s;
	tmp->next = NULL;
	return tmp;
}

// kiem tra rong
bool empty(sv x) {
	return x == NULL;
}


//kich co cua node sinh vien

int Size(sv x) {
	int cnt = 0;
	while (x!= NULL) {
		++cnt;
		x = x->next;
	}
	return cnt;
}


//them 1 sinh vien vo dau danh sach
void insertFirst(sv& x) {
	sv tmp = makeNode();

	if (x == NULL) {
		x = tmp;
	}
	else {
		tmp->next = x;//de tro tmp tro vao vi tri dau tien cua dslk

		x = tmp;
	}
}


//them 1 sinh vien vao cuoi danh sach

void insertLast(sv& x) {
	sv tmp = makeNode();
	if (x == NULL) {
		x = tmp;
	}
	else {
		sv p = x;// thao tac tren ds sinh vien phu de tranh anh huong ds;
		while (p->next!=NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}

//them 1 sinh vien vao vi tri bat ki

void insertMiddle(sv& x) {
	sv tmp = makeNode();
	int n = Size(x);
	int pos;
	do {
		cout << "Nhap vi tri muon them:";
	    cin >> pos;
		if (pos<0 || pos>n + 1) {
			cout << "Vi tri nhap khong hop le. Hay nhap lai" << endl;
		}
	} while (pos<0 || pos>n + 1);

	if (pos == 1) {
		insertFirst(x);
		return;
	}
	else if (pos == n + 1) {
		insertLast(x);
		return;
	}
	
	sv p = x;

	for (int i = 1; i < pos - 1; i++) {
		p = p->next;
	}
	tmp->next = p->next;
	p->next = tmp;
}

//Xoa sinh vien o dau danh sach

void deleteFirst(sv& x) {
	if (x == NULL) {
		return;
	}
	sv tmp = x;
	x = x->next;
	delete tmp;
}

//Xoa sinh vien o cuoi danh sach
void deleteLast(sv& x) {

	if (x == NULL) return;

	sv tmp = x;
	//neu danh sach chi co 1 phan tu
	if (x->next == NULL) {
		x = x->next;
	}

	while (tmp->next->next != NULL) {
		tmp = tmp->next;
	}

	delete  tmp->next;
	tmp->next = NULL;
}

//Xoa 1 Sinh vien o vi tri bat ki

void deleteMiddle(sv& x) {
	int n = Size(x);
	int pos;
	do {
		cout << "Nhap vi tri muon xoa:";
		cin >> pos;
		if (pos<=0 || pos> Size(x)) {
			cout << "Vi tri nhap khong hop le. Hay nhap lai" << endl;
		}
	} while (pos<=0 || pos> Size(x));


	sv truoc = NULL;
	sv sau = x;
	for (int i = 1; i < pos; i++) {
		truoc = sau;
		sau = sau->next;
	}
	if (truoc == sau) {
		x = x->next;
	}
	else {
		truoc->next = sau->next;
	}
}

//Sap xep danh sach sinh vien tang dan theo gpa

void sapxep(sv &x) {
	for (sv p = x; p->next != NULL; p = p->next) {
		sv min = p;
		for (sv q = p->next; q != NULL; q = q->next) {
			if (min->s.gpa > q->s.gpa) {
				min = q;
			}
		}
		student tmp = min->s;
		min->s = p->s;
		p->s = tmp;
	}
}

void xuat(sv x) {
	int n = Size(x);
	sv p = x;
	int j = 0;
	cout << "______________Danh Sach Sinh Vien______________" << endl;
	cout << setw(1) << left << "STT ";
	cout << setw(30) << left << "HovaTen";
	cout << setw(15) << right << "MSSV";
	cout << setw(15) << right << "GPA" << endl;
	while (x != NULL) {
		cout << setw(3) << left << ++j;
		cout << setw(30) << left << x->s.name;
		cout << setw(15) << right << x->s.id;
		cout << setw(15) << right << x->s.gpa << endl;
		x = x->next;
		}
	cout << "______________________________________________" << endl;
	}


int luachon() {
	system("cls");
	cout << "_______________________________MENU___________________________\n";
	cout << "1.Them 1 sinh vien vao dau danh sach.\n";
	cout << "2.Them 1 sinh vien vao cuoi danh sach.\n";
	cout << "3.Them 1 sinh vien vao vi tri bat ky trong danh sach.\n";
	cout << "4.Xoa 1 sinh vien o dau danh sach.\n";
	cout << "5.Xoa 1 sinh vien o cuoi danh sach.\n";
	cout << "6.Xoa 1 sinh vien o vi tri bat ky trong danh sach.\n";
	cout << "7.Sap xep danh sach sinh vien tang/giam theo GPA.\n";
	cout << "8.Xuat danh sach sinh vien.'\n";
	cout << "0.Thoat !\n";
	cout << "______________________________________________________________\n";
	cout << "Nhap lua chon : ";
	int lc; cin >> lc;
	system("cls");
	return lc;
}


int main() {
	sv Head = NULL;
	int lc;
	bool ok = false;

	while (1)
	{
		lc = luachon();

		if (lc == 1)
		{
			insertFirst(Head);
			system("pause");
		}


		else if (lc == 2)
		{
			insertLast(Head);
			system("pause");
		}


		else if (lc == 3)
		{
			insertMiddle(Head);
			system("pause");
		}


		else if (lc == 4)
		{
			deleteFirst(Head);
			system("pause");
		}


		else if (lc == 5)
		{
			deleteLast(Head);
			system("pause");
		}


		else if (lc == 6)
		{
			deleteMiddle(Head);
			system("pause");
		}


		else if (lc == 7)
		{
			sapxep(Head);
			system("pause");
		}

		else if (lc == 8) {
			xuat(Head);
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
