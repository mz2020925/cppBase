#include<iostream>
using namespace std;

class Person {
public:
	void func() {
		num1 = 100;
		num2 = 10;
	}


public:
	int num1;
	mutable int num2;

};






int main() {
	// �����Ƕ��峣���󣬺�const Person* const p;һ��Ҳ���ڿ�ͷ����const������дconst Person p;֮��"p""����Ӧ�ı���"�Ͳ����޸��ˡ�����p.num1 = 100;�޸���ͨ��Ա�����ᱨ��
	// ������ֻ�ܵ���"����Ա����"�����ܵ���"��ͨ��Ա����"������һ��������Ե���"��ͨ��Ա����"����ͨ��Ա����ȥ�޸���ͨ��Ա�������������ľͻ�Υ����
	// 
	const Person p;
	p.num1 = 100;
	p.num2 = 100;
	//���ǳ���������޸�mutable���εĳ�Ա����
	//ǰ��˵��"����Ա����"�����޸�mutable���εĳ�Ա����
	//����һϵ���޶�����������ͨ��const���η���ԭ�д�Χ�е��г���һ��С��Χ

	system("pause");

	return 0;
}
