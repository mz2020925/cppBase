#include<iostream>

using namespace std;

// 函数参数占位符
void fun1(int a, int) {
	cout << a << endl;
}

// 函数参数占位符+默认参数
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