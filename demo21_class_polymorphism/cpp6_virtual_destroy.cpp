#include<iostream>
using namespace std;

// ��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//�����ʽ���������е�����������Ϊ**������**����**��������**
class Animal {
public:
	Animal() {
		cout << "BaseClass�Ĺ��캯��" << endl;
	}

	virtual ~Animal() {  // ��������������������������virtual�Ļ���ָ���̬ʱ�ͷŶ�����ʱ��Ͳ����Զ������������������
		cout << "BaseClass������������" << endl;
	}

	virtual void speak() = 0;
};


class Cat:public Animal {
public:
	Cat(string name) {
		cout << "Son�Ĺ��캯��" << endl;
		m_name = new string(name);
	}

	~Cat() {
		cout << "Son����������" << endl;
		if (this->m_name != NULL) {
			delete m_name;
			m_name = NULL;
		}
	}

	virtual void speak() {
		cout <<*m_name<< "Сè��˵��" << endl;
	}


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