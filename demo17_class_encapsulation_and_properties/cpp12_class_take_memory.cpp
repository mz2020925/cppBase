#include<iostream>
using namespace std;

class Person1 {
	// 空对象的占用内存是1byte，因为即使是空对象，也要给它一个内存，否则不同的空对象如何区分呢
};

class Person2 {
public:
	static void func() {  //静态成员函数不占对象空间
		int temp;
	}

public:
	static int num;  //静态成员变量不占对象空间
};

class Person3 {
public:
	void func() {  //非静态成员函数不占对象空间，所有函数共享一个函数实例,但是C++里面有办法把不同类调用该函数区分开来
	
	}
};

class Person4 {
public:
	void func() {  //非静态成员函数不占对象空间，所有函数共享一个函数实例,但是C++里面有办法把不同类调用该函数区分开来
		int num;
	}
};

class Person5 {
public:
	int num;  //非静态成员变量占对象空间
};







int main() {
	Person1 p1;
	cout << sizeof(p1) << endl;  // 1byte


	Person2 p2;
	cout << sizeof(p2) << endl;  // 1byte

	Person3 p3;
	cout << sizeof(p3) << endl;  // 1byte

	Person4 p4;
	cout << sizeof(p4) << endl;  // 1byte

	Person5 p5;
	cout << sizeof(p5) << endl;  // 4byte



	system("pause");

	return 0;
}