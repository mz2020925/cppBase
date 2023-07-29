#include <iostream>

using namespace std;

// 此函数只需要打印操作，不要修改传进来的值
void fun1(const int& ref) {
	// ref = 1000;
	cout << ref << endl;
}

//int main() {
//	int a = 100;
//	fun1(a);
//
//	system("pause");
//	return 0;
//}