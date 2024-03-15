#include<bits/stdc++.h>
// nhap vao danh sach cac sinh vien va sap xep cac sinh vien theo gpa giam dan
using namespace std;
struct sv{
	string mssv,ten;
	double gpa;
    bool operator < (const sv other){// dinh nghia dau <
    	return gpa<other.gpa;// gpa cua sv hien tai < gpa sinh vien khac
	}
};
int main(){
	cout<<"So sinh vien :";
	int n;cin>>n;
	sv ds[n];
	// tao 1 mang de luu thong tinh cac sinh vien (danh sach sinh vien)
	for(int i=0;i<n;i++){
		cin>>ds[i].mssv;// truy cap vao sanh sach i
		cin.ignore();
		getline(cin,ds[i].ten);
		cin>>ds[i].gpa;
	}
	sort(ds,ds+n);// no se mac dinh la sap xep theo gpa vi minh da dinh nghia toan tu < roi
		cout<<"Danh Sach Sinh Vien da sap xep :"<<endl;
	for(int i=0;i<n;i++){
		cout<<ds[i].mssv<<" "<<ds[i].ten<<" "<<ds[i].gpa<<endl;
	}
}
