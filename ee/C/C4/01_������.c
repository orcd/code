#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a[10];

	//1���������ǳ���
	//a = 10;
	//2���������ǵ�ַ������Ԫ�ص�ַ, nά�������Ԫ��Ϊn-1ά
	printf("%p, %p\n", a, &a[0]);

	//��2����������ᵱ����Ԫ�ص�ַ����
	//a) sizeof(a), �����a����������������int [10]
	printf("%d, %d\n", sizeof(a), sizeof(int[10]));
	printf("%d\n", sizeof(a+0)); //a+0����Ԫ�ص�ַ

	//b) &a, ������Ԫ�ص�ַ��������������ĵ�ַ
	printf("%d, %d\n", &a, &a+1);


	printf("\n");
	system("pause");
	return 0;
}
