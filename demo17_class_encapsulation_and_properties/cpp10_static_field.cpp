#include<iostream>
using namespace std;

class Person {

public:
	string name;
	//��̬��Ա����
	//	���ж�����ͬһ������
	//	�ڱ���׶η����ڴ�
	//	���������������ʼ��
	static int age;

private:
	static string gender;
};

int Person::age = 200;  // �����ʼ��
string Person::gender = "boy";  // �����ʼ��

void test01() {
	Person p;
	cout << p.age << endl;

	Person p2;
	p2.age = 100;
	cout << p.age << endl;  // ��֤��̬�����Ĺ�����
}

void test02() {
	// ��̬��Ա����������������������ͨ�������ȡ��������ֱ��ͨ��������ȡ
	cout << Person::age << endl;
}

void test03() {
	// ��̬��Ա����Ҳ���з���Ȩ�޵ģ�����private���εľ�̬��Ա������������������ʣ���������19�еĳ�ʼ���ǿ��Եģ�������漰������������ڵ�����
	cout << Person::gender << endl;
}

int main() {
	test01();
	test02();
	system("pause");

	return 0;
}