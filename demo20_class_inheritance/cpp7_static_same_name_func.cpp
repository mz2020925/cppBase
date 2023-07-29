#include<iostream>

using namespace std;

class Base {
public:
	static void func() {
		cout << "Base下的静态方法" << endl;
	}
};

class Son:public Base {
public:
	static void func() {
		cout << "Son下的静态方法" << endl;
	}
};
void test() {
	// 通过对象访问
	Son son1;
	son1.func();
	son1.Base::func();

	// 通过类名访问
	Son::func();
	Son::Base::func();
	//当子类与父类拥有同名的成员函数(包括静态的)，子类会隐藏父类中所有的同名成员函数(包括重载的)
	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
}

int main() {



	system("pause");
	return 0;
}



