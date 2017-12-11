#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//形参中的数组不是数组，是指针变量
//void func(int a[10]) 
void func(int * a)
{
	printf("func %d\n", sizeof(a)); //是指针变量的大小

	int b;
	a = &b;
	*a = 111;
	printf("b = %d\n", b);
}

int main(void)
{
	int a[10]; //数组
	//1、sizeof(a)得到的是数组总大小
	printf("%d\n", sizeof(a));

	//2、数组名是常量, 不能改
	//a = 10;

	func(a);


	printf("\n");
	system("pause");
	return 0;
}
