#include<iostream>

using namespace std;

class Person{
public:
	// ���캯��
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

public:
	string m_Name;
	int m_Age;

};


template<typename T>
bool compare(T& a, T& b) {  // ����д���ǲ����ԱȽ�����Person���Ƿ���ȵģ��������޷����������T�Ƶ�ΪPerson�࣬
	// ������������֣�һ�������������==�������ܹ����ж�����Person�ࣻ��һ�����������ص�ģ�庯��
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}


template<> bool compare(Person& p1, Person& p2) {  // ����д���ǲ����ԱȽ�����Person���Ƿ���ȵģ��������޷����������T�Ƶ�ΪPerson�࣬
	// ������������֣�һ�������������==�������ܹ����ж�����Person�ࣻ��һ������������ģ�庯��
	if (p1.m_Name == p2.m_Name && p1.m_Age==p2.m_Age) {
		return true;
	}
	else {
		return false;
	}
}



int main() {
	Person p1("zmz", 12);
	Person p2("zmz", 12);
	cout << compare(p1, p2) << endl;

	system("pause");
	return 0;
}
