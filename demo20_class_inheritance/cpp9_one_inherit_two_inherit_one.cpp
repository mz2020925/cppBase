#include<iostream>
using namespace std;

//动物类
class Animal {
public:
	int m_A;
};

//羊类
class Sheep :public Animal {

};

//驼类
class Tuo :public Animal {

};

//羊驼类
class SheepTuo :public Sheep,public Tuo{

};


void test01() {
	SheepTuo st;

	st.Sheep::m_A = 100;
	st.Tuo::m_A = 200;
	//当菱形继承，两个父类拥有相同的数据，需要加上作用域以区分
	cout << "Sheep中的m_A: " << st.Sheep::m_A<<endl;
	cout << "Tuo中的m_A: " << st.Tuo::m_A << endl;
	//这份数据我们知道只要有一份就可以了，菱形继承导致数据有两份，资源浪费，下面要通过“虚继承”解决这个问题
}


int main() {
	test01();

	system("pause");
	return 0;
}

