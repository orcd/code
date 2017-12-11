/* ************************************************************************
 *       Filename:  14_堆区空间的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 15时54分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h> //malloc

int main()
{
	int * p;

	p = (int *)malloc(sizeof(int));
	if(NULL == p)
	{
		printf("malloc err\n");
		return -1;
	}

	*p = 111;
	printf("*p = %d\n", *p);

	printf("before p = %p\n", p);
	free(p);
	//free(p);
	printf("after p = %p\n", p);
	p = NULL;

	return 0;
}

int c = 0;
int main01()
{
	int * p;
	
	//指向合法内存，栈区内存
	int a;
	p = &a;

	//指向data区
	static int b;
	p = &b;
	p = &c;
	*p = 111;
	printf("*p = %d\n", *p);

	return 0;
}


