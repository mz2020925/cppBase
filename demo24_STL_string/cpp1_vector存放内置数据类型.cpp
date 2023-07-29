#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


template<class T>
void printFun(T& t) {
	cout << t << endl;
}

int main() {
	// ����vector���󣬲�ͨ��ģ�����ָ����ŵ���������
	vector<int> v;

	// 
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// �������ĵ�����
	vector<int>::iterator pBegin = v.begin();  // ���������ָ�������е�һ������
	vector<int>::iterator pEnd = v.end();  // ���������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��

	// ��һ�ֱ����㷨
	while (pBegin!=pEnd) {
		cout << *pBegin << endl;
		pBegin++;
	}

	cout << "---------" << endl;

	// �ڶ��ֱ����㷨
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	cout << "--------" << endl;

	// �����ֱ����㷨
	// ʹ��STL�ṩ��׼�����㷨  ͷ�ļ� algorithm
	for_each(v.begin(), v.end(), printFun<int>);

	system("pause");
	return 0;
}
