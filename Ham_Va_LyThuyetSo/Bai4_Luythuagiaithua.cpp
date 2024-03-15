#include<bits/stdc++.h>
using namespace std;
// y tuong p=3 ,n=10!=10.9.8.7.6.5.4.3.2.1--> ta dem xem
// so lan xuat hien cua p trong 10! la : 3 , 2.3 , 3.3 -->4 lan xuat hien p vay tuong ung voi so mu lon nhat tm ycbt la 4
int main(){
	int t;cin>>t;
	while(t--){
		int n,p;cin>>n>>p;
		int dem=0;
		for(int i=p;i<=n;i+=p){
			int tmp=i;
				while((tmp%p)==0){// nhieu ban cho i trong vong while nay luon dan den gia tri i bi thay doi 
				//dan den vong for no bi sai--> khong ra ket qua , vay nen ta phair muon bien tam la tmp=i nha roi lay tmp dut vo while
					dem++;
					tmp/=p;
				}
		}
		cout<<"so x lon nhat can tim la :"<<dem<<endl;
	}
}
