#include<iostream>
#include<math.h>
using namespace std;

int used[100] = { 0 };
int N;
int X[100];

void printResult()
{
	for (int i = 1; i <= N; i++)
	{
		cout << X[i];
	}
	cout << " ";
}

void Try(int i)
{
	for (int j = 1; j <= N; j++)
	{
		if (used[j] == 0)
		{
			used[j] = 1;

			X[i] = j;

			if (i == N)
			{
				printResult();
			}
			else
			{
				Try(i + 1);
			}

			used[j] = 0;
		}
	}
}

int main()
{
	cout << "N: ";

	cin >> N;

	Try(1);

	return 0;
}