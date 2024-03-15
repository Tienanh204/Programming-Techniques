#include<iostream>
using namespace std;

int cnt[10000001] = { 0 };

int main()
{
	int a[100];

	cout << "Enter n :";
	int n; cin >> n;

	int m = INT_MIN;
	cout << "Enter array : ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		m = max(m, a[i]);// tim ra ptu lon nhat trong mang
		cnt[a[i]]++;//luu so lan xuat hien cua ptu do vao mang cnt
	}

	for (int i = 0; i <= m; i++)// duyet tu 0-max
	{
		if (cnt[i] != 0)//tuc phan tu do co xuat hien trong mang cnt
		{
			for (int j = 0; j < cnt[i];j++)
			{
				cout << i << " ";// in ra phan tu i do
			}
		}
	}
}
