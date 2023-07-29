#pragma once
#include<iostream>
#include "Point.h"

using namespace std;

class Circle {
public:
	void setR(int r_in);

	int getR();

	void setCenter(Point center_in);

	Point getCenter();

private:
	int r;
	// 类的属性可以是另一个类
	Point center;
};