#include<bits/stdc++.h>
#include <algorithm>
// y tuong: tao bien res luu so cac so giong nhau nhieu nhieu trong mang 
using namespace std;
int a[1000];
int main(){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=1,res=1;
		for(int i=1;i<n;i++){
			if(a[i]==a[i-1]){
				dem++;
			}
			else{
				dem=1;
			}
			res=max(dem,res);
		}
		cout<<n-res<<endl;
	}
