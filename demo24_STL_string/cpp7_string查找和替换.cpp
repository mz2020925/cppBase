#include<iostream>
#include<string>

using namespace std;


int main() {
	// 
	string s1 = "hello world";
	int pos = s1.find("llo");
	if (pos == -1) {
		cout << "Î´ÕÒµ½" << endl;
	}
	else {
		cout << "pos=" << pos << endl;
	}

	pos = s1.rfind("ld");
	cout << "pos=" << pos << endl;

	s1.replace(1, 3, "222222");
	cout << s1 << endl;


	system("pause");
	return 0;
}

