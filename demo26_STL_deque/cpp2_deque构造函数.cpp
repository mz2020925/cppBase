#include<iostream>
#include<deque>

using namespace std;

void printDeque(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

// deque������vector�����Ĺ��췽ʽ����һ�£����ʹ�ü���
void test01() {
	// 1.�޲ι���
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	for (int i = 0; i < 10; i++) {
		d1.push_front(i);
	}
	printDeque(d1);

	// 2.���ι���deque(beg, end)�����캯����[beg, end)�����е�Ԫ�ظ�ֵ��d2
	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);

	// 3.���ι���deque(n, elem)����10��100��ֵ��d3
	deque<int> d3(10, 100);
	printDeque(d3);

	// 4.��������deque(const deque &deq)
	deque<int> d4 = d3;
	printDeque(d4);
}


int main() {
	test01();

	system("pause");
	return 0;
}
