#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func02(int ************** * p)
{
	*p = 111;
}

int main(void)
{
	int ************** a = 10;
	func02(&a); //地址传递，形参可以影响到实参

	printf("a = %d\n", a); //a = 111


	printf("\n");
	system("pause");
	return 0;
}


void func(int ************** a)
{
	a = 111;
}

int main02(void)
{
	int ************** a = 10;
	func(a); //平级传递，值传递，形参任何修改不会影响到实参

	printf("a = %d\n", a); //a = 10


	printf("\n");
	system("pause");
	return 0;
}


int main01(void)
{
	//2个变量
	int ************** a;
	int ************** * p;

	//建立关系
	p = &a;

	//通过*p间接操作内存
	*p = 111;

	printf("a = %d\n", a);


	printf("\n");
	system("pause");
	return 0;
}
