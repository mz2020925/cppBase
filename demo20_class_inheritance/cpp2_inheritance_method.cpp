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
		name = 10;  // ԭ�ⲻ���̳�publicȨ��
		age = 10;  // ԭ�ⲻ���̳�protectedȨ��
		//studnet = true;  // �̳в���
	}
};

class Son2 : protected Parent {
public:
	void check_public_inheritance() {
		name = 20;  // �޸�publicȨ��ΪprotectedȨ�ޣ�ע�Ᵽ��Ȩ��������Ҳ�Ƿ��ʲ�����
		age = 30;		// �޸�publicȨ��ΪprotectedȨ�ޣ�ע�Ᵽ��Ȩ��������Ҳ�Ƿ��ʲ�����
		//studnet = true;  // �̳в���
	}
};

class Son3 : private Parent {
public:
	void check_public_inheritance() {
		name = 30;  // �޸�publicȨ��ΪprivateȨ��
		age = 30;		// �޸�publicȨ��ΪprivateȨ��
		//studnet = true;  // �̳в���
	}
};

class GrandSon3 : public Son3 {
public:
	void func() {
		//name = 40;  // Son3���е�name��age�����Ѿ����private��
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