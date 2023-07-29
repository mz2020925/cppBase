#include<iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "默认构造函数执行" << endl;
	}
	/*Person(int id_in, int age_in, int height_in) {
		id = id_in;
		age = age_in;
		height = height_in;
		cout << "带参构造函数执行" << endl;
	}*/
	// 带参构造函数之初始化列表
	Person(int id, int age, int height) :m_id(id), m_age(age), m_height(height) {
		cout << "带参构造函数执行" << endl;
	}
	Person(const Person& p) {
		id = p.id;
		age = p.age;
		height = p.height;
		cout << "拷贝构造函数执行" << endl;

	}
	
	~Person() {
		cout << "析构函数执行" << endl;
	}

public:
	int m_id;
	int m_age;
	int m_height;
};


void test01() {

	Person p1(2022, 22, 160);
	cout << p1.id << " " << p1.age << " " << p1.height << endl;

}

int main() {
	test01();
	system("pause");

	return 0;
}