#include<iostream>
#include<vector>

using namespace std;

void toString(vector<int> v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";  // 除了用迭代器获取vector容器中元素，[]和at也可以
	}
	cout << endl;
}

int main() {
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	// 用下标取
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	// 用at()取
	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << " ";
	}
	cout << endl;

	// 取第一个元素
	cout << v1.front() << endl;

	// 取第二个元素
	cout << v1.back() << endl;
	

	system("pause");
	return 0;
}
