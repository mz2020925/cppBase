#include<iostream>
using namespace std;
#include<fstream>
#include<string>

void test01() {
	ifstream ifs;

	ifs.open("test.txt", ios::in);// 这个文件路径是"E:\Coding_Files\Visual_Studio_Files\cppbase"解决方案的路径中
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}

	

	//第一种方式
	//char buf[1024] = {0};
	//while (ifs >> buf) {
	//	cout << buf << endl;
	//}

	//第二种方式
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}

	//第三种方式
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}

	//第四种方式是一个一个字符读，不推荐
	//char c;
	//while ((c = ifs.get()) != EOF) {
	//	cout << c;
	//}

	ifs.close();
}

int main() {
	test01();

	system("pause");
	return 0;
}