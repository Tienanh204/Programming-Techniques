#include<bits/stdc++.h>
// ta dung phuong phap: tao ra 1 cai mang de dem 
using namespace std;
long long cnt[100001];
int main(){
	int t;cin>>t;
	while(t--){
	memset(cnt ,0,sizeof(cnt));// gan cho all cac phan tu trong cnt =0;
		int n;cin>>n;
		int a[1000];
		for(int i=0;i<n;i++){
	            cin>>a[i];
			cnt[a[i]]++;/* cu gap thang a[i] nao thi minh cho cnt[a[i]]++, tuc la  kieu nhu a[5]={2 ,4 ,1 ,1, 5}
			kieu nhu khi a[1]=2 xong minh danh dau cho thang nay cnt[a[1]]++ tuc 2 xuat hien lan 1 , cu vay cho den khi het luc 
			nay minh thay 1 duoc danh dau 2 lan 
		
		               */
		           }
		int dem=0;
		for(int i=0;i<n;i++){
			if(cnt[a[i]]>=2){
				dem++;
			}	
		}
		cout<<dem<<endl;
	
    }
   
}
//input
//2
//5
//4 5 1 2 1
//
//6
//10 20 30 30 20 5
//output
//2
//4		
