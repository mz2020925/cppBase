#include<iostream>
using namespace std;

class House;  //������һ���࣬���߱������Һ����ʵ�������ģ���Ҫ����

class GoodFriend {
public:
	GoodFriend();// �޲ι���

public:
	void visit();

public:
	House* house;

};

class House {
	friend class GoodFriend;  // ������GoodFriend��House��ĺ����ѣ�GoodFriend���κγ�Ա���������������˽�г�Ա����
public:
	House();// �޲ι���

public:
	string m_sittingRoom;

private:
	string m_bedRoom;
};


// ��GoodFriend���޲ι���
GoodFriend::GoodFriend() {
	//��Ϊhouse��ָ��House���ָ�룬���Դ�������ķ�ʽ��� -- ����ʹ��new�ķ�ʽ�ڶ�������һ��House���͵Ĵ洢�ռ�,����ʼ���࣬���ѵ�ַ����house
	house = new House;
}
// ��GoodFriend��visit()����
void GoodFriend::visit() {
	cout << "���������ڷ���" << house->m_sittingRoom << endl;
	cout << "���������ڷ���" << house->m_bedRoom << endl;
}

// ��House���޲ι���
House::House() {
	m_sittingRoom = "����";
	m_bedRoom = "����";
}

int main() {
	GoodFriend goodFriend;
	goodFriend.visit();

	system("pause");
	return 0;
}