#include<iostream>
using namespace std;


//静态成员函数
//	所有对象共享同一个函数
//	静态成员函数也是有访问权限的
//	静态成员函数"只能"访问静态成员变量--不可以访问普通成员变量，因为静态函数是公共的那个函数、没有所属类，普通成员变量有所属类，
//		所以静态函数函数在调用普通成员变量时，不知道这个普通成员变量是属于哪一个类。
//		而静态成员变量也是公共的那个变量，静态函数访问静态成员变量时，知道它就是公共的那个变量
class Person {
public:
	static void func() {
		cout << "静态函数执行了" << endl;
		cout << num << endl;
	}
private:
	static void func2() {
		cout << "私有静态函数执行了" << endl;
		cout << num << endl;
	}
public:
	static int num;
	int num2;

};


int main() {
	Person p;
	p.func();


	Person::func();

	Person::func2();  // 静态成员函数也是有访问权限的
	system("pause");

	return 0;
}
