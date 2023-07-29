#include<iostream>
using namespace std;

/*
��C++�� struct��classΨһ����������� Ĭ�ϵķ���Ȩ�޲�ͬ(��ʼ�ṹ���ǿ������������õ�)

����
	* struct Ĭ��Ȩ��Ϊ����
	* class  Ĭ��Ȩ��Ϊ˽��
*/
// ��
class Cube {
// ��Ϊ����Ա������
public:
	void setLength(double len) {
		length=len;
	}
	double getLength() {
		return length;
	}
	
	void setWidth(double wid) {
		width = wid;
	}
	double getWidth() {
		return width;
	}

	void setHeigth(double hei) {
		height = hei;

	}

	double getHeigth() {
		return height;
	}

	double getVolume() {
		return length * width * height;
	}

	double getArea() {
		return 2 * (length * width + length * height + width * height);
	}

	// ֱ�������ж��庯���ж������
	bool isEqual(Cube& c2) {
		if (length == c2.getLength() &&
			width == c2.getWidth() &&
			height == c2.getHeigth()) {
			return true;
		}
		return false;
	}



// ���ԣ���Ա������
private:
	double length;
	double width;
	double height;
};

// ʹ��ȫ�ֺ����ж�����ȣ������Լ�д�����ж�
bool isSame(Cube& c1, Cube& c2);

//int main() {
//	Cube cube1;
//	cube1.setHeigth(10);
//	cube1.setWidth(10);
//	cube1.setLength(10);
//	cout << cube1.getArea() << endl;
//	cout << cube1.getVolume() << endl;
//
//
//	Cube cube2;
//	cube2.setHeigth(10);
//	cube2.setWidth(10);
//	cube2.setLength(10);
//	cout << isSame(cube1, cube2) << endl;
//
//	cout << cube1.isEqual(cube2) << endl;
//	
//	system("pause");
//	return 0;
//}


bool isSame(Cube& c1, Cube& c2) {
	if (c1.getLength() == c2.getLength() &&
		c1.getWidth() == c2.getWidth() &&
		c1.getHeigth() == c2.getHeigth()) {
		return true;
	}
	return false;
}