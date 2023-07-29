#include<iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Base的构造函数" << endl;
	}

	~Base() {
		cout << "Base的析构函数" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son的构造函数" << endl;
	}

	~Son() {
		cout << "Son的析构函数" << endl;
	}
};


void test01() {
	Son son1;  // 由于Son是继承Base的，也是会继承构造方法(也就是说创建子类的前面会创建父类)
	// 构造方法和析构方法的执行顺序是：父类构造，子类构造，子类析构，父类析构
}

int main() {
	test01();

	system("pause");
	return 0;
}




