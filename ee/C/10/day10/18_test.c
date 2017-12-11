/* ************************************************************************
 *       Filename:  18_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 17时06分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void func(int *p)
{
	p = (int *)malloc(sizeof(int));
	*p = 100;
	printf("func %d\n", *p);
}

int * func2()
{
	int *p;
	p = (int *)malloc(sizeof(int));
	return p;
}

int main()
{
	int *p = NULL;
	//func(p); //在func函数动态分配空间, err
	p = func2();

	*p = 111;
	printf("main %d\n", *p);

	free(p);
	p = NULL;

	return 0;
}




