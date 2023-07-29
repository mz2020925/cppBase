#include<iostream>
#include<vector>

using namespace std;

template<class N, class A>
class Person {
public:
	Person(N name, A age) {
		this->m_name = name;
		this->m_age = age;
	}

public:
	N m_name;
	A m_age;
};

void test01() {
	vector<Person<string, int>> v;

	// 创建对象
	Person<string, int> p1("aaa", 10);
	Person<string, int> p2("bbb", 20);
	Person<string, int> p3("ccc", 30);

	// 存储到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	// 遍历算法
	for (vector<Person<string, int>>::iterator it = v.begin(); it != v.end(); it++) {
		//Person<string, int> p = (*it);
		//cout << p.m_name << ", " << p.m_age << endl;
		cout << (*it).m_name << ", " << (*it).m_age << endl;
	}
}

void test02() {
	// 创建容器
	vector<Person<string, int>*> v;

	// 将对象存入容器
	Person<string, int> p1("aaa", 10);
	Person<string, int> p2("bbb", 20);
	Person<string, int> p3("ccc", 30);

	// 将对象的地址存入容器
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);

	for (vector<Person<string, int>*>::iterator it = v.begin(); it != v.end(); it++) {
		Person<string, int>* p = (*it);
		cout << p->m_name << ", " << p->m_age << endl;
	}
}

int main() {
	test01();
	test02();

	

	system("pause");
	return 0;
}