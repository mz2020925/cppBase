#include<iostream>
using namespace std;

void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}


void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap3(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

//int main() {
//	int a = -10;
//	int b = 100;
//	
//	// 1.值传递不交换实参
//	swap1(a, b);
//	cout << "a="<<a << ", " <<"b="<< b << endl;
//
//	// 2.指针传递
//	swap2(&a, &b);
//	cout << "a=" << a << ", " << "b=" << b << endl;
//
//	//3.引用传递
//	swap3(a, b);
//	cout << "a=" << a << ", " << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}