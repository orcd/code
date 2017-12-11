#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//1、数组名都是常量

	//多维数组名本质就是一个数组指针， 常量指针，不是多级指针
	int a[3][4];
	int(*p1)[4] = a;

	int b[3][4][5];
	int(*p2)[4][5] = b;



	printf("\n");
	system("pause");
	return 0;
}
