#include<iostream>
using namespace std;
#include<fstream>

class Person {
public:
	char m_name[64];
	int m_age;
};



void test01() {
	
	ifstream ifs;
	
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
	}

	Person p;
	ifs.read((char*)&p, sizeof(p));  // 读到哪？读多少？
	cout <<"姓名"<< p.m_name <<endl<<"年龄"<< p.m_age << endl;

}


int main() {
	test01();

	system("pause");
	return 0;
}