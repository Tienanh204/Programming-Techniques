#include<bits/stdc++.h>
using namespace std;
int a[100001];
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int res=-1e9,ta=0;
        for(int i=0;i<n;i++){
        	for(int j=i+1;j<n;j++){
        		ta=gcd(a[i],a[j]);
        		if(ta>res){
        			res=ta;
				}
			}
		}
		cout<<res<<endl;
}
}
	
