#include<iostream>
#include<vector>

using namespace std;

/*
����vector�ڶ�̬��չ����ʱ����չ����
reserve(int len);  // ����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�
*/
int main() {
	vector<int> v;
	// Ԥ��(����)�ռ�
	v.reserve(100000);  // 100000��ʾ�������������Ԫ�ظ���
	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}
	cout << "num:" << num << endl;

	system("pause");
	return 0;
}
