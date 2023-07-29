#include<iostream>

using namespace std;

//������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);  // Ϊ�˷���˽�г�Ա������������<<�������������Ϊ��Ԫ
public:
	MyInteger() {  //�����޲ι���
		m_Num = 100;
	}

	//����ǰ��++�����
	MyInteger& operator++() {  // ����������Ϊ��ʵ��һֱ��ͬһ�����ݽ��е����������о�Ҳ��һ����ʽ��̵���˼������
		//��++
		m_Num++;
		//�ٷ���
		return *this;
	}

	//���غ���++�����
	MyInteger operator++(int) {  // ����ֵ����Ϊtemp�Ǿֲ��������ֲ������ڸó�Ա����������ͻᱻ���٣����Բ����������õ���ʽ���ؾֲ�����������ռλ�����������ֺ�����ǰ�������������
		//�ȼ�¼ԭʼֵ
		MyInteger temp = *this;
		//�ٵ���
		m_Num++;
		//����ԭʼֵ
		return temp;
	}
	

private:  //�����Ա����
	int m_Num;
};

//����<<���������
//Ϊ��ʵ��ǰ��ѧϰ������÷�������ʽ��̣��ú�����Ҫ����"ostream&"���ܽ�������д"<<endl"��
ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num;
	return cout;
}

void test01() {
	MyInteger myint;
	cout << "myint�ĳ�Ա������" << myint << endl;  // ��java�����toString()��������
	// ��Ҫע����ǣ����μǵ����غ������÷����Ͼ�����cout����ǰ��ѧϰ������÷��ģ�������<<���������û�й�ϵ
	// �Ͼ�����һ��"<<"��������ַ���������ǰ��ѧϰ������÷���������<<���������û�й�ϵ
	// �Ͼ����ڶ���"<<"�������"myint"�����������д������<<�������������������������
	// �Ͼ����ڶ���"<<"�������"endl"������ǰ��ѧϰ������÷���������<<���������û�й�ϵ����Ҫע�⣬"<< myint"ִ�к��践��"ostream&"����ʵ����ʽ���
}

void test02() {
	MyInteger myint;
	cout << myint << endl;
	cout << ++(++myint) << endl;
	cout << ++myint << endl;
}

void test03() {
	MyInteger myint;
	cout << myint << endl;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {
	test02();
	cout << "-----------" << endl;
	test03();

	system("pause");
	return 0;
}
