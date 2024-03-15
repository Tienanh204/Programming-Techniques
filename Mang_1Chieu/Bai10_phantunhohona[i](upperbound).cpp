#include<bits/stdc++.h>
using namespace std;
int a[100001];
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<int> v(a,a+n);//coppy noi dug mang a cho vector v
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++){
			auto it=upper_bound(v.begin(),v.end(),a[i]);
			if(it==v.end()){
				cout<<"_";
			}
			else cout<<(*it)<<" ";
		}
		cout<<endl;
	}
	}


