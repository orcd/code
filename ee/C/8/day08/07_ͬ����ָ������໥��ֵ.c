/* ************************************************************************
 *       Filename:  07_同类型指针变量相互赋值.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 11时45分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a;
	int *p1;
	int *p2;

	a = 123;
	p1 = &a;
	*p1 = 111;
	
	p2 = p1;
	*p2 = 333;

	int b;
	p2 = &b;
	*p2 = 444;
	printf("a = %d\n", a);
	


	return 0;
}


