#include<bits/stdc++.h>
//note INT_MAX :Ðinh nghia giá tri lon nhat cho mot int

using namespace std;
int a[100];
int main(){
		int cnt,res;
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		// cach 1:o(n^2)
		int cnt=INT_MAX;//Mình khoi tao cho bang int_max de ti nua tim min no moi cap nhap cho cnt, kieu nhu tao cho cnt 1 khoang rat lon sao cho dk res luon <=cnt thi moi dung cai doan if kia nha
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
			res= abs(a[i]-a[j]);
			if(res<=cnt){
				cnt=res;
			}
		}
	}
		cout<<cnt<<endl;
		
		//cach 2:o(Nlogn)
		
	    sort(a,a+n);// kieu nhu xap xep mang tang dan xong minh xet so ,vay thi cac so dung 
		//lien ke luon co hieu nho hon cac so dung o xa nen ta duyet i lay truoc tru sau la ok
		for(int i=0;i<n;i++){
			res=a[i]-a[i-1];
			if(res<=cnt){
				cnt=res;
			}
		}	
		cout<<cnt<<endl;
	}
}
//2
//5
//2 4 5 7 9
//10
//87 32 99 75 56 43 21 10 68 49

