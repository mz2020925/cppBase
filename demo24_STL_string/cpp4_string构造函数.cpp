#include<iostream>
#include<string>

using namespace std;



int main() {
	// 1.使用string类的无参构造函数，创建空字符串
	string s1;
	cout << "s1=" << s1 << endl;

	// 2.使用string类的带参构造函数，创建字符串
	const char* a_string = "hello world";
	string s2(a_string);  // 把c_string转换成string
	cout << "s2=" << s2 << endl;

	// 3.使用string的拷贝构造函数，创建字符串
	string s3(s2);
	cout << "s3=" << s3 << endl;

	// 4.使用n个字符来构造一个字符串
	string s4(10, 'a');
	cout << "s4=" << s4 << endl;
	


	system("pause");
	return 0;
}