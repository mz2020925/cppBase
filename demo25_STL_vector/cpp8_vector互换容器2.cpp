#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}

	cout << "v的容量：" << v.capacity() << endl;
	cout << "v的大小：" << v.size() << endl;

	v.resize(3);
	cout << "v的容量：" << v.capacity() << endl;  // 此时v的大小变成了3，但是容量仍然没变，还是很大，占用了很大空间
	cout << "v的大小：" << v.size() << endl;

	vector<int>(v).swap(v);

	cout << "v的容量：" << v.capacity() << endl;
	cout << "v的大小：" << v.size() << endl;

	system("pause");
	return 0;
}