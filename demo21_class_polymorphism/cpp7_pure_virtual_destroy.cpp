#include<iostream>
using namespace std;

class Animal {
public:
	Animal() {
		cout << "Animal���캯��" << endl;
	}

	virtual ~Animal() = 0;

	virtual void speak() = 0;  // ���������������൱�����������������ٶ���
	//�Ͱ�����ͨ���麯������һ���������˴���������������Ҳ��һ�������ࡣ���ܹ���ʵ������
};

Animal::~Animal(){
	cout << "Animal�鹹����" << endl;
}


class Cat :public Animal {
public:
	Cat(string name) {
		cout << "Cat���캯��" << endl;
		m_name = new string(name);
	}

	~Cat() {
		cout << "Cat�鹹����" << endl;
		if (m_name != NULL) {
			delete m_name;
			m_name = NULL;
		}
	}

	virtual void speak() {
		cout <<*m_name<< "Сè��˵��" << endl;
	}

public:
	string* m_name;
};

void test01() {
	Animal* animal = new Cat("tom");
	animal->speak();
	delete animal;
}

int main() {
	test01();

	system("pause");
	return 0;
}

