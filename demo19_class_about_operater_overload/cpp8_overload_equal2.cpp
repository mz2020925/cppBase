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

	// ���ظ�ֵ���������ʵ�ֶ���֮���õȺŸ�ֵ
	Person& operator=(Person& person) {
		//���������ṩǳ���������£�
		//m_age = person.m_age;

		//����д������Ҫ�����
		if (m_age != NULL) {  // Ӧ�����ж��Ƿ��г�Ա�����ڶ�������������ͷŸɾ���Ȼ�������
			delete m_age;
			m_age = NULL;
		}
		//���
		m_age = new int(*person.m_age);

		//Ϊ��ʵ��"���Ⱥ�"��Ҫ��������ʽ����"���ø�ֵ���������"����(���Ƿ��صȺ���ߵ��������)��(ע��"���Ⱥ�"�Ǵ�����������)
		return *this;  // thsi��ָ�� "���ø�ֵ���������"����
	}

public:
	int* m_age;  // ����int�͵�ָ��
};


void test01() {
	Person person1(-10);
	Person person2(30);
	Person person3(100);

	person3 = person2 = person1;

	cout << *person1.m_age << endl;
	cout << *person2.m_age << endl;
	cout << *person3.m_age << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}