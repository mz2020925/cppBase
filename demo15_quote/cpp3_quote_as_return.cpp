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
//	// 1.不要返回局部变量引用
//	int& ref1 = fun1();
//	cout << "ref=" << ref1 << endl;  // 第一次能够打印正确，是因为编译器做了暂时保留
//	cout << "ref=" << ref1 << endl;  // 第二次打印就会乱码，因为局部变量存放在内存的栈区，当fun1()函数调用结束后就会释放内存
//
//	// 2.函数调用作为左值
//	int& ref2 = fun2();
//	cout << "ref=" << ref2 << endl;  // 此时fun2()中的变量倍static修饰，存放在内存的全局区，会在这个程序结束后由系统释放
//	cout << "ref=" << ref2 << endl;
//	cout << "ref=" << ref2 << endl;
//	cout << "ref=" << ref2 << endl;
//
//	fun2() = 1000;  // 这里是使用原名赋值1000，上面的别名ref2也会随之更改为1000，当然前提是要用static修饰
//	cout << "ref=" << ref2 << endl;
//	cout << "ref=" << ref2 << endl;
//	cout << "ref=" << ref2 << endl;
//	cout << "ref=" << ref2 << endl;
//
//	system("pause");
//	return 0;
//}