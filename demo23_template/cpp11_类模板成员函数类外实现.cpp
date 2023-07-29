#include<iostream>

using namespace std;
/*
学习目标：能够掌握类模板中的成员函数类外实现
总结：类模板中成员函数类外实现时，需要加上模板参数列表

*/
template<class T1, class T2>
class Person {
public:
	// 构造函数先声明
	Person(T1 var1, T2 var2);
	// 成员函数先声明
	void toString();
public:
	T1 var1;
	T2 var2;
};


// 构造函数类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 var1, T2 var2) {
	this->var1 = var1;
	this->var2 = var2;
}

//成员函数类外实现
template<class T1, class T2>  // 因为类外实现必须是Person<T1, T2>::所以必须有本行
void Person<T1, T2>::toString() {
	cout << "var1=" << var1 << ", var2=" << var2 << endl;
}



int main() {
	Person<string, int> p("zmz", 23);
	p.toString();

	system("pause");
	return 0;
}









