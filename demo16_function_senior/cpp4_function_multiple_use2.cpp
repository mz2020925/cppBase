#include<iostream>
using namespace std;

//��������ע������
//1��������Ϊ�������� -- �����е�const int& �� int& �������Ͳ�ͬ������
void func(int& a)
{
	cout << "func (int &a) ���� " << endl;
}

void func(const int& a)
{
	cout << "func (const int &a) ���� " << endl;
}


//2������������������Ĭ�ϲ��������ʱ��������������������ͨ��func(10)���ã��ǵ��׸õ���һ���أ����ֶ�����
void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10) ����" << endl;
}

void func2(int a)
{
	cout << "func2(int a) ����" << endl;
}

//int main() {
//
//	int a = 10;
//	func(a); //����������const���Ǹ�����
//	func(10);//����������const���Ǹ�����
//
//
//	//func2(10); //����Ĭ�ϲ����������壬��Ҫ����
//
//	system("pause");
//
//	return 0;
//}