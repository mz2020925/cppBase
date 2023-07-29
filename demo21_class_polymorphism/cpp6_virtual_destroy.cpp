#include<iostream>
using namespace std;

// 多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方式：将父类中的析构函数改为**虚析构**或者**纯虚析构**
class Animal {
public:
	Animal() {
		cout << "BaseClass的构造函数" << endl;
	}

	virtual ~Animal() {  // 如果父类这里的虚析构函数不加virtual的话，指针多态时释放堆区的时候就不会自动调用子类的析构函数
		cout << "BaseClass的虚析构函数" << endl;
	}

	virtual void speak() = 0;
};


class Cat:public Animal {
public:
	Cat(string name) {
		cout << "Son的构造函数" << endl;
		m_name = new string(name);
	}

	~Cat() {
		cout << "Son的析构函数" << endl;
		if (this->m_name != NULL) {
			delete m_name;
			m_name = NULL;
		}
	}

	virtual void speak() {
		cout <<*m_name<< "小猫在说话" << endl;
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