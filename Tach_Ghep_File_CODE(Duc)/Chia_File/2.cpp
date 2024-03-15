#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include <direct.h> 
#include <stdlib.h>
using namespace std;
void Duong_Dan(char* link)
{
	_getcwd(link, _MAX_PATH);
}
int main() {
	char link[_MAX_PATH];
	Duong_Dan(link);
	fstream f;
	string ten_file;
	int Kich_co;
	cout << "Nhap duong dan file: ";
	cin >> ten_file;
	cout << "Nhap dung luong muon chia (don vi B): ";
	cin >> Kich_co;
	f.open(ten_file.c_str(), ios::in | ios::binary);
	f.seekg(0, ios::end);
	int size = f.tellg();
	f.seekg(0, 5);
	int i = 1;
	while (i <= (size / Kich_co)) {
		string ten_tep = ten_file;
		string dem_so;
		stringstream vd;
		vd << "_" << i;
		dem_so = vd.str();
		ten_tep.append(dem_so);
		fstream tep_nho;
		tep_nho.open(ten_tep.c_str(), ios::out | ios::binary);
		if (f.tellg() >= (size - (size % Kich_co))) {
			tep_nho.write(reinterpret_cast<char*>(&f), (size % Kich_co));
			tep_nho.close();
		}
		else {
			tep_nho.write(reinterpret_cast<char*>(&f), Kich_co);
			tep_nho.close();
			f.seekg(Kich_co, ios::cur);
		}
		cout << "Tep " << ten_tep << endl;
		i++;
	}
	f.close();
	return 0;
}

