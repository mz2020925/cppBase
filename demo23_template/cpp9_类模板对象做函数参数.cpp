#include<iostream>
using namespace std;

/*
ģ������Ϊ�����������룬һ�������ִ��뷽ʽ��

1. ָ�����������   --- ֱ����ʾ�������������
2. ����ģ�廯           --- �������еĲ�����Ϊģ����д���
3. ������ģ�廯       --- ������������� ģ�廯���д���



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


// ��ʽһ
void test01(Person<string, int>& p) {
	p.toString();
}


// ��ʽ��
template<typename T1, typename T2>
void test02(Person<T1, T2>& p) {
	p.toString();
}


// ��ʽ��
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
