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
	func02(&a); //��ַ���ݣ��βο���Ӱ�쵽ʵ��

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
	func(a); //ƽ�����ݣ�ֵ���ݣ��β��κ��޸Ĳ���Ӱ�쵽ʵ��

	printf("a = %d\n", a); //a = 10


	printf("\n");
	system("pause");
	return 0;
}


int main01(void)
{
	//2������
	int ************** a;
	int ************** * p;

	//������ϵ
	p = &a;

	//ͨ��*p��Ӳ����ڴ�
	*p = 111;

	printf("a = %d\n", a);


	printf("\n");
	system("pause");
	return 0;
}
