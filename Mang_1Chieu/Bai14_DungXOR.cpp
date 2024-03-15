#include<bits/stdc++.h>
using namespace std;
int a[1000];
// ta su dung phep XOR 1 so XOR voi 0 thi bang chinh no , neu 1 so XOR voi chinh no thi bang 0
// vd 2 2 3 4 4 ta XOR 2 2  thi no bang 0 , XOR tiep gia tri 0 vowi 3 thi no bang 3, kieu nhu may so giong nhau thi no bang 0 het con lai so khong giong cac so kha thi ow lai
int main(){
	int t;cin>>t;
	while(t--){
		int n ;cin>>n;
		for(int i=0;i<n;i++)
		cin>>a[i];
	
	
	int s=a[0];// lay gia trij ban dau la a[o] de ta xor dan dan len
	for(int i=0;i<n;i++){
		s^=a[i]; // xor s voi cac chi so a[i]
	}

	cout<<s<<endl;}
}
