#include<iostream>
using namespace std;
#include<fstream>



void test01() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);  // ����ļ�д����"E:\Coding_Files\Visual_Studio_Files\cppbase"���������·����
	ofs << "����־" << endl;
	ofs << "����22��" << endl;
	ofs << "�Ա���";
	ofs.close();
}


int main() {
	test01();

	system("pause");
	return 0;
}
