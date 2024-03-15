#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a[1000];
  map<int ,int > mp;
		int n;cin>>n;
		for(int i=0;i<n;i++){
	          cin>>a[i];
			mp[a[i]]++;// dau tien no se gap a[0] sao so mp[a[0]]=0 sau do minh ++ thif lucs nay mp[a[0]]=1; 
			//            tuc gia trij a[0] xuat hien 1 lan xong cu the gap thang ke tiep nos laij danh dau y chang
		           }
		int dem=0;
		for(int i=0;i<n;i++){
			if(mp[a[i]]>=2){
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
//6
//10 20 30 30 20 5
//output
//2
//4	
