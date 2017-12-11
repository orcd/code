#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int i, j;
	//for (i = 0; i < 3; ++i)
	//{
	//	for (j = 0; j < 4; ++j)
	//	{
	//		printf("%d, %d\n", a[i][j], *(*(a+i)+j));
	//	}
	//}

	//定义一个数组指针变量，指向首元素
	int(*p)[4] = a;

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
	int a[2][3];
	printf("%d, %d, %d, %d\n", &a, a, a[0], &a[0][0]);
	printf("%d, %d, %d, %d\n", &a+1, a+1, a[0]+1, &a[0][0]+1);


	printf("\n");
	system("pause");
	return 0;
}
