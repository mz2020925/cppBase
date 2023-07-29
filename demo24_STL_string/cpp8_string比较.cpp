#include<iostream>
#include<string>

using namespace std;


int main() {
	// 字符串对比主要是用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大

	string s1 = "hello";
	string s2 = "hellw";
	string s3 = "hello";

	int res1 = s1.compare(s2);
	cout <<"结果1:"<< res1 << endl;
	int res2 = s1.compare(s3);
	cout << "结果2：" << res2 << endl;


	system("pause");
	return 0;
}