#include<iostream>
using namespace std;

class Person1 {
public:
	void fun1() {
		cout << "���캯��һ" << endl;
	}

};

class Person2 {
public:
	void fun2() {
		cout << "���캯����" << endl;
	}
};

template<class T>
class MyClass {
public:
	T obj;

	// ��ģ�����еĳ�Ա����������ģ���������ʱ������
	void memberFun1() {
		obj.fun1();
	}

	void memberFun2() {
		obj.fun2();
	}
};


int main() {
	MyClass<Person1> class1;
	class1.memberFun1();  // ��ģ�����еĳ�Ա����������ģ���������ʱ�����ɡ�
	// ��˼�������� MyClass �е� T ��ָ��Ϊ Person1 ������ obj.fun2(); ��Ϊ memberFun2() û�б��������Բ��ᱨ��

	class1.memberFun2();  // ���ڵ����˾ͻᱨ��"fun2": ���� "Person1" �ĳ�Ա

	system("pause");
	return 0;
}