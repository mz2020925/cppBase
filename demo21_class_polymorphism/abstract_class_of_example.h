#pragma once
#include<iostream>
using namespace std;

class CPU {
public:
	CPU() {
		cout << "CPU�Ĺ��캯��" << endl;
	}
	virtual ~CPU(){
		cout << "CPU����������" << endl;
	}

	virtual void calcu() = 0;
};

class NVIDIA {
public:
	NVIDIA() {
		cout << "NVIDIA�Ĺ��캯��" << endl;
	}
	virtual ~NVIDIA() {
		cout << "NVIDIA����������" << endl;
	}

	virtual void display() = 0;
};

class RAM {
public:
	RAM() {
		cout << "RAM�Ĺ��캯��" << endl;
	}
	virtual ~RAM() {
		cout << "RAM����������" << endl;
	}

	virtual void store() = 0;
};

class Computer {
public:
	Computer(CPU* cpu, NVIDIA* nvidia, RAM* ram) {
		this->m_cpu = cpu;
		this->m_nvidia = nvidia;
		this->m_ram = ram;
	}

	virtual ~Computer() {// �ͷŵ�����ĳ�Ա����ָ��Ķ����ռ�
		cout << "computer�������������ͷŵ�����ĳ�Ա����ָ��Ķ����ռ�" << endl;

		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_ram != NULL) {
			delete m_ram;
			m_ram = NULL;
		}
		if (m_nvidia != NULL) {
			delete m_nvidia;
			m_nvidia = NULL;
		}
	}

	//ҵ����
	void doBusiness() {
		// �����m_cpu��m_ram��m_nvidia�Ƕ���
		m_cpu->calcu();
		m_ram->store();
		m_nvidia->display();
	}


private:
	CPU* m_cpu;
	NVIDIA* m_nvidia;
	RAM* m_ram;
};