#include<iostream>

using namespace std;

// ��������ռλ��
void fun1(int a, int) {
	cout << a << endl;
}

// ��������ռλ��+Ĭ�ϲ���
void fun2(int a, int=30) {
	cout << a << endl;
}

//int main() {
//	fun1(30, 30);
//	fun2(30);
//
//	system("pause");
//	return 0;
//}