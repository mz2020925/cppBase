#include<iostream>

using namespace std;

// 类模板,******所谓模板，就是函数参数和类的属性用泛型修饰******
/*
类模板与函数模板区别主要有两点：

1. 类模板没有自动类型推导的使用方式
2. 类模板在模板参数列表中可以有默认类型

*/

template<class nameType, class ageType>
class Person {
public:
	Person(nameType name, ageType age) {  // 类模板在模板参数列表中设置 age 的默认类型是 int
		this->m_name = name;
		this->m_age = age;
	}

	void toString() {
		cout << this->m_name << "\n" << this->m_age << endl;
	}


public:

	nameType m_name;
	ageType m_age;
};


template<class nameType, class ageType=int>
class People {
public:
	People(nameType name, ageType age) {  // 类模板在模板参数列表中设置 age 的默认类型是 int
		this->m_name = name;
		this->m_age = age;
	}

	void toString() {
		cout << this->m_name << "\n" << this->m_age << endl;
	}


public:

	nameType m_name;
	ageType m_age;
};


int main() {
	Person<string, int> p1("zmz", 23);  //类模板没有自动类型推导的使用方式，<string, int>必须指定类型
	p1.toString();

	People<string> p2("hhh", 230);  //类模板没有自动类型推导的使用方式，<string, int>必须指定类型
	p2.toString();

	system("pause");
	return 0;
}