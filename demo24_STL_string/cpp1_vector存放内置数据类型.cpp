#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


template<class T>
void printFun(T& t) {
	cout << t << endl;
}

int main() {
	// 创建vector对象，并通过模板参数指定存放的数据类型
	vector<int> v;

	// 
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// 该容器的迭代器
	vector<int>::iterator pBegin = v.begin();  // 这个迭代器指向容器中第一个数据
	vector<int>::iterator pEnd = v.end();  // 这个迭代器指向容器元素的最后一个元素的下一个位置

	// 第一种遍历算法
	while (pBegin!=pEnd) {
		cout << *pBegin << endl;
		pBegin++;
	}

	cout << "---------" << endl;

	// 第二种遍历算法
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	cout << "--------" << endl;

	// 第三种遍历算法
	// 使用STL提供标准遍历算法  头文件 algorithm
	for_each(v.begin(), v.end(), printFun<int>);

	system("pause");
	return 0;
}
