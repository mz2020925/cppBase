#include<iostream>

using namespace std;

class Base {
public:
	static void func() {
		cout << "Base�µľ�̬����" << endl;
	}
};

class Son:public Base {
public:
	static void func() {
		cout << "Son�µľ�̬����" << endl;
	}
};
void test() {
	// ͨ���������
	Son son1;
	son1.func();
	son1.Base::func();

	// ͨ����������
	Son::func();
	Son::Base::func();
	//�������븸��ӵ��ͬ���ĳ�Ա����(������̬��)����������ظ��������е�ͬ����Ա����(�������ص�)
	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
}

int main() {



	system("pause");
	return 0;
}



