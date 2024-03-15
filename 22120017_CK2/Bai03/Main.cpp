#include"Function.h"

int main()
{
	list l = new List();

	l->head = NULL;

	cout << "Nhap so dien thoai: ";

	int n; cin >> n;

	cout<<"*************** NHAP THONG TIN SINH VIEN ***************" << endl;
	inputFilm(l, n);
	
	cout << "Nhap k: ";

	int k;

	cin >> k;

	deleteFilm(l, k);
}