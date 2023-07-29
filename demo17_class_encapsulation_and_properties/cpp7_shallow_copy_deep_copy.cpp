#include<iostream>
using namespace std;

/*
深浅拷贝是面试经典问题，也是常见的一个坑
	浅拷贝：简单的赋值拷贝操作
	深拷贝：在堆区重新申请空间，进行拷贝操作

问题：如果使用编译器自己提供的拷贝构造函数，做的是浅拷贝操作，不会新开辟堆区内存，只是复制了堆区地址，浅拷贝操作会带来堆区内存重复释放。
解决：使用深拷贝来解决，什么是深拷贝，就是自己写拷贝构造函数，会在堆区新开辟内存，就不会发生内存重复释放的问题。

总结：如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
*/

class Person {
public:
	Person() {
		cout << "默认构造函数执行" << endl;
	}
	Person(int age_in, int height_in) {
		age = age_in;
		height = new int(height_in);  // 这么写会把height_in的值存放到堆区，指针变量height指向height_in的地址
		cout << "带参构造函数执行" << endl;
	}

	Person(const Person& p) {
		age = p.age;
		//height = p.height;  // 这种编译器提供的拷贝构造函数直接用等号赋值地址的操作就是浅拷贝
		height = new int(*p.height);  // 这种在堆区新开辟内存，然后存放相同数据的操作是深拷贝
		cout << "拷贝构造函数执行" << endl;

	}

	~Person() {
		if (height != NULL) {
			delete height;
			height = NULL;
		}
		cout << "析构函数执行" << endl;
	}

public:
	int age;
	int* height;
};

void test01() {
	Person p1(22, 160);
	cout << "p1的年龄是" << p1.age<<", 身高是" << *p1.height << endl;

	Person p2 = p1;
	cout<< "p2的年龄是" << p2.age << ", 身高是" << *p2.height << endl;
}

int main() {

	test01();
	system("pause");

	return 0;
}