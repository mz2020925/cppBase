#pragma once
#include<iostream>
using namespace std;

class CPU {
public:
	CPU() {
		cout << "CPU的构造函数" << endl;
	}
	virtual ~CPU(){
		cout << "CPU的析构函数" << endl;
	}

	virtual void calcu() = 0;
};

class NVIDIA {
public:
	NVIDIA() {
		cout << "NVIDIA的构造函数" << endl;
	}
	virtual ~NVIDIA() {
		cout << "NVIDIA的析构函数" << endl;
	}

	virtual void display() = 0;
};

class RAM {
public:
	RAM() {
		cout << "RAM的构造函数" << endl;
	}
	virtual ~RAM() {
		cout << "RAM的析构函数" << endl;
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

	virtual ~Computer() {// 释放掉本类的成员变量指向的堆区空间
		cout << "computer的析构函数，释放掉本类的成员变量指向的堆区空间" << endl;

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

	//业务函数
	void doBusiness() {
		// 这里的m_cpu，m_ram，m_nvidia是对象
		m_cpu->calcu();
		m_ram->store();
		m_nvidia->display();
	}


private:
	CPU* m_cpu;
	NVIDIA* m_nvidia;
	RAM* m_ram;
};