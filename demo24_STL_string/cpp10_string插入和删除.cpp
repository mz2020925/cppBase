#include<iostream>
#include<string>

using namespace std;
int main() {
	// �����ɾ������ʼ�±궼�Ǵ�0��ʼ
	string s1 = "hello";
	// ����
	s1.insert(1, "000");
	cout << s1 << endl;
	// ɾ��
	s1.erase(1, 3);  //��1��λ�ÿ�ʼ3���ַ�
	cout << s1 << endl;
	system("pause");
	return 0;
}