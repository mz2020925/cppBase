#include<iostream>
using namespace std;
#include<fstream>



void test01() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);  // 这个文件写到了"E:\Coding_Files\Visual_Studio_Files\cppbase"解决方案的路径中
	ofs << "张明志" << endl;
	ofs << "年龄22岁" << endl;
	ofs << "性别男";
	ofs.close();
}


int main() {
	test01();

	system("pause");
	return 0;
}
