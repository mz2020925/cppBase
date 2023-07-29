#include<iostream>
#include<string>

using namespace std;


int main() {
	string s1 = "hello";
	// 下标[...]和at(...)是等价的
	// 字符串的取操作
	for (int i = 0; i < s1.size(); i++) {
		cout << s1[i] << "\n"<<endl;
		cout << s1.at(i) << "\n" << endl;
	}

	// 字符串的存操作
	s1[0] = 'x';
	s1.at(1) = 'z';
	cout << s1 << endl;


	system("pause");
	return 0;
}

