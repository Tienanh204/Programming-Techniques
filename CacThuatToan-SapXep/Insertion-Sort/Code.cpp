#include<iostream>
using namespace std;

void Insertion_Sort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int x = a[i];//lay ptu o vi tri i
		int pos = i - 1;// ta di tim vi tri hop ly cho thang x va chen thang x vao vi tri pos nay
		while (pos >= 0 && x < a[pos])// dieu kien : tuc vi tri >=0 va phan tu dung sau nho hon phan tu dung truoc(do dang sap xep tang)
		{
			a[pos + 1] = a[pos];//dich vi tri pos sang phai 1 don vi
			pos--;// tiep tuc giam pos de so sanh voi cac phan tu phia sau pos(noi chung cu thoa dieu kien thi no tiep duc dih sang phai)
		}
		a[pos + 1] = x;//cuoi cung ta chen thang x vao vitri hop ly
	}
}

int main()
{
	int a[100];
	cout << "Enter n :";
	int n; cin >>n;
	cout << "Enter array : ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	Insertion_Sort(a, n);

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}