#include<iostream>
using namespace std;

class Person1 {
public:
	void showPerson() const{  // 当void showPerson() 后面加const，这句修改num代码this->num = 100;会报错的
		this->num = 100;
	}
	
	void showPerson2() {  //当void showPerson() 后面没有加const，这句修改num代码this->num = 100;是不会报错的
		this->num = 100;
	}
public:
	int num;

};


class Person2 {
public:
	//this本质上是指针常量，"指针存储的地址"是不能修改的，即：Person* const this;
	//如果要求"指针存储的地址""所对应的变量"也不能修改，(所对应的变量可能是对象，不能修改这个对象，意思就是对象的所有属性也不能修改)，即：const Person* const this;
	//当成员函数后面写成：void showPerson() const {} —— 就相当于函数内的 this 变量是 const Person* const this;，
	//所以上面Person1的函数 void showPerson() const 里面 this->num = 100; 想修改"this指针存储的地址""所对应的变量"就会报错了。
	void showPerson() {
		this->num = 100;
	}
	//void showPerson() const这种写法的函数叫做常函数
public:
	int num;

};

class Person3 {
public:
	//常函数可以修改mutable修饰的成员变量（只是给成员变量加了一个修饰，为的是让常函数能够修改它）
	void showPerson() const{
		this->num = 100;  // // 当void showPerson() 后面加const，这句修改num代码this->num = 100;没有报错，因为mutable int num;
	}
	
public:
	mutable int num;
};


int main() {
	Person1 p1;
	p1.showPerson();

	system("pause");

	return 0;
}


