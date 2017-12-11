/* ************************************************************************
 *       Filename:  05_通过函数操作一维数组元素.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 11时16分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//实参为首元素地址，首元素是int, 需要int *
void set_array(int *p, int n)
{
	srand((unsigned int)time(NULL)); //设置种子
	int i = 0;
	for( i = 0; i < n; i++)
	{
		*(p+i) = rand() % 100;
		printf("%d, ", p[i]);
	}
	printf("\n");
}

void sort_array(int *a, int n)
{
	int i, j, tmp;
	for(i = 0; i < n-1; ++i)
	{
		for(j = 0; j < n-1-i; ++j)
		{
			if(a[j] > a[j+1])
			{
				tmp = a[j];
				a[j]  = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}

void print_array(int *p, int n)
{
	int i = 0;
	for(i = 0; i < n; ++i)
	{
		printf("%d, ", p[i]);
	}
	printf("\n");
}

int main()
{
	int n = 10;
	int a[n]; //可变数组
	//set_array(&a[0], n);
	set_array(a, n); //设置数组内容

	sort_array(a, n); //排序

	print_array(a, n); //打印


	return 0;
}


