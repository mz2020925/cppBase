#include<iostream>
using namespace std;

class Base {
public:
	//���麯��
	//����ֻҪ��һ�����麯���ͳ�Ϊ������
	//�������޷�ʵ��������
	//���������д�����еĴ��麯��������Ҳ���ڳ�����
	virtual int func() = 0;

};

class Son :public Base {
	virtual int func() {
		cout << "�÷�����ִ��..." << endl;
		return 100;
	}
};

void test01() {
	Base* base = NULL;
	//base = new Base; // ���󣬳������޷�ʵ��������
	base = new Son;
	cout << base->func() << endl;
}


int main() {
	test01();
	system("pause");
	return 0;
}