#include"Function.h"
  void nhap(sv &a) {
		cout << "Nhap ma sinh vien :";
		cin >> a.ma;
		cout << "Nhap ten sinh vien :";
		cin.ignore();
		getline(cin, a.ten);
		cout << "Nhap ten lop :";
		cin >> a.lop;
		cin.ignore();
		cout << "Nhap date of birth dd/mm/yyyy :";
		cin >> a.ns;
		cin.ignore();
		do {
			cout << "Nhap GPA:";
			cin >> a.gpa;
			if (a.gpa < 0 || a.gpa>4) {
				cout << "Diem GPA khong hop le vui long nhap lai" << endl;
			}
		} while (a.gpa < 0 || a.gpa>4);
	}

void in(sv& a){
		cout << "Ma sinh vien :" << a.ma << endl;
		cout << "Ten sinh vien :" << a.ten << endl;
		cout << "Lop :" << a.lop << endl;
		cout << "Ngay sinh :" << a.ns << endl;
		cout << "GPA :" << a.gpa << endl;
		cout << "_________________________________\n";
	}
//cau2
void ds(sv a[], int n) {
	cout << "______Danh sach sinh vien______ " << endl;
	for (int i = 0; i < n; i++) {
		in(a[i]);
	}
}
//cau3
void tim(sv a[],int n) {
	string ma1;
	cout << "Nhap ma sinh vien can tim :";
	cin >> ma1;
	bool ok = true;
	for (int i = 0; i < n; i++) {
		if (a[i].ma.find(ma1)!=string::npos) {
			in(a[i]);
			ok = false;
		}
	}
	if (ok == true) {
		cout << "Khong tim thay sinh vien" << endl;
	}
}
//cau4
//cach1
void lietke1(sv a[], int n) {
	int res = -1, dem = 0;
	for (int i = 0; i < n; i++) {
		double s = a[i].gpa;
		if (s >= res) {
			res = s;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i].gpa == res) {
			in(a[i]);
		}
	}
}
////cach2
//void lietke1(sv a[], int n) {
//	double res = -1;
//	vector<int> idx;
//	for (int i = 0; i < n; i++) {
//		if (a[i].gpa > res) {
//			res = a[i].gpa;
//			idx.clear();
//			idx.push_back(i);
//		}
//		else if(a[i].gpa==res){
//			idx.push_back(i);
//		}
//	}
//	for (int i = 0; i < idx.size(); i++) {
//		cout << idx[i];
//	}
//}

//cau5
//cach 1
void lietke2(sv a[], int n) {
	double cnt[50];int  k = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].gpa >= 2.5) {
			cnt[k++] = a[i].gpa;
		}
	}
	for (int i = 0; i < k; i++) {
		int s = i;
		for (int j = i + 1; j < k; j++) {
			if (cnt[s] < cnt[j]) {
				s = j;
			}
			swap(cnt[s], cnt[i]);
		}
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j].gpa == cnt[i]) {
				in(a[j]);
			}
		}
	}
}


////cach2
//bool cmp1(sv a, sv b) {
//	return a.gpa > b.gpa;
//}
//void lietke2(sv a[], int n) {
//	vector<sv> v;
//	for (int i = 0; i < n; i++) {
//		if (a[i].gpa >= 2.5) {
//			v.push_back(a[i]);
//		}
//	}
//	sort(v.begin(), v.end(),cmp1);
//	for (sv x : v) {
//		in(x);
//	}
//}

//cau6
////cach 1
//string chuanhoa(string name) {
//	stringstream ss(name);
//	vector<string> v;
//	string tmp, res ="";
//	while (ss >> tmp) {
//		v.push_back(tmp);
//	}
//	for (int i = v.size() - 1; i >= 0; i--) {
//		res += v[i];
//	}
//	return res;
//}
//bool cmp2(sv a, sv b){
//	string ten1 = chuanhoa(a.ten);
//	string ten2 = chuanhoa(a.ten);
//	return ten1 < ten2;
//}
//void sapxep(sv a[], int n) {
//	sort(a, a + n, cmp2);
//	for (int i = 0; i < n; i++) {
//		in(a[i]);
//	}
////}
////cach 2

vector<string> chuanhoa(string name) {
	stringstream ss(name);
	vector<string> v;
	string tmp;
	while (ss >> tmp) {
		v.push_back(tmp);
	}
	return v;
}

bool cmp2(sv a, sv b) {
	vector<string> v1 = chuanhoa(a.ten);
	vector<string> v2 = chuanhoa(b.ten);
	if (v1.back() != v2.back()) return v1.back() < v2.back();//so sanh ten
	int len1 = v1.size(), len2 = v2.size();
	for (int i = 0; i < min(len1, len2); i++) {
		if (v1[i] < v2[i]) return v1[i] < v2[i];//so sanh ho va ten dem;
	}
	return len1 < len2;// 2 dua trung het ten ho va ten dem thi minh so sanh ten thang nao dai hon
}
void sapxep(sv a[], int n) {
	sort(a, a + n, cmp2);
	for (int i = 0; i < n; i++) {
		in(a[i]);
	}
}

//cau7
string chuanhoa1(string name) {
	vector<string> v1;
	stringstream ss(name);
	string token, res = "";
	while (ss >> token) {
		v1.push_back(token);
	}
	res += v1[v1.size() - 1];
	for (int i = 0; i < v1.size() - 1; i++) {
		res += v1[i];
	}
	return res;

}
bool cmp3(sv a, sv b) {
	if (a.lop != b.lop) return a.lop < b.lop;
	string ten1 = chuanhoa1(a.ten), ten2 = chuanhoa1(b.ten); return ten1 < ten2;
}
void sapxep1(sv a[], int n) {
	sort(a, a + n, cmp3);
	for (int i = 0; i < n; i++) {
		in(a[i]);
	}
}

//cau8 
bool cmp4(sv a, sv b) {
	if (a.lop != b.lop) return a.lop < b.lop;//cung lop se dung canh nhau
    return a.gpa > b.gpa;
}
void sapxep2(sv a[], int n) {
	sort(a, a + n,cmp4);
	for (int i = 0; i<n; i++) {
		in(a[i]);
	}
}
