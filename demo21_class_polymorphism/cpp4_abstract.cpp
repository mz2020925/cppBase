#include<iostream>
using namespace std;

class Base {
public:
	//纯虚函数
	//类中只要有一个纯虚函数就称为抽象类
	//抽象类无法实例化对象
	//子类必须重写父类中的纯虚函数，否则也属于抽象类
	virtual int func() = 0;

};

class Son :public Base {
	virtual int func() {
		cout << "该方法被执行..." << endl;
		return 100;
	}
};

void test01() {
	Base* base = NULL;
	//base = new Base; // 错误，抽象类无法实例化对象
	base = new Son;
	cout << base->func() << endl;
}


int main() {
	test01();
	system("pause");
	return 0;
}