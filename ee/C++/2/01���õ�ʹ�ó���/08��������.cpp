#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*
ǰ�᣺ͬһ��������
�����ĸ�����ͬ
���������Ͳ�ͬ
������˳��ͬ
*/

class Maker{

};
//
//void func(Maker &maker)
//{
//	cout << "func(Maker &maker)" << endl;
//}

void func()
{
	cout << "func()" << endl;
}

void func(int a)
{
	cout << "func(int a)" << endl;
}
void func(int a, int b)
{
	cout << "func(int a,int b)" << endl;
}

void func(double a)
{
	cout << "func(double a)" << endl;
}
void func(int a, double b)
{
	cout << "func(int a, double b)" << endl;
}
void func(double a, int b)
{
	cout << "func(double a, int b)" << endl;
}

void func(char a)
{
	cout << "func(char a)" << endl;
}

void test()
{
	int a = 10;
	int b = 20;
	double c = 30.3;

	func();
	func(a, b);
	func(a);
	func('c');
	func(c, a);
	//Maker maker;
	//func(maker);

}
//�������غͺ�����Ĭ�ϲ������ж�����
void myfunc(int a,int b=0)
{
	cout << "myfunc(int a,int b=0)" << endl;
}
void myfunc(int a)
{
	cout << "myfunc(int a)" << endl;
}

//�����ķ���ֵ������Ϊ�������ص�����
//int myyfunc(int a)
//{
//
//}
//char myyfunc(int a)
//{
//
//}

void test02()
{
	int a = 10;
	//myfunc(a);
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

