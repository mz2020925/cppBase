#include<iostream>
using namespace std;


//��̬��Ա����
//	���ж�����ͬһ������
//	��̬��Ա����Ҳ���з���Ȩ�޵�
//	��̬��Ա����"ֻ��"���ʾ�̬��Ա����--�����Է�����ͨ��Ա��������Ϊ��̬�����ǹ������Ǹ�������û�������࣬��ͨ��Ա�����������࣬
//		���Ծ�̬���������ڵ�����ͨ��Ա����ʱ����֪�������ͨ��Ա������������һ���ࡣ
//		����̬��Ա����Ҳ�ǹ������Ǹ���������̬�������ʾ�̬��Ա����ʱ��֪�������ǹ������Ǹ�����
class Person {
public:
	static void func() {
		cout << "��̬����ִ����" << endl;
		cout << num << endl;
	}
private:
	static void func2() {
		cout << "˽�о�̬����ִ����" << endl;
		cout << num << endl;
	}
public:
	static int num;
	int num2;

};


int main() {
	Person p;
	p.func();


	Person::func();

	Person::func2();  // ��̬��Ա����Ҳ���з���Ȩ�޵�
	system("pause");

	return 0;
}
