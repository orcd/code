#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * func01()
{
	//1、放data区，程序运行时，main调用前，已经分配空间
	//2、func()调用完毕，不会释放，整个程序结束才能释放
	static char p[] = "hello abc";

	return p; //return &p[0] 
}

char * func()
{
	//1、放data区，程序运行时，main调用前，已经分配空间
	//2、func()调用完毕，不会释放，整个程序结束才能释放
	char *p = "hello abc"; //文字常量区，只读

	return p; //return &p[0] 
}

int main(void)
{
	char * tmp;
	tmp = func();
	printf("%s\n", tmp); //读


	printf("\n");
	system("pause");
	return 0;
}
