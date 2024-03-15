#include<bits/stdc++.h>
using namespace std;
int ngaythang(int ngay,int thang){
	switch(thang){
		case 1: return ngay;break;
		case 2:return ngay+31;break;
		case 3:return ngay+31+28;break;
		case 4:return ngay+31+28+31;break;
		case 5:return ngay+31+28+31+30;break;
		case 6:return ngay+120+31;break;
		case 7:return ngay+120+31+30;break;
		case 8:return ngay+181+31;break;
		case 9:return ngay+181+31+31;break;
		case 10:return ngay+243+30;break;
		case 11:return ngay+243+30+31;break;
		case 12:return ngay+304+30;break;
	}
}

int main(){
	cout<<"Nhap ngay/thang : ";
	int ngay,thang;cin>>ngay>>thang;
	switch(ngaythang(ngay,thang)%7){
		case 1: cout<<"Thu 7";break;
		case 2:cout<<"Chu nhat";break;
		case 3:cout<<"Thu 2";break;
		case 4:cout<<"Thu 3";break;
		case 5:cout<<"Thu 4";break;
		case 6:cout<<"Thu 5";break;
		case 7:cout<<"Thu 6";break;
	}
}
