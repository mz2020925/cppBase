#include<iostream>
#include<vector>

using namespace std;

void toString(vector<int> v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
int main() {

	// ����
	vector<int> v1;
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	toString(v1);

	// ɾ��
	v1.pop_back();  // ɾ��β��Ԫ��
	toString(v1);

	v1.erase(v1.begin()+3, v1.end());  // ɾ������Ƭ��
	toString(v1);

	// ���
	v1.clear();
	toString(v1);



	system("pause");
	return 0;
}


