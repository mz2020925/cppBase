#include<iostream>

using namespace std;

class Base {
public:
	Base() {
		m_A = 100;
	}

	void func() {
		cout << "Base�ĳ�Ա����" << endl;
	}

	void func(int a) {
		cout << "Base�����س�Ա����func(int a)" << endl;
	}

public:
	int m_A;
};

class Son :public Base {
public:
	Son() {
		m_A = 300;
	}

	void func() {
		cout << "Son�ĳ�Ա����" << endl;
	}

public:
	int m_A;
};

void test01() {
	Son son1;
	cout << son1.m_A << endl;  // ���ȵ����Լ��ģ���javaһ��
	cout << son1.Base::m_A << endl;  // ���ø������Ҫ��ʾָ��

	son1.func();
	son1.Base::func();

	//�������븸��ӵ��ͬ���ĳ�Ա����(������̬��)����������ظ��������е�ͬ����Ա����(�������ص�)
	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
	son1.Base::func(500);
}

int main() {
	test01();

	system("pause");
	return 0;
}