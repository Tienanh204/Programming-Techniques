#include<bits/stdc++.h>
using namespace std;
	map<int,int> mp;
void ktao(){
	int fibo[20];
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=19;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}

	for(int i=0;fibo[i]<=1000;i++){// duyet qua cac so fibonaci va danh dau no =1; vd: f[0]=1,f[1]=1, cho nay ma minh cout<<fibo[i]<<" "; thi no in ra cac so fibo <=1000
		mp[fibo[i]]++;// duyet qua mang cu gap thang so fibo a[i] nao thif danh dau no vao mang f[]
	}
}
int main(){
     ktao();
	int t;cin>>t;
	int a[100];
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(mp[a[i]]){//tuc la a[i] la so fibonacci
				cout<<a[i]<<" ";
			}
		}
	}
}

