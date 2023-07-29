#include<iostream>

using namespace std;


int main() {
	int* arr = new int[5] {1,2,3,4,5};
	for (int i = 0; i < 5; i++) {
		
		cout << arr[i] << endl;
	}
	delete[] arr;

	system("pause");
	return 0;
}
