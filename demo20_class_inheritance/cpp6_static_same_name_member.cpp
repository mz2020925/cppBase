#include<iostream>

using namespace std;

class Base {
public:
	static int m_A;
};
int Base::m_A = 100;

class Son :public Base{
public:
	static int m_A;
};
int Son::m_A = 300;


void test() {
	// 通过对象来访问
	Son son1;
	cout << son1.m_A << endl;
	cout << son1.Base::m_A << endl;

	// 直接通过类名来访问
	cout << Son::m_A << endl;
	cout << Son::Base::m_A << endl;  // 第一个::意味着通过类名访问，第二个::意味着访问父类作用域下的m_A

}

int main() {
	test();

	system("pause");
	return 0;
}