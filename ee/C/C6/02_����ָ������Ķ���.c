#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func(int a, int b)
{
	printf("a = %d, b = %d\n", a, b);
}


//先定义函数指针类型，再定义指针变量
int main(void)
{
	typedef void(*PARRAY)(int a, int b); //PARRAY是函数指针类型
	PARRAY p = NULL;
	p = func;
	p(1, 2);


	printf("\n");
	system("pause");
	return 0;
}


//直接定义函数指针变量
int main02(void)
{
	void(*p)(int a, int b) = NULL;
	p = func;
	p(1, 2);


	printf("\n");
	system("pause");
	return 0;
}


//先定义普通函数类型，再定义指针变量
int main01(void)
{
	typedef void FUNC(int, int); //FUNC普通函数类型
	FUNC *p = NULL;
	p = func;
	//p = &func;
	//p = *func;
	p(1, 2); //通过函数指针变量调用，间接调用函数
	//(*p)(2, 3);
	printf("%p, %p, %p\n", p, *p, &p); //p和&p不一样


	printf("\n");
	system("pause");
	return 0;
}
