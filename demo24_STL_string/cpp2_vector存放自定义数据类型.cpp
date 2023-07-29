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

	// ��������
	Person<string, int> p1("aaa", 10);
	Person<string, int> p2("bbb", 20);
	Person<string, int> p3("ccc", 30);

	// �洢��������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	// �����㷨
	for (vector<Person<string, int>>::iterator it = v.begin(); it != v.end(); it++) {
		//Person<string, int> p = (*it);
		//cout << p.m_name << ", " << p.m_age << endl;
		cout << (*it).m_name << ", " << (*it).m_age << endl;
	}
}

void test02() {
	// ��������
	vector<Person<string, int>*> v;

	// �������������
	Person<string, int> p1("aaa", 10);
	Person<string, int> p2("bbb", 20);
	Person<string, int> p3("ccc", 30);

	// ������ĵ�ַ��������
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