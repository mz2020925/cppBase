#include<iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b) {
		this->m_a = a;
		this->m_b = b;
	}

private:
	int m_a;
	int m_b;
	//如果成员函数实现的话，调用的时候是 "p << cout" 形式，这不是我们想要的效果
	//void operator<<(Person& p){
	//}
};

//只能利用全局函数重载左移运算符
ostream& operator<<(ostream& cout, Person& p) {  // 本质上是operator()，这样的话就可以写成 "cout << p" 形式，就是我们想要的效果
	cout << "m_a: " << p.m_a << ", m_b: " << p.m_b;
	return cout;
}

void test01() {
	Person p(100, 200);

	cout << p << endl;
}




int main() {
	test01();

	system("pause");
	return 0;
}