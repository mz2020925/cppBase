#include"abstract_class_of_example.h"


//实现抽象类，实现英特尔厂商
class IntelCPU :public CPU {
public:
	virtual void calcu() {
		cout << "Intel的CPU开始工作" << endl;
	}
};

class IntelNVIDIA :public NVIDIA {
public:
	virtual void display() {
		cout << "Intel的NVIDIA开始工作" << endl;
	}
};

class IntelRAM :public RAM {
public:
	virtual void store() {
		cout << "Intel的NVIDIA开始工作" << endl;
	}
};


//实现抽象类，实现联想厂商
class LenovoCPU :public CPU {
public:
	virtual void calcu() {
		cout << "Lenovo的CPU开始工作" << endl;
	}
};

class LenovoNVIDIA :public NVIDIA {
public:
	virtual void display() {
		cout << "Lenovo的NVIDIA开始工作" << endl;
	}
};

class LenovoRAM :public RAM {
public:
	virtual void store() {
		cout << "Lenovo的NVIDIA开始工作" << endl;
	}
};

void test01() {
	CPU* intelcpu = new IntelCPU;
	NVIDIA* nvidia = new IntelNVIDIA;
	RAM* intelram = new IntelRAM;

	// 创建第一台电脑
	Computer* computer = new Computer(intelcpu, nvidia, intelram);
	computer->doBusiness();
	delete computer;

	cout << "----------------" << endl;

	// 创建第二台电脑
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoNVIDIA, new LenovoRAM);
	computer2->doBusiness();
	delete computer2;
}

int main() {
	test01();

	system("pause");
	return 0;
}

