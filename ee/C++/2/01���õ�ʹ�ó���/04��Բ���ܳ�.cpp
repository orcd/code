#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//�������
class Maker{//�Զ�����������

public://����Ȩ��
	int a;//��Ա��������Ա����
	Maker()//���캯��
	{

	}
	//����Բ�İ뾶
	void setR(double r)
	{
		mR = r;
	}
	//��Բ���ܳ�
	double getL()
	{
		cout << "he" << endl;
		return 2 * 3.14*mR;
	}

	void printMaker()//��Ա��������Ա����
	{
		cout << "Բ���ܳ���" << getL() << endl;
	}
private://˽��
	double mR;

};


void test()
{
	Maker maker;//����������������Ҳ�ж���
	maker.setR(100.2);//���ð뾶
	maker.getL();//���ܳ�
	maker.printMaker();//��ӡ

	
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

