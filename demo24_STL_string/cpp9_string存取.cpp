#include<iostream>
#include<string>

using namespace std;


int main() {
	string s1 = "hello";
	// �±�[...]��at(...)�ǵȼ۵�
	// �ַ�����ȡ����
	for (int i = 0; i < s1.size(); i++) {
		cout << s1[i] << "\n"<<endl;
		cout << s1.at(i) << "\n" << endl;
	}

	// �ַ����Ĵ����
	s1[0] = 'x';
	s1.at(1) = 'z';
	cout << s1 << endl;


	system("pause");
	return 0;
}

