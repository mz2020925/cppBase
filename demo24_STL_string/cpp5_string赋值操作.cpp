#include<iostream>
#include<string>

using namespace std;


int main() {
	// ��ֵ��ʽһ
	string s1 = "hello world";
	cout << s1 << endl;

	// ��ֵ��ʽ��
	string s2 = s1;
	cout << s2 << endl;

	// ��ֵ��ʽ��
	string s3;
	s3 = 'a';
	cout << s3 << endl;

	// ��ֵ��ʽ��
	string s4;
	s4.assign("hello world");
	cout << s4 << endl;

	// ��ֵ��ʽ��
	string s5;
	s5.assign("hello world", 8);
	cout << s5 << endl;

	// ��ֵ��ʽ��
	string s6;
	s6.assign(s5);
	cout << s6 << endl;

	// ��ֵ��ʽ��
	string s7;
	s7.assign(5, 'h');
	cout << s7 << endl;

	system("pause");
	return 0;
}

