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
struct sv {
	string ma, ten, lop, ns;
	double gpa;
};
int luachon();
void nhap(sv &a);
void in(sv &a);
void ds(sv a[], int n);
void tim(sv a[],int n);
void lietke1(sv a[], int n);
void lietke2(sv a[], int n);
void sapxep(sv a[], int n);
void sapxep1(sv a[], int n);
void sapxep2(sv a[], int n);