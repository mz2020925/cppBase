#include"abstract_class_of_example.h"


//ʵ�ֳ����࣬ʵ��Ӣ�ض�����
class IntelCPU :public CPU {
public:
	virtual void calcu() {
		cout << "Intel��CPU��ʼ����" << endl;
	}
};

class IntelNVIDIA :public NVIDIA {
public:
	virtual void display() {
		cout << "Intel��NVIDIA��ʼ����" << endl;
	}
};

class IntelRAM :public RAM {
public:
	virtual void store() {
		cout << "Intel��NVIDIA��ʼ����" << endl;
	}
};


//ʵ�ֳ����࣬ʵ�����볧��
class LenovoCPU :public CPU {
public:
	virtual void calcu() {
		cout << "Lenovo��CPU��ʼ����" << endl;
	}
};

class LenovoNVIDIA :public NVIDIA {
public:
	virtual void display() {
		cout << "Lenovo��NVIDIA��ʼ����" << endl;
	}
};

class LenovoRAM :public RAM {
public:
	virtual void store() {
		cout << "Lenovo��NVIDIA��ʼ����" << endl;
	}
};

void test01() {
	CPU* intelcpu = new IntelCPU;
	NVIDIA* nvidia = new IntelNVIDIA;
	RAM* intelram = new IntelRAM;

	// ������һ̨����
	Computer* computer = new Computer(intelcpu, nvidia, intelram);
	computer->doBusiness();
	delete computer;

	cout << "----------------" << endl;

	// �����ڶ�̨����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoNVIDIA, new LenovoRAM);
	computer2->doBusiness();
	delete computer2;
}

int main() {
	test01();

	system("pause");
	return 0;
}

