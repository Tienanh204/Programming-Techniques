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

	cout << "Output: ";

	while (i < n && j < m)
	{
		if (b[j] > a[i])
		{

			i++;
		}
		else
		{
			cout << i << " ";

			j++;
		}
	}

	while (j < m)
	{
		cout << n << " ";

		j++;
	}

	delete[]a;

	delete[]b;
}

//6
//7
//1 6 9 13 18 18
//2 3 8 13 15 21 25