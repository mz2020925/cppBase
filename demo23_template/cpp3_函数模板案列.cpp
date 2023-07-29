#include<iostream>

using namespace std;

template<typename T>
void swapNum(T& a, T& b);

// 编写一个函数实现对任意类型的升序选择排序
template<typename T>
void sortFun(T& arr) {
	if (arr == NULL) {
		return;
	}
	int len = sizeof(arr) / sizeof(arr[0]);
	if (len < 2) {
		return;
	}
	for (int i = 0; i < len-1; i++) {
		int minIndex = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		swapNum(arr[i], arr[minIndex]);
	}
}

template<typename T>
void swapNum(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int arr1[] = {5,4,3,2,1};
	sortFun(arr1);

	for (int var : arr1) {
		cout << var << endl;
	}
	
	char arr2[] = "gfedcba";
	sortFun(arr2);

	for (char var : arr2) {
		cout << var << endl;
	}

	system("pause");
	return 0;
}