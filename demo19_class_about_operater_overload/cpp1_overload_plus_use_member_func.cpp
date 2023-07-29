#include<iostream>
using namespace std;

class Person {
public:
	Person() {};
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}
	//成员函数实现 + 号运算符重载
	Person operator+(const Person& p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
public:
	int m_A;
	int m_B;
};

void test01() {
	Person p1(10, 10);
	Person p2(20, 20);
	//成员函数方式
	Person p3 = p1 + p2; //本质上相当于p3 = p1.operaor+(p2)
	cout << "m_A:" << p3.m_A << " m_B:" << p3.m_B << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}
