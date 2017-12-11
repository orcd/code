#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int func02()
{
	int b = 20;
	printf("b = %d\n", b);
	return b;
}
int func01()
{
	int a = 10;
	int b = func02();
	printf("b = %d\n", b);
	return a;
}

int main(void)
{
	int a = func01();
	printf("a = %d\n", a);
	return 0;
}
