#include<iostream>

using namespace std;

int fun1(int a, int b) {
	return a + b;
}

template<typename T>
T fun2(T a, T b) {
	return a + b;
}


int main() {
	int res = fun1(1, 'a');  // ��ʽ����ת�����Զ�����ת����
	cout << res << endl;

	//int res2 = fun2(1, 'a');  // ʹ�ú���ģ��ʱ����������ʽָ��ģ����������²����Զ�����ת��������һ��

	int res3 = fun2<int>(1, 'a');
	cout << res3 << endl;

	system("pause");
	return 0;
}