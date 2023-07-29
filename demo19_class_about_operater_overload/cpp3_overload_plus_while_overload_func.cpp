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

public:
	int m_A;
	int m_B;
};

//ȫ�ֺ���ʵ�� + �����������
Person operator+(Person& p1, Person& p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

//������ĺ�������
Person operator+(Person& p1, int num) {
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

void test01() {
	Person p1(10, 10);
	Person p2(20, 20);
	//ȫ�ֺ�����ʽ
	Person p3 = p2 + p1; //�������൱��p3 = operaor+(p1,p2)
	cout << "m_A:" << p3.m_A << " m_B:" << p3.m_B << endl;

	Person p4 = p1 + 100; //�������൱��p4 = operaor+(p1,num)
	cout << "m_A:" << p4.m_A << " m_B:" << p4.m_B << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}