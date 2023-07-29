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

	// 1.deque.empty(); 判断容器是否为空
	cout << (d1.empty() ? "空" : "非空") << endl;

	// 2.deque.size(); 返回容器中元素的个数
	cout << d1.size() << endl;

	// 3.deque.resize(num)重新指定容器的长度为num,若容器变长，则以默认值填充新位置;如果容器变短，则末尾超出容器长度的元素被删除。
	d1.resize(10);
	printDeque(d1);
	d1.resize(30);
	printDeque(d1);

	// 4.deque.resize(num, elem)重新指定容器的长度为num,若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
	d1.resize(40, -1);
	printDeque(d1);
}


int main() {
	test01();


	system("pause");
	return 0;
}


/*
总结：

* deque没有容量的概念
* 判断是否为空   --- empty
* 返回元素个数   --- size
* 重新指定个数   --- resize
*/