#include<iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Base�Ĺ��캯��" << endl;
	}

	~Base() {
		cout << "Base����������" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son�Ĺ��캯��" << endl;
	}

	~Son() {
		cout << "Son����������" << endl;
	}
};


void test01() {
	Son son1;  // ����Son�Ǽ̳�Base�ģ�Ҳ�ǻ�̳й��췽��(Ҳ����˵���������ǰ��ᴴ������)
	// ���췽��������������ִ��˳���ǣ����๹�죬���๹�죬������������������
}

int main() {
	test01();

	system("pause");
	return 0;
}




