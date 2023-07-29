#include<iostream>

using namespace std;

//定义类
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);  // 为了访问私有成员变量，将重载<<运算符函数这是为友元
public:
	MyInteger() {  //定义无参构造
		m_Num = 100;
	}

	//重载前置++运算符
	MyInteger& operator++() {  // 返回引用是为了实现一直对同一个数据进行递增操作，感觉也有一点链式编程的意思在里面
		//先++
		m_Num++;
		//再返回
		return *this;
	}

	//重载后置++运算符
	MyInteger operator++(int) {  // 返回值是因为temp是局部变量，局部变量在该成员函数结束后就会被销毁，所以不可以以引用的形式返回局部变量。设置占位参数用以区分和重载前置运算符函数。
		//先记录原始值
		MyInteger temp = *this;
		//再递增
		m_Num++;
		//返回原始值
		return temp;
	}
	

private:  //定义成员变量
	int m_Num;
};

//重载<<运算符函数
//为了实现前面学习的输出用法那种链式编程，该函数需要返回"ostream&"才能接着往后写"<<endl"。
ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num;
	return cout;
}

void test01() {
	MyInteger myint;
	cout << "myint的成员变量：" << myint << endl;  // 和java里面的toString()方法类似
	// 需要注意的是，牢牢记得重载函数的用法，上句代码的cout就是前面学习的输出用法的，与重载<<运算符函数没有关系
	// 上句代码第一个"<<"后面跟着字符串，就是前面学习的输出用法，与重载<<运算符函数没有关系
	// 上句代码第二个"<<"后面跟着"myint"，这才是我们写的重载<<运算符，会调用重载运算符函数
	// 上句代码第二个"<<"后面跟着"endl"，就是前面学习的输出用法，与重载<<运算符函数没有关系，但要注意，"<< myint"执行后需返回"ostream&"才能实现链式编程
}

void test02() {
	MyInteger myint;
	cout << myint << endl;
	cout << ++(++myint) << endl;
	cout << ++myint << endl;
}

void test03() {
	MyInteger myint;
	cout << myint << endl;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {
	test02();
	cout << "-----------" << endl;
	test03();

	system("pause");
	return 0;
}
