#include<iostream>

using namespace std;
/*
ѧϰĿ�꣺�ܹ�������ģ���еĳ�Ա��������ʵ��
�ܽ᣺��ģ���г�Ա��������ʵ��ʱ����Ҫ����ģ������б�

*/
template<class T1, class T2>
class Person {
public:
	// ���캯��������
	Person(T1 var1, T2 var2);
	// ��Ա����������
	void toString();
public:
	T1 var1;
	T2 var2;
};


// ���캯������ʵ��
template<class T1, class T2>
Person<T1, T2>::Person(T1 var1, T2 var2) {
	this->var1 = var1;
	this->var2 = var2;
}

//��Ա��������ʵ��
template<class T1, class T2>  // ��Ϊ����ʵ�ֱ�����Person<T1, T2>::���Ա����б���
void Person<T1, T2>::toString() {
	cout << "var1=" << var1 << ", var2=" << var2 << endl;
}



int main() {
	Person<string, int> p("zmz", 23);
	p.toString();

	system("pause");
	return 0;
}









