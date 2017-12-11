#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func02(int ** p)
{
	*p = (int *)malloc(sizeof(int));
}

int main(void)
{
	int * p = NULL;
	func02(&p); //平级传递， 被调函数， 输入
	*p = 111;
	printf("*p = %d\n", *p);

	return 0;
}

void func(int * p)
{
	p = (int *)malloc(sizeof(int));
}

int main01(void)
{
	int * p = NULL;
	func(p); //平级传递

	*p = 111;


	printf("\n");
	system("pause");
	return 0;
}
