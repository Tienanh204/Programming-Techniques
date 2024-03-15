#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	int n, m;

	cout << "Nhap n: ";
	cin >> n;

	cout << "Nhap m: ";
	cin >> m;

	int* a = new int[n];

	int* b = new int[m];

	cout << "a[]: ";

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << "b[]: ";
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}

	int i = 0, j = 0;

	int* c = new int[m + n];//Luu 2 mabg a b sau khi sap xep

	int cnt = 0;

	while (i < n && j < m)
	{
		if (a[i] > b[j])
		{
			c[cnt++] = b[j++];
		}
		else
		{
			c[cnt++] = a[i++];
		}
	}

	while (i < n)
	{
		c[cnt++] = a[i++];
	}

	while (j < m)
	{
		c[cnt++] = b[j++];
	}

	cout << "c[]: ";

	for (int i = 0; i < m + n; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;

	delete[]a;
	delete[]b;
	delete[]c;

}