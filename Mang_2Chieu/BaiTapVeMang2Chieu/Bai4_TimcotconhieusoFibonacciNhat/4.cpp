#include<iostream>
#include<math.h>
using namespace std;
int kiemtra(int n)
{
	if (n == 0 || n == 1) return 1;
	int fn1 = 0, fn2 = 0;
	for (int i = 3; i <= 93; i++)
	{
		int fn = fn1 + fn2;
		if (fn == n) return 1;
			fn2 = fn1;
			fn1 = fn;
	}
	return 0;
}

int main()
{
	long long a[100][100];
	int t; cin >> t;

	while (t--) {

		int n, m; cin >> n >> m;
		for (int i = 0; i < n; i++)
		{

			for (int j = 0; j < m; j++) 
			{
				cin >> a[i][j];
			}

		}

		int  res = -1; int cot = 0;

		for (int i = 0; i < m; i++) 
		{
			long long s = 0, dem = 0; long long tmp = 0;

			for (int j=0; j < n; j++)
			{

				if (kiemtra(a[j][i])) 
				{
					s += a[j][i];
					dem++;
			    }

			}
			if (dem > res)
			{
				res = dem;
				tmp=s;
				cot = i;
			}
			else if (dem == res)
			{
		      //khi ma cac cot co cung so luong so fibo thi minhf xem tong so fibo cua cot nao lon hon thi minh lay
				if (s > tmp) 
				{
					tmp = s;
					cot = i;
				}
			}
		}
		cout << cot+1 << endl;
		for (int i = 0; i < n; i++) 
		{
			if(kiemtra(a[i][cot]))
			cout << a[i][cot] << " ";
	    }
    }
	cout << endl;
}
//1 2 3 5
//2 2 5 8
//0 1 2 3
//21 13 3 3