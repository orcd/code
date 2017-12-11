#pragma once
#include"Point.h"
#include<cmath>//数学类
#include<iostream>
using namespace std;
class Circle
{
public:
	void setR(int r);//设置半径

	//设置圆心
	void setHerat(int x,int y);
	void setHerat(Point &point);

	//判断点和圆的关系
	void IsPointAddCircle(Point &point);

	//获取圆心
	Point getHerat();

	//获取半径
	int getR();

private:
	int mR;//半径

	Point mHerat;//圆心
};

