#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a;
	int b;
	printf("%d, %d\n", &a, &b); //vs debug�� �ݼ�

	//���飬��һ��Ԫ����Զ����һ��Ԫ�صĵ�ַ��
	int c[10];
	printf("%d, %d\n", &c[0], &c[1]);


	printf("\n");
	system("pause");
	return 0;
}
