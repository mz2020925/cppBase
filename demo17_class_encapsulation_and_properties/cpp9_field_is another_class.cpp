#include<iostream>
using namespace std;

/*
当类中属性是其他类对象时，我们称该成员为 对象成员
	构造的顺序是 ：先调用对象成员的构造，再调用本类构造
	析构顺序与构造相反
*/

// 手机类
class Phone {
public:
	Phone(string phoneName_in) {
		phoneName = phoneName_in;
		cout << "Phone 带参构造函数执行" << endl;
	}

	~Phone() {
		cout << "Phone 析构函数执行" << endl;
	}

public:
	string phoneName;
};

// 人类
class Person {
public:
	Person(string name_in, string phone_in): name(name_in), phone(phone_in){  // 这里参数列表中的phone(phone_in)相当于Phone phone= "zmz";这是隐式转换法创建对象的方式
		cout << "Person 带参构造函数执行" << endl;
	}

	~Person() {
		cout << "Person 析构函数执行" << endl;
	}
public:
	string name;
	Phone phone;
};


void test01() {
	Person p1("zmz", "apple");
	cout << p1.name << "拿着手机" << p1.phone.phoneName << endl;

}

int main() {
	test01();
	system("pause");

	return 0;
}