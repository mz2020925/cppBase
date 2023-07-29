#include<iostream>
using namespace std;

class Person {
public:
	void showPerson() {
		cout << "showPerson被执行了" << endl;
	}

	void showPersonAge() {
		//if (this == NULL) {  // 防止别人搞破坏，加这行代码避免空指针异常
		//	return;
		//}
		cout << "showPersonAge被执行了：" << this->m_age << endl;
	}


public:
	int m_age;

};


int main() {
	Person *p1 = NULL;  // 这样写时会报错的：Person p1 = NULL;，但是Person *p1 = NULL;不会报错

	p1->showPerson();  // p1有两个注意点：一个是它是Person类型，另一个是它的值是NULL

	//p1->showPersonAge();  
	// 这样写时会报错的，因为 cout << "showPerson被执行了：" << m_age << endl; 被执行时会
	// 变成 cout << "showPerson被执行了：" << this->m_age << endl; 这个时候this是p1=NULL，并没有指向一个实体对象，当然this->m_age会报错

	//Person p2;
	//cout << p2.m_age << endl;

	system("pause");

	return 0;
}