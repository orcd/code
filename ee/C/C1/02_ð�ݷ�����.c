#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

//首元素是int, 需要int *
void init_array(int * a, int n)
{
	//设置种子
	srand((unsigned int)time(NULL));

	int i = 0;
	for (i = 0; i < n; ++i)
	{
		a[i] = rand() % 100;
		printf("%d, ", a[i]);
	}
	printf("\n");
}

void sort_array(int *a, int n)
{
	int i, j, tmp;
	//冒泡排序，挨着的2个元素比较
	for (i = 0; i < n - 1; ++i)
	{
		for (j = 0; j < n - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}

}

void print_array(int * a, int n)
{
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

int main(void)
{
	int a[10];
	int n = sizeof(a) / sizeof(*a);

	init_array(a, n); //设置数组

	sort_array(a, n); //冒泡排序

	print_array(a, n); //打印


	printf("\n");
	system("pause");
	return 0;
}
