#include<iostream>

using namespace std;

class Animal {

public:
	int m_Age;
};

// ������̳У�������μ̳�����
// ��ʽ�Ǽ���virtual�ؼ��֣������̳�
// ��ʱAnimal��Ϊ�����
class Sheep :virtual public Animal {

};

class Tuo :virtual public Animal {

};


class SheepTuo :public Sheep, public Tuo {

};

void test01() {
	SheepTuo st;
	// ʹ����̳�֮�����m_Age����ֻ��һ���ˣ����������޸Ĵ����޸ĵ���һ����������˽����������д�ӡ��������һ��ֵ
	// ͨ����Visual Studio 2022 Developer Command Prompt v17.5.3�������й��߿��Կ�������Ľṹ�������˽⵽�ײ�
	// ����SheepTuo����࣬�洢�ż̳����������ʵ��m_Age��ֵ������̳е�Sheep���Tuo���е�m_Age����ʵ��m_Age��ֵ��
	// ������ָ����ʽָ��̳����������ʵ��m_Age������SheepTuo������о�ֻ��һ��ʵ��m_Age��
	st.Sheep::m_Age = 100;
	st.Tuo::m_Age = 200;
	st.m_Age = 300;
	
	cout << "st.Animal::m_Age�� " << st.Animal::m_Age << endl;
	cout << "st.Sheep::m_Age�� " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age�� " << st.Tuo::m_Age << endl;
	cout << "st.m_Age�� " << st.m_Age << endl;
	// ��һ��Ҫע�����st.Sheep::m_Age = 100; --> Sheep::m_Age�൱��st��һ����Ա�����������޸�Ϊ100�������벻�ǰ�Sheep.m_Age�޸�Ϊ100��һ��Ҫע����һ�㡣
}

int main() {
	test01();

	system("pause");
	return 0;
}



