#include<iostream>
#include<vector>

using namespace std;

void toString(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

/*
注1：
	capacity();  // 容器的容量
	size();  // 返回容器中元素的个数
注2：
	vector 容器的容量（用 capacity 表示），指的是在不分配更多内存的情况下，容器可以保存的最多元素个数；
	而 vector 容器的大小（用 size 表示），指的是它实际所包含的元素个数。
注3：
	显然，vector 容器的大小不能超出它的容量，在大小等于容量的基础上，只要增加一个元素，就必须分配更多的内存。
	注意，这里的“更多”并不是 1 个。换句话说，当 vector 容器的大小和容量相等时，如果再向其添加（或者插入）一个元素，
	vector 往往会申请多个存储空间，而不仅仅只申请 1 个。
注4：
	通过前面的学习我们知道，可以调用 reserve() 成员函数来增加容器的容量（但并不会改变存储元素的个数）；
	而通过调用成员函数 resize() 可以改变容器的大小，并且该函数也可能会导致 vector 容器容量的增加。

注5：
仅通过 reserve() 成员函数增加 value 容器的容量，其大小并没有改变；但通过 resize() 成员函数改变 value 容器的大小，它的容量可能会发生改变。
另外需要注意的是，通过 resize() 成员函数减少容器的大小（多余的元素会直接被删除），不会影响容器的容量。
*/
int main() {

	// empty()
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}

	toString(v1);

	if (v1.empty()) {
		cout << "v1是空" << endl;
	}
	else {
		cout << "v1不是空" << endl;
		cout << "v1的容量=" << v1.capacity()<< endl;
		cout << "v1的大小=" << v1.size() << endl;
	}

	// resize 重新指定大小 ，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
	v1.resize(15, 10);  // 重新指定size(元素个数),如果超过原来的就用10填补
	toString(v1);

	// resize 重新指定大小 ，若指定的更小，超出部分元素被删除
	v1.resize(5);
	toString(v1);

	system("pause");
	return 0;
}