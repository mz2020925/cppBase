#include<iostream>

using namespace std;

/*
调用规则如下：

1. 如果函数模板和普通函数都可以实现，优先调用普通函数
2. 可以通过空模板参数列表来强制调用函数模板
3. 函数模板也可以发生重载
4. 如果函数模板可以产生更好的匹配,优先调用函数模板

*/

void fun() {
	cout << "普通函数" << endl;
}

template<typename T>
void fun() {
	cout << "模板函数" << endl;
}

template<typename T>
void fun(int a, int b, int c) {
	cout << "模板函数" << endl;
}



void fun(int a, int b) {
	cout << "普通函数" << endl;
}

template<typename T>
void fun(T a, T b) {
	cout << "模板函数" << endl;
}


int main() {
	fun();  // 在普通fun()和fun()中，默认优先调用普通函数fun()
	fun<int>();  // 添加<int>可以强制优先调用
	fun<int>(12, 23, 30);  // 模板函数重载

	fun('a', 'b');  // 这种情况下，使用模板函数 fun(T a, T b) 比普通函数 fun(int a, int b) 更方便，就优先使用模板函数，因为此时普通函数需要自动类型转换
	system("pause");
	return 0;
}

