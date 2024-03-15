#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
#include<map>
#include<fstream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
struct sv 
{
	string mssv, ten, que;
	double toan ,ly ,hoa;
};
void nhap(sv& a);
void in(sv& a);
void doc(sv &a);
void xuat(sv a[], int n);
void timkiem(sv a[], int n);
void sapxep(sv a[], int n);
void hocbong(sv a[], int n);
