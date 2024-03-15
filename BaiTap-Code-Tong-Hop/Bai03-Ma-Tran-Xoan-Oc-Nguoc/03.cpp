#include<iostream>
#include<math.h>
using namespace std;

//Y Tuong: ta duyet tung vong xoan oc tu ngoai vao trong
//Y tuong nay ap dung nhu nhau cho cac ma tran xoan oc nguoc xuoi du the loai

int main()
{
	int n;

	do
	{
		cin >> n;

		if (n < 1 || n>10)
		{
			cout << "INVALID" << endl;
		}
	} while (n < 1 || n>10);

	int** a;

	a = new int* [n];

	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}

	int h1 = 0, h2 = n - 1;

	int c1 = 0, c2 = n - 1;

	int res = n * n;

	//TH1: n=2 xet rieng
	if (n == 2)
	{
		while (h1 <= h2 && c1 <= c2)
		{
			for (int i = c1; i <= c2; i++)
			{
				a[h2][i] = res;

				--res;
			}
			h2--;

			for (int i = h2; i >= h1; i--)
			{
				a[i][c2] = res;

				--res;
			}

			c2--;

			for (int i = c2; i >= c1; i--)
			{
				a[h1][i] = res;
			}
		}
	}
	//TH2: n>2 luc nay cac truong hop n>2 nhu nhau
	else
	{
		while (h1 <= h2 && c1 <= c2)
		{
			for (int i = c2; i >= c1; i--)
			{
				a[h1][i] = res;

				--res;
			}

			h1++;

			for (int i = h1; i <= h2; i++)
			{
				a[i][c1] = res;

				--res;
			}

			c1++;

			for (int i = c1; i <= c2; i++)
			{
				a[h2][i] = res;

				--res;
			}

			h2--;

			for (int i = h2; i >= h1; i--)
			{
				a[i][c2] = res;

				--res;
			}

			c2--;

		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	//Giai phong bo nho
	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;
}
