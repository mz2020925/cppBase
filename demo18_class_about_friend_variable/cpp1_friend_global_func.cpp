#include<iostream>
#include<string>
using namespace std;


class House {
	friend void goodFriend(House* house);  // ����void goodFriend(House* house);�Ǳ����ĺ����ѣ��������˽�г�Ա����
public:
	// �޲ι���
	House() {
		m_sittingRoom = "����";
		m_bedRoom = "����";
	}

public:
	string m_sittingRoom;

private:
	string m_bedRoom;
};

// ��Ԫ����Ϊȫ�ֺ�����ʽ -- ���ȫ�ֺ�����ô����"��Ԫ"���أ�
void goodFriend(House* house) {
	cout << "���ʹ�����Ա����m_sittingRoom��" << house->m_sittingRoom << endl;
	cout << "����˽�г�Ա����m_bedRoom��" << house->m_bedRoom << endl;
}


int main() {
	House house;
	goodFriend(&house);

	system("pause");
	return 0;
}