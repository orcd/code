#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a[10];
	//��Ԫ�����ͣ���int, ��Ҫint *ָ����Ԫ��
	int *p1 = a;

	//����������int [10]
	int(*p2)[10] = &a;

	int b[3][4];
	//��Ԫ������int [4]
	int(*p3)[4] = b;
	//������������int [3][4]
	int(*p4)[3][4] = &b;

	int c[3][4][5];
	//��Ԫ��int [4][5]
	int(*p5)[4][5] = c;
	//��������int [3][4][5]
	int(*p6)[3][4][5] = &c;


	printf("\n");
	system("pause");
	return 0;
}
