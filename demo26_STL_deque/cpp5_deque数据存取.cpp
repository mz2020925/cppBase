#include<iostream>
#include<deque>

using namespace std;

void printDeuqe(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}


void test01() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_front(i);
	}
	printDeuqe(d1);

	// 1.at(int idx); 返回索引idx所指的数据
	cout << d1.at(3)<<endl;

	// 2.[]; 返回索引idx所指的数据
	cout << d1[3] << endl;

	// 3.front(); 返回容器中第一个数据元素
	cout << d1.front() << endl;

	// 4.back(); 返回容器中最后一个数据元素
	cout << d1.back() << endl;

	// 5.迭代器
	deque<int>::const_iterator it;
	it = d1.begin();
	cout << *it << endl;
	cout << *(++it) << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}

/*
总结：
	- 除了用迭代器获取deque容器中元素，[ ]和at也可以
	- front返回容器第一个元素
	- back返回容器最后一个元素
*/