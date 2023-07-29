#include<iostream>
using namespace std;

class Person {
public:
	void func() {
		num1 = 100;
		num2 = 10;
	}


public:
	int num1;
	mutable int num2;

};






int main() {
	// 这样是定义常对象，和const Person* const p;一样也是在开头加了const，这样写const Person p;之后"p""所对应的变量"就不能修改了。所以p.num1 = 100;修改普通成员变量会报错。
	// 常对象只能调用"常成员函数"，不能调用"普通成员函数"，试想一下如果可以调用"普通成员函数"，普通成员函数去修改普通成员变量，与上面间的就会违背。
	// 
	const Person p;
	p.num1 = 100;
	p.num2 = 100;
	//但是常对象可以修改mutable修饰的成员变量
	//前面说过"常成员函数"可以修改mutable修饰的成员变量
	//这样一系列限定下来，就是通过const修饰符在原有大范围中的切出来一个小范围

	system("pause");

	return 0;
}
