#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//const int a = 10; //err

int main(void)
{
	//1、const修饰普通局部变量，只读变量（假的常量），通过指针间接修改
	//2、const修饰全局变量， static变量，是真正的常量

	//static const int a = 10; //err
	const int a = 10; //ok
	int *p = &a;
	*p = 111;
	printf("a = %d\n", a);


	printf("\n");
	system("pause");
	return 0;
}
