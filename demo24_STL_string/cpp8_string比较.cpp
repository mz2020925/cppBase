#include<iostream>
#include<string>

using namespace std;


int main() {
	// �ַ����Ա���Ҫ�����ڱȽ������ַ����Ƿ���ȣ��ж�˭��˭С�����岢���Ǻܴ�

	string s1 = "hello";
	string s2 = "hellw";
	string s3 = "hello";

	int res1 = s1.compare(s2);
	cout <<"���1:"<< res1 << endl;
	int res2 = s1.compare(s3);
	cout << "���2��" << res2 << endl;


	system("pause");
	return 0;
}