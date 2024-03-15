#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int ,int> mp;
	int t;cin>>t;
	while(t--){
		int n ,k;cin>>n;
		for(int i=0;i<n;i++)
		cin>>k;
		mp[k]++;
	}
	for(auto it:mp){
		if(it.second %2!=0){
			cout<<it.first<<" ";
		}
		cout<<endl;
	}
}
