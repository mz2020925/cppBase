#include<iostream>
using namespace std;

class Person1 {
	// �ն����ռ���ڴ���1byte����Ϊ��ʹ�ǿն���ҲҪ����һ���ڴ棬����ͬ�Ŀն������������
};

class Person2 {
public:
	static void func() {  //��̬��Ա������ռ����ռ�
		int temp;
	}

public:
	static int num;  //��̬��Ա������ռ����ռ�
};

class Person3 {
public:
	void func() {  //�Ǿ�̬��Ա������ռ����ռ䣬���к�������һ������ʵ��,����C++�����а취�Ѳ�ͬ����øú������ֿ���
	
	}
};

class Person4 {
public:
	void func() {  //�Ǿ�̬��Ա������ռ����ռ䣬���к�������һ������ʵ��,����C++�����а취�Ѳ�ͬ����øú������ֿ���
		int num;
	}
};

class Person5 {
public:
	int num;  //�Ǿ�̬��Ա����ռ����ռ�
};







int main() {
	Person1 p1;
	cout << sizeof(p1) << endl;  // 1byte


	Person2 p2;
	cout << sizeof(p2) << endl;  // 1byte

	Person3 p3;
	cout << sizeof(p3) << endl;  // 1byte

	Person4 p4;
	cout << sizeof(p4) << endl;  // 1byte

	Person5 p5;
	cout << sizeof(p5) << endl;  // 4byte



	system("pause");

	return 0;
}