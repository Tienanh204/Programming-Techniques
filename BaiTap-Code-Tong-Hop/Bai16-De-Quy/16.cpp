#include<iostream>
using namespace std;

int xn(int n)
{
	if (n == 0) return 1;
	long s = 0;

	for (int i = 1; i <= n; i++)
	{
		s += i * i * xn(n - i);
	}
	return s;
}