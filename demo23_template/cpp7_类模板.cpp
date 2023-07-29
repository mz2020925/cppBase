#include<iostream>

using namespace std;

// ��ģ��,******��νģ�壬���Ǻ�����������������÷�������******
/*
��ģ���뺯��ģ��������Ҫ�����㣺

1. ��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
2. ��ģ����ģ������б��п�����Ĭ������

*/

template<class nameType, class ageType>
class Person {
public:
	Person(nameType name, ageType age) {  // ��ģ����ģ������б������� age ��Ĭ�������� int
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
	People(nameType name, ageType age) {  // ��ģ����ģ������б������� age ��Ĭ�������� int
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
	Person<string, int> p1("zmz", 23);  //��ģ��û���Զ������Ƶ���ʹ�÷�ʽ��<string, int>����ָ������
	p1.toString();

	People<string> p2("hhh", 230);  //��ģ��û���Զ������Ƶ���ʹ�÷�ʽ��<string, int>����ָ������
	p2.toString();

	system("pause");
	return 0;
}