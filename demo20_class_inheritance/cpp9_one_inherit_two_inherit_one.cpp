#include<iostream>
using namespace std;

//������
class Animal {
public:
	int m_A;
};

//����
class Sheep :public Animal {

};

//����
class Tuo :public Animal {

};

//������
class SheepTuo :public Sheep,public Tuo{

};


void test01() {
	SheepTuo st;

	st.Sheep::m_A = 100;
	st.Tuo::m_A = 200;
	//�����μ̳У���������ӵ����ͬ�����ݣ���Ҫ����������������
	cout << "Sheep�е�m_A: " << st.Sheep::m_A<<endl;
	cout << "Tuo�е�m_A: " << st.Tuo::m_A << endl;
	//�����������֪��ֻҪ��һ�ݾͿ����ˣ����μ̳е������������ݣ���Դ�˷ѣ�����Ҫͨ������̳С�����������
}


int main() {
	test01();

	system("pause");
	return 0;
}

