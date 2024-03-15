#include<iostream>
using namespace std;


void Insertion_Sort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = i;

		for (int j = i+1; j < n; j++)
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}
		int tmp = a[min];
		a[min] = a[i];
		a[i] = tmp;
	}
}

int main()
{
	int a[100];
	cout << "enter n :";
	int n;
	cin >> n;
	cout << "enter array : ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	Insertion_Sort(a, n);
	cout << "sorted aray : ";
	for (int i = 0; i < n; i++) 
	{
		cout << a[i] << " ";
	}
	cout << endl;
}