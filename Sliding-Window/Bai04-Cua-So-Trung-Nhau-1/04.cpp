#include<iostream>
#include<math.h>
#include<set>
using namespace std;

bool solve()
{
	int a[100];

	int n, k;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	set<int> s;

	for (int i = 0; i < k; i++)
	{
		if (s.count(a[i]))
		{
			return true;
		}
		s.insert(a[i]);
	}

	for (int i = k; i < n; i++)
	{
		s.erase(a[i - k]);

		if (s.count(a[i]))
		{
			return true;
		}
		else
		{	
			s.insert(a[i]);
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