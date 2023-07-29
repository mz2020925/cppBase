#include<iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		this->m_age = age;
	}

	Person addAgeReturnByValue(Person& p) {
		this->m_age += p.m_age;
		return *this;
	}

	Person& addAgeReturnByReference(Person& p) {
		this->m_age += p.m_age;
		return *this;
	}

public:
	int m_age;
};



int main() {
	Person p1(1);
	cout << p1.m_age << endl;

	Person p2(1);
	p2.addAgeReturnByValue(p1);
	cout << p2.m_age << endl;

	Person p3(1);
	p3.addAgeReturnByValue(p1).addAgeReturnByValue(p1).addAgeReturnByValue(p1);  // 以值传递的方式返回，前面说过会调用拷贝构造函数，生成一个副本，所以最后打印p3.age没有表现出累加
	cout << p3.m_age << endl;

	Person p4(1);
	cout << p4.addAgeReturnByValue(p1).addAgeReturnByValue(p1).addAgeReturnByValue(p1).m_age << endl;    // 以值传递的方式返回，前面说过会调用拷贝构造函数，生成一个副本，所以最后打印最后副本，表现出了累加


	Person p5(1);
	p5.addAgeReturnByReference(p1).addAgeReturnByReference(p1).addAgeReturnByReference(p1);  // 以引用传递的方式返回，就是返回原本的变量，所以最后打印p5.age表现出累加
	cout << p5.m_age << endl;

	system("pause");

	return 0;
}