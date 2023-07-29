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

	// 1.at(int idx); ��������idx��ָ������
	cout << d1.at(3)<<endl;

	// 2.[]; ��������idx��ָ������
	cout << d1[3] << endl;

	// 3.front(); ���������е�һ������Ԫ��
	cout << d1.front() << endl;

	// 4.back(); �������������һ������Ԫ��
	cout << d1.back() << endl;

	// 5.������
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
�ܽ᣺
	- �����õ�������ȡdeque������Ԫ�أ�[ ]��atҲ����
	- front����������һ��Ԫ��
	- back�����������һ��Ԫ��
*/