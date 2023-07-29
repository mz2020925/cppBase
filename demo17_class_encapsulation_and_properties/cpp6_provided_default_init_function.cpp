/*
默认情况下，c++编译器至少给一个类添加3个函数
	1．默认构造函数(无参，函数体为空)
	2．默认析构函数(无参，函数体为空)
	3．默认拷贝构造函数，对属性进行值拷贝

构造函数调用规则如下：
	如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
	如果用户定义拷贝构造函数，c++不会再提供默认无参构造函数和默认拷贝构造函数。
*/