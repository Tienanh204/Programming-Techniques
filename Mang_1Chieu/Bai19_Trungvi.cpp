#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(n%2==0){
			cout<<min(a[(n/2)],a[(n/2)-1])<<endl;
		}
		else{
			cout<<(a[n/2])<<endl;
		}
	}
}
