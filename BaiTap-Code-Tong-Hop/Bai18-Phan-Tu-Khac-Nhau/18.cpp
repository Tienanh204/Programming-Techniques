#include<iostream>
using namespace std;

int cnt[1000000] = { 0 };

int main()
{
	cout << "n: ";
	int n; cin >> n;
	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		cnt[a[i]] = 1;
	}

	for (int i = 0; i < 1000000; i++)
	{
		if (cnt[i] != 0)
		{
			cout << i << " " << cnt[i] << endl;
		}
	}

}