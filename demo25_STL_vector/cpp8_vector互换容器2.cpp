#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}

	cout << "v��������" << v.capacity() << endl;
	cout << "v�Ĵ�С��" << v.size() << endl;

	v.resize(3);
	cout << "v��������" << v.capacity() << endl;  // ��ʱv�Ĵ�С�����3������������Ȼû�䣬���Ǻܴ�ռ���˺ܴ�ռ�
	cout << "v�Ĵ�С��" << v.size() << endl;

	vector<int>(v).swap(v);

	cout << "v��������" << v.capacity() << endl;
	cout << "v�Ĵ�С��" << v.size() << endl;

	system("pause");
	return 0;
}