#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func02(int ** p)
{
	*p = (int *)malloc(sizeof(int));
}

int main(void)
{
	int * p = NULL;
	func02(&p); //ƽ�����ݣ� ���������� ����
	*p = 111;
	printf("*p = %d\n", *p);

	return 0;
}

void func(int * p)
{
	p = (int *)malloc(sizeof(int));
}

int main01(void)
{
	int * p = NULL;
	func(p); //ƽ������

	*p = 111;


	printf("\n");
	system("pause");
	return 0;
}
