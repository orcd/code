#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

const int a = 10;//��������һ����ʼ���������޸�,���ڴ�

int main()
{
	//a = 20;
	const int b = 20;//ջ����
	//b = 100;
	int *p = &b;

	*p = 100;
	printf("%d\n", b);

	extern const int c;//���߱����������c���ڱ���ļ����У���Ҫ���ұ���
	printf("c=%d\n", c);
	system("pause");
	return EXIT_SUCCESS;
}

