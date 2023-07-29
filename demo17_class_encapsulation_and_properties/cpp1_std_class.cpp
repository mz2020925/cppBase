#include<iostream>
using namespace std;

/*
在C++中 struct和class唯一的区别就在于 默认的访问权限不同(起始结构体是可以替代类的作用的)

区别：
	* struct 默认权限为公共
	* class  默认权限为私有
*/
// 类
class Cube {
// 行为（成员方法）
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

	// 直接在类中定义函数判断类相等
	bool isEqual(Cube& c2) {
		if (length == c2.getLength() &&
			width == c2.getWidth() &&
			height == c2.getHeigth()) {
			return true;
		}
		return false;
	}



// 属性（成员变量）
private:
	double length;
	double width;
	double height;
};

// 使用全局函数判断类相等，就是自己写函数判断
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