#include<iostream>
#include<string>
using namespace std;


class Animal{

public:
	void eat(string food) {
		cout << food << endl;
	}

public:
	string name;
	int age;
};

class Cat : public Animal{
public:
	void smell(string mice) {
		cout << mice << endl;
	}

public:
	int weight;
};

int main() {
	Cat cat;
	cat.eat("Óã");
	cat.smell("ÀÏÊó");
	cat.name = "Ã¨ßä";
	cat.age = 3;
	cat.weight = 5;



	system("pause");
	return 0;
}