#include<iostream>
using namespace std;

class Person {
public:
	void showPerson() {
		cout << "showPerson��ִ����" << endl;
	}

	void showPersonAge() {
		//if (this == NULL) {  // ��ֹ���˸��ƻ��������д�������ָ���쳣
		//	return;
		//}
		cout << "showPersonAge��ִ���ˣ�" << this->m_age << endl;
	}


public:
	int m_age;

};


int main() {
	Person *p1 = NULL;  // ����дʱ�ᱨ��ģ�Person p1 = NULL;������Person *p1 = NULL;���ᱨ��

	p1->showPerson();  // p1������ע��㣺һ��������Person���ͣ���һ��������ֵ��NULL

	//p1->showPersonAge();  
	// ����дʱ�ᱨ��ģ���Ϊ cout << "showPerson��ִ���ˣ�" << m_age << endl; ��ִ��ʱ��
	// ��� cout << "showPerson��ִ���ˣ�" << this->m_age << endl; ���ʱ��this��p1=NULL����û��ָ��һ��ʵ����󣬵�Ȼthis->m_age�ᱨ��

	//Person p2;
	//cout << p2.m_age << endl;

	system("pause");

	return 0;
}