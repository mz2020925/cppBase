#include<iostream>
using namespace std;

class AbstractBase {
public:
	AbstractBase() {
		cout << "���๹�캯��" << endl;
	}
	virtual ~AbstractBase() {
		cout << "��������������" << endl;
	}

public:
	virtual void boil() = 0;
	virtual void immerse() = 0;
	virtual void pour() = 0;
	virtual void addSomething() = 0;

	void makeDrink() {
		boil();
		immerse();
		pour();
		addSomething();
	}
};


class Coffee :public AbstractBase {
public:
	virtual void boil() {
		cout << "��ˮ" << endl;
	}

	virtual void immerse() {
		cout << "���ݿ���" << endl;
	}

	virtual void pour() {
		cout << "�ѿ���ˮ���뱭��" << endl;
	}
	virtual void addSomething() {
		cout << "�����Ǻ�ţ��" << endl;
	}
};

class Tea :public AbstractBase {


public:
	virtual void boil() {
		cout << "��ˮ" << endl;
	}

	virtual void immerse() {
		cout << "���ݲ�Ҷ" << endl;
	}

	virtual void pour() {
		cout << "�Ѳ�Ҷˮ���뱭��" << endl;
	}
	virtual void addSomething() {
		cout << "�������" << endl;
	}
};

// ҵ����
void doBusiness(AbstractBase* aDrink) {
	aDrink->makeDrink();
	delete aDrink;
}

// ����ҵ����
void test01() {
	doBusiness(new Coffee);
	cout << "--------------" << endl;
	doBusiness(new Tea);
}


int main() {
	test01();

	system("pause");
	return 0;
}