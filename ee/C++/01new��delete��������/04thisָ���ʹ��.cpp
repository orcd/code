#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	Maker(int a)
	{


		this->a = a;//this�����������ֲ����ͱ���ͬ��
	}

	Maker &func2()
	{
		return *this;//2.���ض�����
	}
	void Printfucn()
	{
		if (NULL == this)
		{
			return;
		}
		a;//this->a
		cout << this->a << endl;
	}
	static void func()
	{		
		cout << "hello world" << endl;
	}
public:
	int a;
};

void test01()
{

	Maker *p = NULL;

	p->Printfucn();

	p->func();
	Maker::func();
	/*Maker maker(10);
	

	maker.Printfucn();*/
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

