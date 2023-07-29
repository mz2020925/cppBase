#include<iostream>
using namespace std;

class Person {
public:
	// ���ﹹ�캯���������ؼ���
	Person(){}

	Person(string name_in, int age_in) {
		name = name_in;
		age = age_in;
	}

	// �������췽���������������ࣨ�����ԣ������������У������������뱾�౾����ͬһ���࣬��������ֻ���ô����������ʼ������
	Person(const Person& person) {  // const��ʾ�������޸�
		name = person.name;
		age = person.age;
	}


public:
	string name;
	int age;
};


// 1.�����޲ι��캯��
void test01() {
	Person p;
	// ע�⣺�����޲ι��캯�����ܼ����ţ�������˱�������Ϊ����һ��������������������д��Person p();
	// ע�⣺����д���Ǵ������󣬺�java�в�һ����java��new Person()���Ǵ�������Person p�Ƕ�����һ�����ñ�������Ҫд��Person p=new Person()��
}
// 2.�����вεĹ��캯��
void test02() {

	// 2.1  ���ŷ�������
	Person p1("zmz", 10);  // Person("zmz", 10)��������д�Ǵ������������������û������,��ǰ�н���֮��������������Ϊû�����֣���û�취ʹ���������
	
	// 2.2 ��ʽ��
	Person p2 = Person("zmz", 10);
	Person p3 = Person(p2);  // ��ʽ��ʹ�ÿ�������
	// ע�⣺Person (p2); -- ��������д��������д����ʹ�ÿ��������������������󣬵��������в�ͨ������д���������Զ�ȥ�����ű�� Person p2;

	

	// 2.3 ��ʽת����
	Person p4 = { "zmz", 10 }; // ���������Զ�����ʽת������ʽ��Person p4 = Person{ "zmz", 10 };
	Person p5 = p4; // ���������Զ�����ʽת������ʽ��Person p5 = Person(p4);

}


//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}

