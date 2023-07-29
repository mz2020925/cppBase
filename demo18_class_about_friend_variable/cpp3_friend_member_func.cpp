#include<iostream>
using namespace std;


class House;  //先声明一个类，告诉编译器我后面会实现这个类的，不要报错

class GoodFriend {
public:
	GoodFriend();// 无参构造

public:
	void visit1();
	void visit2();

public:
	House* house;

};

class House {
	//friend class GoodFriend;  // 声明类GoodFriend是House类的好朋友，GoodFriend的任何成员函数都被允许访问私有成员变量
	friend void GoodFriend::visit1();  // 声明成员函数GoodFriend::visit1()是House类的好朋友，只允许它访问私有成员变量
public:
	House();// 无参构造

public:
	string m_sittingRoom;

private:
	string m_bedRoom;
};


// 类GoodFriend的无参构造
GoodFriend::GoodFriend() {
	//因为house是指向House类的指针，所以创建对象的方式变成 -- 可以使用new的方式在堆区开辟一个House类型的存储空间,并初始化类，并把地址赋给house
	house = new House;
}
// 类GoodFriend的visit1()函数
void GoodFriend::visit1() {
	cout << "好朋友类在访问" << house->m_sittingRoom << endl;
	cout << "好朋友类在访问" << house->m_bedRoom << endl;
}

// 类GoodFriend的visit2()函数
void GoodFriend::visit2() {
	cout << "好朋友类在访问" << house->m_sittingRoom << endl;
	//cout << "好朋友类在访问" << house->m_bedRoom << endl;  // GoodFriend::visit2()不是House的好朋友，不能访问私有成员
}

// 类House的无参构造
House::House() {
	m_sittingRoom = "客厅";
	m_bedRoom = "卧室";
}



int main() {
	GoodFriend goodFriend;
	goodFriend.visit1();
	goodFriend.visit2();

	system("pause");
	return 0;
}