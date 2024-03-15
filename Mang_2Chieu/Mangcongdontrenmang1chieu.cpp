#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int s=0;
  	for(int i=1;i<=2;i++){
		for(int j=1;j<=3;j++){
			s+=a[i][j];
		}
	}
	cout<<s<<endl;
}
