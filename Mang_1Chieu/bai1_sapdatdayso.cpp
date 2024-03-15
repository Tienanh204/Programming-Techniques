#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){

	int t; cin >>t;
	while(t--){
		map<long long ,bool> mp;
		int n;cin>>n;
		for(int i=0;i<n;i++){
			long long k;cin>>k;
			mp[k]=true;// danh dau su xuat hien cua phan tu k nhap vao trong mang
		}

		for(int i=0;i<n;i++){
			if(mp[i]==true){
			cout<<i<<endl;
		}
			else{
				cout<<-1<<endl;
			}
     	}
	}
}
//2 
//10 
//-1 -1 6 1 9 3 2 -1 4 -1
//6
//0 -3 1 -2 3 -4
