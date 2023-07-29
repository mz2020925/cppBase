#pragma once
#include<iostream>

using namespace std;


template<class T1, class T2>
class Person {
public:
	Person(T1 var1, T2 var2);
	void toString();

public:
	T1 var1;
	T2 var2;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 var1, T2 var2) {
	this->var1 = var1;
	this->var2 = var2;
}

template<class T1, class T2>
void Person<T1, T2>::toString() {
	cout << this->var1 << ", " << this->var2 << endl;
}


