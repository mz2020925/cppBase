#include<iostream>
#include<string>

using namespace std;



int main() {
	string s1 = "hello";

	// 1.ƴ�ӷ�ʽһ
	s1 += " world";
	cout << s1 << endl;

	// 2.ƴ�ӷ�ʽ��
	s1.append(" love");

	// 3.��ȡ2���ַ���ƴ�ӵ��ַ���ĩβ
	s1.append("hahaha", 2);

	//4.���±�1λ�ÿ�ʼ ����ȡ2���ַ���ƴ�ӵ��ַ���ĩβ
	s1.append("lalala", 1, 2);



	system("pause");
	return 0;
}
