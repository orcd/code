#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�β��е����鲻�����飬��ָ�����
//void func(int a[10]) 
void func(int * a)
{
	printf("func %d\n", sizeof(a)); //��ָ������Ĵ�С

	int b;
	a = &b;
	*a = 111;
	printf("b = %d\n", b);
}

int main(void)
{
	int a[10]; //����
	//1��sizeof(a)�õ����������ܴ�С
	printf("%d\n", sizeof(a));

	//2���������ǳ���, ���ܸ�
	//a = 10;

	func(a);


	printf("\n");
	system("pause");
	return 0;
}
