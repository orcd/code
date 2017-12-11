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
	//选择排序，第0个元素分别和后面的比较
	//                    第1个元素分别和后面的比较
	for (i = 0; i < n - 1; ++i)
	{
		for (j = i+1; j < n; ++j)
		{
			if (a[i] > a[j])
			{
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
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
