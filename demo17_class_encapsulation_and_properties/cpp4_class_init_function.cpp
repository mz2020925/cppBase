#include<iostream>
using namespace std;

class Person {
public:
	// 这里构造函数用了重载技术
	Person(){}

	Person(string name_in, int age_in) {
		name = name_in;
		age = age_in;
	}

	// 拷贝构造方法，将传进来的类（的属性）拷贝到本类中，传进来的类与本类本就是同一个类，拷贝构造只是用传进来的类初始化本类
	Person(const Person& person) {  // const表示不允许被修改
		name = person.name;
		age = person.age;
	}


public:
	string name;
	int age;
};


// 1.调用无参构造函数
void test01() {
	Person p;
	// 注意：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明，即不可以写成Person p();
	// 注意：这样写就是创建对象，和java中不一样，java中new Person()才是创建对象，Person p是定义了一个引用变量，需要写成Person p=new Person()。
}
// 2.调用有参的构造函数
void test02() {

	// 2.1  括号法，常用
	Person p1("zmz", 10);  // Person("zmz", 10)单独这样写是创建匿名对象，这个对象没有名字,当前行结束之后，马上析构，因为没有名字，就没办法使用这个对象
	
	// 2.2 显式法
	Person p2 = Person("zmz", 10);
	Person p3 = Person(p2);  // 显式法使用拷贝构造
	// 注意：Person (p2); -- 不能这样写，你这样写是想使用拷贝构造来创建匿名对象，但是这样行不通，这样写编译器会自动去掉括号变成 Person p2;

	

	// 2.3 隐式转换法
	Person p4 = { "zmz", 10 }; // 编译器会自动把隐式转换成显式：Person p4 = Person{ "zmz", 10 };
	Person p5 = p4; // 编译器会自动把隐式转换成显式：Person p5 = Person(p4);

}


//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}

