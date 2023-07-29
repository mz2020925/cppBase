#include<iostream>

using namespace std;

class Animal {

public:
	int m_Age;
};

// 利用虚继承，解决菱形继承问题
// 格式是加上virtual关键字，变成虚继承
// 此时Animal称为虚基类
class Sheep :virtual public Animal {

};

class Tuo :virtual public Animal {

};


class SheepTuo :public Sheep, public Tuo {

};

void test01() {
	SheepTuo st;
	// 使用虚继承之后，这个m_Age变量只有一份了，下面三行修改代码修改的是一个变量，因此接下来的四行打印出来的是一个值
	// 通过“Visual Studio 2022 Developer Command Prompt v17.5.3”命令行工具可以看到本类的结构，进而了解到底层
	// 就是SheepTuo这个类，存储着继承自虚基类中实际m_Age的值，另外继承的Sheep类和Tuo类中的m_Age不是实际m_Age的值，
	// 而是以指针形式指向继承自虚基类中实际m_Age，这样SheepTuo这个类中就只有一个实际m_Age。
	st.Sheep::m_Age = 100;
	st.Tuo::m_Age = 200;
	st.m_Age = 300;
	
	cout << "st.Animal::m_Age： " << st.Animal::m_Age << endl;
	cout << "st.Sheep::m_Age： " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age： " << st.Tuo::m_Age << endl;
	cout << "st.m_Age： " << st.m_Age << endl;
	// 有一点要注意的是st.Sheep::m_Age = 100; --> Sheep::m_Age相当于st的一个成员变量，它被修改为100，这句代码不是把Sheep.m_Age修改为100，一定要注意这一点。
}

int main() {
	test01();

	system("pause");
	return 0;
}



