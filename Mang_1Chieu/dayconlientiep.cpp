//kiem tra do dai day con con lien tiep co cac phan tu khc nhau dai nhat 
#include<iostream>
using namespace std;
int main(){
	int a[100];
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int res=0,cnt=1,index=0;
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1]){
			cnt++;
		}
		else{
			cnt=1;
		}
		if(cnt>res){
			res=cnt;
			index=i-res+1;
		}
	}
for(int i=0;i<res;i++){
	cout<<a[i-index]<<" ";
}
}
