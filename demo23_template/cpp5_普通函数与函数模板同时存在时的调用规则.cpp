#include<iostream>

using namespace std;

/*
���ù������£�

1. �������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
2. ����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
3. ����ģ��Ҳ���Է�������
4. �������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��

*/

void fun() {
	cout << "��ͨ����" << endl;
}

template<typename T>
void fun() {
	cout << "ģ�庯��" << endl;
}

template<typename T>
void fun(int a, int b, int c) {
	cout << "ģ�庯��" << endl;
}



void fun(int a, int b) {
	cout << "��ͨ����" << endl;
}

template<typename T>
void fun(T a, T b) {
	cout << "ģ�庯��" << endl;
}


int main() {
	fun();  // ����ͨfun()��fun()�У�Ĭ�����ȵ�����ͨ����fun()
	fun<int>();  // ���<int>����ǿ�����ȵ���
	fun<int>(12, 23, 30);  // ģ�庯������

	fun('a', 'b');  // ��������£�ʹ��ģ�庯�� fun(T a, T b) ����ͨ���� fun(int a, int b) �����㣬������ʹ��ģ�庯������Ϊ��ʱ��ͨ������Ҫ�Զ�����ת��
	system("pause");
	return 0;
}

