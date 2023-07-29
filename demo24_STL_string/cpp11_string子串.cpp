#include<iostream>
#include<string>

using namespace std;

int main() {
	string s1 = "hello";

	string s2 = s1.substr(1, 3);
	cout << s2 << endl;

	system("pause");
	return 0;
}