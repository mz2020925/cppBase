#include<iostream>

using namespace std;

template<typename T>
void func() {
	cout << "func()��������" << endl;
}


void test01() {
	func<string>();  // ģ�����Ҫ��ָ��T���������ͣ��������ſ���ʹ�����ģ��
}

int main() {

	test01();

	system("pause");
	return 0;
}