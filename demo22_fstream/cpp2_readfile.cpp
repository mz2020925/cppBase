#include<iostream>
using namespace std;
#include<fstream>
#include<string>

void test01() {
	ifstream ifs;

	ifs.open("test.txt", ios::in);// ����ļ�·����"E:\Coding_Files\Visual_Studio_Files\cppbase"���������·����
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	

	//��һ�ַ�ʽ
	//char buf[1024] = {0};
	//while (ifs >> buf) {
	//	cout << buf << endl;
	//}

	//�ڶ��ַ�ʽ
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}

	//�����ַ�ʽ
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}

	//�����ַ�ʽ��һ��һ���ַ��������Ƽ�
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