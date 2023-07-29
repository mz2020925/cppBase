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
public:
	int* m_age;  // 定义int型的指针
};


void test01() {
	//Person person1(20);
	//Person person2(30);
	//cout<< *person1.m_age <<endl;
	//cout<< *person2.m_age <<endl;

	// 将上面的代码转换成如下，并在Person类中加入析构用于函数释放堆区内存，就会报错
	Person person1(20);
	Person person2(30);
	person2 = person1;
	// 这里我们还没有写重载赋值运算符的代码，依然可以赋值，是因为编译器会至少自动给一个类添加4个函数：
	// 1.默认构造函数(无参，函数体为空)
	// 2.默认析构函数(无参，函数体为空)
	// 3.默认拷贝构造函数，对属性进行值拷贝
	// 4.赋值运算符 operator=, 对属性进行值拷贝(也就是说编译器自动给类重载了赋值运算符，但编译器重载赋值运算符是浅拷贝-->没有开辟新空间)
	cout<< *person1.m_age <<endl;
	cout<< *person2.m_age <<endl;

}

int main() {
	test01();


	system("pause");
	return 0;
}