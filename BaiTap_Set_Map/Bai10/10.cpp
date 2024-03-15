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
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout << "Nhap so nguoi dung : ";
	int t; cin >> t;
	map<string, int> mp;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin,s);
		if (mp.find(s) == mp.end())//tu dau tien xuat hien
		{
			cout << s << endl;
		}
		else//da xuat hien roi
		{
			cout << s << mp[s] << endl;
		}
		mp[s]++;
	}
}