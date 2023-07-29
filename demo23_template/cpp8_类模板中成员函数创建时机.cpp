#include<iostream>
using namespace std;

class Person1 {
public:
	void fun1() {
		cout << "构造函数一" << endl;
	}

};

class Person2 {
public:
	void fun2() {
		cout << "构造函数二" << endl;
	}
};

template<class T>
class MyClass {
public:
	T obj;

	// 在模板类中的成员函数，是在模板类调用它时再生成
	void memberFun1() {
		obj.fun1();
	}

	void memberFun2() {
		obj.fun2();
	}
};


int main() {
	MyClass<Person1> class1;
	class1.memberFun1();  // 在模板类中的成员函数，是在模板类调用它时再生成。
	// 意思就是现在 MyClass 中的 T 被指定为 Person1 ，但是 obj.fun2(); 因为 memberFun2() 没有被调用所以不会报错。

	class1.memberFun2();  // 现在调用了就会报错："fun2": 不是 "Person1" 的成员

	system("pause");
	return 0;
}