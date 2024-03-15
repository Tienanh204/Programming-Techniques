#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;
int main()
{
	string s;
	map<char,int> mp;
	cout << "Nhap test case : ";
	int t; cin >> t;
	while (t--)
	{

		cin.ignore();
		cout << "Nhap chuoi : ";
		getline(cin, s);

		for (int i = 0; i < s.size(); i++)
		{
			mp[s[i]]++;
		}

		int res = -1;
		string res1 = "";
		for (auto it : mp) {
			if (it.second > res) {
				res = it.second;
				res1=it.first;
			}
		}
		cout << res1 << endl;
	}
}

////mang dem
//string s;
//getline(cin, s);
//int a[256] = { 0 };
//for (char x : s) {
//	a[x]++;
//}
//char res; int fre = 0;
//for (int i = 0; i < 256; i++) {
//	if (a[i] > fre) {
//		fres = a[i];
//		res = (char)(i);
//	}
//}
//cout << (char)(res) << endl;