#pragma once
#include"Point.h"
#include<cmath>//��ѧ��
#include<iostream>
using namespace std;
class Circle
{
public:
	void setR(int r);//���ð뾶

	//����Բ��
	void setHerat(int x,int y);
	void setHerat(Point &point);

	//�жϵ��Բ�Ĺ�ϵ
	void IsPointAddCircle(Point &point);

	//��ȡԲ��
	Point getHerat();

	//��ȡ�뾶
	int getR();

private:
	int mR;//�뾶

	Point mHerat;//Բ��
};

