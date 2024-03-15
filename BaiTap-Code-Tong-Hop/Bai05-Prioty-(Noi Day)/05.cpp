#include<iostream>
#include<queue>
#include<concurrent_priority_queue.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        pq.push(a[i]);
    }

    int res = 0;

    while (pq.size() > 1)
    {
        int top1 = pq.top();

        pq.pop();

        int top2 = pq.top();

        pq.pop();

        res += top1 + top2;

        pq.push(top1 + top2);
    }
    
    cout << res << endl;
}