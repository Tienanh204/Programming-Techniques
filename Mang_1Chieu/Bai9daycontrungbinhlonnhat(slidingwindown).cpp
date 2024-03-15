#include<bits/stdc++.h>
using namespace std;
int a[2001];
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int s=0;
		for(int i=0;i<k;i++){//duyet cua so dau tien va tinh tong cuar cua so dau
			s+=a[i];
		}
		int res=s,ta=0;
		for(int i=k;i<n;i++){//duyet cua so tiep theo 
			s=s-a[i-k]+a[i];
			if(s>res){
				res=s;//cap nhap cho bien res gia trij moi lon hon tong cua cua so cu vi dang di tim tong lon nhat ma
				ta=i-k+1;
			}
		}
		for(int i=0;i<k;i++){
			cout<<a[ta+i]<<" ";//in ra cac phan tu trong mang thoa man ycbt 
		}
	}
}
