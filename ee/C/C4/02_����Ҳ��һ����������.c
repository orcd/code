#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
	int a[3][4];

	typedef int ARRAY[3][4]; //ARRAY�������ͣ� int [3][4]
	ARRAY b; //int b[3][4]
	int i, j;
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			b[i][j] = j;
			printf("b[%d][%d] = %d\n", i, j, b[i][j]);
		}
	}


	printf("\n");
	system("pause");
	return 0;
}


int main01(void)
{
	//����Ҳ��һ����������
	int a[10]; //int [10]

	//ͨ��typedef��һ�����������
	//û��typedef�����飬��typedef������
	//typedef int (ARRAY)[10];
	typedef int ARRAY[10]; //ARRAY���������ͣ� int [10]
	printf("%d, %d\n", sizeof(int[10]), sizeof(ARRAY));

	//��b�滻��ARRAYλ�ã�typedef int b[10];
	//��typedefȥ����int b[10]
	ARRAY b = {1, 2, 3, 4, 5,6, 7, 8, 9, 10}; //int b[10], b����������
	//b = 10;	//err�� �������ǳ���
	printf("%p, %p\n", b, &b[0]); //����������Ԫ�ص�ַ
	int n = sizeof(b) / sizeof(*b);
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		printf("%d, ", b[i]);
	}
	printf("\n");

	printf("\n");
	system("pause");
	return 0;
}
