#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;

int main()
{

	set<char> se;
	cout << "nhap test case : ";
	int t; cin >> t;
	cin.ignore();

	while (t--) 
	{
		cout << "Nhap chuoi : ";
		string s;
		getline(cin, s);

		for (char x : s)
		{
			if (x <= 'Z' && x>= 'A') 
			{
				x += 32;
			}
			se.insert(x);
		}

		if (se.size() == 26)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
// co the dung luon se.insert(tolower(x))