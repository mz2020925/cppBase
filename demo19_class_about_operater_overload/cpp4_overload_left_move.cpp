#include<iostream>
using namespace std;

class Person {
public:
	int m_a;
	int m_b;
	//�����Ա����ʵ�ֵĻ������õ�ʱ���� "p << cout" ��ʽ���ⲻ��������Ҫ��Ч��
	//void operator<<(Person& p){
	//}
};

//ֻ������ȫ�ֺ����������������
ostream& operator<<(ostream& cout, Person& p) {  // ��������operator()�������Ļ��Ϳ���д�� "cout << p" ��ʽ������������Ҫ��Ч��
	cout << "m_a: " << p.m_a << ", m_b: " << p.m_b;
	return cout;
}

void test01() {
	Person p;
	p.m_a = 100;
	p.m_b = 200;

	cout << p << endl;
}




int main() {
	test01();

	system("pause");
	return 0;
}