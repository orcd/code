#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a = 10;
	//1、a = 0
	//2、判断a的值是否为真
	while (a = 0) //条件为真，执行，条件为假跳出
	{
		printf("条件为真\n");
	}
	printf("a = %d\n", a);

	a = 0;
	//1、a = 1
	//2、判断a的值是否为真
	while (a = 1) //条件为真，执行，条件为假跳出
	{
		printf("2222条件为真\n");
	}



	printf("\n");
	system("pause");
	return 0;
}
