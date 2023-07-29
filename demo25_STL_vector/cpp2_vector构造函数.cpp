#include<iostream>
#include<vector>

using namespace std;

void toString(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {

	vector<int> v1;  // 无参构造
	for (int i = 0; i < 10;i++) {
		v1.push_back(i);
	}

	toString(v1);

	// 拷贝构造
	vector<int> v2(v1.begin(), v1.end()-1);
	toString(v2);

	// 
	vector<int> v3(8, 666);
	toString(v3);

	vector<int> v4(v3);
	toString(v4);

	system("pause");
	return 0;

}



