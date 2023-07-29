#include<iostream>
#include<vector>

using namespace std;


void toString(vector<int> v) {
	for (vector<int>::iterator it = v.begin(); it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	/*
	vector赋值方式比较简单，使用operator=，或者assign都可以
	*/
	vector<int> v1;
	for (int i = 0; i < 10;i++) {
		v1.push_back(i);
	}
	toString(v1);


	vector<int> v2;
	v2 = v1;
	toString(v2);

	vector<int>v3;
	v3.assign(v2.begin() + 1, v2.end());
	toString(v3);

	vector<int> v4;
	v4.assign(8, 888);
	toString(v4);


	system("pause");
	return 0;
}
