#include<bits/stdc++.h>
#include<map>
using namespace std;
int cnt[1000001];
int main(){
	int t;cin>>t;
	while(t--){
	
		int n;cin>>n;
	memset(cnt,0,sizeof(cnt));// gan tat ca cac phan tu trong mang = 0
		for(long long i=1;i<=n;i++){
			long long k;cin>>k;
		if(k>0){
			cnt[k]=1;// danh dau su xuat hien cua ptu k trong mang
			
	}}
	for(int i=0;i<n;i++){
		cout<<cnt[i]<<" ";
	}
}}
//	for(long long i=1;i<=pow(10,6)+1;i++){
//		 if(cnt[i]==0){// tuc la phan tu do chua xuat hien trong mang(do ycbt laf so nguyen duong n nho nhat nen ta duyet tu 1
//		 // den ...., kiem tra xem cnt[1,2,3..] cac so nay co xuat hien trong mang khong , neu co thi no da duoc gan =1,
//		 // con neu chua xuat hien thi no van dang duoc gan =0)
//		 	cout<<i<<endl;
//		 	 break;
//		 }
//
//	  }	
//   }
//}
//2 5 1 2 3 4 5 5 0 -20 -10 1 3
