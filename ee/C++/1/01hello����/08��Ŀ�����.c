#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test()
{
	int a = 10;
	int b = 20;

	printf("%d\n",a>b?a:b);

	//等号的左边是左值，右边是右值
	//左值必须能改变，是可以赋值给他的
	//10 = 20;

	//C语言的三目运算符返回的是右值
	//(a > b ? a : b) = 20;//报错，因为返回的是右值


}

int main2()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

