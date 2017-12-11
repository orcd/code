#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int myfunc(int a,int b=2)//int b=0,这是函数参数的默认值
{
	return a+b;
}



void test()
{
	
	cout << myfunc(10) << endl;//如果有默认参数，这个默认参数可以不传实参
	cout<<myfunc(10, 20) << endl;//1.优先使用传入的实参
}
int myfunc1(int a, int b = 0, int c=2,int d=30)//2.默认参数后面的参数都必须为默认参数
{
	return 0;
}

void myfunc2(int a, int b);//3.声明和定义不能同时有默认值，其中一个有就可以
void myfunc2(int a, int b=0)
{

}
//占位参数，用在运算符重载中区分前置加加和后置加加,可以有默认值
void myfunc3(int a, int)
{

}
void test02()
{
	//myfunc3(10,20);
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

