#include<iostream>
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

	int i = 0, j = 0, cnt = 0;

	while (i < n && j < m)
	{
		if (b[j] == a[i])
		{
			i++;

			cnt++;
		}
		else
		{
			j++;
		}
	}

}