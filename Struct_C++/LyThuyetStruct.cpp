#include<bits/stdc++.h>
using namespace std;
struct sophuc{
	int a,b;
	//Cach 1 nap chong toan tu
//	sophuc operator + (const sophuc other){
//		sophuc tong;
//		tong.a=a+other.a;
//		tong.b=b+other.b;
//		return tong;
//	}

    //Cach 2 nap chong toan tu
	friend sophuc operator + (const sophuc x, const sophuc y){
		sophuc tong ;
		tong.a=x.a+y.a;
		tong.b=x.b+y.b;
		return tong;
	}
	//insertion >>  thay vi minh dung void nhap thi dung nap chong toan tu >>
	friend istream& operator >> (istream& in,sophuc &x){
		cin>>x.a>>x.b;
		return in;
	}
	//extraction <<  thay vi minh dung void xuat thi dung nap chong toan tu <<
	friend ostream& operator << (ostream& out,sophuc &x){
		cout<<x.a<<" "<<x.b;
		return out;
	}
};
int main(){
	sophuc a,b;//sophuc a+bj
	cin>>a>>b;//no tu nhap cho a,b
	sophuc c=a+b;//sophuc sau khi bien doi theo ycbt
	cout<<c<<endl;
	return 0;
	
}
