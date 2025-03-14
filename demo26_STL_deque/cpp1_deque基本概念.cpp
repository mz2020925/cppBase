#include<iostream>
#include<deque>

using namespace std;

/*
**功能：**
	* 双端数组，可以对头端进行插入删除操作



**deque与vector区别：**
	* vector对于头部的插入删除效率低，数据量越大，效率越低
	* deque相对而言，对头部的插入删除速度回比vector快
	* vector访问元素时的速度会比deque快,这和两者内部实现有关

*/

/*
deque内部工作原理:
	deque内部有个**中控器**，维护每段缓冲区中的内容，缓冲区中存放真实数据
	中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间
*/

/*
	deque容器的迭代器也是支持随机访问的
*/