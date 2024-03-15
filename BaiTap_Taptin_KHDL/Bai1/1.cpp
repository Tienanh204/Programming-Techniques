#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ifstream f;
	string  s;
	f.open("DOC.txt",ios::in);
	if (!f) {
		cout << "Khong mo duoc file" << endl;
	}
	else {
		while (f.eof() == 0) {
			getline(f, s);
			cout << s << endl;
		}
	}
	f.close();
	return 0;
}