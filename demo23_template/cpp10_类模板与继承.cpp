#include<iostream>

using namespace std;
/*
����ģ�������̳�ʱ����Ҫע��һ�¼��㣺

* ������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
* �����ָ�����������޷�����������ڴ�
* ��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
*/


// ��ģ�常��
template<class T>
class Base {
public:
	T var;
};

// ��ͨ����,�̳���ģ�常��,Ҫָ����������T������
class Son :public Base<int> {
public:
	void fun1() {
		cout << var << endl;
	}
};


// ��ģ�����࣬�̳���ģ�常��
template<class T1, class T2>
class Son2 :public Base<T1> {
public:
	void fun1() {
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}

};



int main() {
	// ��ͨ����
	Son son;
	son.var = 1024;
	son.fun1();

	// ��ģ������
	Son2<int, char> son2;
	son2.fun1();



	system("pause");
	return 0;
}