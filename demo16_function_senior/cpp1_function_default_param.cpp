#include<iostream>

using namespace std;

// 1.声明函数和实现函数只能一个有默认参数，否则会出现二义性
int fun2(int a, int b = 30, int c = 30);

//// 2.如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
//int fun1(int a, int b=20, int c=20) {
//	return a + b + c;
//}
//
//int main() {
//
//	cout << fun1(20) << endl;
//
//	system("pause");
//	return 0;
//}
//
//int fun2(int a, int b, int c) {
//	return a + b + c;
//}