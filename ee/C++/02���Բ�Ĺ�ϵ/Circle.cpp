#include "Circle.h"


void Circle::setR(int r)//���ð뾶
{
	mR = r;
}

//����Բ��
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

//�жϵ��Բ�Ĺ�ϵ
void Circle::IsPointAddCircle(Point &point)
{
	//�뾶��r^2�� ��x2-x1)^2 +(y2-y1)^2
	//�㵽Բ�ĵľ���
	double distance = pow((point.getX() - this->mHerat.getX()), 2) + pow((point.getY() - this->mHerat.getY()), 2);
	
	//�뾶
	double tmp = pow(this->mR, 2);

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

//��ȡ�뾶
int Circle::getR()
{
	return this->mR;
}

//��ȡԲ��
Point Circle::getHerat()
{
	return this->mHerat;
}
