#include "Circle.h"


void Circle::setR(int r)//设置半径
{
	mR = r;
}

//设置圆心
void Circle::setHerat(int x, int y)
{
	mHerat.setX(x);
	mHerat.setY(y);
}
void Circle::setHerat(Point &point)
{
	mHerat.setX(point.getX());
	mHerat.setY(point.getY());
}

//判断点和圆的关系
void Circle::IsPointAddCircle(Point &point)
{
	//半径：r^2和 （x2-x1)^2 +(y2-y1)^2
	//点到圆心的距离
	double distance = pow((point.getX() - this->mHerat.getX()), 2) + pow((point.getY() - this->mHerat.getY()), 2);
	
	//半径
	double tmp = pow(this->mR, 2);

	if (distance > tmp)
	{
		cout << "在圆外！" << endl;
	}
	else if (distance == tmp)
	{
		cout << "在圆上！" << endl;
	}
	else
	{
		cout << "在圆内！" << endl;
	}



}

//获取半径
int Circle::getR()
{
	return this->mR;
}

//获取圆心
Point Circle::getHerat()
{
	return this->mHerat;
}
