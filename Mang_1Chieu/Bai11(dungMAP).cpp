#include<bits/stdc++.h>
using namespace std;
map< int,int > mp;
int a[1000];
void ketqua(int n){
	for(int i=1;i<sqrt(n);i++){
		if(n%i==0){
			mp[i]++;//tang tan xuat xuat hien cua i
			if(i!=n/i){//tranh truong hop n la so chinh phuong(co dang k^2) nen khi chia  minh phai kiem tra n/i co bang i hay 
			     mp[n/i]++;       //  khong neu co thi n la so chinh phuong minh phai loai di uoc do keo cung 1 uoc lai dem 2 lan 
			    
			}
		}
	}
}
int main(){
	void ketqua(int n);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			ketqua(a[i]);
		}
		int res=1;
		for(auto it:mp){
			if(it.second<2){/* neu in ra map thi 1 9
			                                     2 3
			                                     3 2
			                                     4 1
			                                     5 3
			                                     7 2
			                                     10 1
			                                     14 1  */
			res=it.first;    //vkl cho nay no se gan cho res bang key lon nhat ma co value>=2; tuc la ucln cua 2 so bat ki trong mang
			}
		}
		cout<<res<<endl;
	}
}
