#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"Circle.h"
#include"Point.h"

void isCircleOfPoint(Circle &c,Point &p)
{
	//�㵽Բ�ĵľ���
	double distance = pow((p.getX() - c.getHerat().getX()), 2) + pow((p.getY() - c.getHerat().getY()), 2);

	//�뾶
	double tmp = pow(c.getR(), 2);

	if (distance > tmp)
	{
		cout << "��Բ�⣡" << endl;
	}
	else if (distance == tmp)
	{
		cout << "��Բ�ϣ�" << endl;
	}
	else
	{
		cout << "��Բ�ڣ�" << endl;
	}
}



void test()
{
	//ʵ��������
	Point point;
	point.setX(10);
	point.setY(20);

	//ʵ��������
	Circle circle;
	circle.setHerat(40, 30);
	//circle.setHerat(point);
	circle.setR(50);

	//�жϵ��Բ�Ĺ�ϵ
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

