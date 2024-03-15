#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int t,res ;cin>>t;
	while(t--){
		int n;cin>>n;
		int res=-1e9;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
 res = 0; 
		for(int i=0;i<=res;i++){
			res=gcd(a[i],res); //ucln cua tat ca cac phan tu trong mang
		}
		int dem=1;// 1 uoc la chinh no nen ta dem truoc
		for(int i=2;i<sqrt(res);i++){// kieu nhu la ta tim duoc ucln cua all ptu trong mang roi thi uoc cua ucln do cung la uoc cua cac so con la(hay chia het)
			if(res%i==0) dem++;
			if(i!=res/i)//tuc la  res khong la so chinh phuong
			dem++;
		}
		cout<<dem<<endl;
	}

}
