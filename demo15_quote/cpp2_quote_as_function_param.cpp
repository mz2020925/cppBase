#include<iostream>
using namespace std;

void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}


void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap3(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

//int main() {
//	int a = -10;
//	int b = 100;
//	
//	// 1.ֵ���ݲ�����ʵ��
//	swap1(a, b);
//	cout << "a="<<a << ", " <<"b="<< b << endl;
//
//	// 2.ָ�봫��
//	swap2(&a, &b);
//	cout << "a=" << a << ", " << "b=" << b << endl;
//
//	//3.���ô���
//	swap3(a, b);
//	cout << "a=" << a << ", " << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}