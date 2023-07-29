#include<iostream>

using namespace std;


class Person {



public:
	Person(int age) {
		m_age = new int(age);  // 把整型变量开辟存储到堆区，并让指针m_age指向堆区的那块空间
	}

	~Person() {
		if (m_age != NULL) {
			delete m_age;  // 这句代码是释放m_age指向的那片内存，不是把m_age存储的值(地址)清空
			m_age = NULL;  // 这句代码才是把m_age存储的值(地址)清空
		}
	}

	// 重载赋值运算符，以实现对象之间用等号赋值
	Person& operator=(Person& person) {
		//编译器是提供浅拷贝是如下：
		//m_age = person.m_age;

		//我们写的重载要用深拷贝
		if (m_age != NULL) {  // 应该先判断是否有成员变量在堆区，如果有先释放干净，然后再深拷贝
			delete m_age;
			m_age = NULL;
		}
		//深拷贝
		m_age = new int(*person.m_age);

		//为了实现"连等号"，要以引用形式返回"调用赋值运算符的类"本身(就是返回等号左边的类的引用)，(注意"连等号"是从右往左运算)
		return *this;  // thsi就指向 "调用赋值运算符的类"本身
	}

public:
	int* m_age;  // 定义int型的指针
};


void test01() {
	Person person1(-10);
	Person person2(30);
	Person person3(100);

	person3 = person2 = person1;

	cout << *person1.m_age << endl;
	cout << *person2.m_age << endl;
	cout << *person3.m_age << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}