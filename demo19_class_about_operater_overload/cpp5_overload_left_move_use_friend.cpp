#include<iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b) {
		this->m_a = a;
		this->m_b = b;
	}

private:
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
	Person p(100, 200);

	cout << p << endl;
}




int main() {
	test01();

	system("pause");
	return 0;
}