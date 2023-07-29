#pragma once

#include<iostream>

using namespace std;

template<class T>
class MyArray {
public:
	// 构造函数
	MyArray(int capacity) {
		this->m_capacity = capacity;
		this->m_size = 0;
		this->p_addr = new T[this->m_capacity]
	}


	// 拷贝构造
	MyArray(const MyArray& arr_obj) {
		this->m_capacity = arr_obj.m_capacity;
		this->m_size = arr_obj.m_size;
		this->p_addr = new T[this->m_capacity];
		for (int i = 1; i < this->m_size; i++) {  // 为什么这里是 this->m_size 而不是 this->m_capacity
			// 如果p_addr数组存储的是指向对象的指针，那么下面这个赋值符号就是浅拷贝
			// 因此需要对运算=进行重载
			this->p_addr[i] = arr_obj.p_addr[i];
		}

		// 重载 = 运算符
		MyArray& operator=(const MyArray & arr_obj) {
			if (this->p_addr != NULL) {  // 判断 = 左边的对象指针不为NULL
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
	T* p_addr;  // 指向一个堆空间，这个空间存储真正的数据
	int m_capacity;  // 容量
	int m_size;  // 大小

};







