#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	void * p = NULL; //无类型的指针变量，万能指针
	//void *指向void, 
	//printf("%d, %d\n", (char *)p, (char *)p+1);

	int a = 10;
	p = &a;//void *指向int
	printf("%d\n", *(int *)p);

	char b = 'm';
	p = &b; //void *指向char
	//间接操作内存：
	//1) 首元素地址
	//2) 步长
	printf("%d\n", *(char *)p);

	//void tmp; //err

	printf("\n");
	system("pause");
	return 0;
}