#include<iostream>
using namespace std;


class Animal {
public:
	virtual void speak() {
		cout << "������˵��" << endl;
	}

};


class Cat :public Animal {
public:
	virtual void speak() {
		cout << "è��˵��" << endl;
	}
};


class Dog :public Animal {
public:
	virtual void speak() {
		cout << "����˵��" << endl;
	}
};


void doSpeak(Animal& animal) {
	animal.speak();
}


void test01() {
	Cat cat;
	doSpeak(cat);  // ����ͷ����˶�̬
}


void test02() {
	Dog dog;
	doSpeak(dog);  // ����ͷ����˶�̬
}


int main() {
	test01();
	test02();

	system("pause");
	return 0;
}

//��̬���������� 
//1���м̳й�ϵ
//2��������д�����е��麯��
//��̬ʹ�ã�
//����ָ�������ָ���������

//��д����������ֵ����  ������ �����б� ��ȫһ�³�Ϊ��д
