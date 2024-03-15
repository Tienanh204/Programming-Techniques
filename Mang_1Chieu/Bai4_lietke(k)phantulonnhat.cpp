#include<bits/stdc++.h>
using namespace std;
long long a[1000];
int main(){
		int cnt,res;
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=n-1;i>=n-k;i--){
		    cout<<a[i]<<" ";
		}
}
}
//input 
//2
//5 3 
//10 7 9 12 6
//
//6 2 
//9 7 12 8 6 5 
//output
//12 10 9
//12 9 
