#include<iostream>

using namespace std;

template<typename T>
void func() {
	cout << "func()被调用了" << endl;
}


void test01() {
	func<string>();  // 模板必须要先指定T的数据类型，接下来才可以使用这个模板
}

int main() {

	test01();

	system("pause");
	return 0;
}