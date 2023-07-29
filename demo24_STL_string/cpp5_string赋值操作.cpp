#include<iostream>
#include<string>

using namespace std;


int main() {
	// 赋值方式一
	string s1 = "hello world";
	cout << s1 << endl;

	// 赋值方式二
	string s2 = s1;
	cout << s2 << endl;

	// 赋值方式三
	string s3;
	s3 = 'a';
	cout << s3 << endl;

	// 赋值方式四
	string s4;
	s4.assign("hello world");
	cout << s4 << endl;

	// 赋值方式五
	string s5;
	s5.assign("hello world", 8);
	cout << s5 << endl;

	// 赋值方式六
	string s6;
	s6.assign(s5);
	cout << s6 << endl;

	// 赋值方式七
	string s7;
	s7.assign(5, 'h');
	cout << s7 << endl;

	system("pause");
	return 0;
}

