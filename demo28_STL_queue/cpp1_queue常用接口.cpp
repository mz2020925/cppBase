#include<iostream>
#include<queue>
#include<string>

using namespace std;


class Person {
public:
	Person(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}

public:
	string m_name;
	string m_age;
};

void test01() {
	queue<Person> q1;

	Person p1("李瑶瑶", 18);
	Person p2("秦思雨", 35);
	Person p3("谢清雨", 18);
	Person p4("谢微风", 18);
	Person p5("李重德", 40);
	Person p6("贺林", 18);

	// 1.push(elem); 往队尾添加元素
	q1.push(p1);
	q1.push(p2);
	q1.push(p3);
	q1.push(p4);
	q1.push(p5);
	q1.push(p6);

	// 2.front(); 返回第一个元素
	cout << q1.front().m_name <<", "<<q1.front().m_age << endl;

	// 3.back(); 返回最后一个元素
	cout << q1.back().m_name << ", " << q1.back().m_age << endl;
	
	//4.size(); 返回栈的大小
	cout << q1.size() << endl;

	// 5.empty(); 判断队是否为空
	while (!q1.empty()) {
		cout << q1.front().m_name << ", " << q1.front().m_age << endl;
	// 6.pop(); 弹出队头元素
		q1.pop();
	}


}


int main() {
	test01();




	system("pause");
	return 0;
}