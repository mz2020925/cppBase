#include<iostream>
using namespace std;

int& fun1() {
	int a = 100;
	return a;
}

int& fun2() {
	static int a = 10;
	return a;
}

//int main() {
//
//	// 1.��Ҫ���ؾֲ���������
//	int& ref1 = fun1();
//	cout << "ref=" << ref1 << endl;  // ��һ���ܹ���ӡ��ȷ������Ϊ������������ʱ����
//	cout << "ref=" << ref1 << endl;  // �ڶ��δ�ӡ�ͻ����룬��Ϊ�ֲ�����������ڴ��ջ������fun1()�������ý�����ͻ��ͷ��ڴ�
//
//	// 2.����������Ϊ��ֵ
//	int& ref2 = fun2();
//	cout << "ref=" << ref2 << endl;  // ��ʱfun2()�еı�����static���Σ�������ڴ��ȫ������������������������ϵͳ�ͷ�
//	cout << "ref=" << ref2 << endl;
//	cout << "ref=" << ref2 << endl;
//	cout << "ref=" << ref2 << endl;
//
//	fun2() = 1000;  // ������ʹ��ԭ����ֵ1000������ı���ref2Ҳ����֮����Ϊ1000����Ȼǰ����Ҫ��static����
//	cout << "ref=" << ref2 << endl;
//	cout << "ref=" << ref2 << endl;
//	cout << "ref=" << ref2 << endl;
//	cout << "ref=" << ref2 << endl;
//
//	system("pause");
//	return 0;
//}