#include<iostream>
#include<string>

using namespace std;
int main() {
	// 插入和删除的起始下标都是从0开始
	string s1 = "hello";
	// 插入
	s1.insert(1, "000");
	cout << s1 << endl;
	// 删除
	s1.erase(1, 3);  //从1号位置开始3个字符
	cout << s1 << endl;
	system("pause");
	return 0;
}