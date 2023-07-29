#include<iostream>
#include"person.hpp"


int main() {
	Person<string, int> p("zzzzz", 234);
	p.toString();

	system("pause");
	return 0;
}