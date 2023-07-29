#include<iostream>
using namespace std;


class Animal {
public:
	virtual void speak() {
		cout << "动物在说话" << endl;
	}

};


class Cat :public Animal {
public:
	virtual void speak() {
		cout << "猫在说话" << endl;
	}
};


class Dog :public Animal {
public:
	virtual void speak() {
		cout << "狗在说话" << endl;
	}
};


void doSpeak(Animal& animal) {
	animal.speak();
}


void test01() {
	Cat cat;
	doSpeak(cat);  // 这里就发生了多态
}


void test02() {
	Dog dog;
	doSpeak(dog);  // 这里就发生了多态
}


int main() {
	test01();
	test02();

	system("pause");
	return 0;
}

//多态满足条件： 
//1、有继承关系
//2、子类重写父类中的虚函数
//多态使用：
//父类指针或引用指向子类对象

//重写：函数返回值类型  函数名 参数列表 完全一致称为重写
