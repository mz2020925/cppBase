#include<iostream>
#include<string>

using namespace std;



int main() {
	// 1.ʹ��string����޲ι��캯�����������ַ���
	string s1;
	cout << "s1=" << s1 << endl;

	// 2.ʹ��string��Ĵ��ι��캯���������ַ���
	const char* a_string = "hello world";
	string s2(a_string);  // ��c_stringת����string
	cout << "s2=" << s2 << endl;

	// 3.ʹ��string�Ŀ������캯���������ַ���
	string s3(s2);
	cout << "s3=" << s3 << endl;

	// 4.ʹ��n���ַ�������һ���ַ���
	string s4(10, 'a');
	cout << "s4=" << s4 << endl;
	


	system("pause");
	return 0;
}