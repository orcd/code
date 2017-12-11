#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func01(char *p)
{
	p = (char *)malloc(100);
}

void func(char ** p/*out*/)//写
{
	char * tmp = (char *)malloc(100);
	*p = tmp;
}

void test(int *p /*out*/) //写
{
	*p = 111;
}

int main(void)
{
	char *p = NULL;
	int a;

	//func(p); 
	func(&p); //形参作为输出，在被调函数分配空间
	test(&a);

	strcpy(p, "hello mike");
	printf("p = %s\n", p);


	printf("\n");
	system("pause");
	return 0;
}
