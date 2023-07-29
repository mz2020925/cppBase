#include<iostream>
#include<queue>
#include<string>

using namespace std;


class Person {
public:
	Person(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}

public:
	string m_name;
	string m_age;
};

void test01() {
	queue<Person> q1;

	Person p1("������", 18);
	Person p2("��˼��", 35);
	Person p3("л����", 18);
	Person p4("л΢��", 18);
	Person p5("���ص�", 40);
	Person p6("����", 18);

	// 1.push(elem); ����β���Ԫ��
	q1.push(p1);
	q1.push(p2);
	q1.push(p3);
	q1.push(p4);
	q1.push(p5);
	q1.push(p6);

	// 2.front(); ���ص�һ��Ԫ��
	cout << q1.front().m_name <<", "<<q1.front().m_age << endl;

	// 3.back(); �������һ��Ԫ��
	cout << q1.back().m_name << ", " << q1.back().m_age << endl;
	
	//4.size(); ����ջ�Ĵ�С
	cout << q1.size() << endl;

	// 5.empty(); �ж϶��Ƿ�Ϊ��
	while (!q1.empty()) {
		cout << q1.front().m_name << ", " << q1.front().m_age << endl;
	// 6.pop(); ������ͷԪ��
		q1.pop();
	}


}


int main() {
	test01();




	system("pause");
	return 0;
}