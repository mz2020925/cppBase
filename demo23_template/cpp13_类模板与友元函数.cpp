#include<iostream>

using namespace std;

template<class T1, class T2>
class Person {
	// 一个该类的友元全局函数，直接在类中实现
	friend void toString(Person<T1, T2>& p) {
		cout << p.var1 <<", "<< p.var2 << endl;
	}


public:
	Person(T1 var1, T2 var2) {
		this->var1 = var1;
		this->var2 = var2;
	}

private:
	T1 var1;
	T2 var2;
};



int main() {
	Person<string, int> p("zmz", 123);
	toString(p);

	system("pause");
	return 0;
}