#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int pos[101]={0};/*khoi tao mang =0, muc dich de tham chieu xem cai
		 chi so nao no co the duoc sap xep thoi nha*/
		for(int i=0;i<m;i++){
		    int x;cin>>x;
		    pos[x-i]=1 ;// minh co the swap 2 thang o chi so p[x] va p[x+1]
		}
		for(int i=0;i<n;i++){
			if(pos[i]==0) continue;// tuc chi so thu i minh khong the wap duoc , thi minh bo qua vong for do
			int index=i;
			while(index<n&&pos[index]){// van con co the hoan vi o chi so index va index+1
				index++;
			}
			sort(a+1,a+index+1);
			i=index;
		}
		bool ok=true;//check mang 
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1]){// kiem tra xem mang co tang dan hay k
				ok=false;
				break;
			}
		}
		if(ok==true){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}
