#pragma once

#include<iostream>

using namespace std;

template<class T>
class MyArray {
public:
	// ���캯��
	MyArray(int capacity) {
		this->m_capacity = capacity;
		this->m_size = 0;
		this->p_addr = new T[this->m_capacity]
	}


	// ��������
	MyArray(const MyArray& arr_obj) {
		this->m_capacity = arr_obj.m_capacity;
		this->m_size = arr_obj.m_size;
		this->p_addr = new T[this->m_capacity];
		for (int i = 1; i < this->m_size; i++) {  // Ϊʲô������ this->m_size ������ this->m_capacity
			// ���p_addr����洢����ָ������ָ�룬��ô���������ֵ���ž���ǳ����
			// �����Ҫ������=��������
			this->p_addr[i] = arr_obj.p_addr[i];
		}

		// ���� = �����
		MyArray& operator=(const MyArray & arr_obj) {
			if (this->p_addr != NULL) {  // �ж� = ��ߵĶ���ָ�벻ΪNULL
				delete[] this->p_addr;
				this->m_capacity = 0;
				this->m_size = 0;
			}
			this->m_capacity = arr_obj.m_capacity;
			this->m_size = arr_obj.m_size;
			this->p_addr = new T[this->m_capacity];
			for (int i = 0; i < this->m_size; i++) {
				this->p_addr[i] = arr_obj.p_addr[i];
			}
			return *this;
		}

	}






private:
	T* p_addr;  // ָ��һ���ѿռ䣬����ռ�洢����������
	int m_capacity;  // ����
	int m_size;  // ��С

};







