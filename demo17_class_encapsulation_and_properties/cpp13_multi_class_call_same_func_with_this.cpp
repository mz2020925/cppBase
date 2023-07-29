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
	p3.addAgeReturnByValue(p1).addAgeReturnByValue(p1).addAgeReturnByValue(p1);  // ��ֵ���ݵķ�ʽ���أ�ǰ��˵������ÿ������캯��������һ����������������ӡp3.ageû�б��ֳ��ۼ�
	cout << p3.m_age << endl;

	Person p4(1);
	cout << p4.addAgeReturnByValue(p1).addAgeReturnByValue(p1).addAgeReturnByValue(p1).m_age << endl;    // ��ֵ���ݵķ�ʽ���أ�ǰ��˵������ÿ������캯��������һ����������������ӡ��󸱱������ֳ����ۼ�


	Person p5(1);
	p5.addAgeReturnByReference(p1).addAgeReturnByReference(p1).addAgeReturnByReference(p1);  // �����ô��ݵķ�ʽ���أ����Ƿ���ԭ���ı�������������ӡp5.age���ֳ��ۼ�
	cout << p5.m_age << endl;

	system("pause");

	return 0;
}