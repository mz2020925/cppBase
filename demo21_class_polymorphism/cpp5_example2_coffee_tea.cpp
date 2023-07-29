#include<iostream>
using namespace std;

class AbstractBase {
public:
	AbstractBase() {
		cout << "基类构造函数" << endl;
	}
	virtual ~AbstractBase() {
		cout << "基类虚析构函数" << endl;
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
		cout << "煮水" << endl;
	}

	virtual void immerse() {
		cout << "冲泡咖啡" << endl;
	}

	virtual void pour() {
		cout << "把咖啡水倒入杯中" << endl;
	}
	virtual void addSomething() {
		cout << "加入糖和牛奶" << endl;
	}
};

class Tea :public AbstractBase {


public:
	virtual void boil() {
		cout << "煮水" << endl;
	}

	virtual void immerse() {
		cout << "冲泡茶叶" << endl;
	}

	virtual void pour() {
		cout << "把茶叶水倒入杯中" << endl;
	}
	virtual void addSomething() {
		cout << "加入枸杞" << endl;
	}
};

// 业务函数
void doBusiness(AbstractBase* aDrink) {
	aDrink->makeDrink();
	delete aDrink;
}

// 调用业务函数
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