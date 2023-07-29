#include<iostream>
#include<string>
using namespace std;

class Base {

public:
	int m_A;  // int型占4个Byte
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base {
public:
	int m_D;
};

void test01() {
	cout << "Son类占的存储空间（Bytes）：" << sizeof(Son)<<endl;
}

int main() {
	//父类中所有的非静态成员属性都会被子类继承下去
	//父类中私有成员属性是被编译器隐藏了，因此是访问到的，但是确实被继承下去了
	test01();

	system("pause");
	return 0;
}