#include<iostream>
#include<vector>

using namespace std;

void toString(vector<int> v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";  // �����õ�������ȡvector������Ԫ�أ�[]��atҲ����
	}
	cout << endl;
}

int main() {
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	// ���±�ȡ
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	// ��at()ȡ
	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << " ";
	}
	cout << endl;

	// ȡ��һ��Ԫ��
	cout << v1.front() << endl;

	// ȡ�ڶ���Ԫ��
	cout << v1.back() << endl;
	

	system("pause");
	return 0;
}
