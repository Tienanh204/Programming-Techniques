#include<bits/stdc++.h>
// dung phuong phap duy tri so nhor nhat

using namespace std;
int a[1000];
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int min_val=a[0];//coi thang dau tien la gia tri nho nhat
		int res=-1e9;//tao cho bien res 1 gia tri rat be
		for(int i=1;i<n;i++){
			if(a[i]>min_val){
				res=max(res,a[i]-min_val);
			}
			
		}
		if(res==-1e9){//tuc mang no giam dan nen khong co ket qua thoa man
			cout<<-1<<endl;
		}
		else{
		
		cout<<res<<endl;
	}}
}
