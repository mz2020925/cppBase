#include<iostream>

using namespace std;
/*
ע�����

* ���ܴ��ڶ�����


* ģ�����Ҫ��ָ��T���������ͣ��������ſ���ʹ�����ģ��,��cpp2_notes_of_template.cpp


*/

// ʹ��ģ��ʵ���������ݽ����ĺ���
template<typename T>
void swapNum(T& a, T& b) {  // �����Ƿ����������ͣ�������˵����ֻ�� T& ������
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	int a = 10;
	int b = 100;
	swapNum(a, b);
	cout << a << "," << b << endl;
}

void test02() {
	double a = 1.11;
	double b = 2.22;
	swapNum(a, b);
	cout << a << "," << b << endl;
}

int main() {

	test01();
	test02();

	system("pause");
	return 0;
}