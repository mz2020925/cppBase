#include<iostream>

using namespace std;
/*
当类模板碰到继承时，需要注意一下几点：

* 当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
* 如果不指定，编译器无法给子类分配内存
* 如果想灵活指定出父类中T的类型，子类也需变为类模板
*/


// 类模板父类
template<class T>
class Base {
public:
	T var;
};

// 普通子类,继承类模板父类,要指定出父类中T的类型
class Son :public Base<int> {
public:
	void fun1() {
		cout << var << endl;
	}
};


// 类模板子类，继承类模板父类
template<class T1, class T2>
class Son2 :public Base<T1> {
public:
	void fun1() {
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}

};



int main() {
	// 普通子类
	Son son;
	son.var = 1024;
	son.fun1();

	// 类模板子类
	Son2<int, char> son2;
	son2.fun1();



	system("pause");
	return 0;
}