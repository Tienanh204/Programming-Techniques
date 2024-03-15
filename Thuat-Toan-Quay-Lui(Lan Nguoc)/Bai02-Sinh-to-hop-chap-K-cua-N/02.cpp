#include<iostream>
#include<math.h>
using namespace std;

//Thuat toan quay lui sinh to hop chap K cua N
int N, X[100], K;

void printResult()
{
	for (int i = 1; i <= K; i++)
	{
		cout << X[i];
	}
	cout << " ";
}

void Try(int i)
{
	//Duyet cac kha nang ma X[i] co the nhan duoc:
	//Gia tri nho nhat: X[i-1]+1 phan tu dung truoc no + 1 (vi cac to hop nay xay dung tang dan nen phan tu can xay dung phai lon hon phan tu truoc no)
	//Gia tri lon nhat: N-K+i
	for (int j = X[i - 1] + 1; j <= N - K + i; j++)
	{
		X[i] = j;//Phan tu X[i] nhan gia tri duyet

		if (i == K)
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

	cout << "K: ";
	cin >> K;

	X[0] = 0;
	Try(1);

	return 0;
}