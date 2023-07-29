// C++开发中不建议使用多继承
#include<iostream>

using namespace std;


class Base1 {
public:
	Base1(){
		m_A = 100;
	}

public:
	int m_A;
};

class Base2 {
public:
	Base2() {
		m_A = 200;
	}

public:
	int m_A;
};


class Son :public Base1, public Base2 {
public:
	Son() {
		m_C = 300;
		m_D = 400;
	}

public:
	int m_C;
	int m_D;
};

void test() {
	Son son1;
	cout <<"Son占的存储空间：" << sizeof(son1) << endl;

	cout << son1.Base1::m_A << endl;
	cout << son1.Base2::m_A << endl;

}

int main() {
	test();

	system("pause");
	return 0;
}