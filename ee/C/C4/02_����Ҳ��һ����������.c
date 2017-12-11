#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
	int a[3][4];

	typedef int ARRAY[3][4]; //ARRAY就是类型， int [3][4]
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
	//数组也是一种数据类型
	int a[10]; //int [10]

	//通过typedef给一个类型起别名
	//没有typedef是数组，有typedef是类型
	//typedef int (ARRAY)[10];
	typedef int ARRAY[10]; //ARRAY是数组类型， int [10]
	printf("%d, %d\n", sizeof(int[10]), sizeof(ARRAY));

	//把b替换到ARRAY位置：typedef int b[10];
	//把typedef去掉：int b[10]
	ARRAY b = {1, 2, 3, 4, 5,6, 7, 8, 9, 10}; //int b[10], b就是数组名
	//b = 10;	//err， 数组名是常量
	printf("%p, %p\n", b, &b[0]); //数组名是首元素地址
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
