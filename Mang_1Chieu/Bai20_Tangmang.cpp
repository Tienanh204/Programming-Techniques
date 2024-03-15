#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    int s=0,dem=0;
    for(int i=0;i<n-1;i++){
    	if(a[i+1]<a[i]){
    		s+=a[i]-a[i+1];
    		a[i]=a[i+1];//cap nhap gia tri moi cho a[i+1]
		}
	}
	cout<<s<<endl;
	
}
//kieu nhu la
