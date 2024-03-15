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
struct hs {
	string ten;
	double toan, van, tb;
};
void nhap(hs& a);
void xuat(hs a[], int n);
void dem(hs a[], int n);
void dem2(hs a[], int n);
void sapxep(hs a[], int n);