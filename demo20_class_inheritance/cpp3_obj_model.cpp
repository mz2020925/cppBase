#include<iostream>
#include<string>
using namespace std;

class Base {

public:
	int m_A;  // int��ռ4��Byte
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base {
public:
	int m_D;
};

void test01() {
	cout << "Son��ռ�Ĵ洢�ռ䣨Bytes����" << sizeof(Son)<<endl;
}

int main() {
	//���������еķǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա�����Ǳ������������ˣ�����Ƿ��ʵ��ģ�����ȷʵ���̳���ȥ��
	test01();

	system("pause");
	return 0;
}