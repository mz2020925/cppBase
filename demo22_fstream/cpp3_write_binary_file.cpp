#include<iostream>
using namespace std;
#include<fstream>


class Person {

public:
	char m_name[64];  // C++�в��Ƽ�ʹ��string�������ַ������е����⣬����C�е��ַ���������ʾ�ַ���
	int m_age;


};


void test01() {
	//1������ͷ�ļ�

	//2���������������
	ofstream ofs;
	
	//3.���ļ�
	ofs.open("person.txt", ios::out | ios::binary);

	//4.��Person���Զ����Ƶ���ʽд���ļ����е���java�����л�
	//Person p = Person("zmz", 22);  // ���������������⣬��������û��д���캯�����������ʽת����ʽ
	Person p = { "zmz", 22 };
	ofs.write((const char*)&p, sizeof(p));  // д���ģ�д���٣�

	//5.�ر��ļ�
	ofs.close();
}



int main() {
	test01();

	system("pause");
	return 0;
}