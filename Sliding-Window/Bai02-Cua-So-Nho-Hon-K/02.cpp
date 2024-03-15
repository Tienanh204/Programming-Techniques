#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;

	int a[100];

	cin >> t;

	while (t--)
	{
		int n, k, cnt = 0;

		cin >> n >> k;

		//Dem xem trong mang co bao nhieu thang < K
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];

			if (a[i] <= k)
			{
				cnt++;
			}
		}

		int res_max = INT_MIN;

		for (int i = 0; i <= n-cnt; i++)
		{
			int res = 0;

			//Ta duyet voi cua so kich thuoc cnt
			for (int j = 0; j < cnt; j++)
			{
				if (a[i + j] <= k)
				{
					res++;
				}
			}
			//Tim ra cua so kich thuoc cnt voi nhieu phan tu < k nhat
			if (res > res_max)
			{
				res_max = res;
			}
		}
		//So lan doi cho it nhat chinh bang cnt-res_max(cuar so co phan tu <k nhieu nhat)
		cout << cnt-res_max << endl;

	}
}
