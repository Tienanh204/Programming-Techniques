#include<bits/stdc++.h>
//dophuctap la o(n^2) rat la khong nen day la cua tien anh code nha:>
using namespace std;
int a[100001];
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int res=0, cnt=0;
		for(int i=n-1;i>=0;i--){
		     	for(int j=i-1;j>=0;j--){
		     		cnt=a[i]-a[j];
		     	if(cnt>=0&&cnt>=res){
		     		res=cnt;
				 }	
			}
          }	
          if(res>0){
          	cout<<res<<endl;
		  }
		  else{
		  	cout<<-1<<endl;
		  }
	   }
    }
//intput
//2
//7
//2 3 10 6 4 8 1
//
//3
//3 2 1 
//output
//8
//-1
