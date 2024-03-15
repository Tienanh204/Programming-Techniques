#include<iostream>
#include<math.h>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

//Code cua Tien Anh
bool solve()
{
	int n, k, t;

	cin >> n >> k >> t;

	int a[100];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < k-1; i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			if (abs(a[j] - a[i]) <= t)
			{
				return true;
			}
		}
	}

	for (int i = k; i < n - 2 ; i++)
	{
		for (int j = 1; j < k+1; j++)
		{
			if (abs(a[i + j] - a[i]) <= t)
			{
				return true;
			}
		}
	}

	return false;
}


//Code cua Loc
bool solve1()
{
	int n, k, t;

	cin >> n >> k >> t;

	int a[100];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	multiset<int> ms;

	for (int j = 0; j < k; j++)
	{
		auto it = ms.lower_bound(a[j] - 1);

		if (it != ms.end() && (*it <= a[j] + t))
		{
			return true;
		}
		else
		{
			ms.insert(a[j]);
		}
	}

	for (int j = k; j < n; j++)
	{
		ms.erase(ms.find(a[j - k]));

		auto it = ms.lower_bound(a[j] - 1);

		if (it != ms.end() && (*it <= a[j] + t))
		{
			return true;
		}
		else
		{
			ms.insert(a[j]);
		}
	}
	return false;
}


int main()
{
	if (solve())
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}