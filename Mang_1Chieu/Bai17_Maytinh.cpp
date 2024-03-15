#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main(){
		int n,c;cin>>n>>c;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=1;
		for(int i=1;i<n;i++){
			if((a[i]-a[i-1])<=c){
				dem++;
			}
			else{
				dem=1;
			}
		}
			cout<<dem<<endl;	
	
}
//input 
//6 5
//1 3 8 14 19 20
//output
//3
