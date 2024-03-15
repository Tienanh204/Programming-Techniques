#include<iostream>
#include<map>
#include<set>
#include<string>
#include<sstream>
#include<unordered_map>
#include< Algorithm >
using namespace std;
int main() 
{
	cout << "Nhap test case : ";
	int t; cin >> t;
	cin.ignore();
	while (t--)
	{
		cout << "Nhap chuoi : ";
		string x;
		getline(cin, x);
		string tmp;
		stringstream ss(x);
		unordered_map<string, int> mp;
		int i = 0;
		string k[50];
		while (ss >> tmp)
		{
			k[i++] = tmp;
		}
		for (int j = 0; j < i; j++) {
			if (k[j] == k[j + 1]) {
				cout << k[j] << endl;
				break;
			}
		}
	}
}