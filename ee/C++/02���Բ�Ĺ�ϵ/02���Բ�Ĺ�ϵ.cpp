#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"Circle.h"
#include"Point.h"

void isCircleOfPoint(Circle &c,Point &p)
{
	//点到圆心的距离
	double distance = pow((p.getX() - c.getHerat().getX()), 2) + pow((p.getY() - c.getHerat().getY()), 2);

	//半径
	double tmp = pow(c.getR(), 2);

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



void test()
{
	//实例化对象
	Point point;
	point.setX(10);
	point.setY(20);

	//实例化对象
	Circle circle;
	circle.setHerat(40, 30);
	//circle.setHerat(point);
	circle.setR(50);

	//判断点和圆的关系
	circle.IsPointAddCircle(point);

	cout << "--------------" << endl;
	isCircleOfPoint(circle, point);

}


int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

