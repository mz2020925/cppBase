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

	// 1.deque.empty(); �ж������Ƿ�Ϊ��
	cout << (d1.empty() ? "��" : "�ǿ�") << endl;

	// 2.deque.size(); ����������Ԫ�صĸ���
	cout << d1.size() << endl;

	// 3.deque.resize(num)����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ��;���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	d1.resize(10);
	printDeque(d1);
	d1.resize(30);
	printDeque(d1);

	// 4.deque.resize(num, elem)����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
	d1.resize(40, -1);
	printDeque(d1);
}


int main() {
	test01();


	system("pause");
	return 0;
}


/*
�ܽ᣺

* dequeû�������ĸ���
* �ж��Ƿ�Ϊ��   --- empty
* ����Ԫ�ظ���   --- size
* ����ָ������   --- resize
*/