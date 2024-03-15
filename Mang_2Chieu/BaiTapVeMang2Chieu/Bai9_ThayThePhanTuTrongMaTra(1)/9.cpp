#include<iostream>
using namespace std;
int main() {
	int dx[8] = { -1,-1,0,0,1,1,1 };
	int dy[8] = { -1,0,1,-1,1,-1,0,1 };

	int a[100][100];
	cout << "Nhap mang ";
	cout << "Nhap MxN" << endl;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	int b[100][100];
	int l = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			long long sum = 0;
			for (int k = 0; k < 8; k++) //duyet 8 o xung quanh
			{
				int imoi = i + dx[k];
				int jmoi = j + dy[k];

				if (imoi > 0 || jmoi > 0 || imoi <= n || jmoi <= m)
				{
					sum += a[imoi][jmoi];
				}
			}
			b[l++][l++] = sum;
		}
	}
	for (int i = 0; i < l; i++) 
	{
		for (int j= 0; j < l; j++) 
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}