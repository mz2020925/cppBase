#include<iostream>
#include<deque>
using namespace std;

void printDeque(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}


void test01() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
		d1.push_front(i);
	}
	printDeque(d1);

	// 1.重载等号操作符
	deque<int> d2;
	d2 = d1;
	printDeque(d2);

	// 2.`assign(beg, end);` 将[beg, end)区间中的数据赋值给d3
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);

	// 3.`assign(n, elem);` 将n个elem赋值给d4
	deque<int> d4;
	d4.assign(10, 100);
	printDeque(d4);
}


int main() {
	test01();

	system("pause");
	return 0;
}