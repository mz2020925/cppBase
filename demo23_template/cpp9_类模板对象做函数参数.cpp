#include<iostream>
using namespace std;

/*
模板类作为函数参数传入，一共有三种传入方式：

1. 指定传入的类型   --- 直接显示对象的数据类型
2. 参数模板化           --- 将对象中的参数变为模板进行传递
3. 整个类模板化       --- 将这个对象类型 模板化进行传递



*/

template<class N, class A>
class Person {
public:
	Person(N name, A age) {
		this->m_name = name;
		this->m_age = age;
	}

	void toString() {
		cout << "name:" << this->m_name << ", age:" << m_age << endl;
	}


public:
	N m_name;
	A m_age;
};


// 方式一
void test01(Person<string, int>& p) {
	p.toString();
}


// 方式二
template<typename T1, typename T2>
void test02(Person<T1, T2>& p) {
	p.toString();
}


// 方式三
template<typename T>
void test03(T& p) {
	p.toString();
}


int main() {
	Person<string, int> p1("zmz", 120);

	test01(p1);
	test02(p1);
	test03(p1);


	system("pause");
	return 0;
}
