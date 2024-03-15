#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	a[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int pre[n+1][m+1]={0};
    for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i][j];
		}
	}
	int s=0;
	int q;cin>>q;
	while(q--){
		int h1,h2.c1,c2;cin>>h1>>h2>>c1>>c2;
		s=pre[h2][c2]-pre[h1-1][c2]-pre[h2][c1-1]+pre[h1-1][c1-1];
		cout<<s<<endl;
	}
}
