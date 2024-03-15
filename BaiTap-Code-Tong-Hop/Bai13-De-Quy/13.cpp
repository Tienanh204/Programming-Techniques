#include<iostream>
using namespace std;

int Fn(int n, int a)
{
	int *fn=new int[n];
	fn[0] = a;
	fn[1] = 2*a;

	for (int i = 2; i <= n; i++)
	{
		fn[i] = 2 * fn[i - 1] + 3 * fn[i - 2];
	}

	return fn[n];
}

int main()
{
	cout << "n: ";
	int n; cin >> n;
	cout << "a: ";
	int a; cin >> a;
	cout << Fn(n, a);
}