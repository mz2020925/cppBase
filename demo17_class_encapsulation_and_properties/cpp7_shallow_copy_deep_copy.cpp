#include<iostream>
using namespace std;

/*
��ǳ���������Ծ������⣬Ҳ�ǳ�����һ����
	ǳ�������򵥵ĸ�ֵ��������
	������ڶ�����������ռ䣬���п�������

���⣺���ʹ�ñ������Լ��ṩ�Ŀ������캯����������ǳ���������������¿��ٶ����ڴ棬ֻ�Ǹ����˶�����ַ��ǳ������������������ڴ��ظ��ͷš�
�����ʹ������������ʲô������������Լ�д�������캯�������ڶ����¿����ڴ棬�Ͳ��ᷢ���ڴ��ظ��ͷŵ����⡣

�ܽ᣺����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������
*/

class Person {
public:
	Person() {
		cout << "Ĭ�Ϲ��캯��ִ��" << endl;
	}
	Person(int age_in, int height_in) {
		age = age_in;
		height = new int(height_in);  // ��ôд���height_in��ֵ��ŵ�������ָ�����heightָ��height_in�ĵ�ַ
		cout << "���ι��캯��ִ��" << endl;
	}

	Person(const Person& p) {
		age = p.age;
		//height = p.height;  // ���ֱ������ṩ�Ŀ������캯��ֱ���õȺŸ�ֵ��ַ�Ĳ�������ǳ����
		height = new int(*p.height);  // �����ڶ����¿����ڴ棬Ȼ������ͬ���ݵĲ��������
		cout << "�������캯��ִ��" << endl;

	}

	~Person() {
		if (height != NULL) {
			delete height;
			height = NULL;
		}
		cout << "��������ִ��" << endl;
	}

public:
	int age;
	int* height;
};

void test01() {
	Person p1(22, 160);
	cout << "p1��������" << p1.age<<", �����" << *p1.height << endl;

	Person p2 = p1;
	cout<< "p2��������" << p2.age << ", �����" << *p2.height << endl;
}

int main() {

	test01();
	system("pause");

	return 0;
}