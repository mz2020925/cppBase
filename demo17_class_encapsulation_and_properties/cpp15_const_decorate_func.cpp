#include<iostream>
using namespace std;

class Person1 {
public:
	void showPerson() const{  // ��void showPerson() �����const������޸�num����this->num = 100;�ᱨ���
		this->num = 100;
	}
	
	void showPerson2() {  //��void showPerson() ����û�м�const������޸�num����this->num = 100;�ǲ��ᱨ���
		this->num = 100;
	}
public:
	int num;

};


class Person2 {
public:
	//this��������ָ�볣����"ָ��洢�ĵ�ַ"�ǲ����޸ĵģ�����Person* const this;
	//���Ҫ��"ָ��洢�ĵ�ַ""����Ӧ�ı���"Ҳ�����޸ģ�(����Ӧ�ı��������Ƕ��󣬲����޸����������˼���Ƕ������������Ҳ�����޸�)������const Person* const this;
	//����Ա��������д�ɣ�void showPerson() const {} ���� ���൱�ں����ڵ� this ������ const Person* const this;��
	//��������Person1�ĺ��� void showPerson() const ���� this->num = 100; ���޸�"thisָ��洢�ĵ�ַ""����Ӧ�ı���"�ͻᱨ���ˡ�
	void showPerson() {
		this->num = 100;
	}
	//void showPerson() const����д���ĺ�������������
public:
	int num;

};

class Person3 {
public:
	//�����������޸�mutable���εĳ�Ա������ֻ�Ǹ���Ա��������һ�����Σ�Ϊ�����ó������ܹ��޸�����
	void showPerson() const{
		this->num = 100;  // // ��void showPerson() �����const������޸�num����this->num = 100;û�б�����Ϊmutable int num;
	}
	
public:
	mutable int num;
};


int main() {
	Person1 p1;
	p1.showPerson();

	system("pause");

	return 0;
}


