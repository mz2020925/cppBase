#include<iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Ĭ�Ϲ��캯��ִ��" << endl;
	}
	/*Person(int id_in, int age_in, int height_in) {
		id = id_in;
		age = age_in;
		height = height_in;
		cout << "���ι��캯��ִ��" << endl;
	}*/
	// ���ι��캯��֮��ʼ���б�
	Person(int id, int age, int height) :m_id(id), m_age(age), m_height(height) {
		cout << "���ι��캯��ִ��" << endl;
	}
	Person(const Person& p) {
		id = p.id;
		age = p.age;
		height = p.height;
		cout << "�������캯��ִ��" << endl;

	}
	
	~Person() {
		cout << "��������ִ��" << endl;
	}

public:
	int m_id;
	int m_age;
	int m_height;
};


void test01() {

	Person p1(2022, 22, 160);
	cout << p1.id << " " << p1.age << " " << p1.height << endl;

}

int main() {
	test01();
	system("pause");

	return 0;
}