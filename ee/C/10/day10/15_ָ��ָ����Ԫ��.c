/* ************************************************************************
 *       Filename:  15_指针指向首元素.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 16时33分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdlib.h>
#include <stdio.h>
int main()
{
	int * p;
	int i;
	int n = 10;
	
	//堆区数组，n个int类型的元素，sizeof(int)*n
	//首元素为int, 需要int *
    //一个malloc出来的空间，它是连续，只需要free一次
	p = (int *)malloc(n * sizeof(int) );
	int *tmp = p;

	for(i = 0; i < n; ++i)
	{
		*p = i+1;
		printf("%d, ", *p);
		p++;
	}
	printf("\n");

	free(tmp);
	p = NULL;
	tmp = NULL;

	return 0;
}

int main02()
{
	int * p;
	int i;
	int n = 10;
	
	//堆区数组，n个int类型的元素，sizeof(int)*n
	//首元素为int, 需要int *
    //一个malloc出来的空间，它是连续，只需要free一次
	p = (int *)malloc(n * sizeof(int) );

	for(i = 0; i < n; ++i)
	{
		*(p+i) = i+1;
		printf("%d, ", p[i]);
	}
	printf("\n");

	free(p);
	p = NULL;


	return 0;
}


int main01()
{
	int * p;
	int i;
	int n = 10;
	int a[n]; //栈区数组
	//首元素int, 需要int *
	p = &a[0];
	p = a; //指针没有指向整个数组，只是指向首元素
	
	for(i = 0; i < n; ++i)
	{
		*(p+i) = i+1;
		printf("%d, ", p[i]);
	}
	printf("\n");


	return 0;
}


