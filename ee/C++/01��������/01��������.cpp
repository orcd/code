#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



class Cube{
public:

	void init()
	{
		mL = 10;
		mH = 20;
		mW = 30;
	}
	void setL(int l)
	{
		mL = l;
	}
	void setH(int h)
	{
		mH = h;
	}
	void setW(int w)
	{
		mW = w;
	}

	int getL()
	{
		return mL;
	}
	int getH()
	{
		return mH;
	}
	int getW()
	{
		return mW;
	}

	//������������
	int caculateS()
	{
		return 2 * mL*mW + 2 * mL*mH + 2 * mW*mH;
	}
	//������������
	int caculatsV()
	{
		return mL*mW*mH;
	}

	//�ж������������Ƿ����
	bool compareCube(Cube &cube)
	{
		if (mH == cube.getH() && this->getL() == cube.getL() && this->getW() == cube.getW())
		{
			return true;
		}
		return false;
	}

private:
	int mL;
	int mH;
	int mW;


};


//ȫ�ֺ������ж������������Ƿ����
bool IsEqualCube(Cube &c1,Cube &c2)
{
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() &&c1.getW() == c2.getW())
	{
		return true;
	}
	return false;
}

void test()
{
	Cube c1, c2;
	//��ʼ������
	c1.init();
	c2.init();

	//���ó����
	c1.setH(400);
	c1.setL(500);
	c1.setW(600);

	c2.setH(400);
	c2.setL(500);
	c2.setW(600);


	cout << "c1�������" << c1.caculateS() << endl;
	cout << "c1�������" << c1.caculatsV() << endl;
	
	//ͨ����Ա�������ж��Ƿ����
	if (c1.compareCube(c2))
	{
		cout << "������������ȣ�" << endl;
	}
	else
	{
		cout << "���������岻��ȣ�" << endl;
	}


	//ȫ�ֺ������ж������������Ƿ����
	if (IsEqualCube(c1, c2))
	{
		cout << "������������ȣ�" << endl;
	}
	else
	{
		cout << "���������岻��ȣ�" << endl;
	}
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

