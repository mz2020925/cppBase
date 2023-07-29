#include<iostream>
#include<string>
using namespace std;


class House {
	friend void goodFriend(House* house);  // 声明void goodFriend(House* house);是本来的好朋友，允许访问私有成员变量
public:
	// 无参构造
	House() {
		m_sittingRoom = "客厅";
		m_bedRoom = "卧室";
	}

public:
	string m_sittingRoom;

private:
	string m_bedRoom;
};

// 友元定义为全局函数形式 -- 这个全局函数怎么就算"友元"了呢，
void goodFriend(House* house) {
	cout << "访问公共成员变量m_sittingRoom：" << house->m_sittingRoom << endl;
	cout << "访问私有成员变量m_bedRoom：" << house->m_bedRoom << endl;
}


int main() {
	House house;
	goodFriend(&house);

	system("pause");
	return 0;
}