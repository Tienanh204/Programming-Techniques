#include<iostream>
using namespace std;

long long yn(int n);

long long xn(int n)
{
	if (n == 0)return 1;
	return xn(n - 1) + yn(n - 1);
}

long long yn(int n)
{
	if (n == 0) return 0;
	return 3 * xn(n - 1) + 2 * yn(n - 1);
}

int main()
{
	int n;
	cin >> n;
	cout << "xn: " << xn(n) << endl;
	cout << "yn: " << yn(n) << endl;
}