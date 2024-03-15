#include<bits/stdc++.h>
#include <algorithm>
// y tuong: tao bien res luu so cac so giong nhau nhieu nhieu trong mang 
using namespace std;
int a[1000];
int main(){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
        int dem=1,res=-1e9;
        for(int i=0;i<n;i++){
        	for(int j=i+1;j<n;j++){
        		if(a[i]==a[j]){
        			dem++;
				}
			}
			res=max(dem,res);// tao bien res luu so cac so giong nhau nhieu nhieu trong mang 
			
			dem=1;//cap nhap lai cho bien dem
		}
		if(res==0){// tuc la cac con meo trong mang deu khac nhau ---> thi ta loai n-1 con di
			cout<<n-1<<endl;
		}
		else{// tuc cac con meo trong mang co cac con giong nhau , so con giong nhau nhieu nhat thi ta du lai va loai di n-res nhung con con lai 
			cout<<n-res<<endl;
		}
}
//input
//2
//4
//1 2 3 4
//6
//1 2 2 1 2 1
//output
//3
//3
