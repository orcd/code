#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * func01()
{
	//1����data������������ʱ��main����ǰ���Ѿ�����ռ�
	//2��func()������ϣ������ͷţ�����������������ͷ�
	static char p[] = "hello abc";

	return p; //return &p[0] 
}

char * func()
{
	//1����data������������ʱ��main����ǰ���Ѿ�����ռ�
	//2��func()������ϣ������ͷţ�����������������ͷ�
	char *p = "hello abc"; //���ֳ�������ֻ��

	return p; //return &p[0] 
}

int main(void)
{
	char * tmp;
	tmp = func();
	printf("%s\n", tmp); //��


	printf("\n");
	system("pause");
	return 0;
}
