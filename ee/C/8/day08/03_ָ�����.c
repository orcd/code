/* ************************************************************************
 *       Filename:  03_指针介绍.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 10时22分54秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a;
	a = 10;
	*(&a) = 111;
	printf("a = %d\n", a);

	printf("&a = %p\n", &a);


	return 0;
}


