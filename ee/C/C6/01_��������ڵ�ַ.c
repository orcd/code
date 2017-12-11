#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int func(int a)
{
	printf("func a = %d\n", a);
	return 0;
}

int test()
{
	return 0;
}

int main(void)
{
	//函数名字，就是代表函数的入口地址，函数地址，地址也叫指针，函数指针
	printf("%p, %p, %p\n", func, &func, *func);

	func(1); //最简便，最常用
	(&func)(2);
	(*func)(3);

	if (test) //没有写(), 不是调用函数，只是使用函数的地址，函数的地址不为0
	{
		printf("条件为真\n");
	}


	printf("\n");
	system("pause");
	return 0;
}
