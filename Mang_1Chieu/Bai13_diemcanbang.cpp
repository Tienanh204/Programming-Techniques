#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long  sum=0;
		for(int i=0;i<n;i++){
		 sum+=a[i];	
		}
		bool ok=false;// boen dung de check ket qua
		long long l=0;// ban dau ben trai cua phan tu dung dau se mac dinh =0;
		for(int i=0;i<n;i++){
			sum-=a[i];// ta xet tong sum nay tien ve phia truoc de tao thanh tong cac ptu ben phai cua chi so dang xet
			
			if(sum==l){//neu tong trai == tong phai thi in ra man hinh chi so i
				cout<<i<<" ";
				ok=true;
			}
			l+=a[i];// sau moi 1 lan duyet qua 1 chi so i thi ta laij cong cai gtri cua chi so i vao tong trai xong laij quay lai vong for de so sanh tiep cac chi so tiep theo
		}
		if(ok==false){//tuc la thang ok ban dau gan =flase no khong bi thay doi 
			cout<<" khong co phan tu thoa man "<<endl;
		}
	}
}
