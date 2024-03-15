#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a[1000];
		int n,x;cin>>n>>x;
		int s=0;
		for(int i=n-1;i>=0;i--){
			cin>>a[i];
		}
		for(int i=n-1;i>=0;i--){
             s+=a[i]*pow(x,i);
		}
		cout<<s<<endl;
    }
}
//input
//1
//4 2
//1 2 0 4
//output
//20
