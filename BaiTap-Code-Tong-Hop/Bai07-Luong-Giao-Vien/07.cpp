#include<iostream>
#include<math.h>
#include<sstream>
#include<map>
#include <algorithm>
#include <cctype>
#include<string>
using namespace std;

int main()
{
	string gv1, gv2;

	int nam1, nam2;

	string st1, st2;

	float hs1, hs2;

	//GV1
	cin.ignore();

	getline(cin, gv1);

	cin >> nam1;

	cin.ignore();

	getline(cin, st1);

	do
	{
		cin >> hs1;
	} while (hs1 < 0);


	//GV2
	cin.ignore();

	getline(cin, gv2);

	cin >> nam2;

	cin.ignore();

	getline(cin, st2);

	do
	{
		cin >> hs2;
	} while (hs2 < 0);

	string hv1, hv2;

	hv1 = st1;

	hv2 = st2;

	transform(st1.begin(), st1.end(), st1.begin(), ::tolower);

	transform(st2.begin(), st2.end(), st2.begin(), ::tolower);

	float salary1=0, salary2=0;

	if (st1 == "cn")
	{
		salary1 = 1.0*hs1 * 3600;
	}
	else if (st1 == "ths")
	{
		salary1 = 1.0*hs1 * 4500;
	}
	else if (st1 == "ts")
	{
		salary1 = 1.0*hs1 * 6000;
	}


	if (st2 == "cn")
	{
		salary2 = 1.0*hs2 * 3600;
	}
	else if (st2 == "ths")
	{
		salary2 =1.0* hs2 * 4500;
	}
	else if (st2 == "ts")
	{
		salary2 = 1.0*hs2 * 6000;
	}

	if (salary1 > salary2)
	{
		cout << salary1 << endl;
		cout << salary2 << endl;
		cout << gv1 << endl;
		cout << nam1 << endl;
		cout << hv1 << endl;
		cout << hs1 << endl;
	}
	else if(salary1<salary2)
	{
		cout << salary1 << endl;
		cout << salary2 << endl;
		cout << gv2 << endl;
		cout << nam2 << endl;
		cout << hv2 << endl;
		cout << hs2 << endl;
	}

	return 0;
}

//NguyenVanA
//1974
//Ths
//4.5
//NguyenThiB
//1987
//TS
//6.7