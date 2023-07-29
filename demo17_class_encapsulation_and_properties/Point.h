#pragma once
#include<iostream>

using namespace std;

class Point {
public:
	void setX(int x_in);

	int getX();

	void setY(int y_in);

	int getY();

private:
	int x;
	int y;
};