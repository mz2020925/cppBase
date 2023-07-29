#include<iostream>
using namespace std;

//函数重载注意事项
//1、引用作为重载条件 -- 引用中的const int& 和 int& 属于类型不同的重载
void func(int& a)
{
	cout << "func (int &a) 调用 " << endl;
}

void func(const int& a)
{
	cout << "func (const int &a) 调用 " << endl;
}


//2、函数重载碰到函数默认参数，这个时候下面两个函数都可以通过func(10)调用，那到底该调哪一个呢，出现二义性
void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10) 调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a) 调用" << endl;
}

//int main() {
//
//	int a = 10;
//	func(a); //这里会调用无const的那个函数
//	func(10);//这里会调用有const的那个函数
//
//
//	//func2(10); //碰到默认参数产生歧义，需要避免
//
//	system("pause");
//
//	return 0;
//}