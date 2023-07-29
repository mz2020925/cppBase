#include<iostream>
using namespace std;

class Person {

public:
	string name;
	//静态成员变量
	//	所有对象共享同一份数据
	//	在编译阶段分配内存
	//	类内声明，类外初始化
	static int age;

private:
	static string gender;
};

int Person::age = 200;  // 类外初始化
string Person::gender = "boy";  // 类外初始化

void test01() {
	Person p;
	cout << p.age << endl;

	Person p2;
	p2.age = 100;
	cout << p.age << endl;  // 验证静态变量的共享性
}

void test02() {
	// 静态成员变量不仅可以像上面那样通过对象调取，还可以直接通过类名调取
	cout << Person::age << endl;
}

void test03() {
	// 静态成员变量也是有访问权限的，例如private修饰的静态成员变量不可以在类外访问，但是上面19行的初始化是可以的，这可能涉及到具体的作用于的问题
	cout << Person::gender << endl;
}

int main() {
	test01();
	test02();
	system("pause");

	return 0;
}