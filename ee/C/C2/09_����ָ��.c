#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	void * p = NULL; //�����͵�ָ�����������ָ��
	//void *ָ��void, 
	//printf("%d, %d\n", (char *)p, (char *)p+1);

	int a = 10;
	p = &a;//void *ָ��int
	printf("%d\n", *(int *)p);

	char b = 'm';
	p = &b; //void *ָ��char
	//��Ӳ����ڴ棺
	//1) ��Ԫ�ص�ַ
	//2) ����
	printf("%d\n", *(char *)p);

	//void tmp; //err

	printf("\n");
	system("pause");
	return 0;
}