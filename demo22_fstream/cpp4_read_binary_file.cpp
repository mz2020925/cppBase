#include<iostream>
using namespace std;
#include<fstream>

class Person {
public:
	char m_name[64];
	int m_age;
};



void test01() {
	
	ifstream ifs;
	
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
	}

	Person p;
	ifs.read((char*)&p, sizeof(p));  // �����ģ������٣�
	cout <<"����"<< p.m_name <<endl<<"����"<< p.m_age << endl;

}


int main() {
	test01();

	system("pause");
	return 0;
}