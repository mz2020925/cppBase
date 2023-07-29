#include<iostream>
#include<deque>

using namespace std;

void printDeque(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

// deque容器和vector容器的构造方式几乎一致，灵活使用即可
void test01() {
	// 1.无参构造
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	for (int i = 0; i < 10; i++) {
		d1.push_front(i);
	}
	printDeque(d1);

	// 2.带参构造deque(beg, end)，构造函数将[beg, end)区间中的元素赋值给d2
	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);

	// 3.带参构造deque(n, elem)，将10个100赋值给d3
	deque<int> d3(10, 100);
	printDeque(d3);

	// 4.拷贝构造deque(const deque &deq)
	deque<int> d4 = d3;
	printDeque(d4);
}


int main() {
	test01();

	system("pause");
	return 0;
}
