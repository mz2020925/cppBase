#include<iostream>
using namespace std;

/*
���������������������ʱ�����ǳƸó�ԱΪ �����Ա
	�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
	����˳���빹���෴
*/

// �ֻ���
class Phone {
public:
	Phone(string phoneName_in) {
		phoneName = phoneName_in;
		cout << "Phone ���ι��캯��ִ��" << endl;
	}

	~Phone() {
		cout << "Phone ��������ִ��" << endl;
	}

public:
	string phoneName;
};

// ����
class Person {
public:
	Person(string name_in, string phone_in): name(name_in), phone(phone_in){  // ��������б��е�phone(phone_in)�൱��Phone phone= "zmz";������ʽת������������ķ�ʽ
		cout << "Person ���ι��캯��ִ��" << endl;
	}

	~Person() {
		cout << "Person ��������ִ��" << endl;
	}
public:
	string name;
	Phone phone;
};


void test01() {
	Person p1("zmz", "apple");
	cout << p1.name << "�����ֻ�" << p1.phone.phoneName << endl;

}

int main() {
	test01();
	system("pause");

	return 0;
}