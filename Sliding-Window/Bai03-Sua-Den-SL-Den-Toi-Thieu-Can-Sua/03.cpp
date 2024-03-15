#include<iostream>
#include<math.h>
#include<map>
using namespace std;

int main()
{
	int N, K, B;

	cin >> N >> K >> B;

	int a[100];//luu 10 cai den tu 1->10

	for (int i = 0; i < N; i++)
	{
		a[i] = i+1;
	}
	
	//luu nhung cai den bi hu
	map<int, int> mp;

	for (int i = 0; i < B; i++)
	{
		int x;

		cin >> x;

		mp[x]++;
	}
    
	int cnt = 0;

	//duyet cua so dau
	for (int i = 0; i < K; i++)
	{
		if (mp[a[i]] == 0)//tuc la neu den khong bi hu
		{
			cnt++;
		}
	}

	int res_max = INT_MIN;

	for (int i = K; i < N; i++)
	{
		if (mp[a[i - K]] == 0) cnt--;

		if (mp[a[i]] == 0) cnt++;

		//tim ra cua so co den hu it nhat
		res_max = max(res_max, cnt);
	}

	cout << K - res_max << endl;
}




//Code o LOC

//int n, k, b;
//cin >> n >> k >> b;
//int a[100001] = { 0 };
//for (int i = 0; i < n; i++)
//{
//	int x; cin >> x;
//
//	a[x] = 1;
//}
//
//int cnt = 0;
//
//for (int i = 1; i <= k; i++)
//{
//	if (a[i] == 1) cnt++;
//}
//
//int ans = cnt;
//
//for (int i = k + 1; i <= n; i++)
//{
//	cnt = cnt - a[i - k] + a[i];
//
//	ans = min(ans, cnt);
//}
//cout << ans << endl;