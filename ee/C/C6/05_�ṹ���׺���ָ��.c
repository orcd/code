#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//typedef struct Test
//{
//	int a;			//普通变量的定义
//	void(*pfunc)(int, int); //函数指针变量的定义，不是函数声明
//}Test;

//定义一个函数指针类型
typedef void(*PFUNC)(int, int);

typedef struct Test
{
	int a;			//普通变量的定义
	PFUNC pfunc; //函数指针变量的定义，不是函数声明
}Test;

void my_func(int x, int y)
{
	printf("x = %d, y = %d\n", x, y);
}

int main(void)
{
	//定义结构体变量
	Test obj;
	obj.a = 111;
	obj.pfunc = my_func;

	obj.pfunc(10, 20); //my_func(10, 20)


	printf("\n");
	system("pause");
	return 0;
}
