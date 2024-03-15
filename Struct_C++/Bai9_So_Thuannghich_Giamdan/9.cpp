#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
#include<map>
#include <utility>
#include<fstream>
#include<vector>
using namespace std;
int check(string s){
	// so tang giam == so doi xung nha :>>
	bool ok = true;
	long long l = s.size();
	if (s.size() <= 2) {
		return 0;
	}
	else {
		for (int i = 0; i < l / 2; i++) {
			if (s[i] != s[l - i - 1]) {
				ok = false;
			}
		}
	}
	if (!ok) {
		return 0;
	}
	else return 1;
}
int main() {
	map<string, int> mp;
	ifstream f;
	f.open("DOC.txt", ios::in);
	vector<string> v;
	while (!f.eof()) {
		string s;
		getline(f, s);
		size_t pos = 0;
		while ((pos = s.find(" ")) != string::npos) {
			v.push_back(s.substr(0, pos));
			s.erase(0, pos + 1);
			/*Trong ví dụ trên,
			mỗi lần hàm find() tìm thấy một khoảng trắng trong dòng văn bản,
			nó sẽ cắt ra câu trước khoảng trắng bằng hàm substr() và thêm nó vào danh sách câu.
			Câu còn lại sau khoảng trắng sẽ được xóa bỏ và quá trình tách câu sẽ tiếp tục cho đến khi hàm find() không tìm thấy khoảng trắng nào nữa.
			Cuối cùng,câu còn lại sẽ được thêm và*/
		}
		v.push_back(s);
	}
	int i = 0;
	while (i<v.size()){
		if (check(v[i]))
			mp[v[i]]++;
		i++;
	}
	for (auto it : mp) {
		cout << it.first << " " << it.second << endl;
	}
		f.close();
		return 0;
}
