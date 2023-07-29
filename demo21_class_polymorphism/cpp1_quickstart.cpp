#include<iostream>
using namespace std;


class Animal {
public:
	void speak() {
		cout << "动物在说话" << endl;
	}

};


class Cat :public Animal {
public:
	void speak() {
		cout << "猫在说话" << endl;
	}
};


void doSpeak(Animal& animal) {
	// "静态多态的函数地址早绑定  -  编译阶段确定函数地址"，所以doSpeak(cat)进来之后输出的是"动物在说话"
	animal.speak();  // cat.Animal::speak()

	// 使用virtual关键字创建虚拟函数，可以避免早绑定的问题；
	// 也就是说使用virtual关键字，可以实现"动态多态的函数地址晚绑定  -  运行阶段确定函数地址"，这才是我们想要的。
	// 这样分析的话，我们想要的多态，是通过函数地址"早绑定"和"晚绑定"实现的。
}


void test01() {
	Cat cat;
	
	doSpeak(cat);  // 这里就发生了多态
}


int main() {
	test01();

	system("pause");
	return 0;
}