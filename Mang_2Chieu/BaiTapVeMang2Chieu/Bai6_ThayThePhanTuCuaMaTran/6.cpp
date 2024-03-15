#include<iostream>
using namespace std;

 // thay the phan tu trung tam bang tong phan tu xung quanh cong voi chinh no
int main() {
	int a[100][100];
	cout << "Nhap mang ";
	cout << "Nhap MxN" << endl;
	int n, m;
	cin >> n >> m;

	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) 
		{
			cin >> a[i][j];
		}
	}

    for (int i = 1; i < n-1; i++) 
	{
		for (int j = 1; j < m-1; j++) 
		{
			long long s = 0;

			for (int k = i - 1; k <= i + 1; k++)
			{
				for (int l = j - 1; l <= j + 1; l++) 
				{
					s += a[k][l];
				}
			}
			a[i][j] = s;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}