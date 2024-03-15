#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int t; cin>>t;
    while(t--){
    	int n;cin>>n;
    	int cnt=0;
    	int dem=0;
    	for(int i=2;i<=(n);i++){
    	     if(ngto(i)){
    	     	if(n%i==0) cnt++;
    	     	while(n%i==0){
    	     		n/=i;
				 }
				
			 }
		
		}
		if(n!=1){
			dem++;
		}
		cout<<cnt+dem<<endl;
	}
}
