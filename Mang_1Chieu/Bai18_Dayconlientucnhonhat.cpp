#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int res=1e9,left=0;
		long long sum=0;
		for(int r=0;r<n;r++){
            sum+=a[r];
           while(sum>k){
           	res=min(res,r-left+1);
           	sum-=a[left];left++;
		   }
		  }
		if(res==1e9){
			cout<<"-1"<<endl;
		}
		else{
			cout<<res<<endl;
		}
	}
}
//2
//6 51
//1 4 45 6 0 19
//3 8
//1 2 4
