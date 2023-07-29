#include<iostream>
#include<string>

using namespace std;



int main() {
	string s1 = "hello";

	// 1.拼接方式一
	s1 += " world";
	cout << s1 << endl;

	// 2.拼接方式二
	s1.append(" love");

	// 3.截取2个字符，拼接到字符串末尾
	s1.append("hahaha", 2);

	//4.从下标1位置开始 ，截取2个字符，拼接到字符串末尾
	s1.append("lalala", 1, 2);



	system("pause");
	return 0;
}
