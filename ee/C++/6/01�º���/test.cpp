#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Father{
public:
	Father()
	{
		mA = 100;
	}
	void func()
	{
		cout << "Father::func" << endl;
	}
	void func(int a)
	{
		cout << "Father::func int a" << endl;
	}
	void func(int a,int b)
	{
		cout << "Father::func int a,int b" << endl;
	}
public:
	int mA;
};

class Son :public Father{
public:
	Son()
	{
		mA = 200;
	}
	void func()
	{
		cout << "SON func" << endl;
	}
public:
	int mA;
};

//1.������ĳ�Ա�͸���ĳ�Աͬ��ʱ������ĳ�Ա�ᱻ���أ�����ͨ��������������
//2.�������Ա�����͸���ĳ�Ա����ͬ�������Ҹ���ĳ�Ա���������أ���ô�������صĺ������ᱻ����


void test()
{
	
	Son son;
	//�ͽ�ԭ��
	cout<<son.mA << endl;


	cout << son.Father::mA << endl;

	son.func();

	//son.func(10);
	//son.func(10, 20);
	son.Father::func();
	son.Father::func(10);

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

