#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a = 10;
	//1��a = 0
	//2���ж�a��ֵ�Ƿ�Ϊ��
	while (a = 0) //����Ϊ�棬ִ�У�����Ϊ������
	{
		printf("����Ϊ��\n");
	}
	printf("a = %d\n", a);

	a = 0;
	//1��a = 1
	//2���ж�a��ֵ�Ƿ�Ϊ��
	while (a = 1) //����Ϊ�棬ִ�У�����Ϊ������
	{
		printf("2222����Ϊ��\n");
	}



	printf("\n");
	system("pause");
	return 0;
}
