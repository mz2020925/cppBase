#include<iostream>
using namespace std;
#include<fstream>


class Person {

public:
	char m_name[64];  // C++中不推荐使用string来创建字符串，有点问题，就用C中的字符数组来表示字符串
	int m_age;


};


void test01() {
	//1、包含头文件

	//2、创建输出流对象
	ofstream ofs;
	
	//3.打开文件
	ofs.open("person.txt", ios::out | ios::binary);

	//4.把Person类以二进制的形式写入文件，有点像java的序列化
	//Person p = Person("zmz", 22);  // 这样创建对象好理解，但是我们没有写构造函数，因此用隐式转换方式
	Person p = { "zmz", 22 };
	ofs.write((const char*)&p, sizeof(p));  // 写到哪？写多少？

	//5.关闭文件
	ofs.close();
}



int main() {
	test01();

	system("pause");
	return 0;
}