#include<iostream>
#include<math.h>
using namespace std;

//Thuat Toan sinh cay nhi phan
int N, X[100];

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
	//Duyet cac kha nang cua X[i]: co 2 kha nang 0 va 1
	for (int j = 0; j <= 1; j++)
	{
		X[i] = j;

		if (i == N)//Khi da xay dung xong thi in ra KQ
		{
			printResult();
		}
		else
		{
			Try(i + 1);
		}
	}
}

int main()
{
	cout << "N: ";
	cin >> N;
	Try(1);
}