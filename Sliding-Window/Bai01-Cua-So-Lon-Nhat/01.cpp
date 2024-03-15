#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	cout << "Nhap so bo test: ";

	int t;

	cin >> t;

	while (t--)
	{

		int n, k;

		cin >> n >> k;

		int a[100];

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		int index = 0;

		long long sum = 0;

		for (int i = 0; i < k; i++)
		{
			sum += a[i];
		}

		long long res = sum;

		for (int i = k; i < n; i++)
		{
			sum = sum - a[i - k] + a[i];

			if (sum > res)
			{
				res = sum;

				index = i - k + 1;
			}

		}
		cout << res << endl;

		for (int i = 0; i < k; i++)
		{
			cout << a[i + index] << " ";
		}
	}
}

//input                      output
//1                          24
//10 3                       7 8 9
//1 2 3 1 5 2 7 8 9 1

//Code cua tui
//int main()
//{
//	cout << "Nhap so bo test: ";
//
//	int t;
//
//	cin >> t;
//
//	while (t--)
//	{
//
//		int n, k;
//
//		cin >> n >> k;
//
//		int a[100];
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//
//		int index = 0;
//
//		long long res = 0;
//
//		for (int i = 0; i < k; i++)
//		{
//			res += a[i];
//		}
//
//		long long res1 = res;
//
//		for (int i = 1; i < n; i++)
//		{
//			res = res - a[i - 1] + a[k + i - 1];
//
//			if (res > res1)
//			{
//				res1 = res;
//
//				index = i;
//
//			}
//
//		}
//
//		cout << res1 << endl;
//
//		for (int i = 0; i < k; i++)
//		{
//			cout << a[i + index] << " ";
//		}
//	}
//}