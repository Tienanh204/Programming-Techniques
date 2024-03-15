#include<iostream>
#include<math.h>
using namespace std;

//Y tuong: dung mang danh dau de giai bai toan

int N;//Ban co vua N*N

int col[100], d1[100], d2[100];//Lan luot la col(cot), d1(duong cheo xuoi), d2(duong cheo nguoc)

int a[100];//Luu vi tri dat con Hau vao

char res[100][100];//mang in ra ban co va cac cach dat con Hau cho hop le

//in ra ket qua
void printResult()
{
	memset(res,'O', sizeof(res));

	for (int i = 1; i <= N; i++)
	{
		res[i][a[i]]='X';
	}
	cout << "_______________" << endl;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cout << res[i][j];

			if (i <= N && j < N)
				cout << "|";
		}
		cout << endl;
	}
	cout << "---------------" << endl;
}

//Ham goi de quy de giai bai toan
void nQueen(int i)
{
	//Duyet cac kha nang ma X[i] co the nhan duoc
	for (int j = 1; j <= N; j++)
	{
		if (col[j] == 1 && d1[i - j + N] == 1 && d2[i + j - 1] == 1)//Kiem tra xem cho nay con trong( tuc chua bi chiem) -> de khi dat vao khoi bi an
		{
			col[j] = d1[i - j + N] = d2[i + j - 1] = 0;//Danh dau la cho nay da dat con Hau X[i] roi

			a[i] = j;//Dat con hau vao

			if (i == N)
			{
				printResult();
			}
			else
			{
				nQueen(i + 1);
			}
			col[j] = d1[i - j + N] = d2[i + j - 1] = 1;//tra lai gia tri ban dau cua cot col[j], duong cheo xuoi d1, duong cheo nguoc d2, tac dung de quay lui va tim tiep cac cach khac
		}
	}
}

int main()
{
	cout << "N: ";

	cin >> N;
	
	//Ban dau khoi tao ban co rong la 1
	for (int i = 1; i <= 99 ;i++)
	{
		col[i] = d1[i] = d2[i] = 1;
	}
	nQueen(1);

	return 0;
}