#include<iostream>
using namespace std;

class Animal {
public:
	Animal() {
		cout << "Animal构造函数" << endl;
	}

	virtual ~Animal() = 0;

	virtual void speak() = 0;  // 纯虚析构函数，相当于先声明，在下面再定义
	//和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。
};

Animal::~Animal(){
	cout << "Animal虚构函数" << endl;
}


class Cat :public Animal {
public:
	Cat(string name) {
		cout << "Cat构造函数" << endl;
		m_name = new string(name);
	}

	~Cat() {
		cout << "Cat虚构函数" << endl;
		if (m_name != NULL) {
			delete m_name;
			m_name = NULL;
		}
	}

	virtual void speak() {
		cout <<*m_name<< "小猫在说话" << endl;
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

