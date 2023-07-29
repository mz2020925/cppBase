#include<iostream>
using namespace std;

/*
C++中拷贝构造函数调用时机通常有三种情况:
	1.使用一个已经创建完毕的对象来初始化一个新对象
	2.值传递的方式给函数参数传值
	3.以值方式返回局部对象
*/
class Person{
public:
	Person() {
		cout << "默认构造函数执行" << endl;
	}
	Person(int age_in) {
		age = age_in;
		cout << "带参构造函数执行" << endl;
	}
	Person(const Person& p) {
		age = p.age;
		cout << "拷贝构造函数执行" << endl;
	}

	~Person() {
		cout << "析构函数执行" << endl;
	}

public:
	int age;
};


// 1.使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
	Person p1(20);  // 调用带参构造方法
	Person p2(p1);  // 使用一个已经创建完毕的对象来初始化一个新对象，调用拷贝构造方法

}


// 2.值传递的方式给函数参数传值
void doWork(Person p) {
	p.age = 100;  // 这里是值传递，改变了本函数里面的局部变量p，不会改变调用本函数传进来的那个变量。
}
void test02() {
	Person p3;  // 调用带参构造方法
	doWork(p3);  // 值传递的方式给函数参数传对象，调用拷贝构造方法，函数收到的是一模一样的副本。值传递本身就会拷贝副本
}

//3.以值方式返回局部对象，返回的是对象的副本
Person doWork2() {
	Person p4;
	cout << (int*) & p4 << endl;
	return p4; // 以值方式返回局部对象，调用拷贝构造方法，返回的不是p4，而是返回一个和p4一摸一样的副本。值传递本身就会拷贝副本
}
void test03() {
	Person p5 = doWork2();  // 以值方式返回局部对象，接收到的是上面说过的一模一样的副本。
	cout << (int*) & p5 << endl;
}



int main() {

	//test01();
	//test02();
	test03();

	system("pause");

	return 0;
}