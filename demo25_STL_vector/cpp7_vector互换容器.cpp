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
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	toString(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--) {
		v2.push_back(i);
	}
	toString(v2);

	cout << "������" << endl;


	v1.swap(v2);
	toString(v1);
	toString(v2);



	system("pause");
	return 0;
}