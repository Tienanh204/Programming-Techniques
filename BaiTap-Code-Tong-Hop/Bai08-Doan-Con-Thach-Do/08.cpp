#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;

	cin >> n;

	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int Sum;

	cin >> Sum;

	int k = n - 2;

	while (k > 1)
	{
		int Sum_k = 0;

		for (int i = 0; i < k; i++)
		{
			Sum_k += a[i];
		}
		if (Sum_k == Sum)
		{
			cout << k << endl;
		
			return 0;
		}
		else
		{
			for (int i = k; i < n; i++)
			{
				Sum_k = Sum_k - a[i - k] + a[i];

				if (Sum_k == Sum)
				{
					cout << k << endl;

					return 0;
				}
			}
		}
		k--;
	}
	cout << "-1" << endl;
}
