#include<iostream>
#include<stack>

using namespace std;


void test01() {
	stack<int> s1;

	// 1.push(elem); 向栈顶添加元素
	for (int i = 0; i < 10; i++) {
		s1.push(i);  
	}

	// 2.size(); 返回栈的大小
	cout << s1.size() << endl;
	// 3.top(); 返回栈顶元素
	cout << "栈顶元素：" << s1.top() << endl;

	// 4.empty(); 判断堆栈是否为空
	while (!s1.empty()) {
		
		cout << s1.top() << endl;
	// 5.pop(); 弹出栈顶元素
		s1.pop();  // 没有返回值
	}
}


int main() {
	test01();



	system("pause");
	return 0;
}

