#include<iostream>

using namespace std;


class Person {

	

public:
	Person(int age) {
		m_age = new int(age);  // �����ͱ������ٴ洢������������ָ��m_ageָ��������ǿ�ռ�
	}

	~Person() {
		if (m_age != NULL) {
			delete m_age;  // ���������ͷ�m_ageָ�����Ƭ�ڴ棬���ǰ�m_age�洢��ֵ(��ַ)���
			m_age = NULL;  // ��������ǰ�m_age�洢��ֵ(��ַ)���
		}
	}
public:
	int* m_age;  // ����int�͵�ָ��
};


void test01() {
	//Person person1(20);
	//Person person2(30);
	//cout<< *person1.m_age <<endl;
	//cout<< *person2.m_age <<endl;

	// ������Ĵ���ת�������£�����Person���м����������ں����ͷŶ����ڴ棬�ͻᱨ��
	Person person1(20);
	Person person2(30);
	person2 = person1;
	// �������ǻ�û��д���ظ�ֵ������Ĵ��룬��Ȼ���Ը�ֵ������Ϊ�������������Զ���һ�������4��������
	// 1.Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
	// 2.Ĭ����������(�޲Σ�������Ϊ��)
	// 3.Ĭ�Ͽ������캯���������Խ���ֵ����
	// 4.��ֵ����� operator=, �����Խ���ֵ����(Ҳ����˵�������Զ����������˸�ֵ������������������ظ�ֵ�������ǳ����-->û�п����¿ռ�)
	cout<< *person1.m_age <<endl;
	cout<< *person2.m_age <<endl;

}

int main() {
	test01();


	system("pause");
	return 0;
}