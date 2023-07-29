#include<iostream>
using namespace std;

class BaseCalcu {
public:
	virtual int calcu() {
		return 0;
	}

public:
	int m_a;
	int m_b;

};

class Add:public BaseCalcu {
public:
	virtual int calcu() {
		return m_a + m_b;
	}
};

class Multi :public BaseCalcu {
public:
	virtual int calcu() {
		return m_a * m_b;
	}
};

class Sub :public BaseCalcu {
public:
	virtual int calcu() {
		return m_a - m_b;
	}
};

void test01() {
	//��̬ʵ�֣�����ָ�������ָ���������
	BaseCalcu* base = new Add;
	base->m_a = 10;
	base->m_b = 20;
	int result = base->calcu();
	cout << result << endl;
	delete base;
}

void test02() {
	//��̬ʵ�֣�����ָ�������ָ���������
	BaseCalcu* base = new Multi;
	base->m_a = 10;
	base->m_b = 20;
	int result = base->calcu();
	cout << result << endl;
	delete base;

	//��̬ʵ�֣�����ָ�������ָ���������
	base = new Sub;
	base->m_a = 10;
	base->m_b = 20;
	result = base->calcu();
	cout << result << endl;
	delete base;
}


int main() {
	test01();
	test02();

	system("pause");
	return 0;
}