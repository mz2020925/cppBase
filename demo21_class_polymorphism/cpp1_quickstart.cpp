#include<iostream>
using namespace std;


class Animal {
public:
	void speak() {
		cout << "������˵��" << endl;
	}

};


class Cat :public Animal {
public:
	void speak() {
		cout << "è��˵��" << endl;
	}
};


void doSpeak(Animal& animal) {
	// "��̬��̬�ĺ�����ַ���  -  ����׶�ȷ��������ַ"������doSpeak(cat)����֮���������"������˵��"
	animal.speak();  // cat.Animal::speak()

	// ʹ��virtual�ؼ��ִ������⺯�������Ա�����󶨵����⣻
	// Ҳ����˵ʹ��virtual�ؼ��֣�����ʵ��"��̬��̬�ĺ�����ַ���  -  ���н׶�ȷ��������ַ"�������������Ҫ�ġ�
	// ���������Ļ���������Ҫ�Ķ�̬����ͨ��������ַ"���"��"���"ʵ�ֵġ�
}


void test01() {
	Cat cat;
	
	doSpeak(cat);  // ����ͷ����˶�̬
}


int main() {
	test01();

	system("pause");
	return 0;
}