#include<iostream>

using namespace std;

class Base {
public:
	Base() {
		m_A = 100;
	}

	void func() {
		cout << "Base的成员函数" << endl;
	}

	void func(int a) {
		cout << "Base的重载成员函数func(int a)" << endl;
	}

public:
	int m_A;
};

class Son :public Base {
public:
	Son() {
		m_A = 300;
	}

	void func() {
		cout << "Son的成员函数" << endl;
	}

public:
	int m_A;
};

void test01() {
	Son son1;
	cout << son1.m_A << endl;  // 优先调用自己的，和java一样
	cout << son1.Base::m_A << endl;  // 调用父类的需要显示指定

	son1.func();
	son1.Base::func();

	//当子类与父类拥有同名的成员函数(包括静态的)，子类会隐藏父类中所有的同名成员函数(包括重载的)
	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
	son1.Base::func(500);
}

int main() {
	test01();

	system("pause");
	return 0;
}