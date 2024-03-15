#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int main(){
	cout<<"Nhap so phan tu :";
     	int n;cin>>n;
     	cout<<"Nhap cac phan tu :";
		for(int i=0;i<n;i++){
			int k ;cin>>k;
		mp[k]++;
		}
		for(auto ta:mp){
		cout<<ta.first<<" "<<ta.second<<endl;
		}

}
