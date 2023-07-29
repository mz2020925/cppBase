#include<iostream>
#include<string>
using namespace std;


class Parent {

public:
	void eat() {
		cout << "eat" << endl;
	}
protected:
	void drink() {
		cout << "drink" << endl;
	}
private:
	void sleep() {
		cout << "sleep" << endl;
	}


public:
	string name;
protected:
	int age;
private:
	bool student;
};

class Son1 : public Parent {
public:
	void check_public_inheritance() {
		name = 10;  // 原封不动继承public权限
		age = 10;  // 原封不动继承protected权限
		//studnet = true;  // 继承不到
	}
};

class Son2 : protected Parent {
public:
	void check_public_inheritance() {
		name = 20;  // 修改public权限为protected权限，注意保护权限在类外也是访问不到的
		age = 30;		// 修改public权限为protected权限，注意保护权限在类外也是访问不到的
		//studnet = true;  // 继承不到
	}
};

class Son3 : private Parent {
public:
	void check_public_inheritance() {
		name = 30;  // 修改public权限为private权限
		age = 30;		// 修改public权限为private权限
		//studnet = true;  // 继承不到
	}
};

class GrandSon3 : public Son3 {
public:
	void func() {
		//name = 40;  // Son3类中的name和age属性已经变成private了
		//age = 40;
	}

};


int main() {
	Son1 son1;
	son1.name = "zmz";
	//son1.age = 22;

	Son2 son2;
	//son2.name
	son2.check_public_inheritance();

	Son3 son3;
	//son3.name;

	system("pause");
	return 0;
}