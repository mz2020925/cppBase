#include<iostream>
#include<stack>

using namespace std;


void test01() {
	stack<int> s1;

	// 1.push(elem); ��ջ�����Ԫ��
	for (int i = 0; i < 10; i++) {
		s1.push(i);  
	}

	// 2.size(); ����ջ�Ĵ�С
	cout << s1.size() << endl;
	// 3.top(); ����ջ��Ԫ��
	cout << "ջ��Ԫ�أ�" << s1.top() << endl;

	// 4.empty(); �ж϶�ջ�Ƿ�Ϊ��
	while (!s1.empty()) {
		
		cout << s1.top() << endl;
	// 5.pop(); ����ջ��Ԫ��
		s1.pop();  // û�з���ֵ
	}
}


int main() {
	test01();



	system("pause");
	return 0;
}

