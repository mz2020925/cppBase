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
	int res = fun1(1, 'a');  // 隐式类型转换（自动类型转换）
	cout << res << endl;

	//int res2 = fun2(1, 'a');  // 使用函数模板时，必须在显式指定模板类型情况下才能自动类型转换，如下一行

	int res3 = fun2<int>(1, 'a');
	cout << res3 << endl;

	system("pause");
	return 0;
}