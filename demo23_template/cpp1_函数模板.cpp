#include<iostream>

using namespace std;
/*
注意事项：

* 不能存在二义性


* 模板必须要先指定T的数据类型，接下来才可以使用这个模板,见cpp2_notes_of_template.cpp


*/

// 使用模板实现整形数据交换的函数
template<typename T>
void swapNum(T& a, T& b) {  // 这里是泛型引用类型，并不是说泛型只能 T& 这样用
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	int a = 10;
	int b = 100;
	swapNum(a, b);
	cout << a << "," << b << endl;
}

void test02() {
	double a = 1.11;
	double b = 2.22;
	swapNum(a, b);
	cout << a << "," << b << endl;
}

int main() {

	test01();
	test02();

	system("pause");
	return 0;
}