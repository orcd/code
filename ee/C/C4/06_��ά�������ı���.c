#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//1�����������ǳ���

	//��ά���������ʾ���һ������ָ�룬 ����ָ�룬���Ƕ༶ָ��
	int a[3][4];
	int(*p1)[4] = a;

	int b[3][4][5];
	int(*p2)[4][5] = b;



	printf("\n");
	system("pause");
	return 0;
}
