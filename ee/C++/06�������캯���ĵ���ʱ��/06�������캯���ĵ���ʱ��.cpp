#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	Maker()
	{
		cout << "�޲�" << endl;
	}
	Maker(int a )
	{
		m = a;
		cout << "�в�" << endl;
	}

	Maker( const Maker &maker)
	{
		
		cout << "��������" << endl;
	}
	~Maker()
	{
		cout << "��������" << endl;
	}

public:

	int m;
};

//1.��ֵ��ʽ���������β�
void dolong(Maker maker)
{

}


void test01()
{
	Maker maker;
	dolong(maker);
}
//�����еĶ���ȥ��ʼ����һ������
void test02()
{
	Maker maker;

	Maker maker2(maker);
}

//�����ֲ�������ֵ���ݵķ�ʽ,VS��releaseģʽ�²����ÿ������죬debugģʽ�µ���һ��
Maker func()
{
	//1.�ֲ�����
	Maker maker;

	//2.��ӡ�����ַ
	//cout << "maker=" << &maker << endl;


	return maker;
}



void test03()
{
	 Maker maker=func();
	
	/*Maker maker
	maker = func();*/

	//cout << "maker1=" << &maker1 << endl;
}


int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

