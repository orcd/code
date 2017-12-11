/* ************************************************************************
 *       Filename:  17_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 17时02分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int * func()
{
	static int a = 100;

	return &a;
}

int main()
{
	int * p;
	p = func();
	*p = 111;
	printf("*p = %d\n", *p);

	return 0;
}


