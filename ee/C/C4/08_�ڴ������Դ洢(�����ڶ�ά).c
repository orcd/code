#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	typedef int(*PARRAY)[4];
	PARRAY p;
	p = (PARRAY)a;
	int i, j;
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("%d, %d\n", p[i][j], *(*(p + i) + j));
		}
	}



	printf("\n");
	system("pause");
	return 0;
}


int main01(void)
{
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int *p;
	p = (int *)a;

	int i = 0;
	for (i = 0; i < 12; ++i)
	{
		printf("%d, ", *(p+i));
	}

	printf("\n");
	system("pause");
	return 0;
}
