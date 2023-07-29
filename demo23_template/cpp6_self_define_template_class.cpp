#include<iostream>

using namespace std;

class Person{
public:
	// 构造函数
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

public:
	string m_Name;
	int m_Age;

};


template<typename T>
bool compare(T& a, T& b) {  // 这种写法是不可以比较两个Person类是否相等的，编译器无法把这个泛型T推到为Person类，
	// 解决方法有两种，一种是重载运算符==，让他能够够判断两个Person类；另一种是利用重载的模板函数
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}


template<> bool compare(Person& p1, Person& p2) {  // 这种写法是不可以比较两个Person类是否相等的，编译器无法把这个泛型T推到为Person类，
	// 解决方法有两种，一种是重载运算符==，让他能够够判断两个Person类；另一种是利用重载模板函数
	if (p1.m_Name == p2.m_Name && p1.m_Age==p2.m_Age) {
		return true;
	}
	else {
		return false;
	}
}



int main() {
	Person p1("zmz", 12);
	Person p2("zmz", 12);
	cout << compare(p1, p2) << endl;

	system("pause");
	return 0;
}
