#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//1、乘法运算
	int a = 10 * 2;

	//2、定义变量时，*代表一个类型，和类型结合
	//定义一个变量p, 类型为int *, p初始化为&a
	int *p = &a;
	/*
	int *p;
	p = &a;

	int *p;
	*p = &a;
	*/

	//3、使用变量时，*p操作指针所指向的内存
	*p = 111; //等价于a = 111, 对于*p, 写

	//对于一块内存，可能是读，也可能是写
	int b = *p; //对于*p, 读



	printf("\n");
	system("pause");
	return 0;
}
