#include<iostream>
using namespace std;

void Bubble_Sort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j+1];
				a[j+1] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main()
{
	int a[100];
	cout << "Enter n :";
	int n; cin >> n;
	cout << "Enter array : ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	Bubble_Sort(a, n);
	cout << "Sorted array : ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}