#include<iostream>

using namespace std;

class Base {
public:
	static int m_A;
};
int Base::m_A = 100;

class Son :public Base{
public:
	static int m_A;
};
int Son::m_A = 300;


void test() {
	// ͨ������������
	Son son1;
	cout << son1.m_A << endl;
	cout << son1.Base::m_A << endl;

	// ֱ��ͨ������������
	cout << Son::m_A << endl;
	cout << Son::Base::m_A << endl;  // ��һ��::��ζ��ͨ���������ʣ��ڶ���::��ζ�ŷ��ʸ����������µ�m_A

}

int main() {
	test();

	system("pause");
	return 0;
}